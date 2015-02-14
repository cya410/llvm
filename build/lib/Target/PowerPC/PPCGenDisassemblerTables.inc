/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * PPC Disassembler                                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 17
/* 7 */       MCD::OPC_CheckField, 1, 10, 128, 2, 12, 38, // Skip to: 9754
/* 14 */      MCD::OPC_Decode, 119, 0, // Opcode: ATTN
/* 17 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 25
/* 21 */      MCD::OPC_Decode, 202, 7, 1, // Opcode: TDI
/* 25 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 33
/* 29 */      MCD::OPC_Decode, 219, 7, 2, // Opcode: TWI
/* 33 */      MCD::OPC_FilterValue, 4, 42, 6, // Skip to: 1615
/* 37 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 40 */      MCD::OPC_FilterValue, 0, 163, 0, // Skip to: 207
/* 44 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 47 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 55
/* 51 */      MCD::OPC_Decode, 227, 7, 3, // Opcode: VADDUBM
/* 55 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 63
/* 59 */      MCD::OPC_Decode, 229, 7, 3, // Opcode: VADDUHM
/* 63 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 71
/* 67 */      MCD::OPC_Decode, 231, 7, 3, // Opcode: VADDUWM
/* 71 */      MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 79
/* 75 */      MCD::OPC_Decode, 222, 7, 3, // Opcode: VADDCUW
/* 79 */      MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 87
/* 83 */      MCD::OPC_Decode, 228, 7, 3, // Opcode: VADDUBS
/* 87 */      MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 95
/* 91 */      MCD::OPC_Decode, 230, 7, 3, // Opcode: VADDUHS
/* 95 */      MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 103
/* 99 */      MCD::OPC_Decode, 232, 7, 3, // Opcode: VADDUWS
/* 103 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 111
/* 107 */     MCD::OPC_Decode, 224, 7, 3, // Opcode: VADDSBS
/* 111 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 119
/* 115 */     MCD::OPC_Decode, 225, 7, 3, // Opcode: VADDSHS
/* 119 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 127
/* 123 */     MCD::OPC_Decode, 226, 7, 3, // Opcode: VADDSWS
/* 127 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 135
/* 131 */     MCD::OPC_Decode, 246, 8, 3, // Opcode: VSUBUBM
/* 135 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 143
/* 139 */     MCD::OPC_Decode, 248, 8, 3, // Opcode: VSUBUHM
/* 143 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 151
/* 147 */     MCD::OPC_Decode, 250, 8, 3, // Opcode: VSUBUWM
/* 151 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 159
/* 155 */     MCD::OPC_Decode, 241, 8, 3, // Opcode: VSUBCUW
/* 159 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 167
/* 163 */     MCD::OPC_Decode, 247, 8, 3, // Opcode: VSUBUBS
/* 167 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 175
/* 171 */     MCD::OPC_Decode, 249, 8, 3, // Opcode: VSUBUHS
/* 175 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 183
/* 179 */     MCD::OPC_Decode, 251, 8, 3, // Opcode: VSUBUWS
/* 183 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 191
/* 187 */     MCD::OPC_Decode, 243, 8, 3, // Opcode: VSUBSBS
/* 191 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 199
/* 195 */     MCD::OPC_Decode, 244, 8, 3, // Opcode: VSUBSHS
/* 199 */     MCD::OPC_FilterValue, 30, 79, 37, // Skip to: 9754
/* 203 */     MCD::OPC_Decode, 245, 8, 3, // Opcode: VSUBSWS
/* 207 */     MCD::OPC_FilterValue, 2, 203, 0, // Skip to: 414
/* 211 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 214 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 159, 8, 3, // Opcode: VMAXUB
/* 222 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 230
/* 226 */     MCD::OPC_Decode, 160, 8, 3, // Opcode: VMAXUH
/* 230 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 238
/* 234 */     MCD::OPC_Decode, 161, 8, 3, // Opcode: VMAXUW
/* 238 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 246
/* 242 */     MCD::OPC_Decode, 156, 8, 3, // Opcode: VMAXSB
/* 246 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 254
/* 250 */     MCD::OPC_Decode, 157, 8, 3, // Opcode: VMAXSH
/* 254 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 262
/* 258 */     MCD::OPC_Decode, 158, 8, 3, // Opcode: VMAXSW
/* 262 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 270
/* 266 */     MCD::OPC_Decode, 168, 8, 3, // Opcode: VMINUB
/* 270 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 278
/* 274 */     MCD::OPC_Decode, 169, 8, 3, // Opcode: VMINUH
/* 278 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 286
/* 282 */     MCD::OPC_Decode, 170, 8, 3, // Opcode: VMINUW
/* 286 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 294
/* 290 */     MCD::OPC_Decode, 165, 8, 3, // Opcode: VMINSB
/* 294 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 302
/* 298 */     MCD::OPC_Decode, 166, 8, 3, // Opcode: VMINSH
/* 302 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 310
/* 306 */     MCD::OPC_Decode, 167, 8, 3, // Opcode: VMINSW
/* 310 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 318
/* 314 */     MCD::OPC_Decode, 238, 7, 3, // Opcode: VAVGUB
/* 318 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 326
/* 322 */     MCD::OPC_Decode, 239, 7, 3, // Opcode: VAVGUH
/* 326 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 334
/* 330 */     MCD::OPC_Decode, 240, 7, 3, // Opcode: VAVGUW
/* 334 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 342
/* 338 */     MCD::OPC_Decode, 235, 7, 3, // Opcode: VAVGSB
/* 342 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 350
/* 346 */     MCD::OPC_Decode, 236, 7, 3, // Opcode: VAVGSH
/* 350 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 358
/* 354 */     MCD::OPC_Decode, 237, 7, 3, // Opcode: VAVGSW
/* 358 */     MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 372
/* 362 */     MCD::OPC_CheckField, 16, 5, 0, 170, 36, // Skip to: 9754
/* 368 */     MCD::OPC_Decode, 245, 7, 4, // Opcode: VCLZB
/* 372 */     MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 386
/* 376 */     MCD::OPC_CheckField, 16, 5, 0, 156, 36, // Skip to: 9754
/* 382 */     MCD::OPC_Decode, 247, 7, 4, // Opcode: VCLZH
/* 386 */     MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 400
/* 390 */     MCD::OPC_CheckField, 16, 5, 0, 142, 36, // Skip to: 9754
/* 396 */     MCD::OPC_Decode, 248, 7, 4, // Opcode: VCLZW
/* 400 */     MCD::OPC_FilterValue, 31, 134, 36, // Skip to: 9754
/* 404 */     MCD::OPC_CheckField, 16, 5, 0, 128, 36, // Skip to: 9754
/* 410 */     MCD::OPC_Decode, 246, 7, 4, // Opcode: VCLZD
/* 414 */     MCD::OPC_FilterValue, 3, 59, 0, // Skip to: 477
/* 418 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 421 */     MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 435
/* 425 */     MCD::OPC_CheckField, 16, 5, 0, 107, 36, // Skip to: 9754
/* 431 */     MCD::OPC_Decode, 207, 8, 4, // Opcode: VPOPCNTB
/* 435 */     MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 449
/* 439 */     MCD::OPC_CheckField, 16, 5, 0, 93, 36, // Skip to: 9754
/* 445 */     MCD::OPC_Decode, 209, 8, 4, // Opcode: VPOPCNTH
/* 449 */     MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 463
/* 453 */     MCD::OPC_CheckField, 16, 5, 0, 79, 36, // Skip to: 9754
/* 459 */     MCD::OPC_Decode, 210, 8, 4, // Opcode: VPOPCNTW
/* 463 */     MCD::OPC_FilterValue, 31, 71, 36, // Skip to: 9754
/* 467 */     MCD::OPC_CheckField, 16, 5, 0, 65, 36, // Skip to: 9754
/* 473 */     MCD::OPC_Decode, 208, 8, 4, // Opcode: VPOPCNTD
/* 477 */     MCD::OPC_FilterValue, 4, 207, 0, // Skip to: 688
/* 481 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 484 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 492
/* 488 */     MCD::OPC_Decode, 216, 8, 3, // Opcode: VRLB
/* 492 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 500
/* 496 */     MCD::OPC_Decode, 217, 8, 3, // Opcode: VRLH
/* 500 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 508
/* 504 */     MCD::OPC_Decode, 218, 8, 3, // Opcode: VRLW
/* 508 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 516
/* 512 */     MCD::OPC_Decode, 222, 8, 3, // Opcode: VSLB
/* 516 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 524
/* 520 */     MCD::OPC_Decode, 224, 8, 3, // Opcode: VSLH
/* 524 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 532
/* 528 */     MCD::OPC_Decode, 226, 8, 3, // Opcode: VSLW
/* 532 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 540
/* 536 */     MCD::OPC_Decode, 221, 8, 3, // Opcode: VSL
/* 540 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 548
/* 544 */     MCD::OPC_Decode, 237, 8, 3, // Opcode: VSRB
/* 548 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 556
/* 552 */     MCD::OPC_Decode, 238, 8, 3, // Opcode: VSRH
/* 556 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 564
/* 560 */     MCD::OPC_Decode, 240, 8, 3, // Opcode: VSRW
/* 564 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 572
/* 568 */     MCD::OPC_Decode, 233, 8, 3, // Opcode: VSR
/* 572 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 580
/* 576 */     MCD::OPC_Decode, 234, 8, 3, // Opcode: VSRAB
/* 580 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 588
/* 584 */     MCD::OPC_Decode, 235, 8, 3, // Opcode: VSRAH
/* 588 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 596
/* 592 */     MCD::OPC_Decode, 236, 8, 3, // Opcode: VSRAW
/* 596 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 604
/* 600 */     MCD::OPC_Decode, 233, 7, 3, // Opcode: VAND
/* 604 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 612
/* 608 */     MCD::OPC_Decode, 234, 7, 3, // Opcode: VANDC
/* 612 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 620
/* 616 */     MCD::OPC_Decode, 195, 8, 3, // Opcode: VOR
/* 620 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 628
/* 624 */     MCD::OPC_Decode, 135, 9, 3, // Opcode: VXOR
/* 628 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 636
/* 632 */     MCD::OPC_Decode, 194, 8, 3, // Opcode: VNOR
/* 636 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 644
/* 640 */     MCD::OPC_Decode, 196, 8, 3, // Opcode: VORC
/* 644 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 652
/* 648 */     MCD::OPC_Decode, 192, 8, 3, // Opcode: VNAND
/* 652 */     MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 666
/* 656 */     MCD::OPC_CheckField, 11, 10, 0, 132, 35, // Skip to: 9754
/* 662 */     MCD::OPC_Decode, 198, 5, 5, // Opcode: MFVSCR
/* 666 */     MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 680
/* 670 */     MCD::OPC_CheckField, 16, 10, 0, 118, 35, // Skip to: 9754
/* 676 */     MCD::OPC_Decode, 225, 5, 6, // Opcode: MTVSCR
/* 680 */     MCD::OPC_FilterValue, 26, 110, 35, // Skip to: 9754
/* 684 */     MCD::OPC_Decode, 151, 8, 3, // Opcode: VEQV
/* 688 */     MCD::OPC_FilterValue, 6, 211, 0, // Skip to: 903
/* 692 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 695 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 703
/* 699 */     MCD::OPC_Decode, 253, 7, 3, // Opcode: VCMPEQUB
/* 703 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 711
/* 707 */     MCD::OPC_Decode, 255, 7, 3, // Opcode: VCMPEQUH
/* 711 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 719
/* 715 */     MCD::OPC_Decode, 129, 8, 3, // Opcode: VCMPEQUW
/* 719 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 727
/* 723 */     MCD::OPC_Decode, 251, 7, 3, // Opcode: VCMPEQFP
/* 727 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 735
/* 731 */     MCD::OPC_Decode, 131, 8, 3, // Opcode: VCMPGEFP
/* 735 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 743
/* 739 */     MCD::OPC_Decode, 141, 8, 3, // Opcode: VCMPGTUB
/* 743 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 751
/* 747 */     MCD::OPC_Decode, 143, 8, 3, // Opcode: VCMPGTUH
/* 751 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 759
/* 755 */     MCD::OPC_Decode, 145, 8, 3, // Opcode: VCMPGTUW
/* 759 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 767
/* 763 */     MCD::OPC_Decode, 133, 8, 3, // Opcode: VCMPGTFP
/* 767 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 775
/* 771 */     MCD::OPC_Decode, 135, 8, 3, // Opcode: VCMPGTSB
/* 775 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 783
/* 779 */     MCD::OPC_Decode, 137, 8, 3, // Opcode: VCMPGTSH
/* 783 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 791
/* 787 */     MCD::OPC_Decode, 139, 8, 3, // Opcode: VCMPGTSW
/* 791 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 799
/* 795 */     MCD::OPC_Decode, 249, 7, 3, // Opcode: VCMPBFP
/* 799 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 807
/* 803 */     MCD::OPC_Decode, 254, 7, 3, // Opcode: VCMPEQUBo
/* 807 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 815
/* 811 */     MCD::OPC_Decode, 128, 8, 3, // Opcode: VCMPEQUHo
/* 815 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 823
/* 819 */     MCD::OPC_Decode, 130, 8, 3, // Opcode: VCMPEQUWo
/* 823 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 831
/* 827 */     MCD::OPC_Decode, 252, 7, 3, // Opcode: VCMPEQFPo
/* 831 */     MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 839
/* 835 */     MCD::OPC_Decode, 132, 8, 3, // Opcode: VCMPGEFPo
/* 839 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 847
/* 843 */     MCD::OPC_Decode, 142, 8, 3, // Opcode: VCMPGTUBo
/* 847 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 855
/* 851 */     MCD::OPC_Decode, 144, 8, 3, // Opcode: VCMPGTUHo
/* 855 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 863
/* 859 */     MCD::OPC_Decode, 146, 8, 3, // Opcode: VCMPGTUWo
/* 863 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 871
/* 867 */     MCD::OPC_Decode, 134, 8, 3, // Opcode: VCMPGTFPo
/* 871 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 879
/* 875 */     MCD::OPC_Decode, 136, 8, 3, // Opcode: VCMPGTSBo
/* 879 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 887
/* 883 */     MCD::OPC_Decode, 138, 8, 3, // Opcode: VCMPGTSHo
/* 887 */     MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 895
/* 891 */     MCD::OPC_Decode, 140, 8, 3, // Opcode: VCMPGTSWo
/* 895 */     MCD::OPC_FilterValue, 31, 151, 34, // Skip to: 9754
/* 899 */     MCD::OPC_Decode, 250, 7, 3, // Opcode: VCMPBFPo
/* 903 */     MCD::OPC_FilterValue, 8, 107, 0, // Skip to: 1014
/* 907 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 910 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 918
/* 914 */     MCD::OPC_Decode, 190, 8, 3, // Opcode: VMULOUB
/* 918 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 926
/* 922 */     MCD::OPC_Decode, 191, 8, 3, // Opcode: VMULOUH
/* 926 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 934
/* 930 */     MCD::OPC_Decode, 188, 8, 3, // Opcode: VMULOSB
/* 934 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 942
/* 938 */     MCD::OPC_Decode, 189, 8, 3, // Opcode: VMULOSH
/* 942 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 950
/* 946 */     MCD::OPC_Decode, 186, 8, 3, // Opcode: VMULEUB
/* 950 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 958
/* 954 */     MCD::OPC_Decode, 187, 8, 3, // Opcode: VMULEUH
/* 958 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 966
/* 962 */     MCD::OPC_Decode, 184, 8, 3, // Opcode: VMULESB
/* 966 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 974
/* 970 */     MCD::OPC_Decode, 185, 8, 3, // Opcode: VMULESH
/* 974 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 982
/* 978 */     MCD::OPC_Decode, 255, 8, 3, // Opcode: VSUM4UBS
/* 982 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 990
/* 986 */     MCD::OPC_Decode, 254, 8, 3, // Opcode: VSUM4SHS
/* 990 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 998
/* 994 */     MCD::OPC_Decode, 252, 8, 3, // Opcode: VSUM2SWS
/* 998 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1006
/* 1002 */    MCD::OPC_Decode, 253, 8, 3, // Opcode: VSUM4SBS
/* 1006 */    MCD::OPC_FilterValue, 30, 40, 34, // Skip to: 9754
/* 1010 */    MCD::OPC_Decode, 128, 9, 3, // Opcode: VSUMSWS
/* 1014 */    MCD::OPC_FilterValue, 10, 179, 0, // Skip to: 1197
/* 1018 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1021 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1029
/* 1025 */    MCD::OPC_Decode, 223, 7, 3, // Opcode: VADDFP
/* 1029 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1037
/* 1033 */    MCD::OPC_Decode, 242, 8, 3, // Opcode: VSUBFP
/* 1037 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 1051
/* 1041 */    MCD::OPC_CheckField, 16, 5, 0, 3, 34, // Skip to: 9754
/* 1047 */    MCD::OPC_Decode, 211, 8, 4, // Opcode: VREFP
/* 1051 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 1065
/* 1055 */    MCD::OPC_CheckField, 16, 5, 0, 245, 33, // Skip to: 9754
/* 1061 */    MCD::OPC_Decode, 219, 8, 4, // Opcode: VRSQRTEFP
/* 1065 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 1079
/* 1069 */    MCD::OPC_CheckField, 16, 5, 0, 231, 33, // Skip to: 9754
/* 1075 */    MCD::OPC_Decode, 152, 8, 4, // Opcode: VEXPTEFP
/* 1079 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 1093
/* 1083 */    MCD::OPC_CheckField, 16, 5, 0, 217, 33, // Skip to: 9754
/* 1089 */    MCD::OPC_Decode, 153, 8, 4, // Opcode: VLOGEFP
/* 1093 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 1107
/* 1097 */    MCD::OPC_CheckField, 16, 5, 0, 203, 33, // Skip to: 9754
/* 1103 */    MCD::OPC_Decode, 213, 8, 4, // Opcode: VRFIN
/* 1107 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1121
/* 1111 */    MCD::OPC_CheckField, 16, 5, 0, 189, 33, // Skip to: 9754
/* 1117 */    MCD::OPC_Decode, 215, 8, 4, // Opcode: VRFIZ
/* 1121 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 1135
/* 1125 */    MCD::OPC_CheckField, 16, 5, 0, 175, 33, // Skip to: 9754
/* 1131 */    MCD::OPC_Decode, 214, 8, 4, // Opcode: VRFIP
/* 1135 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 1149
/* 1139 */    MCD::OPC_CheckField, 16, 5, 0, 161, 33, // Skip to: 9754
/* 1145 */    MCD::OPC_Decode, 212, 8, 4, // Opcode: VRFIM
/* 1149 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1157
/* 1153 */    MCD::OPC_Decode, 243, 7, 7, // Opcode: VCFUX
/* 1157 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1165
/* 1161 */    MCD::OPC_Decode, 241, 7, 7, // Opcode: VCFSX
/* 1165 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1173
/* 1169 */    MCD::OPC_Decode, 149, 8, 7, // Opcode: VCTUXS
/* 1173 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1181
/* 1177 */    MCD::OPC_Decode, 147, 8, 7, // Opcode: VCTSXS
/* 1181 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1189
/* 1185 */    MCD::OPC_Decode, 155, 8, 3, // Opcode: VMAXFP
/* 1189 */    MCD::OPC_FilterValue, 17, 113, 33, // Skip to: 9754
/* 1193 */    MCD::OPC_Decode, 164, 8, 3, // Opcode: VMINFP
/* 1197 */    MCD::OPC_FilterValue, 12, 133, 0, // Skip to: 1334
/* 1201 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1204 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1212
/* 1208 */    MCD::OPC_Decode, 172, 8, 3, // Opcode: VMRGHB
/* 1212 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1220
/* 1216 */    MCD::OPC_Decode, 173, 8, 3, // Opcode: VMRGHH
/* 1220 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1228
/* 1224 */    MCD::OPC_Decode, 174, 8, 3, // Opcode: VMRGHW
/* 1228 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1236
/* 1232 */    MCD::OPC_Decode, 175, 8, 3, // Opcode: VMRGLB
/* 1236 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1244
/* 1240 */    MCD::OPC_Decode, 176, 8, 3, // Opcode: VMRGLH
/* 1244 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1252
/* 1248 */    MCD::OPC_Decode, 177, 8, 3, // Opcode: VMRGLW
/* 1252 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1260
/* 1256 */    MCD::OPC_Decode, 227, 8, 7, // Opcode: VSPLTB
/* 1260 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1268
/* 1264 */    MCD::OPC_Decode, 228, 8, 7, // Opcode: VSPLTH
/* 1268 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1276
/* 1272 */    MCD::OPC_Decode, 232, 8, 7, // Opcode: VSPLTW
/* 1276 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 1290
/* 1280 */    MCD::OPC_CheckField, 11, 5, 0, 20, 33, // Skip to: 9754
/* 1286 */    MCD::OPC_Decode, 229, 8, 8, // Opcode: VSPLTISB
/* 1290 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 1304
/* 1294 */    MCD::OPC_CheckField, 11, 5, 0, 6, 33, // Skip to: 9754
/* 1300 */    MCD::OPC_Decode, 230, 8, 8, // Opcode: VSPLTISH
/* 1304 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 1318
/* 1308 */    MCD::OPC_CheckField, 11, 5, 0, 248, 32, // Skip to: 9754
/* 1314 */    MCD::OPC_Decode, 231, 8, 8, // Opcode: VSPLTISW
/* 1318 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1326
/* 1322 */    MCD::OPC_Decode, 225, 8, 3, // Opcode: VSLO
/* 1326 */    MCD::OPC_FilterValue, 17, 232, 32, // Skip to: 9754
/* 1330 */    MCD::OPC_Decode, 239, 8, 3, // Opcode: VSRO
/* 1334 */    MCD::OPC_FilterValue, 14, 159, 0, // Skip to: 1497
/* 1338 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1341 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1349
/* 1345 */    MCD::OPC_Decode, 203, 8, 3, // Opcode: VPKUHUM
/* 1349 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1357
/* 1353 */    MCD::OPC_Decode, 205, 8, 3, // Opcode: VPKUWUM
/* 1357 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1365
/* 1361 */    MCD::OPC_Decode, 204, 8, 3, // Opcode: VPKUHUS
/* 1365 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1373
/* 1369 */    MCD::OPC_Decode, 206, 8, 3, // Opcode: VPKUWUS
/* 1373 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1381
/* 1377 */    MCD::OPC_Decode, 200, 8, 3, // Opcode: VPKSHUS
/* 1381 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1389
/* 1385 */    MCD::OPC_Decode, 202, 8, 3, // Opcode: VPKSWUS
/* 1389 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1397
/* 1393 */    MCD::OPC_Decode, 199, 8, 3, // Opcode: VPKSHSS
/* 1397 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1405
/* 1401 */    MCD::OPC_Decode, 201, 8, 3, // Opcode: VPKSWSS
/* 1405 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 1419
/* 1409 */    MCD::OPC_CheckField, 16, 5, 0, 147, 32, // Skip to: 9754
/* 1415 */    MCD::OPC_Decode, 130, 9, 4, // Opcode: VUPKHSB
/* 1419 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1433
/* 1423 */    MCD::OPC_CheckField, 16, 5, 0, 133, 32, // Skip to: 9754
/* 1429 */    MCD::OPC_Decode, 131, 9, 4, // Opcode: VUPKHSH
/* 1433 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 1447
/* 1437 */    MCD::OPC_CheckField, 16, 5, 0, 119, 32, // Skip to: 9754
/* 1443 */    MCD::OPC_Decode, 133, 9, 4, // Opcode: VUPKLSB
/* 1447 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 1461
/* 1451 */    MCD::OPC_CheckField, 16, 5, 0, 105, 32, // Skip to: 9754
/* 1457 */    MCD::OPC_Decode, 134, 9, 4, // Opcode: VUPKLSH
/* 1461 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1469
/* 1465 */    MCD::OPC_Decode, 198, 8, 3, // Opcode: VPKPX
/* 1469 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 1483
/* 1473 */    MCD::OPC_CheckField, 16, 5, 0, 83, 32, // Skip to: 9754
/* 1479 */    MCD::OPC_Decode, 129, 9, 4, // Opcode: VUPKHPX
/* 1483 */    MCD::OPC_FilterValue, 15, 75, 32, // Skip to: 9754
/* 1487 */    MCD::OPC_CheckField, 16, 5, 0, 69, 32, // Skip to: 9754
/* 1493 */    MCD::OPC_Decode, 132, 9, 4, // Opcode: VUPKLPX
/* 1497 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 1505
/* 1501 */    MCD::OPC_Decode, 162, 8, 9, // Opcode: VMHADDSHS
/* 1505 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 1513
/* 1509 */    MCD::OPC_Decode, 163, 8, 9, // Opcode: VMHRADDSHS
/* 1513 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 1521
/* 1517 */    MCD::OPC_Decode, 171, 8, 9, // Opcode: VMLADDUHM
/* 1521 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 1529
/* 1525 */    MCD::OPC_Decode, 181, 8, 9, // Opcode: VMSUMUBM
/* 1529 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 1537
/* 1533 */    MCD::OPC_Decode, 178, 8, 9, // Opcode: VMSUMMBM
/* 1537 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 1545
/* 1541 */    MCD::OPC_Decode, 182, 8, 9, // Opcode: VMSUMUHM
/* 1545 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 1553
/* 1549 */    MCD::OPC_Decode, 183, 8, 9, // Opcode: VMSUMUHS
/* 1553 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 1561
/* 1557 */    MCD::OPC_Decode, 179, 8, 9, // Opcode: VMSUMSHM
/* 1561 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 1569
/* 1565 */    MCD::OPC_Decode, 180, 8, 9, // Opcode: VMSUMSHS
/* 1569 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 1577
/* 1573 */    MCD::OPC_Decode, 220, 8, 9, // Opcode: VSEL
/* 1577 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 1585
/* 1581 */    MCD::OPC_Decode, 197, 8, 9, // Opcode: VPERM
/* 1585 */    MCD::OPC_FilterValue, 44, 10, 0, // Skip to: 1599
/* 1589 */    MCD::OPC_CheckField, 10, 1, 0, 223, 31, // Skip to: 9754
/* 1595 */    MCD::OPC_Decode, 223, 8, 10, // Opcode: VSLDOI
/* 1599 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 1607
/* 1603 */    MCD::OPC_Decode, 154, 8, 11, // Opcode: VMADDFP
/* 1607 */    MCD::OPC_FilterValue, 47, 207, 31, // Skip to: 9754
/* 1611 */    MCD::OPC_Decode, 193, 8, 11, // Opcode: VNMSUBFP
/* 1615 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1623
/* 1619 */    MCD::OPC_Decode, 236, 5, 12, // Opcode: MULLI
/* 1623 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1631
/* 1627 */    MCD::OPC_Decode, 173, 7, 12, // Opcode: SUBFIC
/* 1631 */    MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 1654
/* 1635 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 1638 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1646
/* 1642 */    MCD::OPC_Decode, 223, 1, 13, // Opcode: CMPLWI
/* 1646 */    MCD::OPC_FilterValue, 1, 168, 31, // Skip to: 9754
/* 1650 */    MCD::OPC_Decode, 221, 1, 14, // Opcode: CMPLDI
/* 1654 */    MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 1677
/* 1658 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 1661 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1669
/* 1665 */    MCD::OPC_Decode, 225, 1, 15, // Opcode: CMPWI
/* 1669 */    MCD::OPC_FilterValue, 1, 145, 31, // Skip to: 9754
/* 1673 */    MCD::OPC_Decode, 219, 1, 16, // Opcode: CMPDI
/* 1677 */    MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 1684
/* 1681 */    MCD::OPC_Decode, 39, 12, // Opcode: ADDIC
/* 1684 */    MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 1691
/* 1688 */    MCD::OPC_Decode, 41, 12, // Opcode: ADDICo
/* 1691 */    MCD::OPC_FilterValue, 14, 13, 0, // Skip to: 1708
/* 1695 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 1705
/* 1701 */    MCD::OPC_Decode, 141, 5, 17, // Opcode: LI
/* 1705 */    MCD::OPC_Decode, 37, 18, // Opcode: ADDI
/* 1708 */    MCD::OPC_FilterValue, 15, 13, 0, // Skip to: 1725
/* 1712 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 1722
/* 1718 */    MCD::OPC_Decode, 143, 5, 17, // Opcode: LIS
/* 1722 */    MCD::OPC_Decode, 42, 18, // Opcode: ADDIS
/* 1725 */    MCD::OPC_FilterValue, 16, 7, 1, // Skip to: 1992
/* 1729 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 1732 */    MCD::OPC_FilterValue, 0, 61, 0, // Skip to: 1797
/* 1736 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1739 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 1748
/* 1744 */    MCD::OPC_Decode, 154, 1, 19, // Opcode: BDNZ
/* 1748 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 1757
/* 1753 */    MCD::OPC_Decode, 174, 1, 19, // Opcode: BDZ
/* 1757 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 1766
/* 1762 */    MCD::OPC_Decode, 172, 1, 19, // Opcode: BDNZm
/* 1766 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 1775
/* 1771 */    MCD::OPC_Decode, 173, 1, 19, // Opcode: BDNZp
/* 1775 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 1784
/* 1780 */    MCD::OPC_Decode, 192, 1, 19, // Opcode: BDZm
/* 1784 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 1793
/* 1789 */    MCD::OPC_Decode, 193, 1, 19, // Opcode: BDZp
/* 1793 */    MCD::OPC_Decode, 161, 10, 20, // Opcode: gBC
/* 1797 */    MCD::OPC_FilterValue, 1, 61, 0, // Skip to: 1862
/* 1801 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1804 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 1813
/* 1809 */    MCD::OPC_Decode, 159, 1, 19, // Opcode: BDNZL
/* 1813 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 1822
/* 1818 */    MCD::OPC_Decode, 179, 1, 19, // Opcode: BDZL
/* 1822 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 1831
/* 1827 */    MCD::OPC_Decode, 170, 1, 19, // Opcode: BDNZLm
/* 1831 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 1840
/* 1836 */    MCD::OPC_Decode, 171, 1, 19, // Opcode: BDNZLp
/* 1840 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 1849
/* 1845 */    MCD::OPC_Decode, 190, 1, 19, // Opcode: BDZLm
/* 1849 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 1858
/* 1854 */    MCD::OPC_Decode, 191, 1, 19, // Opcode: BDZLp
/* 1858 */    MCD::OPC_Decode, 165, 10, 20, // Opcode: gBCL
/* 1862 */    MCD::OPC_FilterValue, 2, 61, 0, // Skip to: 1927
/* 1866 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1869 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 1878
/* 1874 */    MCD::OPC_Decode, 156, 1, 19, // Opcode: BDNZA
/* 1878 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 1887
/* 1883 */    MCD::OPC_Decode, 176, 1, 19, // Opcode: BDZA
/* 1887 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 1896
/* 1892 */    MCD::OPC_Decode, 157, 1, 19, // Opcode: BDNZAm
/* 1896 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 1905
/* 1901 */    MCD::OPC_Decode, 158, 1, 19, // Opcode: BDNZAp
/* 1905 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 1914
/* 1910 */    MCD::OPC_Decode, 177, 1, 19, // Opcode: BDZAm
/* 1914 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 1923
/* 1919 */    MCD::OPC_Decode, 178, 1, 19, // Opcode: BDZAp
/* 1923 */    MCD::OPC_Decode, 162, 10, 20, // Opcode: gBCA
/* 1927 */    MCD::OPC_FilterValue, 3, 143, 30, // Skip to: 9754
/* 1931 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1934 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 1943
/* 1939 */    MCD::OPC_Decode, 160, 1, 19, // Opcode: BDNZLA
/* 1943 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 1952
/* 1948 */    MCD::OPC_Decode, 180, 1, 19, // Opcode: BDZLA
/* 1952 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 1961
/* 1957 */    MCD::OPC_Decode, 161, 1, 19, // Opcode: BDNZLAm
/* 1961 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 1970
/* 1966 */    MCD::OPC_Decode, 162, 1, 19, // Opcode: BDNZLAp
/* 1970 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 1979
/* 1975 */    MCD::OPC_Decode, 181, 1, 19, // Opcode: BDZLAm
/* 1979 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 1988
/* 1984 */    MCD::OPC_Decode, 182, 1, 19, // Opcode: BDZLAp
/* 1988 */    MCD::OPC_Decode, 166, 10, 20, // Opcode: gBCLA
/* 1992 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 2006
/* 1996 */    MCD::OPC_CheckField, 1, 1, 1, 72, 30, // Skip to: 9754
/* 2002 */    MCD::OPC_Decode, 184, 6, 21, // Opcode: SC
/* 2006 */    MCD::OPC_FilterValue, 18, 33, 0, // Skip to: 2043
/* 2010 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2013 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 2020
/* 2017 */    MCD::OPC_Decode, 120, 22, // Opcode: B
/* 2020 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2028
/* 2024 */    MCD::OPC_Decode, 194, 1, 22, // Opcode: BL
/* 2028 */    MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 2035
/* 2032 */    MCD::OPC_Decode, 121, 22, // Opcode: BA
/* 2035 */    MCD::OPC_FilterValue, 3, 35, 30, // Skip to: 9754
/* 2039 */    MCD::OPC_Decode, 200, 1, 22, // Opcode: BLA
/* 2043 */    MCD::OPC_FilterValue, 19, 235, 1, // Skip to: 2538
/* 2047 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 2050 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2070
/* 2054 */    MCD::OPC_CheckField, 21, 2, 0, 14, 30, // Skip to: 9754
/* 2060 */    MCD::OPC_CheckField, 11, 7, 0, 8, 30, // Skip to: 9754
/* 2066 */    MCD::OPC_Decode, 177, 5, 23, // Opcode: MCRF
/* 2070 */    MCD::OPC_FilterValue, 32, 119, 0, // Skip to: 2193
/* 2074 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2077 */    MCD::OPC_FilterValue, 0, 249, 29, // Skip to: 9754
/* 2081 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2084 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 2099
/* 2089 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 2189
/* 2095 */    MCD::OPC_Decode, 163, 1, 0, // Opcode: BDNZLR
/* 2099 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 2114
/* 2104 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 2189
/* 2110 */    MCD::OPC_Decode, 183, 1, 0, // Opcode: BDZLR
/* 2114 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 2129
/* 2119 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 2189
/* 2125 */    MCD::OPC_Decode, 203, 1, 0, // Opcode: BLR
/* 2129 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 2144
/* 2134 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 2189
/* 2140 */    MCD::OPC_Decode, 168, 1, 0, // Opcode: BDNZLRm
/* 2144 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 2159
/* 2149 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 2189
/* 2155 */    MCD::OPC_Decode, 169, 1, 0, // Opcode: BDNZLRp
/* 2159 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 2174
/* 2164 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 2189
/* 2170 */    MCD::OPC_Decode, 188, 1, 0, // Opcode: BDZLRm
/* 2174 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 2189
/* 2179 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2189
/* 2185 */    MCD::OPC_Decode, 189, 1, 0, // Opcode: BDZLRp
/* 2189 */    MCD::OPC_Decode, 167, 10, 24, // Opcode: gBCLR
/* 2193 */    MCD::OPC_FilterValue, 33, 119, 0, // Skip to: 2316
/* 2197 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2200 */    MCD::OPC_FilterValue, 0, 126, 29, // Skip to: 9754
/* 2204 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2207 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 2222
/* 2212 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 2312
/* 2218 */    MCD::OPC_Decode, 165, 1, 0, // Opcode: BDNZLRL
/* 2222 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 2237
/* 2227 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 2312
/* 2233 */    MCD::OPC_Decode, 185, 1, 0, // Opcode: BDZLRL
/* 2237 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 2252
/* 2242 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 2312
/* 2248 */    MCD::OPC_Decode, 205, 1, 0, // Opcode: BLRL
/* 2252 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 2267
/* 2257 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 2312
/* 2263 */    MCD::OPC_Decode, 166, 1, 0, // Opcode: BDNZLRLm
/* 2267 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 2282
/* 2272 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 2312
/* 2278 */    MCD::OPC_Decode, 167, 1, 0, // Opcode: BDNZLRLp
/* 2282 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 2297
/* 2287 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 2312
/* 2293 */    MCD::OPC_Decode, 186, 1, 0, // Opcode: BDZLRLm
/* 2297 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 2312
/* 2302 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2312
/* 2308 */    MCD::OPC_Decode, 187, 1, 0, // Opcode: BDZLRLp
/* 2312 */    MCD::OPC_Decode, 168, 10, 24, // Opcode: gBCLRL
/* 2316 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 2330
/* 2320 */    MCD::OPC_CheckField, 11, 15, 0, 4, 29, // Skip to: 9754
/* 2326 */    MCD::OPC_Decode, 152, 6, 0, // Opcode: RFID
/* 2330 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 2338
/* 2334 */    MCD::OPC_Decode, 238, 1, 25, // Opcode: CRNOR
/* 2338 */    MCD::OPC_FilterValue, 76, 10, 0, // Skip to: 2352
/* 2342 */    MCD::OPC_CheckField, 11, 15, 0, 238, 28, // Skip to: 9754
/* 2348 */    MCD::OPC_Decode, 153, 6, 0, // Opcode: RFMCI
/* 2352 */    MCD::OPC_FilterValue, 78, 10, 0, // Skip to: 2366
/* 2356 */    MCD::OPC_CheckField, 11, 15, 0, 224, 28, // Skip to: 9754
/* 2362 */    MCD::OPC_Decode, 150, 6, 0, // Opcode: RFDI
/* 2366 */    MCD::OPC_FilterValue, 100, 10, 0, // Skip to: 2380
/* 2370 */    MCD::OPC_CheckField, 11, 15, 0, 210, 28, // Skip to: 9754
/* 2376 */    MCD::OPC_Decode, 151, 6, 0, // Opcode: RFI
/* 2380 */    MCD::OPC_FilterValue, 102, 10, 0, // Skip to: 2394
/* 2384 */    MCD::OPC_CheckField, 11, 15, 0, 196, 28, // Skip to: 9754
/* 2390 */    MCD::OPC_Decode, 149, 6, 0, // Opcode: RFCI
/* 2394 */    MCD::OPC_FilterValue, 130, 2, 4, 0, // Skip to: 2403
/* 2399 */    MCD::OPC_Decode, 235, 1, 25, // Opcode: CRANDC
/* 2403 */    MCD::OPC_FilterValue, 172, 2, 10, 0, // Skip to: 2418
/* 2408 */    MCD::OPC_CheckField, 11, 15, 0, 172, 28, // Skip to: 9754
/* 2414 */    MCD::OPC_Decode, 214, 4, 0, // Opcode: ISYNC
/* 2418 */    MCD::OPC_FilterValue, 130, 3, 4, 0, // Skip to: 2427
/* 2423 */    MCD::OPC_Decode, 243, 1, 25, // Opcode: CRXOR
/* 2427 */    MCD::OPC_FilterValue, 194, 3, 4, 0, // Skip to: 2436
/* 2432 */    MCD::OPC_Decode, 237, 1, 25, // Opcode: CRNAND
/* 2436 */    MCD::OPC_FilterValue, 130, 4, 4, 0, // Skip to: 2445
/* 2441 */    MCD::OPC_Decode, 234, 1, 25, // Opcode: CRAND
/* 2445 */    MCD::OPC_FilterValue, 194, 4, 4, 0, // Skip to: 2454
/* 2450 */    MCD::OPC_Decode, 236, 1, 25, // Opcode: CREQV
/* 2454 */    MCD::OPC_FilterValue, 194, 6, 4, 0, // Skip to: 2463
/* 2459 */    MCD::OPC_Decode, 240, 1, 25, // Opcode: CRORC
/* 2463 */    MCD::OPC_FilterValue, 130, 7, 4, 0, // Skip to: 2472
/* 2468 */    MCD::OPC_Decode, 239, 1, 25, // Opcode: CROR
/* 2472 */    MCD::OPC_FilterValue, 160, 8, 28, 0, // Skip to: 2505
/* 2477 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2480 */    MCD::OPC_FilterValue, 0, 102, 28, // Skip to: 9754
/* 2484 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 2501
/* 2491 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2501
/* 2497 */    MCD::OPC_Decode, 148, 1, 0, // Opcode: BCTR
/* 2501 */    MCD::OPC_Decode, 163, 10, 24, // Opcode: gBCCTR
/* 2505 */    MCD::OPC_FilterValue, 161, 8, 76, 28, // Skip to: 9754
/* 2510 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2513 */    MCD::OPC_FilterValue, 0, 69, 28, // Skip to: 9754
/* 2517 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 2534
/* 2524 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2534
/* 2530 */    MCD::OPC_Decode, 150, 1, 0, // Opcode: BCTRL
/* 2534 */    MCD::OPC_Decode, 164, 10, 24, // Opcode: gBCCTRL
/* 2538 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 2561
/* 2542 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2545 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2553
/* 2549 */    MCD::OPC_Decode, 167, 6, 26, // Opcode: RLWIMI
/* 2553 */    MCD::OPC_FilterValue, 1, 29, 28, // Skip to: 9754
/* 2557 */    MCD::OPC_Decode, 170, 6, 26, // Opcode: RLWIMIo
/* 2561 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 2584
/* 2565 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2568 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2576
/* 2572 */    MCD::OPC_Decode, 171, 6, 27, // Opcode: RLWINM
/* 2576 */    MCD::OPC_FilterValue, 1, 6, 28, // Skip to: 9754
/* 2580 */    MCD::OPC_Decode, 174, 6, 27, // Opcode: RLWINMo
/* 2584 */    MCD::OPC_FilterValue, 23, 19, 0, // Skip to: 2607
/* 2588 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2591 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2599
/* 2595 */    MCD::OPC_Decode, 175, 6, 28, // Opcode: RLWNM
/* 2599 */    MCD::OPC_FilterValue, 1, 239, 27, // Skip to: 9754
/* 2603 */    MCD::OPC_Decode, 178, 6, 28, // Opcode: RLWNMo
/* 2607 */    MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 2625
/* 2611 */    MCD::OPC_CheckField, 0, 26, 0, 4, 0, // Skip to: 2621
/* 2617 */    MCD::OPC_Decode, 251, 5, 0, // Opcode: NOP
/* 2621 */    MCD::OPC_Decode, 137, 6, 29, // Opcode: ORI
/* 2625 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 2633
/* 2629 */    MCD::OPC_Decode, 139, 6, 29, // Opcode: ORIS
/* 2633 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 2641
/* 2637 */    MCD::OPC_Decode, 148, 9, 29, // Opcode: XORI
/* 2641 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 2649
/* 2645 */    MCD::OPC_Decode, 150, 9, 29, // Opcode: XORIS
/* 2649 */    MCD::OPC_FilterValue, 28, 3, 0, // Skip to: 2656
/* 2653 */    MCD::OPC_Decode, 80, 29, // Opcode: ANDIo
/* 2656 */    MCD::OPC_FilterValue, 29, 3, 0, // Skip to: 2663
/* 2660 */    MCD::OPC_Decode, 78, 29, // Opcode: ANDISo
/* 2663 */    MCD::OPC_FilterValue, 30, 134, 0, // Skip to: 2801
/* 2667 */    MCD::OPC_ExtractField, 2, 3,  // Inst{4-2} ...
/* 2670 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 2693
/* 2674 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2677 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2685
/* 2681 */    MCD::OPC_Decode, 159, 6, 30, // Opcode: RLDICL
/* 2685 */    MCD::OPC_FilterValue, 1, 153, 27, // Skip to: 9754
/* 2689 */    MCD::OPC_Decode, 161, 6, 30, // Opcode: RLDICLo
/* 2693 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 2716
/* 2697 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2700 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2708
/* 2704 */    MCD::OPC_Decode, 162, 6, 30, // Opcode: RLDICR
/* 2708 */    MCD::OPC_FilterValue, 1, 130, 27, // Skip to: 9754
/* 2712 */    MCD::OPC_Decode, 163, 6, 30, // Opcode: RLDICRo
/* 2716 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 2739
/* 2720 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2723 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2731
/* 2727 */    MCD::OPC_Decode, 158, 6, 30, // Opcode: RLDIC
/* 2731 */    MCD::OPC_FilterValue, 1, 107, 27, // Skip to: 9754
/* 2735 */    MCD::OPC_Decode, 164, 6, 30, // Opcode: RLDICo
/* 2739 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 2762
/* 2743 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2746 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2754
/* 2750 */    MCD::OPC_Decode, 165, 6, 31, // Opcode: RLDIMI
/* 2754 */    MCD::OPC_FilterValue, 1, 84, 27, // Skip to: 9754
/* 2758 */    MCD::OPC_Decode, 166, 6, 31, // Opcode: RLDIMIo
/* 2762 */    MCD::OPC_FilterValue, 4, 76, 27, // Skip to: 9754
/* 2766 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2769 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2777
/* 2773 */    MCD::OPC_Decode, 154, 6, 32, // Opcode: RLDCL
/* 2777 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2785
/* 2781 */    MCD::OPC_Decode, 155, 6, 32, // Opcode: RLDCLo
/* 2785 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2793
/* 2789 */    MCD::OPC_Decode, 156, 6, 32, // Opcode: RLDCR
/* 2793 */    MCD::OPC_FilterValue, 3, 45, 27, // Skip to: 9754
/* 2797 */    MCD::OPC_Decode, 157, 6, 32, // Opcode: RLDCRo
/* 2801 */    MCD::OPC_FilterValue, 31, 179, 12, // Skip to: 6056
/* 2805 */    MCD::OPC_ExtractField, 2, 4,  // Inst{5-2} ...
/* 2808 */    MCD::OPC_FilterValue, 0, 73, 0, // Skip to: 2885
/* 2812 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2815 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 2850
/* 2819 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2822 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2836
/* 2826 */    MCD::OPC_CheckField, 0, 2, 0, 10, 27, // Skip to: 9754
/* 2832 */    MCD::OPC_Decode, 224, 1, 33, // Opcode: CMPW
/* 2836 */    MCD::OPC_FilterValue, 1, 2, 27, // Skip to: 9754
/* 2840 */    MCD::OPC_CheckField, 0, 2, 0, 252, 26, // Skip to: 9754
/* 2846 */    MCD::OPC_Decode, 218, 1, 34, // Opcode: CMPD
/* 2850 */    MCD::OPC_FilterValue, 1, 244, 26, // Skip to: 9754
/* 2854 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2857 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2871
/* 2861 */    MCD::OPC_CheckField, 0, 2, 0, 231, 26, // Skip to: 9754
/* 2867 */    MCD::OPC_Decode, 222, 1, 33, // Opcode: CMPLW
/* 2871 */    MCD::OPC_FilterValue, 1, 223, 26, // Skip to: 9754
/* 2875 */    MCD::OPC_CheckField, 0, 2, 0, 217, 26, // Skip to: 9754
/* 2881 */    MCD::OPC_Decode, 220, 1, 34, // Opcode: CMPLD
/* 2885 */    MCD::OPC_FilterValue, 1, 65, 0, // Skip to: 2954
/* 2889 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2892 */    MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 2912
/* 2896 */    MCD::OPC_CheckField, 16, 1, 0, 196, 26, // Skip to: 9754
/* 2902 */    MCD::OPC_CheckField, 1, 1, 1, 190, 26, // Skip to: 9754
/* 2908 */    MCD::OPC_Decode, 143, 9, 35, // Opcode: WRTEE
/* 2912 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2926
/* 2916 */    MCD::OPC_CheckField, 1, 1, 1, 176, 26, // Skip to: 9754
/* 2922 */    MCD::OPC_Decode, 144, 9, 36, // Opcode: WRTEEI
/* 2926 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 2940
/* 2930 */    MCD::OPC_CheckField, 0, 2, 2, 162, 26, // Skip to: 9754
/* 2936 */    MCD::OPC_Decode, 183, 5, 37, // Opcode: MFDCR
/* 2940 */    MCD::OPC_FilterValue, 14, 154, 26, // Skip to: 9754
/* 2944 */    MCD::OPC_CheckField, 0, 2, 2, 148, 26, // Skip to: 9754
/* 2950 */    MCD::OPC_Decode, 206, 5, 37, // Opcode: MTDCR
/* 2954 */    MCD::OPC_FilterValue, 2, 44, 0, // Skip to: 3002
/* 2958 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2961 */    MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 2988
/* 2965 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2968 */    MCD::OPC_FilterValue, 0, 126, 26, // Skip to: 9754
/* 2972 */    MCD::OPC_CheckField, 11, 15, 128, 248, 1, 4, 0, // Skip to: 2984
/* 2980 */    MCD::OPC_Decode, 217, 7, 0, // Opcode: TRAP
/* 2984 */    MCD::OPC_Decode, 218, 7, 38, // Opcode: TW
/* 2988 */    MCD::OPC_FilterValue, 2, 106, 26, // Skip to: 9754
/* 2992 */    MCD::OPC_CheckField, 0, 2, 0, 100, 26, // Skip to: 9754
/* 2998 */    MCD::OPC_Decode, 201, 7, 39, // Opcode: TD
/* 3002 */    MCD::OPC_FilterValue, 3, 201, 0, // Skip to: 3207
/* 3006 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3009 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 3032
/* 3013 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3016 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3024
/* 3020 */    MCD::OPC_Decode, 150, 5, 40, // Opcode: LVSL
/* 3024 */    MCD::OPC_FilterValue, 2, 70, 26, // Skip to: 9754
/* 3028 */    MCD::OPC_Decode, 147, 5, 40, // Opcode: LVEBX
/* 3032 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 3055
/* 3036 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3039 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3047
/* 3043 */    MCD::OPC_Decode, 151, 5, 40, // Opcode: LVSR
/* 3047 */    MCD::OPC_FilterValue, 2, 47, 26, // Skip to: 9754
/* 3051 */    MCD::OPC_Decode, 148, 5, 40, // Opcode: LVEHX
/* 3055 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 3069
/* 3059 */    MCD::OPC_CheckField, 0, 2, 2, 33, 26, // Skip to: 9754
/* 3065 */    MCD::OPC_Decode, 149, 5, 40, // Opcode: LVEWX
/* 3069 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 3083
/* 3073 */    MCD::OPC_CheckField, 0, 2, 2, 19, 26, // Skip to: 9754
/* 3079 */    MCD::OPC_Decode, 152, 5, 40, // Opcode: LVX
/* 3083 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 3097
/* 3087 */    MCD::OPC_CheckField, 0, 2, 2, 5, 26, // Skip to: 9754
/* 3093 */    MCD::OPC_Decode, 143, 7, 40, // Opcode: STVEBX
/* 3097 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 3111
/* 3101 */    MCD::OPC_CheckField, 0, 2, 2, 247, 25, // Skip to: 9754
/* 3107 */    MCD::OPC_Decode, 144, 7, 40, // Opcode: STVEHX
/* 3111 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 3125
/* 3115 */    MCD::OPC_CheckField, 0, 2, 2, 233, 25, // Skip to: 9754
/* 3121 */    MCD::OPC_Decode, 145, 7, 40, // Opcode: STVEWX
/* 3125 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 3139
/* 3129 */    MCD::OPC_CheckField, 0, 2, 2, 219, 25, // Skip to: 9754
/* 3135 */    MCD::OPC_Decode, 146, 7, 40, // Opcode: STVX
/* 3139 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 3153
/* 3143 */    MCD::OPC_CheckField, 0, 2, 2, 205, 25, // Skip to: 9754
/* 3149 */    MCD::OPC_Decode, 153, 5, 40, // Opcode: LVXL
/* 3153 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 3173
/* 3157 */    MCD::OPC_CheckField, 21, 5, 0, 191, 25, // Skip to: 9754
/* 3163 */    MCD::OPC_CheckField, 0, 2, 0, 185, 25, // Skip to: 9754
/* 3169 */    MCD::OPC_Decode, 252, 1, 41, // Opcode: DCCCI
/* 3173 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 3187
/* 3177 */    MCD::OPC_CheckField, 0, 2, 2, 171, 25, // Skip to: 9754
/* 3183 */    MCD::OPC_Decode, 147, 7, 40, // Opcode: STVXL
/* 3187 */    MCD::OPC_FilterValue, 30, 163, 25, // Skip to: 9754
/* 3191 */    MCD::OPC_CheckField, 21, 5, 0, 157, 25, // Skip to: 9754
/* 3197 */    MCD::OPC_CheckField, 0, 2, 0, 151, 25, // Skip to: 9754
/* 3203 */    MCD::OPC_Decode, 205, 4, 41, // Opcode: ICCCI
/* 3207 */    MCD::OPC_FilterValue, 4, 22, 1, // Skip to: 3489
/* 3211 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3214 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 3253
/* 3218 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3221 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3229
/* 3225 */    MCD::OPC_Decode, 165, 7, 42, // Opcode: SUBFC
/* 3229 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3237
/* 3233 */    MCD::OPC_Decode, 168, 7, 42, // Opcode: SUBFCo
/* 3237 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3245
/* 3241 */    MCD::OPC_Decode, 227, 5, 43, // Opcode: MULHDU
/* 3245 */    MCD::OPC_FilterValue, 3, 105, 25, // Skip to: 9754
/* 3249 */    MCD::OPC_Decode, 228, 5, 43, // Opcode: MULHDUo
/* 3253 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 3276
/* 3257 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3260 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3268
/* 3264 */    MCD::OPC_Decode, 162, 7, 42, // Opcode: SUBF
/* 3268 */    MCD::OPC_FilterValue, 1, 82, 25, // Skip to: 9754
/* 3272 */    MCD::OPC_Decode, 183, 7, 42, // Opcode: SUBFo
/* 3276 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 3299
/* 3280 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3283 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3291
/* 3287 */    MCD::OPC_Decode, 226, 5, 43, // Opcode: MULHD
/* 3291 */    MCD::OPC_FilterValue, 3, 59, 25, // Skip to: 9754
/* 3295 */    MCD::OPC_Decode, 229, 5, 43, // Opcode: MULHDo
/* 3299 */    MCD::OPC_FilterValue, 3, 31, 0, // Skip to: 3334
/* 3303 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3306 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3320
/* 3310 */    MCD::OPC_CheckField, 11, 5, 0, 38, 25, // Skip to: 9754
/* 3316 */    MCD::OPC_Decode, 247, 5, 44, // Opcode: NEG
/* 3320 */    MCD::OPC_FilterValue, 1, 30, 25, // Skip to: 9754
/* 3324 */    MCD::OPC_CheckField, 11, 5, 0, 24, 25, // Skip to: 9754
/* 3330 */    MCD::OPC_Decode, 250, 5, 44, // Opcode: NEGo
/* 3334 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 3357
/* 3338 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3341 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3349
/* 3345 */    MCD::OPC_Decode, 169, 7, 42, // Opcode: SUBFE
/* 3349 */    MCD::OPC_FilterValue, 1, 1, 25, // Skip to: 9754
/* 3353 */    MCD::OPC_Decode, 172, 7, 42, // Opcode: SUBFEo
/* 3357 */    MCD::OPC_FilterValue, 6, 31, 0, // Skip to: 3392
/* 3361 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3364 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3378
/* 3368 */    MCD::OPC_CheckField, 11, 5, 0, 236, 24, // Skip to: 9754
/* 3374 */    MCD::OPC_Decode, 179, 7, 44, // Opcode: SUBFZE
/* 3378 */    MCD::OPC_FilterValue, 1, 228, 24, // Skip to: 9754
/* 3382 */    MCD::OPC_CheckField, 11, 5, 0, 222, 24, // Skip to: 9754
/* 3388 */    MCD::OPC_Decode, 182, 7, 44, // Opcode: SUBFZEo
/* 3392 */    MCD::OPC_FilterValue, 7, 47, 0, // Skip to: 3443
/* 3396 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3399 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3413
/* 3403 */    MCD::OPC_CheckField, 11, 5, 0, 201, 24, // Skip to: 9754
/* 3409 */    MCD::OPC_Decode, 175, 7, 44, // Opcode: SUBFME
/* 3413 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3427
/* 3417 */    MCD::OPC_CheckField, 11, 5, 0, 187, 24, // Skip to: 9754
/* 3423 */    MCD::OPC_Decode, 178, 7, 44, // Opcode: SUBFMEo
/* 3427 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3435
/* 3431 */    MCD::OPC_Decode, 234, 5, 43, // Opcode: MULLD
/* 3435 */    MCD::OPC_FilterValue, 3, 171, 24, // Skip to: 9754
/* 3439 */    MCD::OPC_Decode, 235, 5, 43, // Opcode: MULLDo
/* 3443 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 3466
/* 3447 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3450 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3458
/* 3454 */    MCD::OPC_Decode, 254, 1, 43, // Opcode: DIVDU
/* 3458 */    MCD::OPC_FilterValue, 3, 148, 24, // Skip to: 9754
/* 3462 */    MCD::OPC_Decode, 255, 1, 43, // Opcode: DIVDUo
/* 3466 */    MCD::OPC_FilterValue, 15, 140, 24, // Skip to: 9754
/* 3470 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3473 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3481
/* 3477 */    MCD::OPC_Decode, 253, 1, 43, // Opcode: DIVD
/* 3481 */    MCD::OPC_FilterValue, 3, 125, 24, // Skip to: 9754
/* 3485 */    MCD::OPC_Decode, 128, 2, 43, // Opcode: DIVDo
/* 3489 */    MCD::OPC_FilterValue, 5, 233, 0, // Skip to: 3726
/* 3493 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3496 */    MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 3533
/* 3500 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3503 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3510
/* 3507 */    MCD::OPC_Decode, 29, 42, // Opcode: ADDC
/* 3510 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 3517
/* 3514 */    MCD::OPC_Decode, 32, 42, // Opcode: ADDCo
/* 3517 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3525
/* 3521 */    MCD::OPC_Decode, 231, 5, 42, // Opcode: MULHWU
/* 3525 */    MCD::OPC_FilterValue, 3, 81, 24, // Skip to: 9754
/* 3529 */    MCD::OPC_Decode, 232, 5, 42, // Opcode: MULHWUo
/* 3533 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 3556
/* 3537 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3540 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3548
/* 3544 */    MCD::OPC_Decode, 230, 5, 42, // Opcode: MULHW
/* 3548 */    MCD::OPC_FilterValue, 3, 58, 24, // Skip to: 9754
/* 3552 */    MCD::OPC_Decode, 233, 5, 42, // Opcode: MULHWo
/* 3556 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 3577
/* 3560 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3563 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3570
/* 3567 */    MCD::OPC_Decode, 33, 42, // Opcode: ADDE
/* 3570 */    MCD::OPC_FilterValue, 1, 36, 24, // Skip to: 9754
/* 3574 */    MCD::OPC_Decode, 36, 42, // Opcode: ADDEo
/* 3577 */    MCD::OPC_FilterValue, 6, 29, 0, // Skip to: 3610
/* 3581 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3584 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3597
/* 3588 */    MCD::OPC_CheckField, 11, 5, 0, 16, 24, // Skip to: 9754
/* 3594 */    MCD::OPC_Decode, 65, 44, // Opcode: ADDZE
/* 3597 */    MCD::OPC_FilterValue, 1, 9, 24, // Skip to: 9754
/* 3601 */    MCD::OPC_CheckField, 11, 5, 0, 3, 24, // Skip to: 9754
/* 3607 */    MCD::OPC_Decode, 68, 44, // Opcode: ADDZEo
/* 3610 */    MCD::OPC_FilterValue, 7, 45, 0, // Skip to: 3659
/* 3614 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3617 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3630
/* 3621 */    MCD::OPC_CheckField, 11, 5, 0, 239, 23, // Skip to: 9754
/* 3627 */    MCD::OPC_Decode, 61, 44, // Opcode: ADDME
/* 3630 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3643
/* 3634 */    MCD::OPC_CheckField, 11, 5, 0, 226, 23, // Skip to: 9754
/* 3640 */    MCD::OPC_Decode, 64, 44, // Opcode: ADDMEo
/* 3643 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3651
/* 3647 */    MCD::OPC_Decode, 238, 5, 42, // Opcode: MULLW
/* 3651 */    MCD::OPC_FilterValue, 3, 211, 23, // Skip to: 9754
/* 3655 */    MCD::OPC_Decode, 239, 5, 42, // Opcode: MULLWo
/* 3659 */    MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 3680
/* 3663 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3666 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3673
/* 3670 */    MCD::OPC_Decode, 22, 42, // Opcode: ADD4
/* 3673 */    MCD::OPC_FilterValue, 1, 189, 23, // Skip to: 9754
/* 3677 */    MCD::OPC_Decode, 24, 42, // Opcode: ADD4o
/* 3680 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 3703
/* 3684 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3687 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3695
/* 3691 */    MCD::OPC_Decode, 130, 2, 42, // Opcode: DIVWU
/* 3695 */    MCD::OPC_FilterValue, 3, 167, 23, // Skip to: 9754
/* 3699 */    MCD::OPC_Decode, 131, 2, 42, // Opcode: DIVWUo
/* 3703 */    MCD::OPC_FilterValue, 15, 159, 23, // Skip to: 9754
/* 3707 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3710 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3718
/* 3714 */    MCD::OPC_Decode, 129, 2, 42, // Opcode: DIVW
/* 3718 */    MCD::OPC_FilterValue, 3, 144, 23, // Skip to: 9754
/* 3722 */    MCD::OPC_Decode, 132, 2, 42, // Opcode: DIVWo
/* 3726 */    MCD::OPC_FilterValue, 6, 101, 0, // Skip to: 3831
/* 3730 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3733 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 3747
/* 3737 */    MCD::OPC_CheckField, 1, 1, 0, 123, 23, // Skip to: 9754
/* 3743 */    MCD::OPC_Decode, 174, 5, 45, // Opcode: LXVDSX
/* 3747 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 3761
/* 3751 */    MCD::OPC_CheckField, 1, 1, 0, 109, 23, // Skip to: 9754
/* 3757 */    MCD::OPC_Decode, 172, 5, 46, // Opcode: LXSDX
/* 3761 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 3775
/* 3765 */    MCD::OPC_CheckField, 1, 1, 0, 95, 23, // Skip to: 9754
/* 3771 */    MCD::OPC_Decode, 159, 7, 46, // Opcode: STXSDX
/* 3775 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 3789
/* 3779 */    MCD::OPC_CheckField, 1, 1, 0, 81, 23, // Skip to: 9754
/* 3785 */    MCD::OPC_Decode, 175, 5, 45, // Opcode: LXVW4X
/* 3789 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 3803
/* 3793 */    MCD::OPC_CheckField, 1, 1, 0, 67, 23, // Skip to: 9754
/* 3799 */    MCD::OPC_Decode, 173, 5, 45, // Opcode: LXVD2X
/* 3803 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 3817
/* 3807 */    MCD::OPC_CheckField, 1, 1, 0, 53, 23, // Skip to: 9754
/* 3813 */    MCD::OPC_Decode, 161, 7, 45, // Opcode: STXVW4X
/* 3817 */    MCD::OPC_FilterValue, 30, 45, 23, // Skip to: 9754
/* 3821 */    MCD::OPC_CheckField, 1, 1, 0, 39, 23, // Skip to: 9754
/* 3827 */    MCD::OPC_Decode, 160, 7, 45, // Opcode: STXVD2X
/* 3831 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 3845
/* 3835 */    MCD::OPC_CheckField, 0, 2, 2, 25, 23, // Skip to: 9754
/* 3841 */    MCD::OPC_Decode, 212, 4, 47, // Opcode: ISEL
/* 3845 */    MCD::OPC_FilterValue, 8, 43, 0, // Skip to: 3892
/* 3849 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 3852 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 3872
/* 3856 */    MCD::OPC_CheckField, 6, 6, 4, 4, 23, // Skip to: 9754
/* 3862 */    MCD::OPC_CheckField, 0, 2, 0, 254, 22, // Skip to: 9754
/* 3868 */    MCD::OPC_Decode, 200, 5, 48, // Opcode: MTCRF
/* 3872 */    MCD::OPC_FilterValue, 1, 246, 22, // Skip to: 9754
/* 3876 */    MCD::OPC_CheckField, 6, 6, 4, 240, 22, // Skip to: 9754
/* 3882 */    MCD::OPC_CheckField, 0, 2, 0, 234, 22, // Skip to: 9754
/* 3888 */    MCD::OPC_Decode, 218, 5, 49, // Opcode: MTOCRF
/* 3892 */    MCD::OPC_FilterValue, 9, 246, 1, // Skip to: 4398
/* 3896 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3899 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 3946
/* 3903 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 3906 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 3926
/* 3910 */    MCD::OPC_CheckField, 11, 9, 0, 206, 22, // Skip to: 9754
/* 3916 */    MCD::OPC_CheckField, 0, 2, 2, 200, 22, // Skip to: 9754
/* 3922 */    MCD::OPC_Decode, 179, 5, 35, // Opcode: MFCR
/* 3926 */    MCD::OPC_FilterValue, 1, 192, 22, // Skip to: 9754
/* 3930 */    MCD::OPC_CheckField, 11, 1, 0, 186, 22, // Skip to: 9754
/* 3936 */    MCD::OPC_CheckField, 0, 2, 2, 180, 22, // Skip to: 9754
/* 3942 */    MCD::OPC_Decode, 189, 5, 50, // Opcode: MFOCRF
/* 3946 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 3966
/* 3950 */    MCD::OPC_CheckField, 11, 10, 0, 166, 22, // Skip to: 9754
/* 3956 */    MCD::OPC_CheckField, 0, 2, 2, 160, 22, // Skip to: 9754
/* 3962 */    MCD::OPC_Decode, 188, 5, 35, // Opcode: MFMSR
/* 3966 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 3980
/* 3970 */    MCD::OPC_CheckField, 1, 1, 0, 146, 22, // Skip to: 9754
/* 3976 */    MCD::OPC_Decode, 216, 5, 51, // Opcode: MTMSR
/* 3980 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 3994
/* 3984 */    MCD::OPC_CheckField, 1, 1, 0, 132, 22, // Skip to: 9754
/* 3990 */    MCD::OPC_Decode, 217, 5, 51, // Opcode: MTMSRD
/* 3994 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 4008
/* 3998 */    MCD::OPC_CheckField, 1, 1, 0, 118, 22, // Skip to: 9754
/* 4004 */    MCD::OPC_Decode, 221, 5, 52, // Opcode: MTSR
/* 4008 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 4022
/* 4012 */    MCD::OPC_CheckField, 1, 1, 0, 104, 22, // Skip to: 9754
/* 4018 */    MCD::OPC_Decode, 222, 5, 53, // Opcode: MTSRIN
/* 4022 */    MCD::OPC_FilterValue, 8, 16, 0, // Skip to: 4042
/* 4026 */    MCD::OPC_CheckField, 16, 10, 0, 90, 22, // Skip to: 9754
/* 4032 */    MCD::OPC_CheckField, 0, 2, 0, 84, 22, // Skip to: 9754
/* 4038 */    MCD::OPC_Decode, 205, 7, 54, // Opcode: TLBIEL
/* 4042 */    MCD::OPC_FilterValue, 9, 16, 0, // Skip to: 4062
/* 4046 */    MCD::OPC_CheckField, 16, 5, 0, 70, 22, // Skip to: 9754
/* 4052 */    MCD::OPC_CheckField, 0, 2, 0, 64, 22, // Skip to: 9754
/* 4058 */    MCD::OPC_Decode, 204, 7, 53, // Opcode: TLBIE
/* 4062 */    MCD::OPC_FilterValue, 10, 32, 0, // Skip to: 4098
/* 4066 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4069 */    MCD::OPC_FilterValue, 2, 49, 22, // Skip to: 9754
/* 4073 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 4076 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 4085
/* 4081 */    MCD::OPC_Decode, 186, 5, 35, // Opcode: MFLR
/* 4085 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 4094
/* 4090 */    MCD::OPC_Decode, 181, 5, 35, // Opcode: MFCTR
/* 4094 */    MCD::OPC_Decode, 191, 5, 37, // Opcode: MFSPR
/* 4098 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 4127
/* 4102 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4105 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4119
/* 4109 */    MCD::OPC_CheckField, 11, 15, 0, 7, 22, // Skip to: 9754
/* 4115 */    MCD::OPC_Decode, 203, 7, 0, // Opcode: TLBIA
/* 4119 */    MCD::OPC_FilterValue, 2, 255, 21, // Skip to: 9754
/* 4123 */    MCD::OPC_Decode, 194, 5, 37, // Opcode: MFTB
/* 4127 */    MCD::OPC_FilterValue, 12, 16, 0, // Skip to: 4147
/* 4131 */    MCD::OPC_CheckField, 16, 5, 0, 241, 21, // Skip to: 9754
/* 4137 */    MCD::OPC_CheckField, 0, 2, 0, 235, 21, // Skip to: 9754
/* 4143 */    MCD::OPC_Decode, 202, 6, 53, // Opcode: SLBMTE
/* 4147 */    MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 4167
/* 4151 */    MCD::OPC_CheckField, 16, 10, 0, 221, 21, // Skip to: 9754
/* 4157 */    MCD::OPC_CheckField, 0, 2, 0, 215, 21, // Skip to: 9754
/* 4163 */    MCD::OPC_Decode, 200, 6, 54, // Opcode: SLBIE
/* 4167 */    MCD::OPC_FilterValue, 14, 32, 0, // Skip to: 4203
/* 4171 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4174 */    MCD::OPC_FilterValue, 2, 200, 21, // Skip to: 9754
/* 4178 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 4181 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 4190
/* 4186 */    MCD::OPC_Decode, 214, 5, 35, // Opcode: MTLR
/* 4190 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 4199
/* 4195 */    MCD::OPC_Decode, 202, 5, 35, // Opcode: MTCTR
/* 4199 */    MCD::OPC_Decode, 220, 5, 55, // Opcode: MTSPR
/* 4203 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 4223
/* 4207 */    MCD::OPC_CheckField, 11, 15, 0, 165, 21, // Skip to: 9754
/* 4213 */    MCD::OPC_CheckField, 0, 2, 0, 159, 21, // Skip to: 9754
/* 4219 */    MCD::OPC_Decode, 199, 6, 0, // Opcode: SLBIA
/* 4223 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 4237
/* 4227 */    MCD::OPC_CheckField, 1, 1, 1, 145, 21, // Skip to: 9754
/* 4233 */    MCD::OPC_Decode, 192, 5, 52, // Opcode: MFSR
/* 4237 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 4251
/* 4241 */    MCD::OPC_CheckField, 1, 1, 1, 131, 21, // Skip to: 9754
/* 4247 */    MCD::OPC_Decode, 193, 5, 53, // Opcode: MFSRIN
/* 4251 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 4271
/* 4255 */    MCD::OPC_CheckField, 21, 5, 0, 117, 21, // Skip to: 9754
/* 4261 */    MCD::OPC_CheckField, 0, 2, 0, 111, 21, // Skip to: 9754
/* 4267 */    MCD::OPC_Decode, 206, 7, 41, // Opcode: TLBIVAX
/* 4271 */    MCD::OPC_FilterValue, 28, 43, 0, // Skip to: 4318
/* 4275 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4278 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 4296
/* 4282 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 4292
/* 4288 */    MCD::OPC_Decode, 211, 7, 41, // Opcode: TLBSX
/* 4292 */    MCD::OPC_Decode, 212, 7, 42, // Opcode: TLBSX2
/* 4296 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4304
/* 4300 */    MCD::OPC_Decode, 213, 7, 42, // Opcode: TLBSX2D
/* 4304 */    MCD::OPC_FilterValue, 2, 70, 21, // Skip to: 9754
/* 4308 */    MCD::OPC_CheckField, 16, 5, 0, 64, 21, // Skip to: 9754
/* 4314 */    MCD::OPC_Decode, 201, 6, 53, // Opcode: SLBMFEE
/* 4318 */    MCD::OPC_FilterValue, 29, 21, 0, // Skip to: 4343
/* 4322 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4325 */    MCD::OPC_FilterValue, 0, 49, 21, // Skip to: 9754
/* 4329 */    MCD::OPC_CheckField, 11, 15, 0, 4, 0, // Skip to: 4339
/* 4335 */    MCD::OPC_Decode, 209, 7, 0, // Opcode: TLBRE
/* 4339 */    MCD::OPC_Decode, 210, 7, 56, // Opcode: TLBRE2
/* 4343 */    MCD::OPC_FilterValue, 30, 31, 0, // Skip to: 4378
/* 4347 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4350 */    MCD::OPC_FilterValue, 0, 24, 21, // Skip to: 9754
/* 4354 */    MCD::OPC_CheckField, 11, 15, 0, 4, 0, // Skip to: 4364
/* 4360 */    MCD::OPC_Decode, 215, 7, 0, // Opcode: TLBWE
/* 4364 */    MCD::OPC_CheckField, 16, 10, 0, 4, 0, // Skip to: 4374
/* 4370 */    MCD::OPC_Decode, 207, 7, 54, // Opcode: TLBLD
/* 4374 */    MCD::OPC_Decode, 216, 7, 56, // Opcode: TLBWE2
/* 4378 */    MCD::OPC_FilterValue, 31, 252, 20, // Skip to: 9754
/* 4382 */    MCD::OPC_CheckField, 16, 10, 0, 246, 20, // Skip to: 9754
/* 4388 */    MCD::OPC_CheckField, 0, 2, 0, 240, 20, // Skip to: 9754
/* 4394 */    MCD::OPC_Decode, 208, 7, 54, // Opcode: TLBLI
/* 4398 */    MCD::OPC_FilterValue, 10, 22, 1, // Skip to: 4680
/* 4402 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4405 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 4428
/* 4409 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4412 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4420
/* 4416 */    MCD::OPC_Decode, 155, 5, 57, // Opcode: LWARX
/* 4420 */    MCD::OPC_FilterValue, 2, 210, 20, // Skip to: 9754
/* 4424 */    MCD::OPC_Decode, 232, 4, 58, // Opcode: LDX
/* 4428 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4442
/* 4432 */    MCD::OPC_CheckField, 0, 2, 2, 196, 20, // Skip to: 9754
/* 4438 */    MCD::OPC_Decode, 231, 4, 59, // Opcode: LDUX
/* 4442 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 4456
/* 4446 */    MCD::OPC_CheckField, 0, 2, 0, 182, 20, // Skip to: 9754
/* 4452 */    MCD::OPC_Decode, 227, 4, 58, // Opcode: LDARX
/* 4456 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 4470
/* 4460 */    MCD::OPC_CheckField, 0, 2, 2, 168, 20, // Skip to: 9754
/* 4466 */    MCD::OPC_Decode, 249, 6, 58, // Opcode: STDX
/* 4470 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 4484
/* 4474 */    MCD::OPC_CheckField, 0, 2, 2, 154, 20, // Skip to: 9754
/* 4480 */    MCD::OPC_Decode, 248, 6, 60, // Opcode: STDUX
/* 4484 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 4498
/* 4488 */    MCD::OPC_CheckField, 0, 2, 2, 140, 20, // Skip to: 9754
/* 4494 */    MCD::OPC_Decode, 157, 5, 58, // Opcode: LWAX
/* 4498 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 4512
/* 4502 */    MCD::OPC_CheckField, 0, 2, 2, 126, 20, // Skip to: 9754
/* 4508 */    MCD::OPC_Decode, 156, 5, 59, // Opcode: LWAUX
/* 4512 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 4526
/* 4516 */    MCD::OPC_CheckField, 0, 2, 0, 112, 20, // Skip to: 9754
/* 4522 */    MCD::OPC_Decode, 228, 4, 58, // Opcode: LDBRX
/* 4526 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 4540
/* 4530 */    MCD::OPC_CheckField, 0, 2, 2, 98, 20, // Skip to: 9754
/* 4536 */    MCD::OPC_Decode, 146, 5, 61, // Opcode: LSWI
/* 4540 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 4554
/* 4544 */    MCD::OPC_CheckField, 0, 2, 0, 84, 20, // Skip to: 9754
/* 4550 */    MCD::OPC_Decode, 244, 6, 58, // Opcode: STDBRX
/* 4554 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 4568
/* 4558 */    MCD::OPC_CheckField, 0, 2, 2, 70, 20, // Skip to: 9754
/* 4564 */    MCD::OPC_Decode, 142, 7, 61, // Opcode: STSWI
/* 4568 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 4582
/* 4572 */    MCD::OPC_CheckField, 0, 2, 2, 56, 20, // Skip to: 9754
/* 4578 */    MCD::OPC_Decode, 164, 5, 42, // Opcode: LWZCIX
/* 4582 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 4596
/* 4586 */    MCD::OPC_CheckField, 0, 2, 2, 42, 20, // Skip to: 9754
/* 4592 */    MCD::OPC_Decode, 134, 5, 42, // Opcode: LHZCIX
/* 4596 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 4610
/* 4600 */    MCD::OPC_CheckField, 0, 2, 2, 28, 20, // Skip to: 9754
/* 4606 */    MCD::OPC_Decode, 219, 4, 42, // Opcode: LBZCIX
/* 4610 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 4624
/* 4614 */    MCD::OPC_CheckField, 0, 2, 2, 14, 20, // Skip to: 9754
/* 4620 */    MCD::OPC_Decode, 229, 4, 42, // Opcode: LDCIX
/* 4624 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 4638
/* 4628 */    MCD::OPC_CheckField, 0, 2, 2, 0, 20, // Skip to: 9754
/* 4634 */    MCD::OPC_Decode, 151, 7, 42, // Opcode: STWCIX
/* 4638 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 4652
/* 4642 */    MCD::OPC_CheckField, 0, 2, 2, 242, 19, // Skip to: 9754
/* 4648 */    MCD::OPC_Decode, 134, 7, 42, // Opcode: STHCIX
/* 4652 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 4666
/* 4656 */    MCD::OPC_CheckField, 0, 2, 2, 228, 19, // Skip to: 9754
/* 4662 */    MCD::OPC_Decode, 236, 6, 42, // Opcode: STBCIX
/* 4666 */    MCD::OPC_FilterValue, 31, 220, 19, // Skip to: 9754
/* 4670 */    MCD::OPC_CheckField, 0, 2, 2, 214, 19, // Skip to: 9754
/* 4676 */    MCD::OPC_Decode, 245, 6, 42, // Opcode: STDCIX
/* 4680 */    MCD::OPC_FilterValue, 11, 227, 2, // Skip to: 5423
/* 4684 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4687 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 4716
/* 4691 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4694 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4708
/* 4698 */    MCD::OPC_CheckField, 25, 1, 0, 186, 19, // Skip to: 9754
/* 4704 */    MCD::OPC_Decode, 204, 4, 62, // Opcode: ICBT
/* 4708 */    MCD::OPC_FilterValue, 2, 178, 19, // Skip to: 9754
/* 4712 */    MCD::OPC_Decode, 169, 5, 57, // Opcode: LWZX
/* 4716 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 4745
/* 4720 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4723 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4737
/* 4727 */    MCD::OPC_CheckField, 21, 5, 0, 157, 19, // Skip to: 9754
/* 4733 */    MCD::OPC_Decode, 247, 1, 63, // Opcode: DCBST
/* 4737 */    MCD::OPC_FilterValue, 2, 149, 19, // Skip to: 9754
/* 4741 */    MCD::OPC_Decode, 167, 5, 64, // Opcode: LWZUX
/* 4745 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 4774
/* 4749 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4752 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4766
/* 4756 */    MCD::OPC_CheckField, 21, 5, 0, 128, 19, // Skip to: 9754
/* 4762 */    MCD::OPC_Decode, 245, 1, 63, // Opcode: DCBF
/* 4766 */    MCD::OPC_FilterValue, 2, 120, 19, // Skip to: 9754
/* 4770 */    MCD::OPC_Decode, 224, 4, 57, // Opcode: LBZX
/* 4774 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 4788
/* 4778 */    MCD::OPC_CheckField, 0, 2, 2, 106, 19, // Skip to: 9754
/* 4784 */    MCD::OPC_Decode, 222, 4, 64, // Opcode: LBZUX
/* 4788 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 4811
/* 4792 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4795 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4803
/* 4799 */    MCD::OPC_Decode, 152, 7, 57, // Opcode: STWCX
/* 4803 */    MCD::OPC_FilterValue, 2, 83, 19, // Skip to: 9754
/* 4807 */    MCD::OPC_Decode, 157, 7, 57, // Opcode: STWX
/* 4811 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 4825
/* 4815 */    MCD::OPC_CheckField, 0, 2, 2, 69, 19, // Skip to: 9754
/* 4821 */    MCD::OPC_Decode, 155, 7, 65, // Opcode: STWUX
/* 4825 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 4848
/* 4829 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4832 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4840
/* 4836 */    MCD::OPC_Decode, 246, 6, 58, // Opcode: STDCX
/* 4840 */    MCD::OPC_FilterValue, 2, 46, 19, // Skip to: 9754
/* 4844 */    MCD::OPC_Decode, 241, 6, 57, // Opcode: STBX
/* 4848 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 4877
/* 4852 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4855 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4869
/* 4859 */    MCD::OPC_CheckField, 21, 5, 0, 25, 19, // Skip to: 9754
/* 4865 */    MCD::OPC_Decode, 249, 1, 63, // Opcode: DCBTST
/* 4869 */    MCD::OPC_FilterValue, 2, 17, 19, // Skip to: 9754
/* 4873 */    MCD::OPC_Decode, 239, 6, 65, // Opcode: STBUX
/* 4877 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 4906
/* 4881 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4884 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4898
/* 4888 */    MCD::OPC_CheckField, 21, 5, 0, 252, 18, // Skip to: 9754
/* 4894 */    MCD::OPC_Decode, 248, 1, 63, // Opcode: DCBT
/* 4898 */    MCD::OPC_FilterValue, 2, 244, 18, // Skip to: 9754
/* 4902 */    MCD::OPC_Decode, 139, 5, 57, // Opcode: LHZX
/* 4906 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 4920
/* 4910 */    MCD::OPC_CheckField, 0, 2, 2, 230, 18, // Skip to: 9754
/* 4916 */    MCD::OPC_Decode, 137, 5, 64, // Opcode: LHZUX
/* 4920 */    MCD::OPC_FilterValue, 10, 34, 0, // Skip to: 4958
/* 4924 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4927 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 4950
/* 4931 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 4934 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4942
/* 4938 */    MCD::OPC_Decode, 135, 2, 66, // Opcode: DST
/* 4942 */    MCD::OPC_FilterValue, 4, 200, 18, // Skip to: 9754
/* 4946 */    MCD::OPC_Decode, 141, 2, 66, // Opcode: DSTT
/* 4950 */    MCD::OPC_FilterValue, 2, 192, 18, // Skip to: 9754
/* 4954 */    MCD::OPC_Decode, 128, 5, 57, // Opcode: LHAX
/* 4958 */    MCD::OPC_FilterValue, 11, 34, 0, // Skip to: 4996
/* 4962 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4965 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 4988
/* 4969 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 4972 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4980
/* 4976 */    MCD::OPC_Decode, 137, 2, 66, // Opcode: DSTST
/* 4980 */    MCD::OPC_FilterValue, 4, 162, 18, // Skip to: 9754
/* 4984 */    MCD::OPC_Decode, 139, 2, 66, // Opcode: DSTSTT
/* 4988 */    MCD::OPC_FilterValue, 2, 154, 18, // Skip to: 9754
/* 4992 */    MCD::OPC_Decode, 254, 4, 64, // Opcode: LHAUX
/* 4996 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 5010
/* 5000 */    MCD::OPC_CheckField, 0, 2, 2, 140, 18, // Skip to: 9754
/* 5006 */    MCD::OPC_Decode, 139, 7, 57, // Opcode: STHX
/* 5010 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 5024
/* 5014 */    MCD::OPC_CheckField, 0, 2, 2, 126, 18, // Skip to: 9754
/* 5020 */    MCD::OPC_Decode, 137, 7, 65, // Opcode: STHUX
/* 5024 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 5044
/* 5028 */    MCD::OPC_CheckField, 21, 5, 0, 112, 18, // Skip to: 9754
/* 5034 */    MCD::OPC_CheckField, 0, 2, 0, 106, 18, // Skip to: 9754
/* 5040 */    MCD::OPC_Decode, 246, 1, 63, // Opcode: DCBI
/* 5044 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 5067
/* 5048 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5051 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5059
/* 5055 */    MCD::OPC_Decode, 160, 5, 57, // Opcode: LWBRX
/* 5059 */    MCD::OPC_FilterValue, 2, 83, 18, // Skip to: 9754
/* 5063 */    MCD::OPC_Decode, 249, 4, 67, // Opcode: LFSX
/* 5067 */    MCD::OPC_FilterValue, 17, 25, 0, // Skip to: 5096
/* 5071 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5074 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5088
/* 5078 */    MCD::OPC_CheckField, 11, 15, 0, 62, 18, // Skip to: 9754
/* 5084 */    MCD::OPC_Decode, 214, 7, 0, // Opcode: TLBSYNC
/* 5088 */    MCD::OPC_FilterValue, 2, 54, 18, // Skip to: 9754
/* 5092 */    MCD::OPC_Decode, 248, 4, 68, // Opcode: LFSUX
/* 5096 */    MCD::OPC_FilterValue, 18, 31, 0, // Skip to: 5131
/* 5100 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5103 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5123
/* 5107 */    MCD::OPC_CheckField, 23, 3, 0, 33, 18, // Skip to: 9754
/* 5113 */    MCD::OPC_CheckField, 11, 10, 0, 27, 18, // Skip to: 9754
/* 5119 */    MCD::OPC_Decode, 188, 7, 69, // Opcode: SYNC
/* 5123 */    MCD::OPC_FilterValue, 2, 19, 18, // Skip to: 9754
/* 5127 */    MCD::OPC_Decode, 243, 4, 70, // Opcode: LFDX
/* 5131 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 5145
/* 5135 */    MCD::OPC_CheckField, 0, 2, 2, 5, 18, // Skip to: 9754
/* 5141 */    MCD::OPC_Decode, 242, 4, 71, // Opcode: LFDUX
/* 5145 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 5168
/* 5149 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5152 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5160
/* 5156 */    MCD::OPC_Decode, 150, 7, 57, // Opcode: STWBRX
/* 5160 */    MCD::OPC_FilterValue, 2, 238, 17, // Skip to: 9754
/* 5164 */    MCD::OPC_Decode, 130, 7, 67, // Opcode: STFSX
/* 5168 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 5182
/* 5172 */    MCD::OPC_CheckField, 0, 2, 2, 224, 17, // Skip to: 9754
/* 5178 */    MCD::OPC_Decode, 129, 7, 72, // Opcode: STFSUX
/* 5182 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 5196
/* 5186 */    MCD::OPC_CheckField, 0, 2, 2, 210, 17, // Skip to: 9754
/* 5192 */    MCD::OPC_Decode, 253, 6, 70, // Opcode: STFDX
/* 5196 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 5225
/* 5200 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5203 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5217
/* 5207 */    MCD::OPC_CheckField, 21, 5, 0, 189, 17, // Skip to: 9754
/* 5213 */    MCD::OPC_Decode, 244, 1, 63, // Opcode: DCBA
/* 5217 */    MCD::OPC_FilterValue, 2, 181, 17, // Skip to: 9754
/* 5221 */    MCD::OPC_Decode, 252, 6, 73, // Opcode: STFDUX
/* 5225 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 5239
/* 5229 */    MCD::OPC_CheckField, 0, 2, 0, 167, 17, // Skip to: 9754
/* 5235 */    MCD::OPC_Decode, 130, 5, 57, // Opcode: LHBRX
/* 5239 */    MCD::OPC_FilterValue, 25, 43, 0, // Skip to: 5286
/* 5243 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 5246 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5266
/* 5250 */    MCD::OPC_CheckField, 11, 10, 0, 146, 17, // Skip to: 9754
/* 5256 */    MCD::OPC_CheckField, 0, 2, 0, 140, 17, // Skip to: 9754
/* 5262 */    MCD::OPC_Decode, 133, 2, 74, // Opcode: DSS
/* 5266 */    MCD::OPC_FilterValue, 4, 132, 17, // Skip to: 9754
/* 5270 */    MCD::OPC_CheckField, 11, 12, 0, 126, 17, // Skip to: 9754
/* 5276 */    MCD::OPC_CheckField, 0, 2, 0, 120, 17, // Skip to: 9754
/* 5282 */    MCD::OPC_Decode, 134, 2, 0, // Opcode: DSSALL
/* 5286 */    MCD::OPC_FilterValue, 26, 41, 0, // Skip to: 5331
/* 5290 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5293 */    MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 5317
/* 5297 */    MCD::OPC_CheckField, 11, 15, 0, 10, 0, // Skip to: 5313
/* 5303 */    MCD::OPC_CheckField, 0, 1, 0, 4, 0, // Skip to: 5313
/* 5309 */    MCD::OPC_Decode, 219, 3, 0, // Opcode: EnforceIEIO
/* 5313 */    MCD::OPC_Decode, 176, 5, 75, // Opcode: MBAR
/* 5317 */    MCD::OPC_FilterValue, 1, 81, 17, // Skip to: 9754
/* 5321 */    MCD::OPC_CheckField, 0, 1, 0, 75, 17, // Skip to: 9754
/* 5327 */    MCD::OPC_Decode, 244, 4, 70, // Opcode: LFIWAX
/* 5331 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 5345
/* 5335 */    MCD::OPC_CheckField, 0, 2, 2, 61, 17, // Skip to: 9754
/* 5341 */    MCD::OPC_Decode, 245, 4, 70, // Opcode: LFIWZX
/* 5345 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 5359
/* 5349 */    MCD::OPC_CheckField, 0, 2, 0, 47, 17, // Skip to: 9754
/* 5355 */    MCD::OPC_Decode, 133, 7, 57, // Opcode: STHBRX
/* 5359 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 5388
/* 5363 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5366 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5380
/* 5370 */    MCD::OPC_CheckField, 21, 5, 0, 26, 17, // Skip to: 9754
/* 5376 */    MCD::OPC_Decode, 203, 4, 63, // Opcode: ICBI
/* 5380 */    MCD::OPC_FilterValue, 2, 18, 17, // Skip to: 9754
/* 5384 */    MCD::OPC_Decode, 254, 6, 70, // Opcode: STFIWX
/* 5388 */    MCD::OPC_FilterValue, 31, 10, 17, // Skip to: 9754
/* 5392 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5395 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5409
/* 5399 */    MCD::OPC_CheckField, 0, 2, 0, 253, 16, // Skip to: 9754
/* 5405 */    MCD::OPC_Decode, 250, 1, 63, // Opcode: DCBZ
/* 5409 */    MCD::OPC_FilterValue, 1, 245, 16, // Skip to: 9754
/* 5413 */    MCD::OPC_CheckField, 0, 2, 0, 239, 16, // Skip to: 9754
/* 5419 */    MCD::OPC_Decode, 251, 1, 63, // Opcode: DCBZL
/* 5423 */    MCD::OPC_FilterValue, 12, 95, 0, // Skip to: 5522
/* 5427 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5430 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 5453
/* 5434 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5437 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5445
/* 5441 */    MCD::OPC_Decode, 207, 6, 76, // Opcode: SLW
/* 5445 */    MCD::OPC_FilterValue, 1, 209, 16, // Skip to: 9754
/* 5449 */    MCD::OPC_Decode, 212, 6, 76, // Opcode: SLWo
/* 5453 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 5476
/* 5457 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5460 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5468
/* 5464 */    MCD::OPC_Decode, 228, 6, 76, // Opcode: SRW
/* 5468 */    MCD::OPC_FilterValue, 1, 186, 16, // Skip to: 9754
/* 5472 */    MCD::OPC_Decode, 233, 6, 76, // Opcode: SRWo
/* 5476 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 5499
/* 5480 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5483 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5491
/* 5487 */    MCD::OPC_Decode, 220, 6, 76, // Opcode: SRAW
/* 5491 */    MCD::OPC_FilterValue, 1, 163, 16, // Skip to: 9754
/* 5495 */    MCD::OPC_Decode, 223, 6, 76, // Opcode: SRAWo
/* 5499 */    MCD::OPC_FilterValue, 25, 155, 16, // Skip to: 9754
/* 5503 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5506 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5514
/* 5510 */    MCD::OPC_Decode, 221, 6, 77, // Opcode: SRAWI
/* 5514 */    MCD::OPC_FilterValue, 1, 140, 16, // Skip to: 9754
/* 5518 */    MCD::OPC_Decode, 222, 6, 77, // Opcode: SRAWIo
/* 5522 */    MCD::OPC_FilterValue, 13, 47, 1, // Skip to: 5829
/* 5526 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5529 */    MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 5580
/* 5533 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5536 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5550
/* 5540 */    MCD::OPC_CheckField, 11, 5, 0, 112, 16, // Skip to: 9754
/* 5546 */    MCD::OPC_Decode, 228, 1, 78, // Opcode: CNTLZW
/* 5550 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 5564
/* 5554 */    MCD::OPC_CheckField, 11, 5, 0, 98, 16, // Skip to: 9754
/* 5560 */    MCD::OPC_Decode, 231, 1, 78, // Opcode: CNTLZWo
/* 5564 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5572
/* 5568 */    MCD::OPC_Decode, 203, 6, 79, // Opcode: SLD
/* 5572 */    MCD::OPC_FilterValue, 3, 82, 16, // Skip to: 9754
/* 5576 */    MCD::OPC_Decode, 206, 6, 79, // Opcode: SLDo
/* 5580 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 5615
/* 5584 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5587 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5601
/* 5591 */    MCD::OPC_CheckField, 11, 5, 0, 61, 16, // Skip to: 9754
/* 5597 */    MCD::OPC_Decode, 226, 1, 80, // Opcode: CNTLZD
/* 5601 */    MCD::OPC_FilterValue, 1, 53, 16, // Skip to: 9754
/* 5605 */    MCD::OPC_CheckField, 11, 5, 0, 47, 16, // Skip to: 9754
/* 5611 */    MCD::OPC_Decode, 227, 1, 80, // Opcode: CNTLZDo
/* 5615 */    MCD::OPC_FilterValue, 11, 16, 0, // Skip to: 5635
/* 5619 */    MCD::OPC_CheckField, 11, 5, 0, 33, 16, // Skip to: 9754
/* 5625 */    MCD::OPC_CheckField, 0, 2, 0, 27, 16, // Skip to: 9754
/* 5631 */    MCD::OPC_Decode, 143, 6, 78, // Opcode: POPCNTW
/* 5635 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 5655
/* 5639 */    MCD::OPC_CheckField, 11, 5, 0, 13, 16, // Skip to: 9754
/* 5645 */    MCD::OPC_CheckField, 0, 2, 0, 7, 16, // Skip to: 9754
/* 5651 */    MCD::OPC_Decode, 142, 6, 80, // Opcode: POPCNTD
/* 5655 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 5678
/* 5659 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5662 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5670
/* 5666 */    MCD::OPC_Decode, 224, 6, 79, // Opcode: SRD
/* 5670 */    MCD::OPC_FilterValue, 3, 240, 15, // Skip to: 9754
/* 5674 */    MCD::OPC_Decode, 227, 6, 79, // Opcode: SRDo
/* 5678 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 5701
/* 5682 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5685 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5693
/* 5689 */    MCD::OPC_Decode, 216, 6, 79, // Opcode: SRAD
/* 5693 */    MCD::OPC_FilterValue, 1, 217, 15, // Skip to: 9754
/* 5697 */    MCD::OPC_Decode, 219, 6, 79, // Opcode: SRADo
/* 5701 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 5724
/* 5705 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 5708 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5716
/* 5712 */    MCD::OPC_Decode, 217, 6, 81, // Opcode: SRADI
/* 5716 */    MCD::OPC_FilterValue, 1, 194, 15, // Skip to: 9754
/* 5720 */    MCD::OPC_Decode, 218, 6, 81, // Opcode: SRADIo
/* 5724 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 5759
/* 5728 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5731 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5745
/* 5735 */    MCD::OPC_CheckField, 11, 5, 0, 173, 15, // Skip to: 9754
/* 5741 */    MCD::OPC_Decode, 210, 3, 78, // Opcode: EXTSH
/* 5745 */    MCD::OPC_FilterValue, 1, 165, 15, // Skip to: 9754
/* 5749 */    MCD::OPC_CheckField, 11, 5, 0, 159, 15, // Skip to: 9754
/* 5755 */    MCD::OPC_Decode, 214, 3, 78, // Opcode: EXTSHo
/* 5759 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 5794
/* 5763 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5766 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5780
/* 5770 */    MCD::OPC_CheckField, 11, 5, 0, 138, 15, // Skip to: 9754
/* 5776 */    MCD::OPC_Decode, 205, 3, 78, // Opcode: EXTSB
/* 5780 */    MCD::OPC_FilterValue, 1, 130, 15, // Skip to: 9754
/* 5784 */    MCD::OPC_CheckField, 11, 5, 0, 124, 15, // Skip to: 9754
/* 5790 */    MCD::OPC_Decode, 209, 3, 78, // Opcode: EXTSBo
/* 5794 */    MCD::OPC_FilterValue, 30, 116, 15, // Skip to: 9754
/* 5798 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5801 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5815
/* 5805 */    MCD::OPC_CheckField, 11, 5, 0, 103, 15, // Skip to: 9754
/* 5811 */    MCD::OPC_Decode, 215, 3, 80, // Opcode: EXTSW
/* 5815 */    MCD::OPC_FilterValue, 1, 95, 15, // Skip to: 9754
/* 5819 */    MCD::OPC_CheckField, 11, 5, 0, 89, 15, // Skip to: 9754
/* 5825 */    MCD::OPC_Decode, 218, 3, 80, // Opcode: EXTSWo
/* 5829 */    MCD::OPC_FilterValue, 14, 197, 0, // Skip to: 6030
/* 5833 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5836 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 5857
/* 5840 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5843 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5850
/* 5847 */    MCD::OPC_Decode, 71, 76, // Opcode: AND
/* 5850 */    MCD::OPC_FilterValue, 1, 60, 15, // Skip to: 9754
/* 5854 */    MCD::OPC_Decode, 86, 76, // Opcode: ANDo
/* 5857 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 5878
/* 5861 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5864 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5871
/* 5868 */    MCD::OPC_Decode, 74, 76, // Opcode: ANDC
/* 5871 */    MCD::OPC_FilterValue, 1, 39, 15, // Skip to: 9754
/* 5875 */    MCD::OPC_Decode, 77, 76, // Opcode: ANDCo
/* 5878 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 5901
/* 5882 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5885 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5893
/* 5889 */    MCD::OPC_Decode, 254, 5, 76, // Opcode: NOR
/* 5893 */    MCD::OPC_FilterValue, 1, 17, 15, // Skip to: 9754
/* 5897 */    MCD::OPC_Decode, 129, 6, 76, // Opcode: NORo
/* 5901 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 5924
/* 5905 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5908 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5916
/* 5912 */    MCD::OPC_Decode, 150, 2, 76, // Opcode: EQV
/* 5916 */    MCD::OPC_FilterValue, 1, 250, 14, // Skip to: 9754
/* 5920 */    MCD::OPC_Decode, 153, 2, 76, // Opcode: EQVo
/* 5924 */    MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 5947
/* 5928 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5931 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5939
/* 5935 */    MCD::OPC_Decode, 145, 9, 76, // Opcode: XOR
/* 5939 */    MCD::OPC_FilterValue, 1, 227, 14, // Skip to: 9754
/* 5943 */    MCD::OPC_Decode, 152, 9, 76, // Opcode: XORo
/* 5947 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 5970
/* 5951 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5954 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5962
/* 5958 */    MCD::OPC_Decode, 133, 6, 76, // Opcode: ORC
/* 5962 */    MCD::OPC_FilterValue, 1, 204, 14, // Skip to: 9754
/* 5966 */    MCD::OPC_Decode, 136, 6, 76, // Opcode: ORCo
/* 5970 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 5993
/* 5974 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5977 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5985
/* 5981 */    MCD::OPC_Decode, 130, 6, 76, // Opcode: OR
/* 5985 */    MCD::OPC_FilterValue, 1, 181, 14, // Skip to: 9754
/* 5989 */    MCD::OPC_Decode, 141, 6, 76, // Opcode: ORo
/* 5993 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 6016
/* 5997 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6000 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6008
/* 6004 */    MCD::OPC_Decode, 243, 5, 76, // Opcode: NAND
/* 6008 */    MCD::OPC_FilterValue, 1, 158, 14, // Skip to: 9754
/* 6012 */    MCD::OPC_Decode, 246, 5, 76, // Opcode: NANDo
/* 6016 */    MCD::OPC_FilterValue, 15, 150, 14, // Skip to: 9754
/* 6020 */    MCD::OPC_CheckField, 0, 2, 0, 144, 14, // Skip to: 9754
/* 6026 */    MCD::OPC_Decode, 216, 1, 76, // Opcode: CMPB
/* 6030 */    MCD::OPC_FilterValue, 15, 136, 14, // Skip to: 9754
/* 6034 */    MCD::OPC_CheckField, 23, 3, 0, 130, 14, // Skip to: 9754
/* 6040 */    MCD::OPC_CheckField, 6, 15, 1, 124, 14, // Skip to: 9754
/* 6046 */    MCD::OPC_CheckField, 0, 2, 0, 118, 14, // Skip to: 9754
/* 6052 */    MCD::OPC_Decode, 142, 9, 69, // Opcode: WAIT
/* 6056 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 6064
/* 6060 */    MCD::OPC_Decode, 162, 5, 82, // Opcode: LWZ
/* 6064 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 6072
/* 6068 */    MCD::OPC_Decode, 165, 5, 82, // Opcode: LWZU
/* 6072 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 6080
/* 6076 */    MCD::OPC_Decode, 217, 4, 82, // Opcode: LBZ
/* 6080 */    MCD::OPC_FilterValue, 35, 4, 0, // Skip to: 6088
/* 6084 */    MCD::OPC_Decode, 220, 4, 82, // Opcode: LBZU
/* 6088 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 6096
/* 6092 */    MCD::OPC_Decode, 148, 7, 82, // Opcode: STW
/* 6096 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 6104
/* 6100 */    MCD::OPC_Decode, 153, 7, 82, // Opcode: STWU
/* 6104 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 6112
/* 6108 */    MCD::OPC_Decode, 234, 6, 82, // Opcode: STB
/* 6112 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 6120
/* 6116 */    MCD::OPC_Decode, 237, 6, 82, // Opcode: STBU
/* 6120 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 6128
/* 6124 */    MCD::OPC_Decode, 132, 5, 82, // Opcode: LHZ
/* 6128 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 6136
/* 6132 */    MCD::OPC_Decode, 135, 5, 82, // Opcode: LHZU
/* 6136 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 6144
/* 6140 */    MCD::OPC_Decode, 250, 4, 82, // Opcode: LHA
/* 6144 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 6152
/* 6148 */    MCD::OPC_Decode, 252, 4, 82, // Opcode: LHAU
/* 6152 */    MCD::OPC_FilterValue, 44, 4, 0, // Skip to: 6160
/* 6156 */    MCD::OPC_Decode, 131, 7, 82, // Opcode: STH
/* 6160 */    MCD::OPC_FilterValue, 45, 4, 0, // Skip to: 6168
/* 6164 */    MCD::OPC_Decode, 135, 7, 82, // Opcode: STHU
/* 6168 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 6176
/* 6172 */    MCD::OPC_Decode, 145, 5, 82, // Opcode: LMW
/* 6176 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 6184
/* 6180 */    MCD::OPC_Decode, 141, 7, 82, // Opcode: STMW
/* 6184 */    MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 6192
/* 6188 */    MCD::OPC_Decode, 246, 4, 83, // Opcode: LFS
/* 6192 */    MCD::OPC_FilterValue, 49, 4, 0, // Skip to: 6200
/* 6196 */    MCD::OPC_Decode, 247, 4, 83, // Opcode: LFSU
/* 6200 */    MCD::OPC_FilterValue, 50, 4, 0, // Skip to: 6208
/* 6204 */    MCD::OPC_Decode, 240, 4, 84, // Opcode: LFD
/* 6208 */    MCD::OPC_FilterValue, 51, 4, 0, // Skip to: 6216
/* 6212 */    MCD::OPC_Decode, 241, 4, 84, // Opcode: LFDU
/* 6216 */    MCD::OPC_FilterValue, 52, 4, 0, // Skip to: 6224
/* 6220 */    MCD::OPC_Decode, 255, 6, 83, // Opcode: STFS
/* 6224 */    MCD::OPC_FilterValue, 53, 4, 0, // Skip to: 6232
/* 6228 */    MCD::OPC_Decode, 128, 7, 83, // Opcode: STFSU
/* 6232 */    MCD::OPC_FilterValue, 54, 4, 0, // Skip to: 6240
/* 6236 */    MCD::OPC_Decode, 250, 6, 84, // Opcode: STFD
/* 6240 */    MCD::OPC_FilterValue, 55, 4, 0, // Skip to: 6248
/* 6244 */    MCD::OPC_Decode, 251, 6, 84, // Opcode: STFDU
/* 6248 */    MCD::OPC_FilterValue, 58, 27, 0, // Skip to: 6279
/* 6252 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6255 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6263
/* 6259 */    MCD::OPC_Decode, 226, 4, 85, // Opcode: LD
/* 6263 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6271
/* 6267 */    MCD::OPC_Decode, 230, 4, 85, // Opcode: LDU
/* 6271 */    MCD::OPC_FilterValue, 2, 151, 13, // Skip to: 9754
/* 6275 */    MCD::OPC_Decode, 154, 5, 85, // Opcode: LWA
/* 6279 */    MCD::OPC_FilterValue, 59, 113, 1, // Skip to: 6652
/* 6283 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 6286 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 6321
/* 6290 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6293 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6307
/* 6297 */    MCD::OPC_CheckField, 16, 5, 0, 123, 13, // Skip to: 9754
/* 6303 */    MCD::OPC_Decode, 230, 3, 86, // Opcode: FCFIDS
/* 6307 */    MCD::OPC_FilterValue, 30, 115, 13, // Skip to: 9754
/* 6311 */    MCD::OPC_CheckField, 16, 5, 0, 109, 13, // Skip to: 9754
/* 6317 */    MCD::OPC_Decode, 233, 3, 86, // Opcode: FCFIDUS
/* 6321 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 6356
/* 6325 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6328 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6342
/* 6332 */    MCD::OPC_CheckField, 16, 5, 0, 88, 13, // Skip to: 9754
/* 6338 */    MCD::OPC_Decode, 231, 3, 86, // Opcode: FCFIDSo
/* 6342 */    MCD::OPC_FilterValue, 30, 80, 13, // Skip to: 9754
/* 6346 */    MCD::OPC_CheckField, 16, 5, 0, 74, 13, // Skip to: 9754
/* 6352 */    MCD::OPC_Decode, 234, 3, 86, // Opcode: FCFIDUSo
/* 6356 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 6370
/* 6360 */    MCD::OPC_CheckField, 6, 5, 0, 60, 13, // Skip to: 9754
/* 6366 */    MCD::OPC_Decode, 128, 4, 87, // Opcode: FDIVS
/* 6370 */    MCD::OPC_FilterValue, 37, 10, 0, // Skip to: 6384
/* 6374 */    MCD::OPC_CheckField, 6, 5, 0, 46, 13, // Skip to: 9754
/* 6380 */    MCD::OPC_Decode, 129, 4, 87, // Opcode: FDIVSo
/* 6384 */    MCD::OPC_FilterValue, 40, 10, 0, // Skip to: 6398
/* 6388 */    MCD::OPC_CheckField, 6, 5, 0, 32, 13, // Skip to: 9754
/* 6394 */    MCD::OPC_Decode, 196, 4, 87, // Opcode: FSUBS
/* 6398 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 6412
/* 6402 */    MCD::OPC_CheckField, 6, 5, 0, 18, 13, // Skip to: 9754
/* 6408 */    MCD::OPC_Decode, 197, 4, 87, // Opcode: FSUBSo
/* 6412 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 6426
/* 6416 */    MCD::OPC_CheckField, 6, 5, 0, 4, 13, // Skip to: 9754
/* 6422 */    MCD::OPC_Decode, 225, 3, 87, // Opcode: FADDS
/* 6426 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 6440
/* 6430 */    MCD::OPC_CheckField, 6, 5, 0, 246, 12, // Skip to: 9754
/* 6436 */    MCD::OPC_Decode, 226, 3, 87, // Opcode: FADDSo
/* 6440 */    MCD::OPC_FilterValue, 44, 16, 0, // Skip to: 6460
/* 6444 */    MCD::OPC_CheckField, 16, 5, 0, 232, 12, // Skip to: 9754
/* 6450 */    MCD::OPC_CheckField, 6, 5, 0, 226, 12, // Skip to: 9754
/* 6456 */    MCD::OPC_Decode, 192, 4, 88, // Opcode: FSQRTS
/* 6460 */    MCD::OPC_FilterValue, 45, 16, 0, // Skip to: 6480
/* 6464 */    MCD::OPC_CheckField, 16, 5, 0, 212, 12, // Skip to: 9754
/* 6470 */    MCD::OPC_CheckField, 6, 5, 0, 206, 12, // Skip to: 9754
/* 6476 */    MCD::OPC_Decode, 193, 4, 88, // Opcode: FSQRTSo
/* 6480 */    MCD::OPC_FilterValue, 48, 16, 0, // Skip to: 6500
/* 6484 */    MCD::OPC_CheckField, 16, 5, 0, 192, 12, // Skip to: 9754
/* 6490 */    MCD::OPC_CheckField, 6, 5, 0, 186, 12, // Skip to: 9754
/* 6496 */    MCD::OPC_Decode, 162, 4, 88, // Opcode: FRES
/* 6500 */    MCD::OPC_FilterValue, 49, 16, 0, // Skip to: 6520
/* 6504 */    MCD::OPC_CheckField, 16, 5, 0, 172, 12, // Skip to: 9754
/* 6510 */    MCD::OPC_CheckField, 6, 5, 0, 166, 12, // Skip to: 9754
/* 6516 */    MCD::OPC_Decode, 163, 4, 88, // Opcode: FRESo
/* 6520 */    MCD::OPC_FilterValue, 50, 10, 0, // Skip to: 6534
/* 6524 */    MCD::OPC_CheckField, 11, 5, 0, 152, 12, // Skip to: 9754
/* 6530 */    MCD::OPC_Decode, 142, 4, 89, // Opcode: FMULS
/* 6534 */    MCD::OPC_FilterValue, 51, 10, 0, // Skip to: 6548
/* 6538 */    MCD::OPC_CheckField, 11, 5, 0, 138, 12, // Skip to: 9754
/* 6544 */    MCD::OPC_Decode, 143, 4, 89, // Opcode: FMULSo
/* 6548 */    MCD::OPC_FilterValue, 52, 16, 0, // Skip to: 6568
/* 6552 */    MCD::OPC_CheckField, 16, 5, 0, 124, 12, // Skip to: 9754
/* 6558 */    MCD::OPC_CheckField, 6, 5, 0, 118, 12, // Skip to: 9754
/* 6564 */    MCD::OPC_Decode, 184, 4, 88, // Opcode: FRSQRTES
/* 6568 */    MCD::OPC_FilterValue, 53, 16, 0, // Skip to: 6588
/* 6572 */    MCD::OPC_CheckField, 16, 5, 0, 104, 12, // Skip to: 9754
/* 6578 */    MCD::OPC_CheckField, 6, 5, 0, 98, 12, // Skip to: 9754
/* 6584 */    MCD::OPC_Decode, 185, 4, 88, // Opcode: FRSQRTESo
/* 6588 */    MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 6596
/* 6592 */    MCD::OPC_Decode, 138, 4, 90, // Opcode: FMSUBS
/* 6596 */    MCD::OPC_FilterValue, 57, 4, 0, // Skip to: 6604
/* 6600 */    MCD::OPC_Decode, 139, 4, 90, // Opcode: FMSUBSo
/* 6604 */    MCD::OPC_FilterValue, 58, 4, 0, // Skip to: 6612
/* 6608 */    MCD::OPC_Decode, 132, 4, 90, // Opcode: FMADDS
/* 6612 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 6620
/* 6616 */    MCD::OPC_Decode, 133, 4, 90, // Opcode: FMADDSo
/* 6620 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 6628
/* 6624 */    MCD::OPC_Decode, 158, 4, 90, // Opcode: FNMSUBS
/* 6628 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 6636
/* 6632 */    MCD::OPC_Decode, 159, 4, 90, // Opcode: FNMSUBSo
/* 6636 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 6644
/* 6640 */    MCD::OPC_Decode, 154, 4, 90, // Opcode: FNMADDS
/* 6644 */    MCD::OPC_FilterValue, 63, 34, 12, // Skip to: 9754
/* 6648 */    MCD::OPC_Decode, 155, 4, 90, // Opcode: FNMADDSo
/* 6652 */    MCD::OPC_FilterValue, 60, 250, 7, // Skip to: 8698
/* 6656 */    MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 6659 */    MCD::OPC_FilterValue, 0, 16, 2, // Skip to: 7191
/* 6663 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6666 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 6689
/* 6670 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6673 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6681
/* 6677 */    MCD::OPC_Decode, 154, 9, 91, // Opcode: XSADDDP
/* 6681 */    MCD::OPC_FilterValue, 1, 253, 11, // Skip to: 9754
/* 6685 */    MCD::OPC_Decode, 167, 9, 92, // Opcode: XSMADDADP
/* 6689 */    MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 6712
/* 6693 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6696 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6704
/* 6700 */    MCD::OPC_Decode, 188, 9, 91, // Opcode: XSSUBDP
/* 6704 */    MCD::OPC_FilterValue, 1, 230, 11, // Skip to: 9754
/* 6708 */    MCD::OPC_Decode, 168, 9, 92, // Opcode: XSMADDMDP
/* 6712 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 6735
/* 6716 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6719 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6727
/* 6723 */    MCD::OPC_Decode, 173, 9, 91, // Opcode: XSMULDP
/* 6727 */    MCD::OPC_FilterValue, 1, 207, 11, // Skip to: 9754
/* 6731 */    MCD::OPC_Decode, 171, 9, 92, // Opcode: XSMSUBADP
/* 6735 */    MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 6758
/* 6739 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6742 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6750
/* 6746 */    MCD::OPC_Decode, 166, 9, 91, // Opcode: XSDIVDP
/* 6750 */    MCD::OPC_FilterValue, 1, 184, 11, // Skip to: 9754
/* 6754 */    MCD::OPC_Decode, 172, 9, 92, // Opcode: XSMSUBMDP
/* 6758 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 6781
/* 6762 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6765 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6773
/* 6769 */    MCD::OPC_Decode, 194, 9, 93, // Opcode: XVADDSP
/* 6773 */    MCD::OPC_FilterValue, 1, 161, 11, // Skip to: 9754
/* 6777 */    MCD::OPC_Decode, 230, 9, 94, // Opcode: XVMADDASP
/* 6781 */    MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 6804
/* 6785 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6788 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6796
/* 6792 */    MCD::OPC_Decode, 144, 10, 93, // Opcode: XVSUBSP
/* 6796 */    MCD::OPC_FilterValue, 1, 138, 11, // Skip to: 9754
/* 6800 */    MCD::OPC_Decode, 232, 9, 94, // Opcode: XVMADDMSP
/* 6804 */    MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 6827
/* 6808 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6811 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6819
/* 6815 */    MCD::OPC_Decode, 242, 9, 93, // Opcode: XVMULSP
/* 6819 */    MCD::OPC_FilterValue, 1, 115, 11, // Skip to: 9754
/* 6823 */    MCD::OPC_Decode, 238, 9, 94, // Opcode: XVMSUBASP
/* 6827 */    MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 6850
/* 6831 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6834 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6842
/* 6838 */    MCD::OPC_Decode, 228, 9, 93, // Opcode: XVDIVSP
/* 6842 */    MCD::OPC_FilterValue, 1, 92, 11, // Skip to: 9754
/* 6846 */    MCD::OPC_Decode, 240, 9, 94, // Opcode: XVMSUBMSP
/* 6850 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 6873
/* 6854 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6857 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6865
/* 6861 */    MCD::OPC_Decode, 193, 9, 93, // Opcode: XVADDDP
/* 6865 */    MCD::OPC_FilterValue, 1, 69, 11, // Skip to: 9754
/* 6869 */    MCD::OPC_Decode, 229, 9, 94, // Opcode: XVMADDADP
/* 6873 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 6896
/* 6877 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6880 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6888
/* 6884 */    MCD::OPC_Decode, 143, 10, 93, // Opcode: XVSUBDP
/* 6888 */    MCD::OPC_FilterValue, 1, 46, 11, // Skip to: 9754
/* 6892 */    MCD::OPC_Decode, 231, 9, 94, // Opcode: XVMADDMDP
/* 6896 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 6919
/* 6900 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6903 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6911
/* 6907 */    MCD::OPC_Decode, 241, 9, 93, // Opcode: XVMULDP
/* 6911 */    MCD::OPC_FilterValue, 1, 23, 11, // Skip to: 9754
/* 6915 */    MCD::OPC_Decode, 237, 9, 94, // Opcode: XVMSUBADP
/* 6919 */    MCD::OPC_FilterValue, 15, 19, 0, // Skip to: 6942
/* 6923 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6926 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6934
/* 6930 */    MCD::OPC_Decode, 227, 9, 93, // Opcode: XVDIVDP
/* 6934 */    MCD::OPC_FilterValue, 1, 0, 11, // Skip to: 9754
/* 6938 */    MCD::OPC_Decode, 239, 9, 94, // Opcode: XVMSUBMDP
/* 6942 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 6965
/* 6946 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6949 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6957
/* 6953 */    MCD::OPC_Decode, 169, 9, 91, // Opcode: XSMAXDP
/* 6957 */    MCD::OPC_FilterValue, 1, 233, 10, // Skip to: 9754
/* 6961 */    MCD::OPC_Decode, 176, 9, 92, // Opcode: XSNMADDADP
/* 6965 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 6988
/* 6969 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6972 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6980
/* 6976 */    MCD::OPC_Decode, 170, 9, 91, // Opcode: XSMINDP
/* 6980 */    MCD::OPC_FilterValue, 1, 210, 10, // Skip to: 9754
/* 6984 */    MCD::OPC_Decode, 177, 9, 92, // Opcode: XSNMADDMDP
/* 6988 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 7011
/* 6992 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6995 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7003
/* 6999 */    MCD::OPC_Decode, 157, 9, 91, // Opcode: XSCPSGNDP
/* 7003 */    MCD::OPC_FilterValue, 1, 187, 10, // Skip to: 9754
/* 7007 */    MCD::OPC_Decode, 178, 9, 92, // Opcode: XSNMSUBADP
/* 7011 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 7025
/* 7015 */    MCD::OPC_CheckField, 3, 1, 1, 173, 10, // Skip to: 9754
/* 7021 */    MCD::OPC_Decode, 179, 9, 92, // Opcode: XSNMSUBMDP
/* 7025 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 7048
/* 7029 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7032 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7040
/* 7036 */    MCD::OPC_Decode, 234, 9, 93, // Opcode: XVMAXSP
/* 7040 */    MCD::OPC_FilterValue, 1, 150, 10, // Skip to: 9754
/* 7044 */    MCD::OPC_Decode, 248, 9, 94, // Opcode: XVNMADDASP
/* 7048 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 7071
/* 7052 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7055 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7063
/* 7059 */    MCD::OPC_Decode, 236, 9, 93, // Opcode: XVMINSP
/* 7063 */    MCD::OPC_FilterValue, 1, 127, 10, // Skip to: 9754
/* 7067 */    MCD::OPC_Decode, 250, 9, 94, // Opcode: XVNMADDMSP
/* 7071 */    MCD::OPC_FilterValue, 26, 19, 0, // Skip to: 7094
/* 7075 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7078 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7086
/* 7082 */    MCD::OPC_Decode, 208, 9, 93, // Opcode: XVCPSGNSP
/* 7086 */    MCD::OPC_FilterValue, 1, 104, 10, // Skip to: 9754
/* 7090 */    MCD::OPC_Decode, 252, 9, 94, // Opcode: XVNMSUBASP
/* 7094 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 7108
/* 7098 */    MCD::OPC_CheckField, 3, 1, 1, 90, 10, // Skip to: 9754
/* 7104 */    MCD::OPC_Decode, 254, 9, 94, // Opcode: XVNMSUBMSP
/* 7108 */    MCD::OPC_FilterValue, 28, 19, 0, // Skip to: 7131
/* 7112 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7115 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7123
/* 7119 */    MCD::OPC_Decode, 233, 9, 93, // Opcode: XVMAXDP
/* 7123 */    MCD::OPC_FilterValue, 1, 67, 10, // Skip to: 9754
/* 7127 */    MCD::OPC_Decode, 247, 9, 94, // Opcode: XVNMADDADP
/* 7131 */    MCD::OPC_FilterValue, 29, 19, 0, // Skip to: 7154
/* 7135 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7138 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7146
/* 7142 */    MCD::OPC_Decode, 235, 9, 93, // Opcode: XVMINDP
/* 7146 */    MCD::OPC_FilterValue, 1, 44, 10, // Skip to: 9754
/* 7150 */    MCD::OPC_Decode, 249, 9, 94, // Opcode: XVNMADDMDP
/* 7154 */    MCD::OPC_FilterValue, 30, 19, 0, // Skip to: 7177
/* 7158 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7161 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7169
/* 7165 */    MCD::OPC_Decode, 207, 9, 93, // Opcode: XVCPSGNDP
/* 7169 */    MCD::OPC_FilterValue, 1, 21, 10, // Skip to: 9754
/* 7173 */    MCD::OPC_Decode, 251, 9, 94, // Opcode: XVNMSUBADP
/* 7177 */    MCD::OPC_FilterValue, 31, 13, 10, // Skip to: 9754
/* 7181 */    MCD::OPC_CheckField, 3, 1, 1, 7, 10, // Skip to: 9754
/* 7187 */    MCD::OPC_Decode, 253, 9, 94, // Opcode: XVNMSUBMDP
/* 7191 */    MCD::OPC_FilterValue, 1, 92, 1, // Skip to: 7543
/* 7195 */    MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 7198 */    MCD::OPC_FilterValue, 0, 100, 0, // Skip to: 7302
/* 7202 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7205 */    MCD::OPC_FilterValue, 0, 34, 0, // Skip to: 7243
/* 7209 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 7212 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7220
/* 7216 */    MCD::OPC_Decode, 159, 10, 95, // Opcode: XXSLDWI
/* 7220 */    MCD::OPC_FilterValue, 1, 226, 9, // Skip to: 9754
/* 7224 */    MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 7227 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7235
/* 7231 */    MCD::OPC_Decode, 149, 10, 93, // Opcode: XXLAND
/* 7235 */    MCD::OPC_FilterValue, 1, 211, 9, // Skip to: 9754
/* 7239 */    MCD::OPC_Decode, 151, 10, 93, // Opcode: XXLNOR
/* 7243 */    MCD::OPC_FilterValue, 1, 203, 9, // Skip to: 9754
/* 7247 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 7250 */    MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 7270
/* 7254 */    MCD::OPC_CheckField, 21, 2, 0, 190, 9, // Skip to: 9754
/* 7260 */    MCD::OPC_CheckField, 0, 1, 0, 184, 9, // Skip to: 9754
/* 7266 */    MCD::OPC_Decode, 156, 9, 96, // Opcode: XSCMPUDP
/* 7270 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7278
/* 7274 */    MCD::OPC_Decode, 197, 9, 93, // Opcode: XVCMPEQSP
/* 7278 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 7286
/* 7282 */    MCD::OPC_Decode, 195, 9, 93, // Opcode: XVCMPEQDP
/* 7286 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 7294
/* 7290 */    MCD::OPC_Decode, 198, 9, 93, // Opcode: XVCMPEQSPo
/* 7294 */    MCD::OPC_FilterValue, 7, 152, 9, // Skip to: 9754
/* 7298 */    MCD::OPC_Decode, 196, 9, 93, // Opcode: XVCMPEQDPo
/* 7302 */    MCD::OPC_FilterValue, 1, 91, 0, // Skip to: 7397
/* 7306 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7309 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 7338
/* 7313 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 7316 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7324
/* 7320 */    MCD::OPC_Decode, 157, 10, 95, // Opcode: XXPERMDI
/* 7324 */    MCD::OPC_FilterValue, 1, 122, 9, // Skip to: 9754
/* 7328 */    MCD::OPC_CheckField, 8, 2, 0, 116, 9, // Skip to: 9754
/* 7334 */    MCD::OPC_Decode, 150, 10, 93, // Opcode: XXLANDC
/* 7338 */    MCD::OPC_FilterValue, 1, 108, 9, // Skip to: 9754
/* 7342 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 7345 */    MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 7365
/* 7349 */    MCD::OPC_CheckField, 21, 2, 0, 95, 9, // Skip to: 9754
/* 7355 */    MCD::OPC_CheckField, 0, 1, 0, 89, 9, // Skip to: 9754
/* 7361 */    MCD::OPC_Decode, 155, 9, 96, // Opcode: XSCMPODP
/* 7365 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7373
/* 7369 */    MCD::OPC_Decode, 205, 9, 93, // Opcode: XVCMPGTSP
/* 7373 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 7381
/* 7377 */    MCD::OPC_Decode, 203, 9, 93, // Opcode: XVCMPGTDP
/* 7381 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 7389
/* 7385 */    MCD::OPC_Decode, 206, 9, 93, // Opcode: XVCMPGTSPo
/* 7389 */    MCD::OPC_FilterValue, 7, 57, 9, // Skip to: 9754
/* 7393 */    MCD::OPC_Decode, 204, 9, 93, // Opcode: XVCMPGTDPo
/* 7397 */    MCD::OPC_FilterValue, 2, 122, 0, // Skip to: 7523
/* 7401 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 7404 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7418
/* 7408 */    MCD::OPC_CheckField, 3, 1, 0, 36, 9, // Skip to: 9754
/* 7414 */    MCD::OPC_Decode, 155, 10, 93, // Opcode: XXMRGHW
/* 7418 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7432
/* 7422 */    MCD::OPC_CheckField, 3, 1, 0, 22, 9, // Skip to: 9754
/* 7428 */    MCD::OPC_Decode, 156, 10, 93, // Opcode: XXMRGLW
/* 7432 */    MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 7467
/* 7436 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7439 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 7459
/* 7443 */    MCD::OPC_CheckField, 18, 3, 0, 1, 9, // Skip to: 9754
/* 7449 */    MCD::OPC_CheckField, 2, 1, 0, 251, 8, // Skip to: 9754
/* 7455 */    MCD::OPC_Decode, 160, 10, 97, // Opcode: XXSPLTW
/* 7459 */    MCD::OPC_FilterValue, 1, 243, 8, // Skip to: 9754
/* 7463 */    MCD::OPC_Decode, 201, 9, 93, // Opcode: XVCMPGESP
/* 7467 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 7481
/* 7471 */    MCD::OPC_CheckField, 3, 1, 1, 229, 8, // Skip to: 9754
/* 7477 */    MCD::OPC_Decode, 199, 9, 93, // Opcode: XVCMPGEDP
/* 7481 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 7495
/* 7485 */    MCD::OPC_CheckField, 3, 1, 0, 215, 8, // Skip to: 9754
/* 7491 */    MCD::OPC_Decode, 152, 10, 93, // Opcode: XXLOR
/* 7495 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 7509
/* 7499 */    MCD::OPC_CheckField, 3, 1, 1, 201, 8, // Skip to: 9754
/* 7505 */    MCD::OPC_Decode, 202, 9, 93, // Opcode: XVCMPGESPo
/* 7509 */    MCD::OPC_FilterValue, 7, 193, 8, // Skip to: 9754
/* 7513 */    MCD::OPC_CheckField, 3, 1, 1, 187, 8, // Skip to: 9754
/* 7519 */    MCD::OPC_Decode, 200, 9, 93, // Opcode: XVCMPGEDPo
/* 7523 */    MCD::OPC_FilterValue, 3, 179, 8, // Skip to: 9754
/* 7527 */    MCD::OPC_CheckField, 8, 3, 4, 173, 8, // Skip to: 9754
/* 7533 */    MCD::OPC_CheckField, 3, 1, 0, 167, 8, // Skip to: 9754
/* 7539 */    MCD::OPC_Decode, 154, 10, 93, // Opcode: XXLXOR
/* 7543 */    MCD::OPC_FilterValue, 2, 119, 4, // Skip to: 8690
/* 7547 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 7550 */    MCD::OPC_FilterValue, 4, 59, 0, // Skip to: 7613
/* 7554 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7557 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7571
/* 7561 */    MCD::OPC_CheckField, 16, 5, 0, 139, 8, // Skip to: 9754
/* 7567 */    MCD::OPC_Decode, 162, 9, 98, // Opcode: XSCVDPUXWS
/* 7571 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7585
/* 7575 */    MCD::OPC_CheckField, 16, 5, 0, 125, 8, // Skip to: 9754
/* 7581 */    MCD::OPC_Decode, 180, 9, 98, // Opcode: XSRDPI
/* 7585 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 7599
/* 7589 */    MCD::OPC_CheckField, 16, 5, 0, 111, 8, // Skip to: 9754
/* 7595 */    MCD::OPC_Decode, 186, 9, 98, // Opcode: XSRSQRTEDP
/* 7599 */    MCD::OPC_FilterValue, 3, 103, 8, // Skip to: 9754
/* 7603 */    MCD::OPC_CheckField, 16, 5, 0, 97, 8, // Skip to: 9754
/* 7609 */    MCD::OPC_Decode, 187, 9, 98, // Opcode: XSSQRTDP
/* 7613 */    MCD::OPC_FilterValue, 5, 45, 0, // Skip to: 7662
/* 7617 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7620 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7634
/* 7624 */    MCD::OPC_CheckField, 16, 5, 0, 76, 8, // Skip to: 9754
/* 7630 */    MCD::OPC_Decode, 160, 9, 98, // Opcode: XSCVDPSXWS
/* 7634 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7648
/* 7638 */    MCD::OPC_CheckField, 16, 5, 0, 62, 8, // Skip to: 9754
/* 7644 */    MCD::OPC_Decode, 184, 9, 98, // Opcode: XSRDPIZ
/* 7648 */    MCD::OPC_FilterValue, 2, 54, 8, // Skip to: 9754
/* 7652 */    MCD::OPC_CheckField, 16, 5, 0, 48, 8, // Skip to: 9754
/* 7658 */    MCD::OPC_Decode, 185, 9, 98, // Opcode: XSREDP
/* 7662 */    MCD::OPC_FilterValue, 6, 51, 0, // Skip to: 7717
/* 7666 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7669 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7683
/* 7673 */    MCD::OPC_CheckField, 16, 5, 0, 27, 8, // Skip to: 9754
/* 7679 */    MCD::OPC_Decode, 183, 9, 98, // Opcode: XSRDPIP
/* 7683 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 7703
/* 7687 */    MCD::OPC_CheckField, 16, 7, 0, 13, 8, // Skip to: 9754
/* 7693 */    MCD::OPC_CheckField, 0, 1, 0, 7, 8, // Skip to: 9754
/* 7699 */    MCD::OPC_Decode, 190, 9, 99, // Opcode: XSTSQRTDP
/* 7703 */    MCD::OPC_FilterValue, 3, 255, 7, // Skip to: 9754
/* 7707 */    MCD::OPC_CheckField, 16, 5, 0, 249, 7, // Skip to: 9754
/* 7713 */    MCD::OPC_Decode, 181, 9, 98, // Opcode: XSRDPIC
/* 7717 */    MCD::OPC_FilterValue, 7, 43, 0, // Skip to: 7764
/* 7721 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7724 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 7744
/* 7728 */    MCD::OPC_CheckField, 16, 5, 0, 228, 7, // Skip to: 9754
/* 7734 */    MCD::OPC_CheckField, 2, 1, 1, 222, 7, // Skip to: 9754
/* 7740 */    MCD::OPC_Decode, 182, 9, 98, // Opcode: XSRDPIM
/* 7744 */    MCD::OPC_FilterValue, 1, 214, 7, // Skip to: 9754
/* 7748 */    MCD::OPC_CheckField, 21, 2, 0, 208, 7, // Skip to: 9754
/* 7754 */    MCD::OPC_CheckField, 0, 1, 0, 202, 7, // Skip to: 9754
/* 7760 */    MCD::OPC_Decode, 189, 9, 96, // Opcode: XSTDIVDP
/* 7764 */    MCD::OPC_FilterValue, 8, 59, 0, // Skip to: 7827
/* 7768 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7771 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7785
/* 7775 */    MCD::OPC_CheckField, 16, 5, 0, 181, 7, // Skip to: 9754
/* 7781 */    MCD::OPC_Decode, 218, 9, 100, // Opcode: XVCVSPUXWS
/* 7785 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7799
/* 7789 */    MCD::OPC_CheckField, 16, 5, 0, 167, 7, // Skip to: 9754
/* 7795 */    MCD::OPC_Decode, 134, 10, 100, // Opcode: XVRSPI
/* 7799 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 7813
/* 7803 */    MCD::OPC_CheckField, 16, 5, 0, 153, 7, // Skip to: 9754
/* 7809 */    MCD::OPC_Decode, 140, 10, 100, // Opcode: XVRSQRTESP
/* 7813 */    MCD::OPC_FilterValue, 3, 145, 7, // Skip to: 9754
/* 7817 */    MCD::OPC_CheckField, 16, 5, 0, 139, 7, // Skip to: 9754
/* 7823 */    MCD::OPC_Decode, 142, 10, 100, // Opcode: XVSQRTSP
/* 7827 */    MCD::OPC_FilterValue, 9, 45, 0, // Skip to: 7876
/* 7831 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7834 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7848
/* 7838 */    MCD::OPC_CheckField, 16, 5, 0, 118, 7, // Skip to: 9754
/* 7844 */    MCD::OPC_Decode, 216, 9, 100, // Opcode: XVCVSPSXWS
/* 7848 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7862
/* 7852 */    MCD::OPC_CheckField, 16, 5, 0, 104, 7, // Skip to: 9754
/* 7858 */    MCD::OPC_Decode, 138, 10, 100, // Opcode: XVRSPIZ
/* 7862 */    MCD::OPC_FilterValue, 2, 96, 7, // Skip to: 9754
/* 7866 */    MCD::OPC_CheckField, 16, 5, 0, 90, 7, // Skip to: 9754
/* 7872 */    MCD::OPC_Decode, 133, 10, 100, // Opcode: XVRESP
/* 7876 */    MCD::OPC_FilterValue, 10, 65, 0, // Skip to: 7945
/* 7880 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7883 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7897
/* 7887 */    MCD::OPC_CheckField, 16, 5, 0, 69, 7, // Skip to: 9754
/* 7893 */    MCD::OPC_Decode, 226, 9, 100, // Opcode: XVCVUXWSP
/* 7897 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7911
/* 7901 */    MCD::OPC_CheckField, 16, 5, 0, 55, 7, // Skip to: 9754
/* 7907 */    MCD::OPC_Decode, 137, 10, 100, // Opcode: XVRSPIP
/* 7911 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 7931
/* 7915 */    MCD::OPC_CheckField, 16, 7, 0, 41, 7, // Skip to: 9754
/* 7921 */    MCD::OPC_CheckField, 0, 1, 0, 35, 7, // Skip to: 9754
/* 7927 */    MCD::OPC_Decode, 148, 10, 101, // Opcode: XVTSQRTSP
/* 7931 */    MCD::OPC_FilterValue, 3, 27, 7, // Skip to: 9754
/* 7935 */    MCD::OPC_CheckField, 16, 5, 0, 21, 7, // Skip to: 9754
/* 7941 */    MCD::OPC_Decode, 135, 10, 100, // Opcode: XVRSPIC
/* 7945 */    MCD::OPC_FilterValue, 11, 58, 0, // Skip to: 8007
/* 7949 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7952 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 7987
/* 7956 */    MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 7959 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7973
/* 7963 */    MCD::OPC_CheckField, 16, 5, 0, 249, 6, // Skip to: 9754
/* 7969 */    MCD::OPC_Decode, 222, 9, 100, // Opcode: XVCVSXWSP
/* 7973 */    MCD::OPC_FilterValue, 1, 241, 6, // Skip to: 9754
/* 7977 */    MCD::OPC_CheckField, 16, 5, 0, 235, 6, // Skip to: 9754
/* 7983 */    MCD::OPC_Decode, 136, 10, 100, // Opcode: XVRSPIM
/* 7987 */    MCD::OPC_FilterValue, 1, 227, 6, // Skip to: 9754
/* 7991 */    MCD::OPC_CheckField, 21, 2, 0, 221, 6, // Skip to: 9754
/* 7997 */    MCD::OPC_CheckField, 0, 1, 0, 215, 6, // Skip to: 9754
/* 8003 */    MCD::OPC_Decode, 146, 10, 102, // Opcode: XVTDIVSP
/* 8007 */    MCD::OPC_FilterValue, 12, 59, 0, // Skip to: 8070
/* 8011 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8014 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8028
/* 8018 */    MCD::OPC_CheckField, 16, 5, 0, 194, 6, // Skip to: 9754
/* 8024 */    MCD::OPC_Decode, 213, 9, 100, // Opcode: XVCVDPUXWS
/* 8028 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8042
/* 8032 */    MCD::OPC_CheckField, 16, 5, 0, 180, 6, // Skip to: 9754
/* 8038 */    MCD::OPC_Decode, 255, 9, 100, // Opcode: XVRDPI
/* 8042 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 8056
/* 8046 */    MCD::OPC_CheckField, 16, 5, 0, 166, 6, // Skip to: 9754
/* 8052 */    MCD::OPC_Decode, 139, 10, 100, // Opcode: XVRSQRTEDP
/* 8056 */    MCD::OPC_FilterValue, 3, 158, 6, // Skip to: 9754
/* 8060 */    MCD::OPC_CheckField, 16, 5, 0, 152, 6, // Skip to: 9754
/* 8066 */    MCD::OPC_Decode, 141, 10, 100, // Opcode: XVSQRTDP
/* 8070 */    MCD::OPC_FilterValue, 13, 45, 0, // Skip to: 8119
/* 8074 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8077 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8091
/* 8081 */    MCD::OPC_CheckField, 16, 5, 0, 131, 6, // Skip to: 9754
/* 8087 */    MCD::OPC_Decode, 211, 9, 100, // Opcode: XVCVDPSXWS
/* 8091 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8105
/* 8095 */    MCD::OPC_CheckField, 16, 5, 0, 117, 6, // Skip to: 9754
/* 8101 */    MCD::OPC_Decode, 131, 10, 100, // Opcode: XVRDPIZ
/* 8105 */    MCD::OPC_FilterValue, 2, 109, 6, // Skip to: 9754
/* 8109 */    MCD::OPC_CheckField, 16, 5, 0, 103, 6, // Skip to: 9754
/* 8115 */    MCD::OPC_Decode, 132, 10, 100, // Opcode: XVREDP
/* 8119 */    MCD::OPC_FilterValue, 14, 65, 0, // Skip to: 8188
/* 8123 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8126 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8140
/* 8130 */    MCD::OPC_CheckField, 16, 5, 0, 82, 6, // Skip to: 9754
/* 8136 */    MCD::OPC_Decode, 225, 9, 100, // Opcode: XVCVUXWDP
/* 8140 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8154
/* 8144 */    MCD::OPC_CheckField, 16, 5, 0, 68, 6, // Skip to: 9754
/* 8150 */    MCD::OPC_Decode, 130, 10, 100, // Opcode: XVRDPIP
/* 8154 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 8174
/* 8158 */    MCD::OPC_CheckField, 16, 7, 0, 54, 6, // Skip to: 9754
/* 8164 */    MCD::OPC_CheckField, 0, 1, 0, 48, 6, // Skip to: 9754
/* 8170 */    MCD::OPC_Decode, 147, 10, 101, // Opcode: XVTSQRTDP
/* 8174 */    MCD::OPC_FilterValue, 3, 40, 6, // Skip to: 9754
/* 8178 */    MCD::OPC_CheckField, 16, 5, 0, 34, 6, // Skip to: 9754
/* 8184 */    MCD::OPC_Decode, 128, 10, 100, // Opcode: XVRDPIC
/* 8188 */    MCD::OPC_FilterValue, 15, 58, 0, // Skip to: 8250
/* 8192 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 8195 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 8230
/* 8199 */    MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 8202 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8216
/* 8206 */    MCD::OPC_CheckField, 16, 5, 0, 6, 6, // Skip to: 9754
/* 8212 */    MCD::OPC_Decode, 221, 9, 100, // Opcode: XVCVSXWDP
/* 8216 */    MCD::OPC_FilterValue, 1, 254, 5, // Skip to: 9754
/* 8220 */    MCD::OPC_CheckField, 16, 5, 0, 248, 5, // Skip to: 9754
/* 8226 */    MCD::OPC_Decode, 129, 10, 100, // Opcode: XVRDPIM
/* 8230 */    MCD::OPC_FilterValue, 1, 240, 5, // Skip to: 9754
/* 8234 */    MCD::OPC_CheckField, 21, 2, 0, 234, 5, // Skip to: 9754
/* 8240 */    MCD::OPC_CheckField, 0, 1, 0, 228, 5, // Skip to: 9754
/* 8246 */    MCD::OPC_Decode, 145, 10, 102, // Opcode: XVTDIVDP
/* 8250 */    MCD::OPC_FilterValue, 16, 16, 0, // Skip to: 8270
/* 8254 */    MCD::OPC_CheckField, 16, 5, 0, 214, 5, // Skip to: 9754
/* 8260 */    MCD::OPC_CheckField, 2, 2, 1, 208, 5, // Skip to: 9754
/* 8266 */    MCD::OPC_Decode, 158, 9, 98, // Opcode: XSCVDPSP
/* 8270 */    MCD::OPC_FilterValue, 20, 31, 0, // Skip to: 8305
/* 8274 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8277 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8291
/* 8281 */    MCD::OPC_CheckField, 16, 5, 0, 187, 5, // Skip to: 9754
/* 8287 */    MCD::OPC_Decode, 161, 9, 98, // Opcode: XSCVDPUXDS
/* 8291 */    MCD::OPC_FilterValue, 1, 179, 5, // Skip to: 9754
/* 8295 */    MCD::OPC_CheckField, 16, 5, 0, 173, 5, // Skip to: 9754
/* 8301 */    MCD::OPC_Decode, 163, 9, 98, // Opcode: XSCVSPDP
/* 8305 */    MCD::OPC_FilterValue, 21, 31, 0, // Skip to: 8340
/* 8309 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8312 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8326
/* 8316 */    MCD::OPC_CheckField, 16, 5, 0, 152, 5, // Skip to: 9754
/* 8322 */    MCD::OPC_Decode, 159, 9, 98, // Opcode: XSCVDPSXDS
/* 8326 */    MCD::OPC_FilterValue, 1, 144, 5, // Skip to: 9754
/* 8330 */    MCD::OPC_CheckField, 16, 5, 0, 138, 5, // Skip to: 9754
/* 8336 */    MCD::OPC_Decode, 153, 9, 98, // Opcode: XSABSDP
/* 8340 */    MCD::OPC_FilterValue, 22, 31, 0, // Skip to: 8375
/* 8344 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8347 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8361
/* 8351 */    MCD::OPC_CheckField, 16, 5, 0, 117, 5, // Skip to: 9754
/* 8357 */    MCD::OPC_Decode, 165, 9, 98, // Opcode: XSCVUXDDP
/* 8361 */    MCD::OPC_FilterValue, 1, 109, 5, // Skip to: 9754
/* 8365 */    MCD::OPC_CheckField, 16, 5, 0, 103, 5, // Skip to: 9754
/* 8371 */    MCD::OPC_Decode, 174, 9, 98, // Opcode: XSNABSDP
/* 8375 */    MCD::OPC_FilterValue, 23, 31, 0, // Skip to: 8410
/* 8379 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8382 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8396
/* 8386 */    MCD::OPC_CheckField, 16, 5, 0, 82, 5, // Skip to: 9754
/* 8392 */    MCD::OPC_Decode, 164, 9, 98, // Opcode: XSCVSXDDP
/* 8396 */    MCD::OPC_FilterValue, 1, 74, 5, // Skip to: 9754
/* 8400 */    MCD::OPC_CheckField, 16, 5, 0, 68, 5, // Skip to: 9754
/* 8406 */    MCD::OPC_Decode, 175, 9, 98, // Opcode: XSNEGDP
/* 8410 */    MCD::OPC_FilterValue, 24, 31, 0, // Skip to: 8445
/* 8414 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8417 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8431
/* 8421 */    MCD::OPC_CheckField, 16, 5, 0, 47, 5, // Skip to: 9754
/* 8427 */    MCD::OPC_Decode, 217, 9, 100, // Opcode: XVCVSPUXDS
/* 8431 */    MCD::OPC_FilterValue, 1, 39, 5, // Skip to: 9754
/* 8435 */    MCD::OPC_CheckField, 16, 5, 0, 33, 5, // Skip to: 9754
/* 8441 */    MCD::OPC_Decode, 209, 9, 100, // Opcode: XVCVDPSP
/* 8445 */    MCD::OPC_FilterValue, 25, 31, 0, // Skip to: 8480
/* 8449 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8452 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8466
/* 8456 */    MCD::OPC_CheckField, 16, 5, 0, 12, 5, // Skip to: 9754
/* 8462 */    MCD::OPC_Decode, 215, 9, 100, // Opcode: XVCVSPSXDS
/* 8466 */    MCD::OPC_FilterValue, 1, 4, 5, // Skip to: 9754
/* 8470 */    MCD::OPC_CheckField, 16, 5, 0, 254, 4, // Skip to: 9754
/* 8476 */    MCD::OPC_Decode, 192, 9, 100, // Opcode: XVABSSP
/* 8480 */    MCD::OPC_FilterValue, 26, 31, 0, // Skip to: 8515
/* 8484 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8487 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8501
/* 8491 */    MCD::OPC_CheckField, 16, 5, 0, 233, 4, // Skip to: 9754
/* 8497 */    MCD::OPC_Decode, 224, 9, 100, // Opcode: XVCVUXDSP
/* 8501 */    MCD::OPC_FilterValue, 1, 225, 4, // Skip to: 9754
/* 8505 */    MCD::OPC_CheckField, 16, 5, 0, 219, 4, // Skip to: 9754
/* 8511 */    MCD::OPC_Decode, 244, 9, 100, // Opcode: XVNABSSP
/* 8515 */    MCD::OPC_FilterValue, 27, 31, 0, // Skip to: 8550
/* 8519 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8522 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8536
/* 8526 */    MCD::OPC_CheckField, 16, 5, 0, 198, 4, // Skip to: 9754
/* 8532 */    MCD::OPC_Decode, 220, 9, 100, // Opcode: XVCVSXDSP
/* 8536 */    MCD::OPC_FilterValue, 1, 190, 4, // Skip to: 9754
/* 8540 */    MCD::OPC_CheckField, 16, 5, 0, 184, 4, // Skip to: 9754
/* 8546 */    MCD::OPC_Decode, 246, 9, 100, // Opcode: XVNEGSP
/* 8550 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 8585
/* 8554 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8557 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8571
/* 8561 */    MCD::OPC_CheckField, 16, 5, 0, 163, 4, // Skip to: 9754
/* 8567 */    MCD::OPC_Decode, 212, 9, 100, // Opcode: XVCVDPUXDS
/* 8571 */    MCD::OPC_FilterValue, 1, 155, 4, // Skip to: 9754
/* 8575 */    MCD::OPC_CheckField, 16, 5, 0, 149, 4, // Skip to: 9754
/* 8581 */    MCD::OPC_Decode, 214, 9, 100, // Opcode: XVCVSPDP
/* 8585 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 8620
/* 8589 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8592 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8606
/* 8596 */    MCD::OPC_CheckField, 16, 5, 0, 128, 4, // Skip to: 9754
/* 8602 */    MCD::OPC_Decode, 210, 9, 100, // Opcode: XVCVDPSXDS
/* 8606 */    MCD::OPC_FilterValue, 1, 120, 4, // Skip to: 9754
/* 8610 */    MCD::OPC_CheckField, 16, 5, 0, 114, 4, // Skip to: 9754
/* 8616 */    MCD::OPC_Decode, 191, 9, 100, // Opcode: XVABSDP
/* 8620 */    MCD::OPC_FilterValue, 30, 31, 0, // Skip to: 8655
/* 8624 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8627 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8641
/* 8631 */    MCD::OPC_CheckField, 16, 5, 0, 93, 4, // Skip to: 9754
/* 8637 */    MCD::OPC_Decode, 223, 9, 100, // Opcode: XVCVUXDDP
/* 8641 */    MCD::OPC_FilterValue, 1, 85, 4, // Skip to: 9754
/* 8645 */    MCD::OPC_CheckField, 16, 5, 0, 79, 4, // Skip to: 9754
/* 8651 */    MCD::OPC_Decode, 243, 9, 100, // Opcode: XVNABSDP
/* 8655 */    MCD::OPC_FilterValue, 31, 71, 4, // Skip to: 9754
/* 8659 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 8662 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8676
/* 8666 */    MCD::OPC_CheckField, 16, 5, 0, 58, 4, // Skip to: 9754
/* 8672 */    MCD::OPC_Decode, 219, 9, 100, // Opcode: XVCVSXDDP
/* 8676 */    MCD::OPC_FilterValue, 1, 50, 4, // Skip to: 9754
/* 8680 */    MCD::OPC_CheckField, 16, 5, 0, 44, 4, // Skip to: 9754
/* 8686 */    MCD::OPC_Decode, 245, 9, 100, // Opcode: XVNEGDP
/* 8690 */    MCD::OPC_FilterValue, 3, 36, 4, // Skip to: 9754
/* 8694 */    MCD::OPC_Decode, 158, 10, 103, // Opcode: XXSEL
/* 8698 */    MCD::OPC_FilterValue, 62, 19, 0, // Skip to: 8721
/* 8702 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8705 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8713
/* 8709 */    MCD::OPC_Decode, 243, 6, 85, // Opcode: STD
/* 8713 */    MCD::OPC_FilterValue, 1, 13, 4, // Skip to: 9754
/* 8717 */    MCD::OPC_Decode, 247, 6, 85, // Opcode: STDU
/* 8721 */    MCD::OPC_FilterValue, 63, 5, 4, // Skip to: 9754
/* 8725 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 8728 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 8769
/* 8732 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8735 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8749
/* 8739 */    MCD::OPC_CheckField, 21, 2, 0, 241, 3, // Skip to: 9754
/* 8745 */    MCD::OPC_Decode, 238, 3, 104, // Opcode: FCMPUS
/* 8749 */    MCD::OPC_FilterValue, 2, 233, 3, // Skip to: 9754
/* 8753 */    MCD::OPC_CheckField, 21, 2, 0, 227, 3, // Skip to: 9754
/* 8759 */    MCD::OPC_CheckField, 11, 7, 0, 221, 3, // Skip to: 9754
/* 8765 */    MCD::OPC_Decode, 178, 5, 23, // Opcode: MCRFS
/* 8769 */    MCD::OPC_FilterValue, 12, 45, 0, // Skip to: 8818
/* 8773 */    MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 8776 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8790
/* 8780 */    MCD::OPC_CheckField, 12, 9, 0, 200, 3, // Skip to: 9754
/* 8786 */    MCD::OPC_Decode, 208, 5, 75, // Opcode: MTFSB1
/* 8790 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 8804
/* 8794 */    MCD::OPC_CheckField, 12, 9, 0, 186, 3, // Skip to: 9754
/* 8800 */    MCD::OPC_Decode, 207, 5, 75, // Opcode: MTFSB0
/* 8804 */    MCD::OPC_FilterValue, 4, 178, 3, // Skip to: 9754
/* 8808 */    MCD::OPC_CheckField, 17, 6, 0, 172, 3, // Skip to: 9754
/* 8814 */    MCD::OPC_Decode, 210, 5, 105, // Opcode: MTFSFI
/* 8818 */    MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 8838
/* 8822 */    MCD::OPC_CheckField, 17, 6, 0, 158, 3, // Skip to: 9754
/* 8828 */    MCD::OPC_CheckField, 6, 6, 4, 152, 3, // Skip to: 9754
/* 8834 */    MCD::OPC_Decode, 211, 5, 105, // Opcode: MTFSFIo
/* 8838 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 8867
/* 8842 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8845 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 8859
/* 8849 */    MCD::OPC_CheckField, 11, 10, 0, 131, 3, // Skip to: 9754
/* 8855 */    MCD::OPC_Decode, 184, 5, 106, // Opcode: MFFS
/* 8859 */    MCD::OPC_FilterValue, 22, 123, 3, // Skip to: 9754
/* 8863 */    MCD::OPC_Decode, 209, 5, 107, // Opcode: MTFSF
/* 8867 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 8896
/* 8871 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8874 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 8888
/* 8878 */    MCD::OPC_CheckField, 11, 10, 0, 102, 3, // Skip to: 9754
/* 8884 */    MCD::OPC_Decode, 185, 5, 106, // Opcode: MFFSo
/* 8888 */    MCD::OPC_FilterValue, 22, 94, 3, // Skip to: 9754
/* 8892 */    MCD::OPC_Decode, 213, 5, 107, // Opcode: MTFSFo
/* 8896 */    MCD::OPC_FilterValue, 16, 123, 0, // Skip to: 9023
/* 8900 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8903 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8911
/* 8907 */    MCD::OPC_Decode, 241, 3, 87, // Opcode: FCPSGNS
/* 8911 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8925
/* 8915 */    MCD::OPC_CheckField, 16, 5, 0, 65, 3, // Skip to: 9754
/* 8921 */    MCD::OPC_Decode, 151, 4, 88, // Opcode: FNEGS
/* 8925 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 8939
/* 8929 */    MCD::OPC_CheckField, 16, 5, 0, 51, 3, // Skip to: 9754
/* 8935 */    MCD::OPC_Decode, 135, 4, 88, // Opcode: FMR
/* 8939 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 8953
/* 8943 */    MCD::OPC_CheckField, 16, 5, 0, 37, 3, // Skip to: 9754
/* 8949 */    MCD::OPC_Decode, 147, 4, 88, // Opcode: FNABSS
/* 8953 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 8967
/* 8957 */    MCD::OPC_CheckField, 16, 5, 0, 23, 3, // Skip to: 9754
/* 8963 */    MCD::OPC_Decode, 222, 3, 88, // Opcode: FABSS
/* 8967 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 8981
/* 8971 */    MCD::OPC_CheckField, 16, 5, 0, 9, 3, // Skip to: 9754
/* 8977 */    MCD::OPC_Decode, 171, 4, 88, // Opcode: FRINS
/* 8981 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 8995
/* 8985 */    MCD::OPC_CheckField, 16, 5, 0, 251, 2, // Skip to: 9754
/* 8991 */    MCD::OPC_Decode, 179, 4, 88, // Opcode: FRIZS
/* 8995 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 9009
/* 8999 */    MCD::OPC_CheckField, 16, 5, 0, 237, 2, // Skip to: 9754
/* 9005 */    MCD::OPC_Decode, 175, 4, 88, // Opcode: FRIPS
/* 9009 */    MCD::OPC_FilterValue, 15, 229, 2, // Skip to: 9754
/* 9013 */    MCD::OPC_CheckField, 16, 5, 0, 223, 2, // Skip to: 9754
/* 9019 */    MCD::OPC_Decode, 167, 4, 88, // Opcode: FRIMS
/* 9023 */    MCD::OPC_FilterValue, 17, 123, 0, // Skip to: 9150
/* 9027 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9030 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9038
/* 9034 */    MCD::OPC_Decode, 242, 3, 87, // Opcode: FCPSGNSo
/* 9038 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 9052
/* 9042 */    MCD::OPC_CheckField, 16, 5, 0, 194, 2, // Skip to: 9754
/* 9048 */    MCD::OPC_Decode, 152, 4, 88, // Opcode: FNEGSo
/* 9052 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 9066
/* 9056 */    MCD::OPC_CheckField, 16, 5, 0, 180, 2, // Skip to: 9754
/* 9062 */    MCD::OPC_Decode, 136, 4, 88, // Opcode: FMRo
/* 9066 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 9080
/* 9070 */    MCD::OPC_CheckField, 16, 5, 0, 166, 2, // Skip to: 9754
/* 9076 */    MCD::OPC_Decode, 148, 4, 88, // Opcode: FNABSSo
/* 9080 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 9094
/* 9084 */    MCD::OPC_CheckField, 16, 5, 0, 152, 2, // Skip to: 9754
/* 9090 */    MCD::OPC_Decode, 223, 3, 88, // Opcode: FABSSo
/* 9094 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 9108
/* 9098 */    MCD::OPC_CheckField, 16, 5, 0, 138, 2, // Skip to: 9754
/* 9104 */    MCD::OPC_Decode, 172, 4, 88, // Opcode: FRINSo
/* 9108 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 9122
/* 9112 */    MCD::OPC_CheckField, 16, 5, 0, 124, 2, // Skip to: 9754
/* 9118 */    MCD::OPC_Decode, 180, 4, 88, // Opcode: FRIZSo
/* 9122 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 9136
/* 9126 */    MCD::OPC_CheckField, 16, 5, 0, 110, 2, // Skip to: 9754
/* 9132 */    MCD::OPC_Decode, 176, 4, 88, // Opcode: FRIPSo
/* 9136 */    MCD::OPC_FilterValue, 15, 102, 2, // Skip to: 9754
/* 9140 */    MCD::OPC_CheckField, 16, 5, 0, 96, 2, // Skip to: 9754
/* 9146 */    MCD::OPC_Decode, 168, 4, 88, // Opcode: FRIMSo
/* 9150 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 9170
/* 9154 */    MCD::OPC_CheckField, 16, 5, 0, 82, 2, // Skip to: 9754
/* 9160 */    MCD::OPC_CheckField, 6, 5, 0, 76, 2, // Skip to: 9754
/* 9166 */    MCD::OPC_Decode, 181, 4, 86, // Opcode: FRSP
/* 9170 */    MCD::OPC_FilterValue, 25, 16, 0, // Skip to: 9190
/* 9174 */    MCD::OPC_CheckField, 16, 5, 0, 62, 2, // Skip to: 9754
/* 9180 */    MCD::OPC_CheckField, 6, 5, 0, 56, 2, // Skip to: 9754
/* 9186 */    MCD::OPC_Decode, 182, 4, 86, // Opcode: FRSPo
/* 9190 */    MCD::OPC_FilterValue, 28, 59, 0, // Skip to: 9253
/* 9194 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9197 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9211
/* 9201 */    MCD::OPC_CheckField, 16, 5, 0, 35, 2, // Skip to: 9754
/* 9207 */    MCD::OPC_Decode, 249, 3, 108, // Opcode: FCTIW
/* 9211 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 9225
/* 9215 */    MCD::OPC_CheckField, 16, 5, 0, 21, 2, // Skip to: 9754
/* 9221 */    MCD::OPC_Decode, 243, 3, 108, // Opcode: FCTID
/* 9225 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 9239
/* 9229 */    MCD::OPC_CheckField, 16, 5, 0, 7, 2, // Skip to: 9754
/* 9235 */    MCD::OPC_Decode, 229, 3, 108, // Opcode: FCFID
/* 9239 */    MCD::OPC_FilterValue, 30, 255, 1, // Skip to: 9754
/* 9243 */    MCD::OPC_CheckField, 16, 5, 0, 249, 1, // Skip to: 9754
/* 9249 */    MCD::OPC_Decode, 232, 3, 108, // Opcode: FCFIDU
/* 9253 */    MCD::OPC_FilterValue, 29, 59, 0, // Skip to: 9316
/* 9257 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9260 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9274
/* 9264 */    MCD::OPC_CheckField, 16, 5, 0, 228, 1, // Skip to: 9754
/* 9270 */    MCD::OPC_Decode, 254, 3, 108, // Opcode: FCTIWo
/* 9274 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 9288
/* 9278 */    MCD::OPC_CheckField, 16, 5, 0, 214, 1, // Skip to: 9754
/* 9284 */    MCD::OPC_Decode, 248, 3, 108, // Opcode: FCTIDo
/* 9288 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 9302
/* 9292 */    MCD::OPC_CheckField, 16, 5, 0, 200, 1, // Skip to: 9754
/* 9298 */    MCD::OPC_Decode, 236, 3, 108, // Opcode: FCFIDo
/* 9302 */    MCD::OPC_FilterValue, 30, 192, 1, // Skip to: 9754
/* 9306 */    MCD::OPC_CheckField, 16, 5, 0, 186, 1, // Skip to: 9754
/* 9312 */    MCD::OPC_Decode, 235, 3, 108, // Opcode: FCFIDUo
/* 9316 */    MCD::OPC_FilterValue, 30, 59, 0, // Skip to: 9379
/* 9320 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9323 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9337
/* 9327 */    MCD::OPC_CheckField, 16, 5, 0, 165, 1, // Skip to: 9754
/* 9333 */    MCD::OPC_Decode, 252, 3, 108, // Opcode: FCTIWZ
/* 9337 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 9351
/* 9341 */    MCD::OPC_CheckField, 16, 5, 0, 151, 1, // Skip to: 9754
/* 9347 */    MCD::OPC_Decode, 250, 3, 108, // Opcode: FCTIWUZ
/* 9351 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 9365
/* 9355 */    MCD::OPC_CheckField, 16, 5, 0, 137, 1, // Skip to: 9754
/* 9361 */    MCD::OPC_Decode, 246, 3, 108, // Opcode: FCTIDZ
/* 9365 */    MCD::OPC_FilterValue, 29, 129, 1, // Skip to: 9754
/* 9369 */    MCD::OPC_CheckField, 16, 5, 0, 123, 1, // Skip to: 9754
/* 9375 */    MCD::OPC_Decode, 244, 3, 108, // Opcode: FCTIDUZ
/* 9379 */    MCD::OPC_FilterValue, 31, 59, 0, // Skip to: 9442
/* 9383 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9386 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 9400
/* 9390 */    MCD::OPC_CheckField, 16, 5, 0, 102, 1, // Skip to: 9754
/* 9396 */    MCD::OPC_Decode, 253, 3, 108, // Opcode: FCTIWZo
/* 9400 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 9414
/* 9404 */    MCD::OPC_CheckField, 16, 5, 0, 88, 1, // Skip to: 9754
/* 9410 */    MCD::OPC_Decode, 251, 3, 108, // Opcode: FCTIWUZo
/* 9414 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 9428
/* 9418 */    MCD::OPC_CheckField, 16, 5, 0, 74, 1, // Skip to: 9754
/* 9424 */    MCD::OPC_Decode, 247, 3, 108, // Opcode: FCTIDZo
/* 9428 */    MCD::OPC_FilterValue, 29, 66, 1, // Skip to: 9754
/* 9432 */    MCD::OPC_CheckField, 16, 5, 0, 60, 1, // Skip to: 9754
/* 9438 */    MCD::OPC_Decode, 245, 3, 108, // Opcode: FCTIDUZo
/* 9442 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 9456
/* 9446 */    MCD::OPC_CheckField, 6, 5, 0, 46, 1, // Skip to: 9754
/* 9452 */    MCD::OPC_Decode, 255, 3, 109, // Opcode: FDIV
/* 9456 */    MCD::OPC_FilterValue, 37, 10, 0, // Skip to: 9470
/* 9460 */    MCD::OPC_CheckField, 6, 5, 0, 32, 1, // Skip to: 9754
/* 9466 */    MCD::OPC_Decode, 130, 4, 109, // Opcode: FDIVo
/* 9470 */    MCD::OPC_FilterValue, 40, 10, 0, // Skip to: 9484
/* 9474 */    MCD::OPC_CheckField, 6, 5, 0, 18, 1, // Skip to: 9754
/* 9480 */    MCD::OPC_Decode, 195, 4, 109, // Opcode: FSUB
/* 9484 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 9498
/* 9488 */    MCD::OPC_CheckField, 6, 5, 0, 4, 1, // Skip to: 9754
/* 9494 */    MCD::OPC_Decode, 198, 4, 109, // Opcode: FSUBo
/* 9498 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 9512
/* 9502 */    MCD::OPC_CheckField, 6, 5, 0, 246, 0, // Skip to: 9754
/* 9508 */    MCD::OPC_Decode, 224, 3, 109, // Opcode: FADD
/* 9512 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 9526
/* 9516 */    MCD::OPC_CheckField, 6, 5, 0, 232, 0, // Skip to: 9754
/* 9522 */    MCD::OPC_Decode, 227, 3, 109, // Opcode: FADDo
/* 9526 */    MCD::OPC_FilterValue, 44, 16, 0, // Skip to: 9546
/* 9530 */    MCD::OPC_CheckField, 16, 5, 0, 218, 0, // Skip to: 9754
/* 9536 */    MCD::OPC_CheckField, 6, 5, 0, 212, 0, // Skip to: 9754
/* 9542 */    MCD::OPC_Decode, 191, 4, 108, // Opcode: FSQRT
/* 9546 */    MCD::OPC_FilterValue, 45, 16, 0, // Skip to: 9566
/* 9550 */    MCD::OPC_CheckField, 16, 5, 0, 198, 0, // Skip to: 9754
/* 9556 */    MCD::OPC_CheckField, 6, 5, 0, 192, 0, // Skip to: 9754
/* 9562 */    MCD::OPC_Decode, 194, 4, 108, // Opcode: FSQRTo
/* 9566 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 9574
/* 9570 */    MCD::OPC_Decode, 189, 4, 110, // Opcode: FSELS
/* 9574 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 9582
/* 9578 */    MCD::OPC_Decode, 190, 4, 110, // Opcode: FSELSo
/* 9582 */    MCD::OPC_FilterValue, 48, 16, 0, // Skip to: 9602
/* 9586 */    MCD::OPC_CheckField, 16, 5, 0, 162, 0, // Skip to: 9754
/* 9592 */    MCD::OPC_CheckField, 6, 5, 0, 156, 0, // Skip to: 9754
/* 9598 */    MCD::OPC_Decode, 161, 4, 108, // Opcode: FRE
/* 9602 */    MCD::OPC_FilterValue, 49, 16, 0, // Skip to: 9622
/* 9606 */    MCD::OPC_CheckField, 16, 5, 0, 142, 0, // Skip to: 9754
/* 9612 */    MCD::OPC_CheckField, 6, 5, 0, 136, 0, // Skip to: 9754
/* 9618 */    MCD::OPC_Decode, 164, 4, 108, // Opcode: FREo
/* 9622 */    MCD::OPC_FilterValue, 50, 10, 0, // Skip to: 9636
/* 9626 */    MCD::OPC_CheckField, 11, 5, 0, 122, 0, // Skip to: 9754
/* 9632 */    MCD::OPC_Decode, 141, 4, 111, // Opcode: FMUL
/* 9636 */    MCD::OPC_FilterValue, 51, 10, 0, // Skip to: 9650
/* 9640 */    MCD::OPC_CheckField, 11, 5, 0, 108, 0, // Skip to: 9754
/* 9646 */    MCD::OPC_Decode, 144, 4, 111, // Opcode: FMULo
/* 9650 */    MCD::OPC_FilterValue, 52, 16, 0, // Skip to: 9670
/* 9654 */    MCD::OPC_CheckField, 16, 5, 0, 94, 0, // Skip to: 9754
/* 9660 */    MCD::OPC_CheckField, 6, 5, 0, 88, 0, // Skip to: 9754
/* 9666 */    MCD::OPC_Decode, 183, 4, 108, // Opcode: FRSQRTE
/* 9670 */    MCD::OPC_FilterValue, 53, 16, 0, // Skip to: 9690
/* 9674 */    MCD::OPC_CheckField, 16, 5, 0, 74, 0, // Skip to: 9754
/* 9680 */    MCD::OPC_CheckField, 6, 5, 0, 68, 0, // Skip to: 9754
/* 9686 */    MCD::OPC_Decode, 186, 4, 108, // Opcode: FRSQRTEo
/* 9690 */    MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 9698
/* 9694 */    MCD::OPC_Decode, 137, 4, 112, // Opcode: FMSUB
/* 9698 */    MCD::OPC_FilterValue, 57, 4, 0, // Skip to: 9706
/* 9702 */    MCD::OPC_Decode, 140, 4, 112, // Opcode: FMSUBo
/* 9706 */    MCD::OPC_FilterValue, 58, 4, 0, // Skip to: 9714
/* 9710 */    MCD::OPC_Decode, 131, 4, 112, // Opcode: FMADD
/* 9714 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 9722
/* 9718 */    MCD::OPC_Decode, 134, 4, 112, // Opcode: FMADDo
/* 9722 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 9730
/* 9726 */    MCD::OPC_Decode, 157, 4, 112, // Opcode: FNMSUB
/* 9730 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 9738
/* 9734 */    MCD::OPC_Decode, 160, 4, 112, // Opcode: FNMSUBo
/* 9738 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 9746
/* 9742 */    MCD::OPC_Decode, 153, 4, 112, // Opcode: FNMADD
/* 9746 */    MCD::OPC_FilterValue, 63, 4, 0, // Skip to: 9754
/* 9750 */    MCD::OPC_Decode, 156, 4, 112, // Opcode: FNMADDo
/* 9754 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  llvm_unreachable("Invalid index!");
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (decodeSImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 4);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRC_NOR0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 2, 14);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 2, 14);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 5, 7);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 2, 24);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 15, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRC_NOR0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 12, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 12, 8);
    if (decodeCRBitMOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 8);
    if (decodeCRBitMOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 21, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 21, 2);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 21, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 21, 2);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 2, 19);
    if (decodeMemRIXOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 98:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 17, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 25, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  uint64_t Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << "\n" );
      DEBUG(dbgs() << "----- DECODE SUCCESSFUL -----\n");

      MI.setOpcode(Opc);
      return decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm);
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
