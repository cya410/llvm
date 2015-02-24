.PHONY: default clean llvm linker gem5

default: llvm linker gem5

linker: 
	$(info )
	$(info )
	$(info ****************************************************)
	$(info do linker part)
	$(info ****************************************************)
	./reloc.py all.s all.S sample lscript Lscript
	arm-none-linux-gnueabi-gcc -static all.S -o all.exe -T Lscript
	sleep 1
gem5:
	$(info )
	$(info )
	$(info ****************************************************)
	$(info runnning gem5)
	$(info ****************************************************)
	~/gem5/build/ARM/gem5.opt --debug-flags=Exec --debug-start=0 --debug-file=trace.out ~/gem5/configs/example/se.py -c ./all.exe
	arm-none-linux-gnueabi-objdump -D all.exe > tmp.out
llvm:
	$(info )
	$(info )
	$(info ****************************************************)
	$(info do llvm part)
	$(info ****************************************************)
	clang -emit-llvm -c test7a.c
	clang -emit-llvm -c test7b.c
	llvm-link test7a.bc test7b.bc -o all.bc
	llc -march=arm all.bc -o all.s
	sleep 1
clean:
	rm -r m5out Lscript *.out *.bc *.s *.S *.exe



