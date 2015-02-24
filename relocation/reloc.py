#!/usr/bin/python
import re
import sys
import random
import numpy

class ChangeAssembly:
	########################################
	# constructor
	########################################
	def __init__(self):
		# assembly file list(str)
		self.lines = []
		# index for each label list(int)
		self.labels = []
		# section names list(str)
		self.sections = []
		self.sec_size = []

	########################################
	# FindInt(str line): 
	# extract integer number from a string
	########################################
	def FindInt(self, line):
		return re.findall(r'\d+', line)

	########################################
	# ReadAssembly(filename): 
	# open the input file, returns
	# 1. lines:  a list of str for the input file
	# 2. self.labels: a list of int for each label's index
	########################################
	def ReadAssembly(self, filename):
		file = open(filename, 'r')
		self.lines = file.read().splitlines()
		file.close()

		for line in self.lines:
			content = line.rsplit()
			if content and re.search('[A-Za-z0-9]+\:', content[0]):
				self.labels.append(self.lines.index(line))

		for i in range(len(self.labels)):
			if re.search("(?<=\.LBB)", self.lines[self.labels[i]]):

				size = self.labels[i+1] - self.labels[i] - 1		

				for j in range(self.labels[i]+1, self.labels[i+1]):
					if re.search("^\s+\@", self.lines[j]):
						size = size - 1			
	
				for j in range(i+1, len(self.labels)):
					if re.search("(?<=\.LBB)", self.lines[self.labels[j]]):
						break		
					if re.search("(?<=\.LCPI)", self.lines[self.labels[j]]):
						size = size + 1
				self.sec_size.append(size)


	########################################
	# insert_section(lines, self.labels): 
	# insert section declaration for each basic block
	########################################
	def InsertSections(self):
		for i in range(len(self.labels)):
			if re.search("(?<=\.LBB)", self.lines[self.labels[i]]):
				sec_num  = self.FindInt(self.lines[self.labels[i]].rsplit()[0])
				assert(len(sec_num) == 2)
				sec_name = '.section bb' + sec_num[0] + '_' + sec_num[1]
				self.sections.append('bb' + sec_num[0] + '_' + sec_num[1])

				if int(sec_num[1]) == 0:
					self.lines.insert(self.labels[i-2], sec_name)
					for j in range(i-2, len(self.labels)):
						self.labels[j] = self.labels[j] + 1
				else:
					self.lines.insert(self.labels[i], sec_name)
					for j in range(i, len(self.labels)):
						self.labels[j] = self.labels[j] + 1

	########################################
	# change the name of the .text section
	########################################
	def ChangeText(self):
		for i in range(len(self.lines)):
			if self.lines[i] and (self.lines[i].rsplit()[0] == '.text'):
				self.lines[i] = '.section ' + sys.argv[1].split('.')[0] 
				self.sections.insert(0, sys.argv[1].split('.')[0])

	########################################
	# write the assembly to file
	########################################
	def WriteAssembly(self, filename):
		file = open(filename, 'w+')
		for line in self.lines:
			file.write("%s\n" % line)		
		file.close()


class ChangeLscript:
	########################################
	# constructor
	########################################
	def __init__(self, cache_size, word_pfail, rand_seed):
		# fault map info <cache_size, word_level_pfail, random_seed>
		self.cache_size = cache_size # number of words
		self.word_pfail = word_pfail # word error rate
		self.rand_seed  = rand_seed  # random seed
		self.faultmap   = []         # word fault map

		self.chunk = []

		# linker script info
		self.lscript = []            # linker script content
		self.file_pt = 0	     # linker script file pointer
		self.text_pt = 0
		self.vaddr   = 0             # text section virtual address
		self.caddr   = 0	     # cache address


	########################################
	# generate a fault map (by setting the random seed)
	########################################
	def GenFaultMap(self, filename):
		random.seed(self.rand_seed)
		for i in range(self.cache_size):
			irand = random.randint(1, 1000)
			if (irand <= self.word_pfail * 1000):
				self.faultmap.append(1)
			else:
				self.faultmap.append(0)	
		
		file = open(filename, 'w+')
		for word in self.faultmap:
			file.write("%s\n" % word)		
		file.close()

		start = 0
		end = 0
		iterations = 0
		for i in range(len(self.faultmap)):
			if (iterations > self.cache_size):
				break

			if (self.faultmap[i] == 0):
				end += 1
			else:
				if (end - start > 0):
					self.chunk.append(end - start)
				start = end + 1
				end   = end + 1
			iterations += 1

		#print "# of chunks = %d" % (len(self.chunk))
		#print "%d%% percentile = %d " % (50, numpy.percentile(sorted(self.chunk), 50))
		#print "%d%% percentile = %d " % (60, numpy.percentile(sorted(self.chunk), 60))
		#print "%d%% percentile = %d " % (70, numpy.percentile(sorted(self.chunk), 70))
		#print "%d%% percentile = %d " % (80, numpy.percentile(sorted(self.chunk), 80))
		#print "%d%% percentile = %d " % (90, numpy.percentile(sorted(self.chunk), 90))
		#print "%d%% percentile = %d " % (95, numpy.percentile(sorted(self.chunk), 95))
		#print "%d%% percentile = %d " % (99, numpy.percentile(sorted(self.chunk), 99))
		#print "%d%% percentile = %d " % (100, numpy.percentile(sorted(self.chunk), 100))

	########################################
	# read the default linker script
	########################################
	def ReadLscript(self, filename):
		file = open(filename, 'r')
		self.lscript = file.read().splitlines()
		file.close()
		
		for line in self.lscript:
			if (re.search('\.text.+\:', line)):
				self.text_pt = self.lscript.index(line)
				self.file_pt = self.lscript.index(line) + 2
				self.vaddr   = 0x10000 >> 2                  # byte vaddr -> word addr               
				self.caddr   = self.vaddr % self.cache_size  # word caddr
		
	########################################
	# insert gap between besic blocks by 
	# talking to the fault map. So far only 
	# use greedy algorithm to find a large enough one
	########################################
	def InsertGaps(self, assembly):
		for i in range(len(assembly.sections)):
			if (i == 0):
				# section all
				sect = '\t\t*(' + assembly.sections[i] + ')'
				self.lscript.insert(self.file_pt, sect)
				self.file_pt += 1
			else:
				sect = '\t\t*(' + assembly.sections[i] + ')'
				size = assembly.sec_size[i-1]    # word

				# insert gap
				tmp_mem_start = self.vaddr       # word
				tmp_mem_end   = self.vaddr       # word
				tmp_caddr     = self.caddr       # word
				
				hole_size = 0                    # word
				iterations = 0
				while (hole_size < size):
					if (self.faultmap[tmp_caddr] == 0):
						hole_size += 1
						tmp_mem_end += 1
						tmp_caddr = tmp_mem_end % self.cache_size
					else:
						hole_size = 0		
						tmp_mem_start = tmp_mem_end + 1
						tmp_mem_end   = tmp_mem_end + 1
						tmp_caddr     = tmp_mem_end % self.cache_size

					iterations = iterations + 1
					if (iterations > self.cache_size):
						break							
				#"""
				print "%s: vaddr=%x size=%d cstart=%d cend=%d" % (
						assembly.sections[i],
						(tmp_mem_start << 2),
						assembly.sec_size[i-1], 
						tmp_mem_start % self.cache_size, 
						tmp_caddr)
				#"""

				if (iterations <= self.cache_size):
					if (i == 1):			
						self.lscript[self.text_pt] = '\t.text\t' + str(hex(tmp_mem_start*4)) + '\t:' 
						self.vaddr = tmp_mem_start
						self.caddr = self.vaddr % self.cache_size
					else:
						gap = '\t\t. = . + ' + str((tmp_mem_start - self.vaddr)*4) +';'
						self.lscript.insert(self.file_pt, gap)
						self.file_pt += 1
						self.vaddr = tmp_mem_start
						self.caddr = self.vaddr % self.cache_size

				else:
					assert(0 == 1)

				# insert section
				self.lscript.insert(self.file_pt, sect)
				self.vaddr += assembly.sec_size[i-1]
				self.caddr = self.vaddr % self.cache_size	
				self.file_pt += 1
	
	########################################
	# write the linker script to file
	########################################
	def WriteLscript(self, filename):
		file = open(filename, 'w+')
		for line in self.lscript:
			file.write("%s\n" % line)		
		file.close()


################################################################
# main function 
################################################################
# add relocatable sections for each bb, dump the change to a file
assert (len(sys.argv) == 6)
assembly = ChangeAssembly()
assembly.ReadAssembly(sys.argv[1])
assembly.ChangeText()
assembly.InsertSections()
assembly.WriteAssembly(sys.argv[2])

# create faultmap
lscr = ChangeLscript(16*1024, 0.275, 1)
lscr.GenFaultMap(sys.argv[3])
lscr.ReadLscript(sys.argv[4])
lscr.InsertGaps(assembly)
lscr.WriteLscript(sys.argv[5])


















