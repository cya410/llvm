/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * Mips Disassembler                                                        *|
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

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 0, 245, 1, // Skip to: 512
/* 11 */      MCD::OPC_Decode, 185, 2, 0, // Opcode: Bimm16
/* 15 */      MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 0, 233, 1, // Skip to: 512
/* 23 */      MCD::OPC_Decode, 183, 2, 1, // Opcode: BeqzRxImm16
/* 27 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 0, 221, 1, // Skip to: 512
/* 35 */      MCD::OPC_Decode, 187, 2, 1, // Opcode: BnezRxImm16
/* 39 */      MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 0, 209, 1, // Skip to: 512
/* 47 */      MCD::OPC_Decode, 157, 1, 2, // Opcode: AddiuRxRxImm16
/* 51 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 63
/* 55 */      MCD::OPC_CheckPredicate, 0, 197, 1, // Skip to: 512
/* 59 */      MCD::OPC_Decode, 151, 13, 1, // Opcode: SltiRxImm16
/* 63 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 75
/* 67 */      MCD::OPC_CheckPredicate, 0, 185, 1, // Skip to: 512
/* 71 */      MCD::OPC_Decode, 154, 13, 1, // Opcode: SltiuRxImm16
/* 75 */      MCD::OPC_FilterValue, 12, 63, 0, // Skip to: 142
/* 79 */      MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 82 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 94
/* 86 */      MCD::OPC_CheckPredicate, 0, 166, 1, // Skip to: 512
/* 90 */      MCD::OPC_Decode, 190, 2, 0, // Opcode: Bteqz16
/* 94 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 106
/* 98 */      MCD::OPC_CheckPredicate, 0, 154, 1, // Skip to: 512
/* 102 */     MCD::OPC_Decode, 198, 2, 0, // Opcode: Btnez16
/* 106 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 118
/* 110 */     MCD::OPC_CheckPredicate, 0, 142, 1, // Skip to: 512
/* 114 */     MCD::OPC_Decode, 160, 1, 0, // Opcode: AddiuSpImm16
/* 118 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 0, 130, 1, // Skip to: 512
/* 126 */     MCD::OPC_Decode, 212, 9, 3, // Opcode: Move32R16
/* 130 */     MCD::OPC_FilterValue, 7, 122, 1, // Skip to: 512
/* 134 */     MCD::OPC_CheckPredicate, 0, 118, 1, // Skip to: 512
/* 138 */     MCD::OPC_Decode, 213, 9, 4, // Opcode: MoveR3216
/* 142 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 154
/* 146 */     MCD::OPC_CheckPredicate, 0, 106, 1, // Skip to: 512
/* 150 */     MCD::OPC_Decode, 233, 7, 1, // Opcode: LiRxImm16
/* 154 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 166
/* 158 */     MCD::OPC_CheckPredicate, 0, 94, 1, // Skip to: 512
/* 162 */     MCD::OPC_Decode, 144, 4, 1, // Opcode: CmpiRxImm16
/* 166 */     MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 178
/* 170 */     MCD::OPC_CheckPredicate, 0, 82, 1, // Skip to: 512
/* 174 */     MCD::OPC_Decode, 241, 7, 1, // Opcode: LwRxPcTcp16
/* 178 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 209
/* 182 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 185 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 197
/* 189 */     MCD::OPC_CheckPredicate, 0, 63, 1, // Skip to: 512
/* 193 */     MCD::OPC_Decode, 162, 1, 5, // Opcode: AdduRxRyRz16
/* 197 */     MCD::OPC_FilterValue, 3, 55, 1, // Skip to: 512
/* 201 */     MCD::OPC_CheckPredicate, 0, 51, 1, // Skip to: 512
/* 205 */     MCD::OPC_Decode, 163, 13, 5, // Opcode: SubuRxRyRz16
/* 209 */     MCD::OPC_FilterValue, 29, 43, 1, // Skip to: 512
/* 213 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 216 */     MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 283
/* 220 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 223 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 235
/* 227 */     MCD::OPC_CheckPredicate, 0, 25, 1, // Skip to: 512
/* 231 */     MCD::OPC_Decode, 139, 7, 0, // Opcode: JumpLinkReg16
/* 235 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 253
/* 239 */     MCD::OPC_CheckPredicate, 0, 13, 1, // Skip to: 512
/* 243 */     MCD::OPC_CheckField, 8, 3, 0, 7, 1, // Skip to: 512
/* 249 */     MCD::OPC_Decode, 136, 7, 0, // Opcode: JrRa16
/* 253 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 265
/* 257 */     MCD::OPC_CheckPredicate, 0, 251, 0, // Skip to: 512
/* 261 */     MCD::OPC_Decode, 138, 7, 1, // Opcode: JrcRx16
/* 265 */     MCD::OPC_FilterValue, 7, 243, 0, // Skip to: 512
/* 269 */     MCD::OPC_CheckPredicate, 0, 239, 0, // Skip to: 512
/* 273 */     MCD::OPC_CheckField, 8, 3, 0, 233, 0, // Skip to: 512
/* 279 */     MCD::OPC_Decode, 137, 7, 0, // Opcode: JrcRa16
/* 283 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 295
/* 287 */     MCD::OPC_CheckPredicate, 0, 221, 0, // Skip to: 512
/* 291 */     MCD::OPC_Decode, 149, 13, 6, // Opcode: SltRxRy16
/* 295 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 307
/* 299 */     MCD::OPC_CheckPredicate, 0, 209, 0, // Skip to: 512
/* 303 */     MCD::OPC_Decode, 157, 13, 6, // Opcode: SltuRxRy16
/* 307 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 319
/* 311 */     MCD::OPC_CheckPredicate, 0, 197, 0, // Skip to: 512
/* 315 */     MCD::OPC_Decode, 147, 13, 7, // Opcode: SllvRxRy16
/* 319 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 337
/* 323 */     MCD::OPC_CheckPredicate, 0, 185, 0, // Skip to: 512
/* 327 */     MCD::OPC_CheckField, 5, 6, 0, 179, 0, // Skip to: 512
/* 333 */     MCD::OPC_Decode, 189, 2, 0, // Opcode: Break16
/* 337 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 349
/* 341 */     MCD::OPC_CheckPredicate, 0, 167, 0, // Skip to: 512
/* 345 */     MCD::OPC_Decode, 162, 13, 7, // Opcode: SrlvRxRy16
/* 349 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 361
/* 353 */     MCD::OPC_CheckPredicate, 0, 155, 0, // Skip to: 512
/* 357 */     MCD::OPC_Decode, 160, 13, 7, // Opcode: SravRxRy16
/* 361 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 373
/* 365 */     MCD::OPC_CheckPredicate, 0, 143, 0, // Skip to: 512
/* 369 */     MCD::OPC_Decode, 143, 4, 6, // Opcode: CmpRxRy16
/* 373 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 385
/* 377 */     MCD::OPC_CheckPredicate, 0, 131, 0, // Skip to: 512
/* 381 */     MCD::OPC_Decode, 163, 1, 7, // Opcode: AndRxRxRy16
/* 385 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 397
/* 389 */     MCD::OPC_CheckPredicate, 0, 119, 0, // Skip to: 512
/* 393 */     MCD::OPC_Decode, 132, 10, 7, // Opcode: OrRxRxRy16
/* 397 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 409
/* 401 */     MCD::OPC_CheckPredicate, 0, 107, 0, // Skip to: 512
/* 405 */     MCD::OPC_Decode, 235, 13, 7, // Opcode: XorRxRxRy16
/* 409 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 421
/* 413 */     MCD::OPC_CheckPredicate, 0, 95, 0, // Skip to: 512
/* 417 */     MCD::OPC_Decode, 247, 9, 6, // Opcode: NotRxRy16
/* 421 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 433
/* 425 */     MCD::OPC_CheckPredicate, 0, 83, 0, // Skip to: 512
/* 429 */     MCD::OPC_Decode, 210, 9, 1, // Opcode: Mfhi16
/* 433 */     MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 464
/* 437 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 440 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 452
/* 444 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 512
/* 448 */     MCD::OPC_Decode, 129, 13, 2, // Opcode: SebRx16
/* 452 */     MCD::OPC_FilterValue, 5, 56, 0, // Skip to: 512
/* 456 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 512
/* 460 */     MCD::OPC_Decode, 130, 13, 2, // Opcode: SehRx16
/* 464 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 476
/* 468 */     MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 512
/* 472 */     MCD::OPC_Decode, 211, 9, 1, // Opcode: Mflo16
/* 476 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 488
/* 480 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 512
/* 484 */     MCD::OPC_Decode, 253, 4, 6, // Opcode: DivRxRy16
/* 488 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 500
/* 492 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 512
/* 496 */     MCD::OPC_Decode, 254, 4, 6, // Opcode: DivuRxRy16
/* 500 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 512
/* 504 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 512
/* 508 */     MCD::OPC_Decode, 246, 9, 6, // Opcode: NegRxRy16
/* 512 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 27
/* 7 */       MCD::OPC_CheckPredicate, 0, 198, 1, // Skip to: 465
/* 11 */      MCD::OPC_CheckField, 27, 5, 30, 192, 1, // Skip to: 465
/* 17 */      MCD::OPC_CheckField, 5, 3, 0, 186, 1, // Skip to: 465
/* 23 */      MCD::OPC_Decode, 156, 1, 1, // Opcode: AddiuRxPcImmX16
/* 27 */      MCD::OPC_FilterValue, 2, 20, 0, // Skip to: 51
/* 31 */      MCD::OPC_CheckPredicate, 0, 174, 1, // Skip to: 465
/* 35 */      MCD::OPC_CheckField, 27, 5, 30, 168, 1, // Skip to: 465
/* 41 */      MCD::OPC_CheckField, 5, 6, 0, 162, 1, // Skip to: 465
/* 47 */      MCD::OPC_Decode, 186, 2, 8, // Opcode: BimmX16
/* 51 */      MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 75
/* 55 */      MCD::OPC_CheckPredicate, 0, 150, 1, // Skip to: 465
/* 59 */      MCD::OPC_CheckField, 27, 5, 30, 144, 1, // Skip to: 465
/* 65 */      MCD::OPC_CheckField, 5, 3, 0, 138, 1, // Skip to: 465
/* 71 */      MCD::OPC_Decode, 184, 2, 1, // Opcode: BeqzRxImmX16
/* 75 */      MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 99
/* 79 */      MCD::OPC_CheckPredicate, 0, 126, 1, // Skip to: 465
/* 83 */      MCD::OPC_CheckField, 27, 5, 30, 120, 1, // Skip to: 465
/* 89 */      MCD::OPC_CheckField, 5, 3, 0, 114, 1, // Skip to: 465
/* 95 */      MCD::OPC_Decode, 188, 2, 1, // Opcode: BnezRxImmX16
/* 99 */      MCD::OPC_FilterValue, 6, 92, 0, // Skip to: 195
/* 103 */     MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 106 */     MCD::OPC_FilterValue, 30, 99, 1, // Skip to: 465
/* 110 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 113 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 156
/* 117 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 120 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 156
/* 128 */     MCD::OPC_Decode, 146, 13, 6, // Opcode: SllX16
/* 132 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 156
/* 140 */     MCD::OPC_Decode, 161, 13, 6, // Opcode: SrlX16
/* 144 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 156
/* 152 */     MCD::OPC_Decode, 159, 13, 6, // Opcode: SraX16
/* 156 */     MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 159 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 171
/* 163 */     MCD::OPC_CheckPredicate, 0, 42, 1, // Skip to: 465
/* 167 */     MCD::OPC_Decode, 197, 2, 0, // Opcode: BteqzX16
/* 171 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 183
/* 175 */     MCD::OPC_CheckPredicate, 0, 30, 1, // Skip to: 465
/* 179 */     MCD::OPC_Decode, 205, 2, 0, // Opcode: BtnezX16
/* 183 */     MCD::OPC_FilterValue, 24, 22, 1, // Skip to: 465
/* 187 */     MCD::OPC_CheckPredicate, 0, 18, 1, // Skip to: 465
/* 191 */     MCD::OPC_Decode, 161, 1, 0, // Opcode: AddiuSpImmX16
/* 195 */     MCD::OPC_FilterValue, 8, 20, 0, // Skip to: 219
/* 199 */     MCD::OPC_CheckPredicate, 0, 6, 1, // Skip to: 465
/* 203 */     MCD::OPC_CheckField, 27, 5, 30, 0, 1, // Skip to: 465
/* 209 */     MCD::OPC_CheckField, 4, 1, 0, 250, 0, // Skip to: 465
/* 215 */     MCD::OPC_Decode, 159, 1, 9, // Opcode: AddiuRxRyOffMemX16
/* 219 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 243
/* 223 */     MCD::OPC_CheckPredicate, 0, 238, 0, // Skip to: 465
/* 227 */     MCD::OPC_CheckField, 27, 5, 30, 232, 0, // Skip to: 465
/* 233 */     MCD::OPC_CheckField, 5, 3, 0, 226, 0, // Skip to: 465
/* 239 */     MCD::OPC_Decode, 155, 1, 1, // Opcode: AddiuRxImmX16
/* 243 */     MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 267
/* 247 */     MCD::OPC_CheckPredicate, 0, 214, 0, // Skip to: 465
/* 251 */     MCD::OPC_CheckField, 27, 5, 30, 208, 0, // Skip to: 465
/* 257 */     MCD::OPC_CheckField, 5, 3, 0, 202, 0, // Skip to: 465
/* 263 */     MCD::OPC_Decode, 152, 13, 1, // Opcode: SltiRxImmX16
/* 267 */     MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 291
/* 271 */     MCD::OPC_CheckPredicate, 0, 190, 0, // Skip to: 465
/* 275 */     MCD::OPC_CheckField, 27, 5, 30, 184, 0, // Skip to: 465
/* 281 */     MCD::OPC_CheckField, 5, 3, 0, 178, 0, // Skip to: 465
/* 287 */     MCD::OPC_Decode, 155, 13, 1, // Opcode: SltiuRxImmX16
/* 291 */     MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 315
/* 295 */     MCD::OPC_CheckPredicate, 0, 166, 0, // Skip to: 465
/* 299 */     MCD::OPC_CheckField, 27, 5, 30, 160, 0, // Skip to: 465
/* 305 */     MCD::OPC_CheckField, 5, 3, 0, 154, 0, // Skip to: 465
/* 311 */     MCD::OPC_Decode, 235, 7, 1, // Opcode: LiRxImmX16
/* 315 */     MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 339
/* 319 */     MCD::OPC_CheckPredicate, 0, 142, 0, // Skip to: 465
/* 323 */     MCD::OPC_CheckField, 27, 5, 30, 136, 0, // Skip to: 465
/* 329 */     MCD::OPC_CheckField, 5, 3, 0, 130, 0, // Skip to: 465
/* 335 */     MCD::OPC_Decode, 145, 4, 1, // Opcode: CmpiRxImmX16
/* 339 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 363
/* 343 */     MCD::OPC_CheckPredicate, 0, 118, 0, // Skip to: 465
/* 347 */     MCD::OPC_CheckField, 27, 5, 30, 112, 0, // Skip to: 465
/* 353 */     MCD::OPC_CheckField, 5, 3, 0, 106, 0, // Skip to: 465
/* 359 */     MCD::OPC_Decode, 244, 7, 1, // Opcode: LwRxSpImmX16
/* 363 */     MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 387
/* 367 */     MCD::OPC_CheckPredicate, 0, 94, 0, // Skip to: 465
/* 371 */     MCD::OPC_CheckField, 27, 5, 30, 88, 0, // Skip to: 465
/* 377 */     MCD::OPC_CheckField, 5, 3, 0, 82, 0, // Skip to: 465
/* 383 */     MCD::OPC_Decode, 242, 7, 1, // Opcode: LwRxPcTcpX16
/* 387 */     MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 405
/* 391 */     MCD::OPC_CheckPredicate, 0, 70, 0, // Skip to: 465
/* 395 */     MCD::OPC_CheckField, 27, 5, 30, 64, 0, // Skip to: 465
/* 401 */     MCD::OPC_Decode, 128, 13, 9, // Opcode: SbRxRyOffMemX16
/* 405 */     MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 423
/* 409 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 465
/* 413 */     MCD::OPC_CheckField, 27, 5, 30, 46, 0, // Skip to: 465
/* 419 */     MCD::OPC_Decode, 145, 13, 9, // Opcode: ShRxRyOffMemX16
/* 423 */     MCD::OPC_FilterValue, 26, 20, 0, // Skip to: 447
/* 427 */     MCD::OPC_CheckPredicate, 0, 34, 0, // Skip to: 465
/* 431 */     MCD::OPC_CheckField, 27, 5, 30, 28, 0, // Skip to: 465
/* 437 */     MCD::OPC_CheckField, 5, 3, 0, 22, 0, // Skip to: 465
/* 443 */     MCD::OPC_Decode, 165, 13, 1, // Opcode: SwRxSpImmX16
/* 447 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 465
/* 451 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 465
/* 455 */     MCD::OPC_CheckField, 27, 5, 30, 4, 0, // Skip to: 465
/* 461 */     MCD::OPC_Decode, 164, 13, 9, // Opcode: SwRxRyOffMemX16
/* 465 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCOP3_32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 51
/* 11 */      MCD::OPC_Decode, 207, 7, 10, // Opcode: LWC3
/* 15 */      MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 2, 28, 0, // Skip to: 51
/* 23 */      MCD::OPC_Decode, 154, 7, 10, // Opcode: LDC3
/* 27 */      MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 51
/* 35 */      MCD::OPC_Decode, 229, 12, 10, // Opcode: SWC3
/* 39 */      MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 2, 4, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 148, 11, 10, // Opcode: SDC3
/* 51 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips16[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 1, 26, 0, // Skip to: 33
/* 7 */       MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 21
/* 14 */      MCD::OPC_CheckPredicate, 3, 19, 2, // Skip to: 549
/* 18 */      MCD::OPC_Decode, 52, 11, // Opcode: ADDU16_MM
/* 21 */      MCD::OPC_FilterValue, 1, 12, 2, // Skip to: 549
/* 25 */      MCD::OPC_CheckPredicate, 3, 8, 2, // Skip to: 549
/* 29 */      MCD::OPC_Decode, 201, 12, 11, // Opcode: SUBU16_MM
/* 33 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 45
/* 37 */      MCD::OPC_CheckPredicate, 3, 252, 1, // Skip to: 549
/* 41 */      MCD::OPC_Decode, 142, 7, 12, // Opcode: LBU16_MM
/* 45 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 57
/* 49 */      MCD::OPC_CheckPredicate, 3, 240, 1, // Skip to: 549
/* 53 */      MCD::OPC_Decode, 220, 8, 13, // Opcode: MOVE16_MM
/* 57 */      MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 88
/* 61 */      MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 64 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 76
/* 68 */      MCD::OPC_CheckPredicate, 3, 221, 1, // Skip to: 549
/* 72 */      MCD::OPC_Decode, 213, 11, 14, // Opcode: SLL16_MM
/* 76 */      MCD::OPC_FilterValue, 1, 213, 1, // Skip to: 549
/* 80 */      MCD::OPC_CheckPredicate, 3, 209, 1, // Skip to: 549
/* 84 */      MCD::OPC_Decode, 147, 12, 14, // Opcode: SRL16_MM
/* 88 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 100
/* 92 */      MCD::OPC_CheckPredicate, 3, 197, 1, // Skip to: 549
/* 96 */      MCD::OPC_Decode, 173, 7, 12, // Opcode: LHU16_MM
/* 100 */     MCD::OPC_FilterValue, 11, 7, 0, // Skip to: 111
/* 104 */     MCD::OPC_CheckPredicate, 3, 185, 1, // Skip to: 549
/* 108 */     MCD::OPC_Decode, 86, 15, // Opcode: ANDI16_MM
/* 111 */     MCD::OPC_FilterValue, 17, 226, 0, // Skip to: 341
/* 115 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 118 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 3, 167, 1, // Skip to: 549
/* 126 */     MCD::OPC_Decode, 245, 9, 16, // Opcode: NOT16_MM
/* 130 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 142
/* 134 */     MCD::OPC_CheckPredicate, 3, 155, 1, // Skip to: 549
/* 138 */     MCD::OPC_Decode, 224, 13, 17, // Opcode: XOR16_MM
/* 142 */     MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 153
/* 146 */     MCD::OPC_CheckPredicate, 3, 143, 1, // Skip to: 549
/* 150 */     MCD::OPC_Decode, 84, 17, // Opcode: AND16_MM
/* 153 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 165
/* 157 */     MCD::OPC_CheckPredicate, 3, 132, 1, // Skip to: 549
/* 161 */     MCD::OPC_Decode, 249, 9, 17, // Opcode: OR16_MM
/* 165 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 177
/* 169 */     MCD::OPC_CheckPredicate, 3, 120, 1, // Skip to: 549
/* 173 */     MCD::OPC_Decode, 212, 7, 18, // Opcode: LWM16_MM
/* 177 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 189
/* 181 */     MCD::OPC_CheckPredicate, 3, 108, 1, // Skip to: 549
/* 185 */     MCD::OPC_Decode, 233, 12, 18, // Opcode: SWM16_MM
/* 189 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 220
/* 193 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 196 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 208
/* 200 */     MCD::OPC_CheckPredicate, 3, 89, 1, // Skip to: 549
/* 204 */     MCD::OPC_Decode, 252, 6, 19, // Opcode: JR16_MM
/* 208 */     MCD::OPC_FilterValue, 1, 81, 1, // Skip to: 549
/* 212 */     MCD::OPC_CheckPredicate, 3, 77, 1, // Skip to: 549
/* 216 */     MCD::OPC_Decode, 255, 6, 19, // Opcode: JRC16_MM
/* 220 */     MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 251
/* 224 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 227 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 239
/* 231 */     MCD::OPC_CheckPredicate, 3, 58, 1, // Skip to: 549
/* 235 */     MCD::OPC_Decode, 238, 6, 19, // Opcode: JALR16_MM
/* 239 */     MCD::OPC_FilterValue, 1, 50, 1, // Skip to: 549
/* 243 */     MCD::OPC_CheckPredicate, 3, 46, 1, // Skip to: 549
/* 247 */     MCD::OPC_Decode, 242, 6, 19, // Opcode: JALRS16_MM
/* 251 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 269
/* 255 */     MCD::OPC_CheckPredicate, 3, 34, 1, // Skip to: 549
/* 259 */     MCD::OPC_CheckField, 5, 1, 0, 28, 1, // Skip to: 549
/* 265 */     MCD::OPC_Decode, 174, 8, 19, // Opcode: MFHI16_MM
/* 269 */     MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 287
/* 273 */     MCD::OPC_CheckPredicate, 3, 16, 1, // Skip to: 549
/* 277 */     MCD::OPC_CheckField, 5, 1, 0, 10, 1, // Skip to: 549
/* 283 */     MCD::OPC_Decode, 179, 8, 19, // Opcode: MFLO16_MM
/* 287 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 305
/* 291 */     MCD::OPC_CheckPredicate, 3, 254, 0, // Skip to: 549
/* 295 */     MCD::OPC_CheckField, 4, 2, 0, 248, 0, // Skip to: 549
/* 301 */     MCD::OPC_Decode, 160, 2, 20, // Opcode: BREAK16_MM
/* 305 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 323
/* 309 */     MCD::OPC_CheckPredicate, 3, 236, 0, // Skip to: 549
/* 313 */     MCD::OPC_CheckField, 4, 2, 0, 230, 0, // Skip to: 549
/* 319 */     MCD::OPC_Decode, 140, 11, 20, // Opcode: SDBBP16_MM
/* 323 */     MCD::OPC_FilterValue, 12, 222, 0, // Skip to: 549
/* 327 */     MCD::OPC_CheckPredicate, 3, 218, 0, // Skip to: 549
/* 331 */     MCD::OPC_CheckField, 5, 1, 0, 212, 0, // Skip to: 549
/* 337 */     MCD::OPC_Decode, 254, 6, 21, // Opcode: JRADDIUSP
/* 341 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 353
/* 345 */     MCD::OPC_CheckPredicate, 3, 200, 0, // Skip to: 549
/* 349 */     MCD::OPC_Decode, 220, 7, 22, // Opcode: LWSP_MM
/* 353 */     MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 382
/* 357 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 360 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 371
/* 364 */     MCD::OPC_CheckPredicate, 3, 181, 0, // Skip to: 549
/* 368 */     MCD::OPC_Decode, 30, 23, // Opcode: ADDIUS5_MM
/* 371 */     MCD::OPC_FilterValue, 1, 174, 0, // Skip to: 549
/* 375 */     MCD::OPC_CheckPredicate, 3, 170, 0, // Skip to: 549
/* 379 */     MCD::OPC_Decode, 31, 24, // Opcode: ADDIUSP_MM
/* 382 */     MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 394
/* 386 */     MCD::OPC_CheckPredicate, 3, 159, 0, // Skip to: 549
/* 390 */     MCD::OPC_Decode, 208, 7, 25, // Opcode: LWGP_MM
/* 394 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 406
/* 398 */     MCD::OPC_CheckPredicate, 3, 147, 0, // Skip to: 549
/* 402 */     MCD::OPC_Decode, 201, 7, 12, // Opcode: LW16_MM
/* 406 */     MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 435
/* 410 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 413 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 424
/* 417 */     MCD::OPC_CheckPredicate, 3, 128, 0, // Skip to: 549
/* 421 */     MCD::OPC_Decode, 29, 26, // Opcode: ADDIUR2_MM
/* 424 */     MCD::OPC_FilterValue, 1, 121, 0, // Skip to: 549
/* 428 */     MCD::OPC_CheckPredicate, 3, 117, 0, // Skip to: 549
/* 432 */     MCD::OPC_Decode, 28, 27, // Opcode: ADDIUR1SP_MM
/* 435 */     MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 453
/* 439 */     MCD::OPC_CheckPredicate, 3, 106, 0, // Skip to: 549
/* 443 */     MCD::OPC_CheckField, 0, 1, 0, 100, 0, // Skip to: 549
/* 449 */     MCD::OPC_Decode, 221, 8, 28, // Opcode: MOVEP_MM
/* 453 */     MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 465
/* 457 */     MCD::OPC_CheckPredicate, 3, 88, 0, // Skip to: 549
/* 461 */     MCD::OPC_Decode, 130, 11, 12, // Opcode: SB16_MM
/* 465 */     MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 477
/* 469 */     MCD::OPC_CheckPredicate, 3, 76, 0, // Skip to: 549
/* 473 */     MCD::OPC_Decode, 198, 1, 29, // Opcode: BEQZ16_MM
/* 477 */     MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 489
/* 481 */     MCD::OPC_CheckPredicate, 3, 64, 0, // Skip to: 549
/* 485 */     MCD::OPC_Decode, 174, 11, 12, // Opcode: SH16_MM
/* 489 */     MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 501
/* 493 */     MCD::OPC_CheckPredicate, 3, 52, 0, // Skip to: 549
/* 497 */     MCD::OPC_Decode, 145, 2, 29, // Opcode: BNEZ16_MM
/* 501 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 513
/* 505 */     MCD::OPC_CheckPredicate, 3, 40, 0, // Skip to: 549
/* 509 */     MCD::OPC_Decode, 240, 12, 22, // Opcode: SWSP_MM
/* 513 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 525
/* 517 */     MCD::OPC_CheckPredicate, 4, 28, 0, // Skip to: 549
/* 521 */     MCD::OPC_Decode, 165, 1, 30, // Opcode: B16_MM
/* 525 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 537
/* 529 */     MCD::OPC_CheckPredicate, 3, 16, 0, // Skip to: 549
/* 533 */     MCD::OPC_Decode, 223, 12, 12, // Opcode: SW16_MM
/* 537 */     MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 549
/* 541 */     MCD::OPC_CheckPredicate, 3, 4, 0, // Skip to: 549
/* 545 */     MCD::OPC_Decode, 179, 7, 31, // Opcode: LI16_MM
/* 549 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 189, 3, // Skip to: 964
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 90, 0, // Skip to: 104
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 68
/* 21 */      MCD::OPC_ExtractField, 11, 15,  // Inst{25-11} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 3, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 168, 12, 0, // Opcode: SSNOP_MM
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 3, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 128, 5, 0, // Opcode: EHB_MM
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 3, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 135, 10, 0, // Opcode: PAUSE_MM
/* 60 */      MCD::OPC_CheckPredicate, 3, 26, 6, // Skip to: 1626
/* 64 */      MCD::OPC_Decode, 225, 11, 32, // Opcode: SLL_MM
/* 68 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 80
/* 72 */      MCD::OPC_CheckPredicate, 3, 14, 6, // Skip to: 1626
/* 76 */      MCD::OPC_Decode, 165, 12, 32, // Opcode: SRL_MM
/* 80 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 3, 2, 6, // Skip to: 1626
/* 88 */      MCD::OPC_Decode, 144, 12, 32, // Opcode: SRA_MM
/* 92 */      MCD::OPC_FilterValue, 3, 250, 5, // Skip to: 1626
/* 96 */      MCD::OPC_CheckPredicate, 3, 246, 5, // Skip to: 1626
/* 100 */     MCD::OPC_Decode, 237, 10, 32, // Opcode: ROTR_MM
/* 104 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 116
/* 108 */     MCD::OPC_CheckPredicate, 3, 234, 5, // Skip to: 1626
/* 112 */     MCD::OPC_Decode, 161, 2, 33, // Opcode: BREAK_MM
/* 116 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 128
/* 120 */     MCD::OPC_CheckPredicate, 3, 222, 5, // Skip to: 1626
/* 124 */     MCD::OPC_Decode, 234, 6, 34, // Opcode: INS_MM
/* 128 */     MCD::OPC_FilterValue, 16, 180, 0, // Skip to: 312
/* 132 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 135 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 147
/* 139 */     MCD::OPC_CheckPredicate, 3, 203, 5, // Skip to: 1626
/* 143 */     MCD::OPC_Decode, 221, 11, 35, // Opcode: SLLV_MM
/* 147 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 159
/* 151 */     MCD::OPC_CheckPredicate, 3, 191, 5, // Skip to: 1626
/* 155 */     MCD::OPC_Decode, 161, 12, 35, // Opcode: SRLV_MM
/* 159 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 171
/* 163 */     MCD::OPC_CheckPredicate, 3, 179, 5, // Skip to: 1626
/* 167 */     MCD::OPC_Decode, 140, 12, 35, // Opcode: SRAV_MM
/* 171 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 183
/* 175 */     MCD::OPC_CheckPredicate, 3, 167, 5, // Skip to: 1626
/* 179 */     MCD::OPC_Decode, 236, 10, 35, // Opcode: ROTRV_MM
/* 183 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 194
/* 187 */     MCD::OPC_CheckPredicate, 3, 155, 5, // Skip to: 1626
/* 191 */     MCD::OPC_Decode, 72, 36, // Opcode: ADD_MM
/* 194 */     MCD::OPC_FilterValue, 5, 7, 0, // Skip to: 205
/* 198 */     MCD::OPC_CheckPredicate, 3, 144, 5, // Skip to: 1626
/* 202 */     MCD::OPC_Decode, 78, 36, // Opcode: ADDu_MM
/* 205 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 217
/* 209 */     MCD::OPC_CheckPredicate, 3, 133, 5, // Skip to: 1626
/* 213 */     MCD::OPC_Decode, 216, 12, 36, // Opcode: SUB_MM
/* 217 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 229
/* 221 */     MCD::OPC_CheckPredicate, 3, 121, 5, // Skip to: 1626
/* 225 */     MCD::OPC_Decode, 218, 12, 36, // Opcode: SUBu_MM
/* 229 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 241
/* 233 */     MCD::OPC_CheckPredicate, 3, 109, 5, // Skip to: 1626
/* 237 */     MCD::OPC_Decode, 204, 9, 36, // Opcode: MUL_MM
/* 241 */     MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 252
/* 245 */     MCD::OPC_CheckPredicate, 3, 97, 5, // Skip to: 1626
/* 249 */     MCD::OPC_Decode, 88, 36, // Opcode: AND_MM
/* 252 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 264
/* 256 */     MCD::OPC_CheckPredicate, 3, 86, 5, // Skip to: 1626
/* 260 */     MCD::OPC_Decode, 252, 9, 36, // Opcode: OR_MM
/* 264 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 276
/* 268 */     MCD::OPC_CheckPredicate, 3, 74, 5, // Skip to: 1626
/* 272 */     MCD::OPC_Decode, 240, 9, 36, // Opcode: NOR_MM
/* 276 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 288
/* 280 */     MCD::OPC_CheckPredicate, 3, 62, 5, // Skip to: 1626
/* 284 */     MCD::OPC_Decode, 227, 13, 36, // Opcode: XOR_MM
/* 288 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 300
/* 292 */     MCD::OPC_CheckPredicate, 3, 50, 5, // Skip to: 1626
/* 296 */     MCD::OPC_Decode, 229, 11, 36, // Opcode: SLT_MM
/* 300 */     MCD::OPC_FilterValue, 14, 42, 5, // Skip to: 1626
/* 304 */     MCD::OPC_CheckPredicate, 3, 38, 5, // Skip to: 1626
/* 308 */     MCD::OPC_Decode, 238, 11, 36, // Opcode: SLTu_MM
/* 312 */     MCD::OPC_FilterValue, 24, 39, 0, // Skip to: 355
/* 316 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 319 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 331
/* 323 */     MCD::OPC_CheckPredicate, 3, 19, 5, // Skip to: 1626
/* 327 */     MCD::OPC_Decode, 240, 8, 37, // Opcode: MOVN_I_MM
/* 331 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 343
/* 335 */     MCD::OPC_CheckPredicate, 3, 7, 5, // Skip to: 1626
/* 339 */     MCD::OPC_Decode, 132, 9, 37, // Opcode: MOVZ_I_MM
/* 343 */     MCD::OPC_FilterValue, 4, 255, 4, // Skip to: 1626
/* 347 */     MCD::OPC_CheckPredicate, 3, 251, 4, // Skip to: 1626
/* 351 */     MCD::OPC_Decode, 226, 7, 38, // Opcode: LWXS_MM
/* 355 */     MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 367
/* 359 */     MCD::OPC_CheckPredicate, 3, 239, 4, // Skip to: 1626
/* 363 */     MCD::OPC_Decode, 148, 5, 39, // Opcode: EXT_MM
/* 367 */     MCD::OPC_FilterValue, 60, 231, 4, // Skip to: 1626
/* 371 */     MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 374 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 386
/* 378 */     MCD::OPC_CheckPredicate, 3, 220, 4, // Skip to: 1626
/* 382 */     MCD::OPC_Decode, 172, 13, 40, // Opcode: TEQ_MM
/* 386 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 398
/* 390 */     MCD::OPC_CheckPredicate, 3, 208, 4, // Skip to: 1626
/* 394 */     MCD::OPC_Decode, 180, 13, 40, // Opcode: TGE_MM
/* 398 */     MCD::OPC_FilterValue, 13, 123, 0, // Skip to: 525
/* 402 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 405 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 423
/* 409 */     MCD::OPC_CheckPredicate, 3, 189, 4, // Skip to: 1626
/* 413 */     MCD::OPC_CheckField, 16, 10, 0, 183, 4, // Skip to: 1626
/* 419 */     MCD::OPC_Decode, 182, 13, 0, // Opcode: TLBP_MM
/* 423 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 441
/* 427 */     MCD::OPC_CheckPredicate, 3, 171, 4, // Skip to: 1626
/* 431 */     MCD::OPC_CheckField, 16, 10, 0, 165, 4, // Skip to: 1626
/* 437 */     MCD::OPC_Decode, 184, 13, 0, // Opcode: TLBR_MM
/* 441 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 459
/* 445 */     MCD::OPC_CheckPredicate, 3, 153, 4, // Skip to: 1626
/* 449 */     MCD::OPC_CheckField, 16, 10, 0, 147, 4, // Skip to: 1626
/* 455 */     MCD::OPC_Decode, 186, 13, 0, // Opcode: TLBWI_MM
/* 459 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 477
/* 463 */     MCD::OPC_CheckPredicate, 3, 135, 4, // Skip to: 1626
/* 467 */     MCD::OPC_CheckField, 16, 10, 0, 129, 4, // Skip to: 1626
/* 473 */     MCD::OPC_Decode, 188, 13, 0, // Opcode: TLBWR_MM
/* 477 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 489
/* 481 */     MCD::OPC_CheckPredicate, 3, 117, 4, // Skip to: 1626
/* 485 */     MCD::OPC_Decode, 219, 13, 41, // Opcode: WAIT_MM
/* 489 */     MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 507
/* 493 */     MCD::OPC_CheckPredicate, 3, 105, 4, // Skip to: 1626
/* 497 */     MCD::OPC_CheckField, 16, 10, 0, 99, 4, // Skip to: 1626
/* 503 */     MCD::OPC_Decode, 163, 4, 0, // Opcode: DERET_MM
/* 507 */     MCD::OPC_FilterValue, 15, 91, 4, // Skip to: 1626
/* 511 */     MCD::OPC_CheckPredicate, 3, 87, 4, // Skip to: 1626
/* 515 */     MCD::OPC_CheckField, 16, 10, 0, 81, 4, // Skip to: 1626
/* 521 */     MCD::OPC_Decode, 132, 5, 0, // Opcode: ERET_MM
/* 525 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 537
/* 529 */     MCD::OPC_CheckPredicate, 3, 69, 4, // Skip to: 1626
/* 533 */     MCD::OPC_Decode, 179, 13, 40, // Opcode: TGEU_MM
/* 537 */     MCD::OPC_FilterValue, 29, 39, 0, // Skip to: 580
/* 541 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 544 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 562
/* 548 */     MCD::OPC_CheckPredicate, 3, 50, 4, // Skip to: 1626
/* 552 */     MCD::OPC_CheckField, 21, 5, 0, 44, 4, // Skip to: 1626
/* 558 */     MCD::OPC_Decode, 181, 4, 42, // Opcode: DI_MM
/* 562 */     MCD::OPC_FilterValue, 5, 36, 4, // Skip to: 1626
/* 566 */     MCD::OPC_CheckPredicate, 3, 32, 4, // Skip to: 1626
/* 570 */     MCD::OPC_CheckField, 21, 5, 0, 26, 4, // Skip to: 1626
/* 576 */     MCD::OPC_Decode, 130, 5, 42, // Opcode: EI_MM
/* 580 */     MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 592
/* 584 */     MCD::OPC_CheckPredicate, 3, 14, 4, // Skip to: 1626
/* 588 */     MCD::OPC_Decode, 195, 13, 40, // Opcode: TLT_MM
/* 592 */     MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 604
/* 596 */     MCD::OPC_CheckPredicate, 3, 2, 4, // Skip to: 1626
/* 600 */     MCD::OPC_Decode, 194, 13, 40, // Opcode: TLTU_MM
/* 604 */     MCD::OPC_FilterValue, 44, 171, 0, // Skip to: 779
/* 608 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 611 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 623
/* 615 */     MCD::OPC_CheckPredicate, 3, 239, 3, // Skip to: 1626
/* 619 */     MCD::OPC_Decode, 157, 11, 43, // Opcode: SEB_MM
/* 623 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 635
/* 627 */     MCD::OPC_CheckPredicate, 3, 227, 3, // Skip to: 1626
/* 631 */     MCD::OPC_Decode, 160, 11, 43, // Opcode: SEH_MM
/* 635 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 647
/* 639 */     MCD::OPC_CheckPredicate, 3, 215, 3, // Skip to: 1626
/* 643 */     MCD::OPC_Decode, 250, 2, 43, // Opcode: CLO_MM
/* 647 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 659
/* 651 */     MCD::OPC_CheckPredicate, 3, 203, 3, // Skip to: 1626
/* 655 */     MCD::OPC_Decode, 141, 3, 43, // Opcode: CLZ_MM
/* 659 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 671
/* 663 */     MCD::OPC_CheckPredicate, 3, 191, 3, // Skip to: 1626
/* 667 */     MCD::OPC_Decode, 227, 10, 44, // Opcode: RDHWR_MM
/* 671 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 683
/* 675 */     MCD::OPC_CheckPredicate, 3, 179, 3, // Skip to: 1626
/* 679 */     MCD::OPC_Decode, 222, 13, 43, // Opcode: WSBH_MM
/* 683 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 695
/* 687 */     MCD::OPC_CheckPredicate, 3, 167, 3, // Skip to: 1626
/* 691 */     MCD::OPC_Decode, 196, 9, 45, // Opcode: MULT_MM
/* 695 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 707
/* 699 */     MCD::OPC_CheckPredicate, 3, 155, 3, // Skip to: 1626
/* 703 */     MCD::OPC_Decode, 198, 9, 45, // Opcode: MULTu_MM
/* 707 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 719
/* 711 */     MCD::OPC_CheckPredicate, 3, 143, 3, // Skip to: 1626
/* 715 */     MCD::OPC_Decode, 150, 11, 45, // Opcode: SDIV_MM
/* 719 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 731
/* 723 */     MCD::OPC_CheckPredicate, 3, 131, 3, // Skip to: 1626
/* 727 */     MCD::OPC_Decode, 210, 13, 45, // Opcode: UDIV_MM
/* 731 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 743
/* 735 */     MCD::OPC_CheckPredicate, 3, 119, 3, // Skip to: 1626
/* 739 */     MCD::OPC_Decode, 133, 8, 45, // Opcode: MADD_MM
/* 743 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 755
/* 747 */     MCD::OPC_CheckPredicate, 3, 107, 3, // Skip to: 1626
/* 751 */     MCD::OPC_Decode, 252, 7, 45, // Opcode: MADDU_MM
/* 755 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 767
/* 759 */     MCD::OPC_CheckPredicate, 3, 95, 3, // Skip to: 1626
/* 763 */     MCD::OPC_Decode, 151, 9, 45, // Opcode: MSUB_MM
/* 767 */     MCD::OPC_FilterValue, 15, 87, 3, // Skip to: 1626
/* 771 */     MCD::OPC_CheckPredicate, 3, 83, 3, // Skip to: 1626
/* 775 */     MCD::OPC_Decode, 142, 9, 45, // Opcode: MSUBU_MM
/* 779 */     MCD::OPC_FilterValue, 45, 45, 0, // Skip to: 828
/* 783 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 786 */     MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 804
/* 790 */     MCD::OPC_CheckPredicate, 3, 64, 3, // Skip to: 1626
/* 794 */     MCD::OPC_CheckField, 21, 5, 0, 58, 3, // Skip to: 1626
/* 800 */     MCD::OPC_Decode, 246, 12, 46, // Opcode: SYNC_MM
/* 804 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 816
/* 808 */     MCD::OPC_CheckPredicate, 3, 46, 3, // Skip to: 1626
/* 812 */     MCD::OPC_Decode, 248, 12, 41, // Opcode: SYSCALL_MM
/* 816 */     MCD::OPC_FilterValue, 13, 38, 3, // Skip to: 1626
/* 820 */     MCD::OPC_CheckPredicate, 3, 34, 3, // Skip to: 1626
/* 824 */     MCD::OPC_Decode, 141, 11, 41, // Opcode: SDBBP_MM
/* 828 */     MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 840
/* 832 */     MCD::OPC_CheckPredicate, 3, 22, 3, // Skip to: 1626
/* 836 */     MCD::OPC_Decode, 199, 13, 40, // Opcode: TNE_MM
/* 840 */     MCD::OPC_FilterValue, 53, 75, 0, // Skip to: 919
/* 844 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 847 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 865
/* 851 */     MCD::OPC_CheckPredicate, 3, 3, 3, // Skip to: 1626
/* 855 */     MCD::OPC_CheckField, 21, 5, 0, 253, 2, // Skip to: 1626
/* 861 */     MCD::OPC_Decode, 177, 8, 42, // Opcode: MFHI_MM
/* 865 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 883
/* 869 */     MCD::OPC_CheckPredicate, 3, 241, 2, // Skip to: 1626
/* 873 */     MCD::OPC_CheckField, 21, 5, 0, 235, 2, // Skip to: 1626
/* 879 */     MCD::OPC_Decode, 182, 8, 42, // Opcode: MFLO_MM
/* 883 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 901
/* 887 */     MCD::OPC_CheckPredicate, 3, 223, 2, // Skip to: 1626
/* 891 */     MCD::OPC_CheckField, 21, 5, 0, 217, 2, // Skip to: 1626
/* 897 */     MCD::OPC_Decode, 166, 9, 42, // Opcode: MTHI_MM
/* 901 */     MCD::OPC_FilterValue, 3, 209, 2, // Skip to: 1626
/* 905 */     MCD::OPC_CheckPredicate, 3, 205, 2, // Skip to: 1626
/* 909 */     MCD::OPC_CheckField, 21, 5, 0, 199, 2, // Skip to: 1626
/* 915 */     MCD::OPC_Decode, 171, 9, 42, // Opcode: MTLO_MM
/* 919 */     MCD::OPC_FilterValue, 60, 191, 2, // Skip to: 1626
/* 923 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 926 */     MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 952
/* 930 */     MCD::OPC_CheckPredicate, 3, 10, 0, // Skip to: 944
/* 934 */     MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 944
/* 940 */     MCD::OPC_Decode, 130, 7, 42, // Opcode: JR_MM
/* 944 */     MCD::OPC_CheckPredicate, 3, 166, 2, // Skip to: 1626
/* 948 */     MCD::OPC_Decode, 245, 6, 43, // Opcode: JALR_MM
/* 952 */     MCD::OPC_FilterValue, 4, 158, 2, // Skip to: 1626
/* 956 */     MCD::OPC_CheckPredicate, 3, 154, 2, // Skip to: 1626
/* 960 */     MCD::OPC_Decode, 243, 6, 43, // Opcode: JALRS_MM
/* 964 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 975
/* 968 */     MCD::OPC_CheckPredicate, 3, 142, 2, // Skip to: 1626
/* 972 */     MCD::OPC_Decode, 74, 47, // Opcode: ADDi_MM
/* 975 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 987
/* 979 */     MCD::OPC_CheckPredicate, 3, 131, 2, // Skip to: 1626
/* 983 */     MCD::OPC_Decode, 147, 7, 48, // Opcode: LBu_MM
/* 987 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 999
/* 991 */     MCD::OPC_CheckPredicate, 3, 119, 2, // Skip to: 1626
/* 995 */     MCD::OPC_Decode, 132, 11, 48, // Opcode: SB_MM
/* 999 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1011
/* 1003 */    MCD::OPC_CheckPredicate, 3, 107, 2, // Skip to: 1626
/* 1007 */    MCD::OPC_Decode, 144, 7, 48, // Opcode: LB_MM
/* 1011 */    MCD::OPC_FilterValue, 8, 63, 0, // Skip to: 1078
/* 1015 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1018 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1030
/* 1022 */    MCD::OPC_CheckPredicate, 3, 88, 2, // Skip to: 1626
/* 1026 */    MCD::OPC_Decode, 216, 7, 49, // Opcode: LWP_MM
/* 1030 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1042
/* 1034 */    MCD::OPC_CheckPredicate, 3, 76, 2, // Skip to: 1626
/* 1038 */    MCD::OPC_Decode, 213, 7, 49, // Opcode: LWM32_MM
/* 1042 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1054
/* 1046 */    MCD::OPC_CheckPredicate, 3, 64, 2, // Skip to: 1626
/* 1050 */    MCD::OPC_Decode, 209, 2, 50, // Opcode: CACHE_MM
/* 1054 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1066
/* 1058 */    MCD::OPC_CheckPredicate, 3, 52, 2, // Skip to: 1626
/* 1062 */    MCD::OPC_Decode, 236, 12, 49, // Opcode: SWP_MM
/* 1066 */    MCD::OPC_FilterValue, 13, 44, 2, // Skip to: 1626
/* 1070 */    MCD::OPC_CheckPredicate, 3, 40, 2, // Skip to: 1626
/* 1074 */    MCD::OPC_Decode, 234, 12, 49, // Opcode: SWM32_MM
/* 1078 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 1089
/* 1082 */    MCD::OPC_CheckPredicate, 3, 28, 2, // Skip to: 1626
/* 1086 */    MCD::OPC_Decode, 76, 47, // Opcode: ADDiu_MM
/* 1089 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1101
/* 1093 */    MCD::OPC_CheckPredicate, 3, 17, 2, // Skip to: 1626
/* 1097 */    MCD::OPC_Decode, 178, 7, 48, // Opcode: LHu_MM
/* 1101 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1113
/* 1105 */    MCD::OPC_CheckPredicate, 3, 5, 2, // Skip to: 1626
/* 1109 */    MCD::OPC_Decode, 203, 11, 48, // Opcode: SH_MM
/* 1113 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 1125
/* 1117 */    MCD::OPC_CheckPredicate, 3, 249, 1, // Skip to: 1626
/* 1121 */    MCD::OPC_Decode, 175, 7, 48, // Opcode: LH_MM
/* 1125 */    MCD::OPC_FilterValue, 16, 207, 0, // Skip to: 1336
/* 1129 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1132 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1144
/* 1136 */    MCD::OPC_CheckPredicate, 3, 230, 1, // Skip to: 1626
/* 1140 */    MCD::OPC_Decode, 128, 2, 51, // Opcode: BLTZ_MM
/* 1144 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1156
/* 1148 */    MCD::OPC_CheckPredicate, 3, 218, 1, // Skip to: 1626
/* 1152 */    MCD::OPC_Decode, 253, 1, 51, // Opcode: BLTZAL_MM
/* 1156 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1168
/* 1160 */    MCD::OPC_CheckPredicate, 3, 206, 1, // Skip to: 1626
/* 1164 */    MCD::OPC_Decode, 214, 1, 51, // Opcode: BGEZ_MM
/* 1168 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1180
/* 1172 */    MCD::OPC_CheckPredicate, 3, 194, 1, // Skip to: 1626
/* 1176 */    MCD::OPC_Decode, 211, 1, 51, // Opcode: BGEZAL_MM
/* 1180 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1192
/* 1184 */    MCD::OPC_CheckPredicate, 3, 182, 1, // Skip to: 1626
/* 1188 */    MCD::OPC_Decode, 244, 1, 51, // Opcode: BLEZ_MM
/* 1192 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1204
/* 1196 */    MCD::OPC_CheckPredicate, 3, 170, 1, // Skip to: 1626
/* 1200 */    MCD::OPC_Decode, 148, 2, 51, // Opcode: BNEZC_MM
/* 1204 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1216
/* 1208 */    MCD::OPC_CheckPredicate, 3, 158, 1, // Skip to: 1626
/* 1212 */    MCD::OPC_Decode, 220, 1, 51, // Opcode: BGTZ_MM
/* 1216 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1228
/* 1220 */    MCD::OPC_CheckPredicate, 3, 146, 1, // Skip to: 1626
/* 1224 */    MCD::OPC_Decode, 201, 1, 51, // Opcode: BEQZC_MM
/* 1228 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1240
/* 1232 */    MCD::OPC_CheckPredicate, 3, 134, 1, // Skip to: 1626
/* 1236 */    MCD::OPC_Decode, 192, 13, 52, // Opcode: TLTI_MM
/* 1240 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1252
/* 1244 */    MCD::OPC_CheckPredicate, 3, 122, 1, // Skip to: 1626
/* 1248 */    MCD::OPC_Decode, 177, 13, 52, // Opcode: TGEI_MM
/* 1252 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1264
/* 1256 */    MCD::OPC_CheckPredicate, 3, 110, 1, // Skip to: 1626
/* 1260 */    MCD::OPC_Decode, 191, 13, 52, // Opcode: TLTIU_MM
/* 1264 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1276
/* 1268 */    MCD::OPC_CheckPredicate, 3, 98, 1, // Skip to: 1626
/* 1272 */    MCD::OPC_Decode, 176, 13, 52, // Opcode: TGEIU_MM
/* 1276 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1288
/* 1280 */    MCD::OPC_CheckPredicate, 3, 86, 1, // Skip to: 1626
/* 1284 */    MCD::OPC_Decode, 198, 13, 52, // Opcode: TNEI_MM
/* 1288 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1300
/* 1292 */    MCD::OPC_CheckPredicate, 3, 74, 1, // Skip to: 1626
/* 1296 */    MCD::OPC_Decode, 199, 7, 52, // Opcode: LUi_MM
/* 1300 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1312
/* 1304 */    MCD::OPC_CheckPredicate, 3, 62, 1, // Skip to: 1626
/* 1308 */    MCD::OPC_Decode, 171, 13, 52, // Opcode: TEQI_MM
/* 1312 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 1324
/* 1316 */    MCD::OPC_CheckPredicate, 3, 50, 1, // Skip to: 1626
/* 1320 */    MCD::OPC_Decode, 252, 1, 51, // Opcode: BLTZALS_MM
/* 1324 */    MCD::OPC_FilterValue, 19, 42, 1, // Skip to: 1626
/* 1328 */    MCD::OPC_CheckPredicate, 3, 38, 1, // Skip to: 1626
/* 1332 */    MCD::OPC_Decode, 210, 1, 51, // Opcode: BGEZALS_MM
/* 1336 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 1348
/* 1340 */    MCD::OPC_CheckPredicate, 3, 26, 1, // Skip to: 1626
/* 1344 */    MCD::OPC_Decode, 131, 10, 53, // Opcode: ORi_MM
/* 1348 */    MCD::OPC_FilterValue, 21, 29, 0, // Skip to: 1381
/* 1352 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1355 */    MCD::OPC_FilterValue, 251, 2, 8, 0, // Skip to: 1368
/* 1360 */    MCD::OPC_CheckPredicate, 3, 6, 1, // Skip to: 1626
/* 1364 */    MCD::OPC_Decode, 228, 8, 54, // Opcode: MOVF_I_MM
/* 1368 */    MCD::OPC_FilterValue, 251, 18, 253, 0, // Skip to: 1626
/* 1373 */    MCD::OPC_CheckPredicate, 3, 249, 0, // Skip to: 1626
/* 1377 */    MCD::OPC_Decode, 248, 8, 54, // Opcode: MOVT_I_MM
/* 1381 */    MCD::OPC_FilterValue, 24, 99, 0, // Skip to: 1484
/* 1385 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1388 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1400
/* 1392 */    MCD::OPC_CheckPredicate, 3, 230, 0, // Skip to: 1626
/* 1396 */    MCD::OPC_Decode, 211, 7, 49, // Opcode: LWL_MM
/* 1400 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1412
/* 1404 */    MCD::OPC_CheckPredicate, 3, 218, 0, // Skip to: 1626
/* 1408 */    MCD::OPC_Decode, 219, 7, 49, // Opcode: LWR_MM
/* 1412 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1424
/* 1416 */    MCD::OPC_CheckPredicate, 3, 206, 0, // Skip to: 1626
/* 1420 */    MCD::OPC_Decode, 169, 10, 50, // Opcode: PREF_MM
/* 1424 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1436
/* 1428 */    MCD::OPC_CheckPredicate, 3, 194, 0, // Skip to: 1626
/* 1432 */    MCD::OPC_Decode, 183, 7, 49, // Opcode: LL_MM
/* 1436 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1448
/* 1440 */    MCD::OPC_CheckPredicate, 3, 182, 0, // Skip to: 1626
/* 1444 */    MCD::OPC_Decode, 232, 12, 49, // Opcode: SWL_MM
/* 1448 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1460
/* 1452 */    MCD::OPC_CheckPredicate, 3, 170, 0, // Skip to: 1626
/* 1456 */    MCD::OPC_Decode, 239, 12, 49, // Opcode: SWR_MM
/* 1460 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1472
/* 1464 */    MCD::OPC_CheckPredicate, 3, 158, 0, // Skip to: 1626
/* 1468 */    MCD::OPC_Decode, 136, 11, 49, // Opcode: SC_MM
/* 1472 */    MCD::OPC_FilterValue, 14, 150, 0, // Skip to: 1626
/* 1476 */    MCD::OPC_CheckPredicate, 3, 146, 0, // Skip to: 1626
/* 1480 */    MCD::OPC_Decode, 222, 7, 49, // Opcode: LWU_MM
/* 1484 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 1496
/* 1488 */    MCD::OPC_CheckPredicate, 3, 134, 0, // Skip to: 1626
/* 1492 */    MCD::OPC_Decode, 234, 13, 53, // Opcode: XORi_MM
/* 1496 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 1508
/* 1500 */    MCD::OPC_CheckPredicate, 3, 122, 0, // Skip to: 1626
/* 1504 */    MCD::OPC_Decode, 246, 6, 55, // Opcode: JALS_MM
/* 1508 */    MCD::OPC_FilterValue, 30, 7, 0, // Skip to: 1519
/* 1512 */    MCD::OPC_CheckPredicate, 3, 110, 0, // Skip to: 1626
/* 1516 */    MCD::OPC_Decode, 27, 56, // Opcode: ADDIUPC_MM
/* 1519 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 1531
/* 1523 */    MCD::OPC_CheckPredicate, 3, 99, 0, // Skip to: 1626
/* 1527 */    MCD::OPC_Decode, 232, 11, 47, // Opcode: SLTi_MM
/* 1531 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 1543
/* 1535 */    MCD::OPC_CheckPredicate, 3, 87, 0, // Skip to: 1626
/* 1539 */    MCD::OPC_Decode, 202, 1, 57, // Opcode: BEQ_MM
/* 1543 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 1555
/* 1547 */    MCD::OPC_CheckPredicate, 3, 75, 0, // Skip to: 1626
/* 1551 */    MCD::OPC_Decode, 235, 11, 47, // Opcode: SLTiu_MM
/* 1555 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 1567
/* 1559 */    MCD::OPC_CheckPredicate, 3, 63, 0, // Skip to: 1626
/* 1563 */    MCD::OPC_Decode, 149, 2, 57, // Opcode: BNE_MM
/* 1567 */    MCD::OPC_FilterValue, 52, 7, 0, // Skip to: 1578
/* 1571 */    MCD::OPC_CheckPredicate, 3, 51, 0, // Skip to: 1626
/* 1575 */    MCD::OPC_Decode, 95, 53, // Opcode: ANDi_MM
/* 1578 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 1590
/* 1582 */    MCD::OPC_CheckPredicate, 3, 40, 0, // Skip to: 1626
/* 1586 */    MCD::OPC_Decode, 131, 7, 55, // Opcode: J_MM
/* 1590 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 1602
/* 1594 */    MCD::OPC_CheckPredicate, 3, 28, 0, // Skip to: 1626
/* 1598 */    MCD::OPC_Decode, 248, 6, 55, // Opcode: JAL_MM
/* 1602 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 1614
/* 1606 */    MCD::OPC_CheckPredicate, 3, 16, 0, // Skip to: 1626
/* 1610 */    MCD::OPC_Decode, 243, 12, 48, // Opcode: SW_MM
/* 1614 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 1626
/* 1618 */    MCD::OPC_CheckPredicate, 3, 4, 0, // Skip to: 1626
/* 1622 */    MCD::OPC_Decode, 227, 7, 48, // Opcode: LW_MM
/* 1626 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 173, 3, // Skip to: 948
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 54, 0, // Skip to: 68
/* 14 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 17 */      MCD::OPC_FilterValue, 0, 51, 53, // Skip to: 13640
/* 21 */      MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 5, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 167, 12, 0, // Opcode: SSNOP
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 5, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 255, 4, 0, // Opcode: EHB
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 6, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 134, 10, 0, // Opcode: PAUSE
/* 60 */      MCD::OPC_CheckPredicate, 1, 8, 53, // Skip to: 13640
/* 64 */      MCD::OPC_Decode, 212, 11, 58, // Opcode: SLL
/* 68 */      MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 111
/* 72 */      MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 75 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 93
/* 79 */      MCD::OPC_CheckPredicate, 7, 245, 52, // Skip to: 13640
/* 83 */      MCD::OPC_CheckField, 6, 5, 0, 239, 52, // Skip to: 13640
/* 89 */      MCD::OPC_Decode, 226, 8, 59, // Opcode: MOVF_I
/* 93 */      MCD::OPC_FilterValue, 1, 231, 52, // Skip to: 13640
/* 97 */      MCD::OPC_CheckPredicate, 7, 227, 52, // Skip to: 13640
/* 101 */     MCD::OPC_CheckField, 6, 5, 0, 221, 52, // Skip to: 13640
/* 107 */     MCD::OPC_Decode, 246, 8, 59, // Opcode: MOVT_I
/* 111 */     MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 142
/* 115 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 118 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 1, 202, 52, // Skip to: 13640
/* 126 */     MCD::OPC_Decode, 146, 12, 58, // Opcode: SRL
/* 130 */     MCD::OPC_FilterValue, 1, 194, 52, // Skip to: 13640
/* 134 */     MCD::OPC_CheckPredicate, 6, 190, 52, // Skip to: 13640
/* 138 */     MCD::OPC_Decode, 234, 10, 58, // Opcode: ROTR
/* 142 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 160
/* 146 */     MCD::OPC_CheckPredicate, 5, 178, 52, // Skip to: 13640
/* 150 */     MCD::OPC_CheckField, 21, 5, 0, 172, 52, // Skip to: 13640
/* 156 */     MCD::OPC_Decode, 254, 11, 58, // Opcode: SRA
/* 160 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 178
/* 164 */     MCD::OPC_CheckPredicate, 5, 160, 52, // Skip to: 13640
/* 168 */     MCD::OPC_CheckField, 6, 5, 0, 154, 52, // Skip to: 13640
/* 174 */     MCD::OPC_Decode, 220, 11, 36, // Opcode: SLLV
/* 178 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 196
/* 182 */     MCD::OPC_CheckPredicate, 8, 142, 52, // Skip to: 13640
/* 186 */     MCD::OPC_CheckField, 8, 3, 0, 136, 52, // Skip to: 13640
/* 192 */     MCD::OPC_Decode, 192, 7, 60, // Opcode: LSA
/* 196 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 227
/* 200 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 203 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 215
/* 207 */     MCD::OPC_CheckPredicate, 5, 117, 52, // Skip to: 13640
/* 211 */     MCD::OPC_Decode, 160, 12, 36, // Opcode: SRLV
/* 215 */     MCD::OPC_FilterValue, 1, 109, 52, // Skip to: 13640
/* 219 */     MCD::OPC_CheckPredicate, 6, 105, 52, // Skip to: 13640
/* 223 */     MCD::OPC_Decode, 235, 10, 36, // Opcode: ROTRV
/* 227 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 245
/* 231 */     MCD::OPC_CheckPredicate, 5, 93, 52, // Skip to: 13640
/* 235 */     MCD::OPC_CheckField, 6, 5, 0, 87, 52, // Skip to: 13640
/* 241 */     MCD::OPC_Decode, 139, 12, 36, // Opcode: SRAV
/* 245 */     MCD::OPC_FilterValue, 8, 27, 0, // Skip to: 276
/* 249 */     MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 252 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 264
/* 256 */     MCD::OPC_CheckPredicate, 5, 68, 52, // Skip to: 13640
/* 260 */     MCD::OPC_Decode, 251, 6, 61, // Opcode: JR
/* 264 */     MCD::OPC_FilterValue, 16, 60, 52, // Skip to: 13640
/* 268 */     MCD::OPC_CheckPredicate, 9, 56, 52, // Skip to: 13640
/* 272 */     MCD::OPC_Decode, 128, 7, 61, // Opcode: JR_HB
/* 276 */     MCD::OPC_FilterValue, 9, 39, 0, // Skip to: 319
/* 280 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 283 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 301
/* 287 */     MCD::OPC_CheckPredicate, 1, 37, 52, // Skip to: 13640
/* 291 */     MCD::OPC_CheckField, 16, 5, 0, 31, 52, // Skip to: 13640
/* 297 */     MCD::OPC_Decode, 237, 6, 62, // Opcode: JALR
/* 301 */     MCD::OPC_FilterValue, 16, 23, 52, // Skip to: 13640
/* 305 */     MCD::OPC_CheckPredicate, 10, 19, 52, // Skip to: 13640
/* 309 */     MCD::OPC_CheckField, 16, 5, 0, 13, 52, // Skip to: 13640
/* 315 */     MCD::OPC_Decode, 244, 6, 62, // Opcode: JALR_HB
/* 319 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 337
/* 323 */     MCD::OPC_CheckPredicate, 7, 1, 52, // Skip to: 13640
/* 327 */     MCD::OPC_CheckField, 6, 5, 0, 251, 51, // Skip to: 13640
/* 333 */     MCD::OPC_Decode, 130, 9, 63, // Opcode: MOVZ_I_I
/* 337 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 355
/* 341 */     MCD::OPC_CheckPredicate, 7, 239, 51, // Skip to: 13640
/* 345 */     MCD::OPC_CheckField, 6, 5, 0, 233, 51, // Skip to: 13640
/* 351 */     MCD::OPC_Decode, 238, 8, 63, // Opcode: MOVN_I_I
/* 355 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 367
/* 359 */     MCD::OPC_CheckPredicate, 5, 221, 51, // Skip to: 13640
/* 363 */     MCD::OPC_Decode, 247, 12, 64, // Opcode: SYSCALL
/* 367 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 379
/* 371 */     MCD::OPC_CheckPredicate, 5, 209, 51, // Skip to: 13640
/* 375 */     MCD::OPC_Decode, 159, 2, 33, // Opcode: BREAK
/* 379 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 391
/* 383 */     MCD::OPC_CheckPredicate, 10, 197, 51, // Skip to: 13640
/* 387 */     MCD::OPC_Decode, 244, 12, 65, // Opcode: SYNC
/* 391 */     MCD::OPC_FilterValue, 16, 43, 0, // Skip to: 438
/* 395 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 398 */     MCD::OPC_FilterValue, 0, 182, 51, // Skip to: 13640
/* 402 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 405 */     MCD::OPC_FilterValue, 0, 175, 51, // Skip to: 13640
/* 409 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 412 */     MCD::OPC_FilterValue, 0, 168, 51, // Skip to: 13640
/* 416 */     MCD::OPC_CheckPredicate, 11, 10, 0, // Skip to: 430
/* 420 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 430
/* 426 */     MCD::OPC_Decode, 173, 8, 66, // Opcode: MFHI
/* 430 */     MCD::OPC_CheckPredicate, 12, 150, 51, // Skip to: 13640
/* 434 */     MCD::OPC_Decode, 176, 8, 67, // Opcode: MFHI_DSP
/* 438 */     MCD::OPC_FilterValue, 17, 36, 0, // Skip to: 478
/* 442 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 445 */     MCD::OPC_FilterValue, 0, 135, 51, // Skip to: 13640
/* 449 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 452 */     MCD::OPC_FilterValue, 0, 128, 51, // Skip to: 13640
/* 456 */     MCD::OPC_CheckPredicate, 13, 10, 0, // Skip to: 470
/* 460 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 470
/* 466 */     MCD::OPC_Decode, 163, 9, 61, // Opcode: MTHI
/* 470 */     MCD::OPC_CheckPredicate, 12, 110, 51, // Skip to: 13640
/* 474 */     MCD::OPC_Decode, 165, 9, 68, // Opcode: MTHI_DSP
/* 478 */     MCD::OPC_FilterValue, 18, 43, 0, // Skip to: 525
/* 482 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 485 */     MCD::OPC_FilterValue, 0, 95, 51, // Skip to: 13640
/* 489 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 492 */     MCD::OPC_FilterValue, 0, 88, 51, // Skip to: 13640
/* 496 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 499 */     MCD::OPC_FilterValue, 0, 81, 51, // Skip to: 13640
/* 503 */     MCD::OPC_CheckPredicate, 11, 10, 0, // Skip to: 517
/* 507 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 517
/* 513 */     MCD::OPC_Decode, 178, 8, 66, // Opcode: MFLO
/* 517 */     MCD::OPC_CheckPredicate, 12, 63, 51, // Skip to: 13640
/* 521 */     MCD::OPC_Decode, 181, 8, 67, // Opcode: MFLO_DSP
/* 525 */     MCD::OPC_FilterValue, 19, 36, 0, // Skip to: 565
/* 529 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 532 */     MCD::OPC_FilterValue, 0, 48, 51, // Skip to: 13640
/* 536 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 539 */     MCD::OPC_FilterValue, 0, 41, 51, // Skip to: 13640
/* 543 */     MCD::OPC_CheckPredicate, 13, 10, 0, // Skip to: 557
/* 547 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 557
/* 553 */     MCD::OPC_Decode, 168, 9, 61, // Opcode: MTLO
/* 557 */     MCD::OPC_CheckPredicate, 12, 23, 51, // Skip to: 13640
/* 561 */     MCD::OPC_Decode, 170, 9, 69, // Opcode: MTLO_DSP
/* 565 */     MCD::OPC_FilterValue, 21, 14, 0, // Skip to: 583
/* 569 */     MCD::OPC_CheckPredicate, 14, 11, 51, // Skip to: 13640
/* 573 */     MCD::OPC_CheckField, 8, 3, 0, 5, 51, // Skip to: 13640
/* 579 */     MCD::OPC_Decode, 182, 4, 70, // Opcode: DLSA
/* 583 */     MCD::OPC_FilterValue, 24, 36, 0, // Skip to: 623
/* 587 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 590 */     MCD::OPC_FilterValue, 0, 246, 50, // Skip to: 13640
/* 594 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 597 */     MCD::OPC_FilterValue, 0, 239, 50, // Skip to: 13640
/* 601 */     MCD::OPC_CheckPredicate, 13, 10, 0, // Skip to: 615
/* 605 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 615
/* 611 */     MCD::OPC_Decode, 193, 9, 43, // Opcode: MULT
/* 615 */     MCD::OPC_CheckPredicate, 12, 221, 50, // Skip to: 13640
/* 619 */     MCD::OPC_Decode, 195, 9, 71, // Opcode: MULT_DSP
/* 623 */     MCD::OPC_FilterValue, 25, 36, 0, // Skip to: 663
/* 627 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 630 */     MCD::OPC_FilterValue, 0, 206, 50, // Skip to: 13640
/* 634 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 637 */     MCD::OPC_FilterValue, 0, 199, 50, // Skip to: 13640
/* 641 */     MCD::OPC_CheckPredicate, 13, 10, 0, // Skip to: 655
/* 645 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 655
/* 651 */     MCD::OPC_Decode, 197, 9, 43, // Opcode: MULTu
/* 655 */     MCD::OPC_CheckPredicate, 12, 181, 50, // Skip to: 13640
/* 659 */     MCD::OPC_Decode, 194, 9, 71, // Opcode: MULTU_DSP
/* 663 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 681
/* 667 */     MCD::OPC_CheckPredicate, 13, 169, 50, // Skip to: 13640
/* 671 */     MCD::OPC_CheckField, 6, 10, 0, 163, 50, // Skip to: 13640
/* 677 */     MCD::OPC_Decode, 149, 11, 43, // Opcode: SDIV
/* 681 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 699
/* 685 */     MCD::OPC_CheckPredicate, 13, 151, 50, // Skip to: 13640
/* 689 */     MCD::OPC_CheckField, 6, 10, 0, 145, 50, // Skip to: 13640
/* 695 */     MCD::OPC_Decode, 209, 13, 43, // Opcode: UDIV
/* 699 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 716
/* 703 */     MCD::OPC_CheckPredicate, 5, 133, 50, // Skip to: 13640
/* 707 */     MCD::OPC_CheckField, 6, 5, 0, 127, 50, // Skip to: 13640
/* 713 */     MCD::OPC_Decode, 25, 35, // Opcode: ADD
/* 716 */     MCD::OPC_FilterValue, 33, 13, 0, // Skip to: 733
/* 720 */     MCD::OPC_CheckPredicate, 5, 116, 50, // Skip to: 13640
/* 724 */     MCD::OPC_CheckField, 6, 5, 0, 110, 50, // Skip to: 13640
/* 730 */     MCD::OPC_Decode, 77, 35, // Opcode: ADDu
/* 733 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 751
/* 737 */     MCD::OPC_CheckPredicate, 5, 99, 50, // Skip to: 13640
/* 741 */     MCD::OPC_CheckField, 6, 5, 0, 93, 50, // Skip to: 13640
/* 747 */     MCD::OPC_Decode, 177, 12, 35, // Opcode: SUB
/* 751 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 769
/* 755 */     MCD::OPC_CheckPredicate, 5, 81, 50, // Skip to: 13640
/* 759 */     MCD::OPC_CheckField, 6, 5, 0, 75, 50, // Skip to: 13640
/* 765 */     MCD::OPC_Decode, 217, 12, 35, // Opcode: SUBu
/* 769 */     MCD::OPC_FilterValue, 36, 13, 0, // Skip to: 786
/* 773 */     MCD::OPC_CheckPredicate, 5, 63, 50, // Skip to: 13640
/* 777 */     MCD::OPC_CheckField, 6, 5, 0, 57, 50, // Skip to: 13640
/* 783 */     MCD::OPC_Decode, 83, 35, // Opcode: AND
/* 786 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 804
/* 790 */     MCD::OPC_CheckPredicate, 5, 46, 50, // Skip to: 13640
/* 794 */     MCD::OPC_CheckField, 6, 5, 0, 40, 50, // Skip to: 13640
/* 800 */     MCD::OPC_Decode, 248, 9, 35, // Opcode: OR
/* 804 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 822
/* 808 */     MCD::OPC_CheckPredicate, 5, 28, 50, // Skip to: 13640
/* 812 */     MCD::OPC_CheckField, 6, 5, 0, 22, 50, // Skip to: 13640
/* 818 */     MCD::OPC_Decode, 223, 13, 35, // Opcode: XOR
/* 822 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 840
/* 826 */     MCD::OPC_CheckPredicate, 5, 10, 50, // Skip to: 13640
/* 830 */     MCD::OPC_CheckField, 6, 5, 0, 4, 50, // Skip to: 13640
/* 836 */     MCD::OPC_Decode, 237, 9, 35, // Opcode: NOR
/* 840 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 858
/* 844 */     MCD::OPC_CheckPredicate, 5, 248, 49, // Skip to: 13640
/* 848 */     MCD::OPC_CheckField, 6, 5, 0, 242, 49, // Skip to: 13640
/* 854 */     MCD::OPC_Decode, 227, 11, 35, // Opcode: SLT
/* 858 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 876
/* 862 */     MCD::OPC_CheckPredicate, 5, 230, 49, // Skip to: 13640
/* 866 */     MCD::OPC_CheckField, 6, 5, 0, 224, 49, // Skip to: 13640
/* 872 */     MCD::OPC_Decode, 236, 11, 35, // Opcode: SLTu
/* 876 */     MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 888
/* 880 */     MCD::OPC_CheckPredicate, 15, 212, 49, // Skip to: 13640
/* 884 */     MCD::OPC_Decode, 173, 13, 72, // Opcode: TGE
/* 888 */     MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 900
/* 892 */     MCD::OPC_CheckPredicate, 15, 200, 49, // Skip to: 13640
/* 896 */     MCD::OPC_Decode, 178, 13, 72, // Opcode: TGEU
/* 900 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 912
/* 904 */     MCD::OPC_CheckPredicate, 15, 188, 49, // Skip to: 13640
/* 908 */     MCD::OPC_Decode, 189, 13, 72, // Opcode: TLT
/* 912 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 924
/* 916 */     MCD::OPC_CheckPredicate, 15, 176, 49, // Skip to: 13640
/* 920 */     MCD::OPC_Decode, 193, 13, 72, // Opcode: TLTU
/* 924 */     MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 936
/* 928 */     MCD::OPC_CheckPredicate, 15, 164, 49, // Skip to: 13640
/* 932 */     MCD::OPC_Decode, 169, 13, 72, // Opcode: TEQ
/* 936 */     MCD::OPC_FilterValue, 54, 156, 49, // Skip to: 13640
/* 940 */     MCD::OPC_CheckPredicate, 15, 152, 49, // Skip to: 13640
/* 944 */     MCD::OPC_Decode, 196, 13, 72, // Opcode: TNE
/* 948 */     MCD::OPC_FilterValue, 1, 201, 0, // Skip to: 1153
/* 952 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 955 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 967
/* 959 */     MCD::OPC_CheckPredicate, 5, 133, 49, // Skip to: 13640
/* 963 */     MCD::OPC_Decode, 247, 1, 73, // Opcode: BLTZ
/* 967 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 979
/* 971 */     MCD::OPC_CheckPredicate, 5, 121, 49, // Skip to: 13640
/* 975 */     MCD::OPC_Decode, 205, 1, 73, // Opcode: BGEZ
/* 979 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 991
/* 983 */     MCD::OPC_CheckPredicate, 16, 109, 49, // Skip to: 13640
/* 987 */     MCD::OPC_Decode, 255, 1, 73, // Opcode: BLTZL
/* 991 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1003
/* 995 */     MCD::OPC_CheckPredicate, 16, 97, 49, // Skip to: 13640
/* 999 */     MCD::OPC_Decode, 213, 1, 73, // Opcode: BGEZL
/* 1003 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1015
/* 1007 */    MCD::OPC_CheckPredicate, 16, 85, 49, // Skip to: 13640
/* 1011 */    MCD::OPC_Decode, 174, 13, 74, // Opcode: TGEI
/* 1015 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1027
/* 1019 */    MCD::OPC_CheckPredicate, 16, 73, 49, // Skip to: 13640
/* 1023 */    MCD::OPC_Decode, 175, 13, 74, // Opcode: TGEIU
/* 1027 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1039
/* 1031 */    MCD::OPC_CheckPredicate, 16, 61, 49, // Skip to: 13640
/* 1035 */    MCD::OPC_Decode, 190, 13, 74, // Opcode: TLTI
/* 1039 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1051
/* 1043 */    MCD::OPC_CheckPredicate, 16, 49, 49, // Skip to: 13640
/* 1047 */    MCD::OPC_Decode, 208, 13, 74, // Opcode: TTLTIU
/* 1051 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1063
/* 1055 */    MCD::OPC_CheckPredicate, 16, 37, 49, // Skip to: 13640
/* 1059 */    MCD::OPC_Decode, 170, 13, 74, // Opcode: TEQI
/* 1063 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1075
/* 1067 */    MCD::OPC_CheckPredicate, 16, 25, 49, // Skip to: 13640
/* 1071 */    MCD::OPC_Decode, 197, 13, 74, // Opcode: TNEI
/* 1075 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 1087
/* 1079 */    MCD::OPC_CheckPredicate, 13, 13, 49, // Skip to: 13640
/* 1083 */    MCD::OPC_Decode, 249, 1, 73, // Opcode: BLTZAL
/* 1087 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 1099
/* 1091 */    MCD::OPC_CheckPredicate, 13, 1, 49, // Skip to: 13640
/* 1095 */    MCD::OPC_Decode, 207, 1, 73, // Opcode: BGEZAL
/* 1099 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 1111
/* 1103 */    MCD::OPC_CheckPredicate, 16, 245, 48, // Skip to: 13640
/* 1107 */    MCD::OPC_Decode, 251, 1, 73, // Opcode: BLTZALL
/* 1111 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 1123
/* 1115 */    MCD::OPC_CheckPredicate, 16, 233, 48, // Skip to: 13640
/* 1119 */    MCD::OPC_Decode, 209, 1, 73, // Opcode: BGEZALL
/* 1123 */    MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 1141
/* 1127 */    MCD::OPC_CheckPredicate, 12, 221, 48, // Skip to: 13640
/* 1131 */    MCD::OPC_CheckField, 21, 5, 0, 215, 48, // Skip to: 13640
/* 1137 */    MCD::OPC_Decode, 157, 2, 75, // Opcode: BPOSGE32
/* 1141 */    MCD::OPC_FilterValue, 31, 207, 48, // Skip to: 13640
/* 1145 */    MCD::OPC_CheckPredicate, 6, 203, 48, // Skip to: 13640
/* 1149 */    MCD::OPC_Decode, 245, 12, 76, // Opcode: SYNCI
/* 1153 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1165
/* 1157 */    MCD::OPC_CheckPredicate, 10, 191, 48, // Skip to: 13640
/* 1161 */    MCD::OPC_Decode, 235, 6, 77, // Opcode: J
/* 1165 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1177
/* 1169 */    MCD::OPC_CheckPredicate, 5, 179, 48, // Skip to: 13640
/* 1173 */    MCD::OPC_Decode, 236, 6, 77, // Opcode: JAL
/* 1177 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1189
/* 1181 */    MCD::OPC_CheckPredicate, 5, 167, 48, // Skip to: 13640
/* 1185 */    MCD::OPC_Decode, 194, 1, 78, // Opcode: BEQ
/* 1189 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1201
/* 1193 */    MCD::OPC_CheckPredicate, 5, 155, 48, // Skip to: 13640
/* 1197 */    MCD::OPC_Decode, 133, 2, 78, // Opcode: BNE
/* 1201 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1219
/* 1205 */    MCD::OPC_CheckPredicate, 5, 143, 48, // Skip to: 13640
/* 1209 */    MCD::OPC_CheckField, 16, 5, 0, 137, 48, // Skip to: 13640
/* 1215 */    MCD::OPC_Decode, 239, 1, 73, // Opcode: BLEZ
/* 1219 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1237
/* 1223 */    MCD::OPC_CheckPredicate, 5, 125, 48, // Skip to: 13640
/* 1227 */    MCD::OPC_CheckField, 16, 5, 0, 119, 48, // Skip to: 13640
/* 1233 */    MCD::OPC_Decode, 215, 1, 73, // Opcode: BGTZ
/* 1237 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 1248
/* 1241 */    MCD::OPC_CheckPredicate, 13, 107, 48, // Skip to: 13640
/* 1245 */    MCD::OPC_Decode, 73, 79, // Opcode: ADDi
/* 1248 */    MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 1259
/* 1252 */    MCD::OPC_CheckPredicate, 1, 96, 48, // Skip to: 13640
/* 1256 */    MCD::OPC_Decode, 75, 79, // Opcode: ADDiu
/* 1259 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1271
/* 1263 */    MCD::OPC_CheckPredicate, 5, 85, 48, // Skip to: 13640
/* 1267 */    MCD::OPC_Decode, 230, 11, 79, // Opcode: SLTi
/* 1271 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1283
/* 1275 */    MCD::OPC_CheckPredicate, 5, 73, 48, // Skip to: 13640
/* 1279 */    MCD::OPC_Decode, 233, 11, 79, // Opcode: SLTiu
/* 1283 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 1294
/* 1287 */    MCD::OPC_CheckPredicate, 1, 61, 48, // Skip to: 13640
/* 1291 */    MCD::OPC_Decode, 93, 80, // Opcode: ANDi
/* 1294 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1306
/* 1298 */    MCD::OPC_CheckPredicate, 5, 50, 48, // Skip to: 13640
/* 1302 */    MCD::OPC_Decode, 129, 10, 80, // Opcode: ORi
/* 1306 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1318
/* 1310 */    MCD::OPC_CheckPredicate, 5, 38, 48, // Skip to: 13640
/* 1314 */    MCD::OPC_Decode, 232, 13, 80, // Opcode: XORi
/* 1318 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1336
/* 1322 */    MCD::OPC_CheckPredicate, 5, 26, 48, // Skip to: 13640
/* 1326 */    MCD::OPC_CheckField, 21, 5, 0, 20, 48, // Skip to: 13640
/* 1332 */    MCD::OPC_Decode, 197, 7, 52, // Opcode: LUi
/* 1336 */    MCD::OPC_FilterValue, 16, 248, 0, // Skip to: 1588
/* 1340 */    MCD::OPC_ExtractField, 3, 8,  // Inst{10-3} ...
/* 1343 */    MCD::OPC_FilterValue, 0, 112, 0, // Skip to: 1459
/* 1347 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1350 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1362
/* 1354 */    MCD::OPC_CheckPredicate, 10, 250, 47, // Skip to: 13640
/* 1358 */    MCD::OPC_Decode, 166, 8, 81, // Opcode: MFC0
/* 1362 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1374
/* 1366 */    MCD::OPC_CheckPredicate, 10, 238, 47, // Skip to: 13640
/* 1370 */    MCD::OPC_Decode, 156, 9, 81, // Opcode: MTC0
/* 1374 */    MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 1398
/* 1378 */    MCD::OPC_CheckPredicate, 6, 226, 47, // Skip to: 13640
/* 1382 */    MCD::OPC_CheckField, 11, 5, 12, 220, 47, // Skip to: 13640
/* 1388 */    MCD::OPC_CheckField, 0, 3, 0, 214, 47, // Skip to: 13640
/* 1394 */    MCD::OPC_Decode, 167, 4, 42, // Opcode: DI
/* 1398 */    MCD::OPC_FilterValue, 16, 206, 47, // Skip to: 13640
/* 1402 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1405 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1423
/* 1409 */    MCD::OPC_CheckPredicate, 5, 195, 47, // Skip to: 13640
/* 1413 */    MCD::OPC_CheckField, 11, 10, 0, 189, 47, // Skip to: 13640
/* 1419 */    MCD::OPC_Decode, 183, 13, 0, // Opcode: TLBR
/* 1423 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1441
/* 1427 */    MCD::OPC_CheckPredicate, 5, 177, 47, // Skip to: 13640
/* 1431 */    MCD::OPC_CheckField, 11, 10, 0, 171, 47, // Skip to: 13640
/* 1437 */    MCD::OPC_Decode, 185, 13, 0, // Opcode: TLBWI
/* 1441 */    MCD::OPC_FilterValue, 6, 163, 47, // Skip to: 13640
/* 1445 */    MCD::OPC_CheckPredicate, 5, 159, 47, // Skip to: 13640
/* 1449 */    MCD::OPC_CheckField, 11, 10, 0, 153, 47, // Skip to: 13640
/* 1455 */    MCD::OPC_Decode, 187, 13, 0, // Opcode: TLBWR
/* 1459 */    MCD::OPC_FilterValue, 1, 22, 0, // Skip to: 1485
/* 1463 */    MCD::OPC_CheckPredicate, 5, 141, 47, // Skip to: 13640
/* 1467 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 133, 47, // Skip to: 13640
/* 1475 */    MCD::OPC_CheckField, 0, 3, 0, 127, 47, // Skip to: 13640
/* 1481 */    MCD::OPC_Decode, 181, 13, 0, // Opcode: TLBP
/* 1485 */    MCD::OPC_FilterValue, 3, 43, 0, // Skip to: 1532
/* 1489 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1492 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 1512
/* 1496 */    MCD::OPC_CheckPredicate, 17, 108, 47, // Skip to: 13640
/* 1500 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 100, 47, // Skip to: 13640
/* 1508 */    MCD::OPC_Decode, 131, 5, 0, // Opcode: ERET
/* 1512 */    MCD::OPC_FilterValue, 7, 92, 47, // Skip to: 13640
/* 1516 */    MCD::OPC_CheckPredicate, 10, 88, 47, // Skip to: 13640
/* 1520 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 80, 47, // Skip to: 13640
/* 1528 */    MCD::OPC_Decode, 162, 4, 0, // Opcode: DERET
/* 1532 */    MCD::OPC_FilterValue, 4, 72, 47, // Skip to: 13640
/* 1536 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1539 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1564
/* 1543 */    MCD::OPC_CheckPredicate, 18, 61, 47, // Skip to: 13640
/* 1547 */    MCD::OPC_CheckField, 16, 10, 128, 4, 54, 47, // Skip to: 13640
/* 1554 */    MCD::OPC_CheckField, 0, 3, 0, 48, 47, // Skip to: 13640
/* 1560 */    MCD::OPC_Decode, 218, 13, 0, // Opcode: WAIT
/* 1564 */    MCD::OPC_FilterValue, 12, 40, 47, // Skip to: 13640
/* 1568 */    MCD::OPC_CheckPredicate, 6, 36, 47, // Skip to: 13640
/* 1572 */    MCD::OPC_CheckField, 21, 5, 11, 30, 47, // Skip to: 13640
/* 1578 */    MCD::OPC_CheckField, 0, 3, 0, 24, 47, // Skip to: 13640
/* 1584 */    MCD::OPC_Decode, 129, 5, 42, // Opcode: EI
/* 1588 */    MCD::OPC_FilterValue, 17, 21, 6, // Skip to: 3149
/* 1592 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1595 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1613
/* 1599 */    MCD::OPC_CheckPredicate, 5, 5, 47, // Skip to: 13640
/* 1603 */    MCD::OPC_CheckField, 0, 11, 0, 255, 46, // Skip to: 13640
/* 1609 */    MCD::OPC_Decode, 167, 8, 82, // Opcode: MFC1
/* 1613 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1631
/* 1617 */    MCD::OPC_CheckPredicate, 19, 243, 46, // Skip to: 13640
/* 1621 */    MCD::OPC_CheckField, 0, 11, 0, 237, 46, // Skip to: 13640
/* 1627 */    MCD::OPC_Decode, 185, 4, 83, // Opcode: DMFC1
/* 1631 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1649
/* 1635 */    MCD::OPC_CheckPredicate, 5, 225, 46, // Skip to: 13640
/* 1639 */    MCD::OPC_CheckField, 0, 11, 0, 219, 46, // Skip to: 13640
/* 1645 */    MCD::OPC_Decode, 226, 2, 84, // Opcode: CFC1
/* 1649 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 1667
/* 1653 */    MCD::OPC_CheckPredicate, 20, 207, 46, // Skip to: 13640
/* 1657 */    MCD::OPC_CheckField, 0, 11, 0, 201, 46, // Skip to: 13640
/* 1663 */    MCD::OPC_Decode, 170, 8, 85, // Opcode: MFHC1_D32
/* 1667 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1685
/* 1671 */    MCD::OPC_CheckPredicate, 5, 189, 46, // Skip to: 13640
/* 1675 */    MCD::OPC_CheckField, 0, 11, 0, 183, 46, // Skip to: 13640
/* 1681 */    MCD::OPC_Decode, 157, 9, 86, // Opcode: MTC1
/* 1685 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1703
/* 1689 */    MCD::OPC_CheckPredicate, 19, 171, 46, // Skip to: 13640
/* 1693 */    MCD::OPC_CheckField, 0, 11, 0, 165, 46, // Skip to: 13640
/* 1699 */    MCD::OPC_Decode, 190, 4, 87, // Opcode: DMTC1
/* 1703 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1721
/* 1707 */    MCD::OPC_CheckPredicate, 5, 153, 46, // Skip to: 13640
/* 1711 */    MCD::OPC_CheckField, 0, 11, 0, 147, 46, // Skip to: 13640
/* 1717 */    MCD::OPC_Decode, 198, 3, 88, // Opcode: CTC1
/* 1721 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1739
/* 1725 */    MCD::OPC_CheckPredicate, 20, 135, 46, // Skip to: 13640
/* 1729 */    MCD::OPC_CheckField, 0, 11, 0, 129, 46, // Skip to: 13640
/* 1735 */    MCD::OPC_Decode, 160, 9, 89, // Opcode: MTHC1_D32
/* 1739 */    MCD::OPC_FilterValue, 8, 51, 0, // Skip to: 1794
/* 1743 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1746 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1758
/* 1750 */    MCD::OPC_CheckPredicate, 13, 110, 46, // Skip to: 13640
/* 1754 */    MCD::OPC_Decode, 177, 1, 90, // Opcode: BC1F
/* 1758 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1770
/* 1762 */    MCD::OPC_CheckPredicate, 13, 98, 46, // Skip to: 13640
/* 1766 */    MCD::OPC_Decode, 181, 1, 90, // Opcode: BC1T
/* 1770 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1782
/* 1774 */    MCD::OPC_CheckPredicate, 16, 86, 46, // Skip to: 13640
/* 1778 */    MCD::OPC_Decode, 178, 1, 90, // Opcode: BC1FL
/* 1782 */    MCD::OPC_FilterValue, 3, 78, 46, // Skip to: 13640
/* 1786 */    MCD::OPC_CheckPredicate, 16, 74, 46, // Skip to: 13640
/* 1790 */    MCD::OPC_Decode, 182, 1, 90, // Opcode: BC1TL
/* 1794 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1806
/* 1798 */    MCD::OPC_CheckPredicate, 8, 62, 46, // Skip to: 13640
/* 1802 */    MCD::OPC_Decode, 180, 2, 91, // Opcode: BZ_V
/* 1806 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 1818
/* 1810 */    MCD::OPC_CheckPredicate, 8, 50, 46, // Skip to: 13640
/* 1814 */    MCD::OPC_Decode, 154, 2, 91, // Opcode: BNZ_V
/* 1818 */    MCD::OPC_FilterValue, 16, 80, 2, // Skip to: 2414
/* 1822 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1825 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1837
/* 1829 */    MCD::OPC_CheckPredicate, 5, 31, 46, // Skip to: 13640
/* 1833 */    MCD::OPC_Decode, 162, 5, 92, // Opcode: FADD_S
/* 1837 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1849
/* 1841 */    MCD::OPC_CheckPredicate, 5, 19, 46, // Skip to: 13640
/* 1845 */    MCD::OPC_Decode, 164, 6, 92, // Opcode: FSUB_S
/* 1849 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1861
/* 1853 */    MCD::OPC_CheckPredicate, 5, 7, 46, // Skip to: 13640
/* 1857 */    MCD::OPC_Decode, 255, 5, 92, // Opcode: FMUL_S
/* 1861 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1873
/* 1865 */    MCD::OPC_CheckPredicate, 5, 251, 45, // Skip to: 13640
/* 1869 */    MCD::OPC_Decode, 198, 5, 92, // Opcode: FDIV_S
/* 1873 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1891
/* 1877 */    MCD::OPC_CheckPredicate, 15, 239, 45, // Skip to: 13640
/* 1881 */    MCD::OPC_CheckField, 16, 5, 0, 233, 45, // Skip to: 13640
/* 1887 */    MCD::OPC_Decode, 157, 6, 93, // Opcode: FSQRT_S
/* 1891 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1909
/* 1895 */    MCD::OPC_CheckPredicate, 5, 221, 45, // Skip to: 13640
/* 1899 */    MCD::OPC_CheckField, 16, 5, 0, 215, 45, // Skip to: 13640
/* 1905 */    MCD::OPC_Decode, 155, 5, 93, // Opcode: FABS_S
/* 1909 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1927
/* 1913 */    MCD::OPC_CheckPredicate, 5, 203, 45, // Skip to: 13640
/* 1917 */    MCD::OPC_CheckField, 16, 5, 0, 197, 45, // Skip to: 13640
/* 1923 */    MCD::OPC_Decode, 247, 5, 93, // Opcode: FMOV_S
/* 1927 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1945
/* 1931 */    MCD::OPC_CheckPredicate, 5, 185, 45, // Skip to: 13640
/* 1935 */    MCD::OPC_CheckField, 16, 5, 0, 179, 45, // Skip to: 13640
/* 1941 */    MCD::OPC_Decode, 133, 6, 93, // Opcode: FNEG_S
/* 1945 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1963
/* 1949 */    MCD::OPC_CheckPredicate, 15, 167, 45, // Skip to: 13640
/* 1953 */    MCD::OPC_CheckField, 16, 5, 0, 161, 45, // Skip to: 13640
/* 1959 */    MCD::OPC_Decode, 243, 10, 93, // Opcode: ROUND_W_S
/* 1963 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 1981
/* 1967 */    MCD::OPC_CheckPredicate, 15, 149, 45, // Skip to: 13640
/* 1971 */    MCD::OPC_CheckField, 16, 5, 0, 143, 45, // Skip to: 13640
/* 1977 */    MCD::OPC_Decode, 206, 13, 93, // Opcode: TRUNC_W_S
/* 1981 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 1999
/* 1985 */    MCD::OPC_CheckPredicate, 15, 131, 45, // Skip to: 13640
/* 1989 */    MCD::OPC_CheckField, 16, 5, 0, 125, 45, // Skip to: 13640
/* 1995 */    MCD::OPC_Decode, 216, 2, 93, // Opcode: CEIL_W_S
/* 1999 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 2017
/* 2003 */    MCD::OPC_CheckPredicate, 15, 113, 45, // Skip to: 13640
/* 2007 */    MCD::OPC_CheckField, 16, 5, 0, 107, 45, // Skip to: 13640
/* 2013 */    MCD::OPC_Decode, 232, 5, 93, // Opcode: FLOOR_W_S
/* 2017 */    MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 2048
/* 2021 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2024 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2036
/* 2028 */    MCD::OPC_CheckPredicate, 7, 88, 45, // Skip to: 13640
/* 2032 */    MCD::OPC_Decode, 229, 8, 94, // Opcode: MOVF_S
/* 2036 */    MCD::OPC_FilterValue, 1, 80, 45, // Skip to: 13640
/* 2040 */    MCD::OPC_CheckPredicate, 7, 76, 45, // Skip to: 13640
/* 2044 */    MCD::OPC_Decode, 249, 8, 94, // Opcode: MOVT_S
/* 2048 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 2060
/* 2052 */    MCD::OPC_CheckPredicate, 7, 64, 45, // Skip to: 13640
/* 2056 */    MCD::OPC_Decode, 133, 9, 95, // Opcode: MOVZ_I_S
/* 2060 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 2072
/* 2064 */    MCD::OPC_CheckPredicate, 7, 52, 45, // Skip to: 13640
/* 2068 */    MCD::OPC_Decode, 241, 8, 95, // Opcode: MOVN_I_S
/* 2072 */    MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 2090
/* 2076 */    MCD::OPC_CheckPredicate, 21, 40, 45, // Skip to: 13640
/* 2080 */    MCD::OPC_CheckField, 16, 5, 0, 34, 45, // Skip to: 13640
/* 2086 */    MCD::OPC_Decode, 201, 3, 96, // Opcode: CVT_D32_S
/* 2090 */    MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 2108
/* 2094 */    MCD::OPC_CheckPredicate, 5, 22, 45, // Skip to: 13640
/* 2098 */    MCD::OPC_CheckField, 16, 5, 0, 16, 45, // Skip to: 13640
/* 2104 */    MCD::OPC_Decode, 221, 3, 93, // Opcode: CVT_W_S
/* 2108 */    MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 2126
/* 2112 */    MCD::OPC_CheckPredicate, 22, 4, 45, // Skip to: 13640
/* 2116 */    MCD::OPC_CheckField, 16, 5, 0, 254, 44, // Skip to: 13640
/* 2122 */    MCD::OPC_Decode, 210, 3, 97, // Opcode: CVT_L_S
/* 2126 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 2144
/* 2130 */    MCD::OPC_CheckPredicate, 13, 242, 44, // Skip to: 13640
/* 2134 */    MCD::OPC_CheckField, 6, 5, 0, 236, 44, // Skip to: 13640
/* 2140 */    MCD::OPC_Decode, 228, 3, 98, // Opcode: C_F_S
/* 2144 */    MCD::OPC_FilterValue, 49, 14, 0, // Skip to: 2162
/* 2148 */    MCD::OPC_CheckPredicate, 13, 224, 44, // Skip to: 13640
/* 2152 */    MCD::OPC_CheckField, 6, 5, 0, 218, 44, // Skip to: 13640
/* 2158 */    MCD::OPC_Decode, 142, 4, 98, // Opcode: C_UN_S
/* 2162 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 2180
/* 2166 */    MCD::OPC_CheckPredicate, 13, 206, 44, // Skip to: 13640
/* 2170 */    MCD::OPC_CheckField, 6, 5, 0, 200, 44, // Skip to: 13640
/* 2176 */    MCD::OPC_Decode, 225, 3, 98, // Opcode: C_EQ_S
/* 2180 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 2198
/* 2184 */    MCD::OPC_CheckPredicate, 13, 188, 44, // Skip to: 13640
/* 2188 */    MCD::OPC_CheckField, 6, 5, 0, 182, 44, // Skip to: 13640
/* 2194 */    MCD::OPC_Decode, 133, 4, 98, // Opcode: C_UEQ_S
/* 2198 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 2216
/* 2202 */    MCD::OPC_CheckPredicate, 13, 170, 44, // Skip to: 13640
/* 2206 */    MCD::OPC_CheckField, 6, 5, 0, 164, 44, // Skip to: 13640
/* 2212 */    MCD::OPC_Decode, 252, 3, 98, // Opcode: C_OLT_S
/* 2216 */    MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 2234
/* 2220 */    MCD::OPC_CheckPredicate, 13, 152, 44, // Skip to: 13640
/* 2224 */    MCD::OPC_CheckField, 6, 5, 0, 146, 44, // Skip to: 13640
/* 2230 */    MCD::OPC_Decode, 139, 4, 98, // Opcode: C_ULT_S
/* 2234 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 2252
/* 2238 */    MCD::OPC_CheckPredicate, 13, 134, 44, // Skip to: 13640
/* 2242 */    MCD::OPC_CheckField, 6, 5, 0, 128, 44, // Skip to: 13640
/* 2248 */    MCD::OPC_Decode, 249, 3, 98, // Opcode: C_OLE_S
/* 2252 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 2270
/* 2256 */    MCD::OPC_CheckPredicate, 13, 116, 44, // Skip to: 13640
/* 2260 */    MCD::OPC_CheckField, 6, 5, 0, 110, 44, // Skip to: 13640
/* 2266 */    MCD::OPC_Decode, 136, 4, 98, // Opcode: C_ULE_S
/* 2270 */    MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 2288
/* 2274 */    MCD::OPC_CheckPredicate, 13, 98, 44, // Skip to: 13640
/* 2278 */    MCD::OPC_CheckField, 6, 5, 0, 92, 44, // Skip to: 13640
/* 2284 */    MCD::OPC_Decode, 130, 4, 98, // Opcode: C_SF_S
/* 2288 */    MCD::OPC_FilterValue, 57, 14, 0, // Skip to: 2306
/* 2292 */    MCD::OPC_CheckPredicate, 13, 80, 44, // Skip to: 13640
/* 2296 */    MCD::OPC_CheckField, 6, 5, 0, 74, 44, // Skip to: 13640
/* 2302 */    MCD::OPC_Decode, 240, 3, 98, // Opcode: C_NGLE_S
/* 2306 */    MCD::OPC_FilterValue, 58, 14, 0, // Skip to: 2324
/* 2310 */    MCD::OPC_CheckPredicate, 13, 62, 44, // Skip to: 13640
/* 2314 */    MCD::OPC_CheckField, 6, 5, 0, 56, 44, // Skip to: 13640
/* 2320 */    MCD::OPC_Decode, 255, 3, 98, // Opcode: C_SEQ_S
/* 2324 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 2342
/* 2328 */    MCD::OPC_CheckPredicate, 13, 44, 44, // Skip to: 13640
/* 2332 */    MCD::OPC_CheckField, 6, 5, 0, 38, 44, // Skip to: 13640
/* 2338 */    MCD::OPC_Decode, 243, 3, 98, // Opcode: C_NGL_S
/* 2342 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 2360
/* 2346 */    MCD::OPC_CheckPredicate, 13, 26, 44, // Skip to: 13640
/* 2350 */    MCD::OPC_CheckField, 6, 5, 0, 20, 44, // Skip to: 13640
/* 2356 */    MCD::OPC_Decode, 234, 3, 98, // Opcode: C_LT_S
/* 2360 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 2378
/* 2364 */    MCD::OPC_CheckPredicate, 13, 8, 44, // Skip to: 13640
/* 2368 */    MCD::OPC_CheckField, 6, 5, 0, 2, 44, // Skip to: 13640
/* 2374 */    MCD::OPC_Decode, 237, 3, 98, // Opcode: C_NGE_S
/* 2378 */    MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 2396
/* 2382 */    MCD::OPC_CheckPredicate, 13, 246, 43, // Skip to: 13640
/* 2386 */    MCD::OPC_CheckField, 6, 5, 0, 240, 43, // Skip to: 13640
/* 2392 */    MCD::OPC_Decode, 231, 3, 98, // Opcode: C_LE_S
/* 2396 */    MCD::OPC_FilterValue, 63, 232, 43, // Skip to: 13640
/* 2400 */    MCD::OPC_CheckPredicate, 13, 228, 43, // Skip to: 13640
/* 2404 */    MCD::OPC_CheckField, 6, 5, 0, 222, 43, // Skip to: 13640
/* 2410 */    MCD::OPC_Decode, 246, 3, 98, // Opcode: C_NGT_S
/* 2414 */    MCD::OPC_FilterValue, 17, 80, 2, // Skip to: 3010
/* 2418 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2421 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2433
/* 2425 */    MCD::OPC_CheckPredicate, 21, 203, 43, // Skip to: 13640
/* 2429 */    MCD::OPC_Decode, 159, 5, 99, // Opcode: FADD_D32
/* 2433 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2445
/* 2437 */    MCD::OPC_CheckPredicate, 21, 191, 43, // Skip to: 13640
/* 2441 */    MCD::OPC_Decode, 161, 6, 99, // Opcode: FSUB_D32
/* 2445 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2457
/* 2449 */    MCD::OPC_CheckPredicate, 21, 179, 43, // Skip to: 13640
/* 2453 */    MCD::OPC_Decode, 252, 5, 99, // Opcode: FMUL_D32
/* 2457 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2469
/* 2461 */    MCD::OPC_CheckPredicate, 21, 167, 43, // Skip to: 13640
/* 2465 */    MCD::OPC_Decode, 195, 5, 99, // Opcode: FDIV_D32
/* 2469 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 2487
/* 2473 */    MCD::OPC_CheckPredicate, 23, 155, 43, // Skip to: 13640
/* 2477 */    MCD::OPC_CheckField, 16, 5, 0, 149, 43, // Skip to: 13640
/* 2483 */    MCD::OPC_Decode, 154, 6, 100, // Opcode: FSQRT_D32
/* 2487 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 2505
/* 2491 */    MCD::OPC_CheckPredicate, 21, 137, 43, // Skip to: 13640
/* 2495 */    MCD::OPC_CheckField, 16, 5, 0, 131, 43, // Skip to: 13640
/* 2501 */    MCD::OPC_Decode, 152, 5, 100, // Opcode: FABS_D32
/* 2505 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2523
/* 2509 */    MCD::OPC_CheckPredicate, 21, 119, 43, // Skip to: 13640
/* 2513 */    MCD::OPC_CheckField, 16, 5, 0, 113, 43, // Skip to: 13640
/* 2519 */    MCD::OPC_Decode, 244, 5, 100, // Opcode: FMOV_D32
/* 2523 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2541
/* 2527 */    MCD::OPC_CheckPredicate, 21, 101, 43, // Skip to: 13640
/* 2531 */    MCD::OPC_CheckField, 16, 5, 0, 95, 43, // Skip to: 13640
/* 2537 */    MCD::OPC_Decode, 130, 6, 100, // Opcode: FNEG_D32
/* 2541 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 2559
/* 2545 */    MCD::OPC_CheckPredicate, 23, 83, 43, // Skip to: 13640
/* 2549 */    MCD::OPC_CheckField, 16, 5, 0, 77, 43, // Skip to: 13640
/* 2555 */    MCD::OPC_Decode, 240, 10, 101, // Opcode: ROUND_W_D32
/* 2559 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 2577
/* 2563 */    MCD::OPC_CheckPredicate, 23, 65, 43, // Skip to: 13640
/* 2567 */    MCD::OPC_CheckField, 16, 5, 0, 59, 43, // Skip to: 13640
/* 2573 */    MCD::OPC_Decode, 203, 13, 101, // Opcode: TRUNC_W_D32
/* 2577 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 2595
/* 2581 */    MCD::OPC_CheckPredicate, 23, 47, 43, // Skip to: 13640
/* 2585 */    MCD::OPC_CheckField, 16, 5, 0, 41, 43, // Skip to: 13640
/* 2591 */    MCD::OPC_Decode, 213, 2, 101, // Opcode: CEIL_W_D32
/* 2595 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 2613
/* 2599 */    MCD::OPC_CheckPredicate, 23, 29, 43, // Skip to: 13640
/* 2603 */    MCD::OPC_CheckField, 16, 5, 0, 23, 43, // Skip to: 13640
/* 2609 */    MCD::OPC_Decode, 229, 5, 101, // Opcode: FLOOR_W_D32
/* 2613 */    MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 2644
/* 2617 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2620 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2632
/* 2624 */    MCD::OPC_CheckPredicate, 24, 4, 43, // Skip to: 13640
/* 2628 */    MCD::OPC_Decode, 223, 8, 102, // Opcode: MOVF_D32
/* 2632 */    MCD::OPC_FilterValue, 1, 252, 42, // Skip to: 13640
/* 2636 */    MCD::OPC_CheckPredicate, 24, 248, 42, // Skip to: 13640
/* 2640 */    MCD::OPC_Decode, 243, 8, 102, // Opcode: MOVT_D32
/* 2644 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 2656
/* 2648 */    MCD::OPC_CheckPredicate, 24, 236, 42, // Skip to: 13640
/* 2652 */    MCD::OPC_Decode, 255, 8, 103, // Opcode: MOVZ_I_D32
/* 2656 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 2668
/* 2660 */    MCD::OPC_CheckPredicate, 24, 224, 42, // Skip to: 13640
/* 2664 */    MCD::OPC_Decode, 235, 8, 103, // Opcode: MOVN_I_D32
/* 2668 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 2686
/* 2672 */    MCD::OPC_CheckPredicate, 21, 212, 42, // Skip to: 13640
/* 2676 */    MCD::OPC_CheckField, 16, 5, 0, 206, 42, // Skip to: 13640
/* 2682 */    MCD::OPC_Decode, 212, 3, 101, // Opcode: CVT_S_D32
/* 2686 */    MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 2704
/* 2690 */    MCD::OPC_CheckPredicate, 21, 194, 42, // Skip to: 13640
/* 2694 */    MCD::OPC_CheckField, 16, 5, 0, 188, 42, // Skip to: 13640
/* 2700 */    MCD::OPC_Decode, 218, 3, 101, // Opcode: CVT_W_D32
/* 2704 */    MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 2722
/* 2708 */    MCD::OPC_CheckPredicate, 22, 176, 42, // Skip to: 13640
/* 2712 */    MCD::OPC_CheckField, 16, 5, 0, 170, 42, // Skip to: 13640
/* 2718 */    MCD::OPC_Decode, 208, 3, 104, // Opcode: CVT_L_D64
/* 2722 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 2740
/* 2726 */    MCD::OPC_CheckPredicate, 25, 158, 42, // Skip to: 13640
/* 2730 */    MCD::OPC_CheckField, 6, 5, 0, 152, 42, // Skip to: 13640
/* 2736 */    MCD::OPC_Decode, 226, 3, 105, // Opcode: C_F_D32
/* 2740 */    MCD::OPC_FilterValue, 49, 14, 0, // Skip to: 2758
/* 2744 */    MCD::OPC_CheckPredicate, 25, 140, 42, // Skip to: 13640
/* 2748 */    MCD::OPC_CheckField, 6, 5, 0, 134, 42, // Skip to: 13640
/* 2754 */    MCD::OPC_Decode, 140, 4, 105, // Opcode: C_UN_D32
/* 2758 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 2776
/* 2762 */    MCD::OPC_CheckPredicate, 25, 122, 42, // Skip to: 13640
/* 2766 */    MCD::OPC_CheckField, 6, 5, 0, 116, 42, // Skip to: 13640
/* 2772 */    MCD::OPC_Decode, 223, 3, 105, // Opcode: C_EQ_D32
/* 2776 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 2794
/* 2780 */    MCD::OPC_CheckPredicate, 25, 104, 42, // Skip to: 13640
/* 2784 */    MCD::OPC_CheckField, 6, 5, 0, 98, 42, // Skip to: 13640
/* 2790 */    MCD::OPC_Decode, 131, 4, 105, // Opcode: C_UEQ_D32
/* 2794 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 2812
/* 2798 */    MCD::OPC_CheckPredicate, 25, 86, 42, // Skip to: 13640
/* 2802 */    MCD::OPC_CheckField, 6, 5, 0, 80, 42, // Skip to: 13640
/* 2808 */    MCD::OPC_Decode, 250, 3, 105, // Opcode: C_OLT_D32
/* 2812 */    MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 2830
/* 2816 */    MCD::OPC_CheckPredicate, 25, 68, 42, // Skip to: 13640
/* 2820 */    MCD::OPC_CheckField, 6, 5, 0, 62, 42, // Skip to: 13640
/* 2826 */    MCD::OPC_Decode, 137, 4, 105, // Opcode: C_ULT_D32
/* 2830 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 2848
/* 2834 */    MCD::OPC_CheckPredicate, 25, 50, 42, // Skip to: 13640
/* 2838 */    MCD::OPC_CheckField, 6, 5, 0, 44, 42, // Skip to: 13640
/* 2844 */    MCD::OPC_Decode, 247, 3, 105, // Opcode: C_OLE_D32
/* 2848 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 2866
/* 2852 */    MCD::OPC_CheckPredicate, 25, 32, 42, // Skip to: 13640
/* 2856 */    MCD::OPC_CheckField, 6, 5, 0, 26, 42, // Skip to: 13640
/* 2862 */    MCD::OPC_Decode, 134, 4, 105, // Opcode: C_ULE_D32
/* 2866 */    MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 2884
/* 2870 */    MCD::OPC_CheckPredicate, 25, 14, 42, // Skip to: 13640
/* 2874 */    MCD::OPC_CheckField, 6, 5, 0, 8, 42, // Skip to: 13640
/* 2880 */    MCD::OPC_Decode, 128, 4, 105, // Opcode: C_SF_D32
/* 2884 */    MCD::OPC_FilterValue, 57, 14, 0, // Skip to: 2902
/* 2888 */    MCD::OPC_CheckPredicate, 25, 252, 41, // Skip to: 13640
/* 2892 */    MCD::OPC_CheckField, 6, 5, 0, 246, 41, // Skip to: 13640
/* 2898 */    MCD::OPC_Decode, 238, 3, 105, // Opcode: C_NGLE_D32
/* 2902 */    MCD::OPC_FilterValue, 58, 14, 0, // Skip to: 2920
/* 2906 */    MCD::OPC_CheckPredicate, 25, 234, 41, // Skip to: 13640
/* 2910 */    MCD::OPC_CheckField, 6, 5, 0, 228, 41, // Skip to: 13640
/* 2916 */    MCD::OPC_Decode, 253, 3, 105, // Opcode: C_SEQ_D32
/* 2920 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 2938
/* 2924 */    MCD::OPC_CheckPredicate, 25, 216, 41, // Skip to: 13640
/* 2928 */    MCD::OPC_CheckField, 6, 5, 0, 210, 41, // Skip to: 13640
/* 2934 */    MCD::OPC_Decode, 241, 3, 105, // Opcode: C_NGL_D32
/* 2938 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 2956
/* 2942 */    MCD::OPC_CheckPredicate, 25, 198, 41, // Skip to: 13640
/* 2946 */    MCD::OPC_CheckField, 6, 5, 0, 192, 41, // Skip to: 13640
/* 2952 */    MCD::OPC_Decode, 232, 3, 105, // Opcode: C_LT_D32
/* 2956 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 2974
/* 2960 */    MCD::OPC_CheckPredicate, 25, 180, 41, // Skip to: 13640
/* 2964 */    MCD::OPC_CheckField, 6, 5, 0, 174, 41, // Skip to: 13640
/* 2970 */    MCD::OPC_Decode, 235, 3, 105, // Opcode: C_NGE_D32
/* 2974 */    MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 2992
/* 2978 */    MCD::OPC_CheckPredicate, 25, 162, 41, // Skip to: 13640
/* 2982 */    MCD::OPC_CheckField, 6, 5, 0, 156, 41, // Skip to: 13640
/* 2988 */    MCD::OPC_Decode, 229, 3, 105, // Opcode: C_LE_D32
/* 2992 */    MCD::OPC_FilterValue, 63, 148, 41, // Skip to: 13640
/* 2996 */    MCD::OPC_CheckPredicate, 25, 144, 41, // Skip to: 13640
/* 3000 */    MCD::OPC_CheckField, 6, 5, 0, 138, 41, // Skip to: 13640
/* 3006 */    MCD::OPC_Decode, 244, 3, 105, // Opcode: C_NGT_D32
/* 3010 */    MCD::OPC_FilterValue, 20, 39, 0, // Skip to: 3053
/* 3014 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3017 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 3035
/* 3021 */    MCD::OPC_CheckPredicate, 5, 119, 41, // Skip to: 13640
/* 3025 */    MCD::OPC_CheckField, 16, 5, 0, 113, 41, // Skip to: 13640
/* 3031 */    MCD::OPC_Decode, 216, 3, 93, // Opcode: CVT_S_W
/* 3035 */    MCD::OPC_FilterValue, 33, 105, 41, // Skip to: 13640
/* 3039 */    MCD::OPC_CheckPredicate, 21, 101, 41, // Skip to: 13640
/* 3043 */    MCD::OPC_CheckField, 16, 5, 0, 95, 41, // Skip to: 13640
/* 3049 */    MCD::OPC_Decode, 202, 3, 96, // Opcode: CVT_D32_W
/* 3053 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 3065
/* 3057 */    MCD::OPC_CheckPredicate, 8, 83, 41, // Skip to: 13640
/* 3061 */    MCD::OPC_Decode, 177, 2, 91, // Opcode: BZ_B
/* 3065 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3077
/* 3069 */    MCD::OPC_CheckPredicate, 8, 71, 41, // Skip to: 13640
/* 3073 */    MCD::OPC_Decode, 179, 2, 106, // Opcode: BZ_H
/* 3077 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 3089
/* 3081 */    MCD::OPC_CheckPredicate, 8, 59, 41, // Skip to: 13640
/* 3085 */    MCD::OPC_Decode, 181, 2, 107, // Opcode: BZ_W
/* 3089 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 3101
/* 3093 */    MCD::OPC_CheckPredicate, 8, 47, 41, // Skip to: 13640
/* 3097 */    MCD::OPC_Decode, 178, 2, 108, // Opcode: BZ_D
/* 3101 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 3113
/* 3105 */    MCD::OPC_CheckPredicate, 8, 35, 41, // Skip to: 13640
/* 3109 */    MCD::OPC_Decode, 151, 2, 91, // Opcode: BNZ_B
/* 3113 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 3125
/* 3117 */    MCD::OPC_CheckPredicate, 8, 23, 41, // Skip to: 13640
/* 3121 */    MCD::OPC_Decode, 153, 2, 106, // Opcode: BNZ_H
/* 3125 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 3137
/* 3129 */    MCD::OPC_CheckPredicate, 8, 11, 41, // Skip to: 13640
/* 3133 */    MCD::OPC_Decode, 155, 2, 107, // Opcode: BNZ_W
/* 3137 */    MCD::OPC_FilterValue, 31, 3, 41, // Skip to: 13640
/* 3141 */    MCD::OPC_CheckPredicate, 8, 255, 40, // Skip to: 13640
/* 3145 */    MCD::OPC_Decode, 152, 2, 108, // Opcode: BNZ_D
/* 3149 */    MCD::OPC_FilterValue, 18, 39, 0, // Skip to: 3192
/* 3153 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3156 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3174
/* 3160 */    MCD::OPC_CheckPredicate, 5, 236, 40, // Skip to: 13640
/* 3164 */    MCD::OPC_CheckField, 3, 8, 0, 230, 40, // Skip to: 13640
/* 3170 */    MCD::OPC_Decode, 169, 8, 81, // Opcode: MFC2
/* 3174 */    MCD::OPC_FilterValue, 4, 222, 40, // Skip to: 13640
/* 3178 */    MCD::OPC_CheckPredicate, 5, 218, 40, // Skip to: 13640
/* 3182 */    MCD::OPC_CheckField, 3, 8, 0, 212, 40, // Skip to: 13640
/* 3188 */    MCD::OPC_Decode, 159, 9, 81, // Opcode: MTC2
/* 3192 */    MCD::OPC_FilterValue, 19, 207, 0, // Skip to: 3403
/* 3196 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3199 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3217
/* 3203 */    MCD::OPC_CheckPredicate, 26, 193, 40, // Skip to: 13640
/* 3207 */    MCD::OPC_CheckField, 11, 5, 0, 187, 40, // Skip to: 13640
/* 3213 */    MCD::OPC_Decode, 224, 7, 109, // Opcode: LWXC1
/* 3217 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 3235
/* 3221 */    MCD::OPC_CheckPredicate, 27, 175, 40, // Skip to: 13640
/* 3225 */    MCD::OPC_CheckField, 11, 5, 0, 169, 40, // Skip to: 13640
/* 3231 */    MCD::OPC_Decode, 162, 7, 110, // Opcode: LDXC1
/* 3235 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 3253
/* 3239 */    MCD::OPC_CheckPredicate, 28, 157, 40, // Skip to: 13640
/* 3243 */    MCD::OPC_CheckField, 11, 5, 0, 151, 40, // Skip to: 13640
/* 3249 */    MCD::OPC_Decode, 194, 7, 110, // Opcode: LUXC1
/* 3253 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 3271
/* 3257 */    MCD::OPC_CheckPredicate, 26, 139, 40, // Skip to: 13640
/* 3261 */    MCD::OPC_CheckField, 6, 5, 0, 133, 40, // Skip to: 13640
/* 3267 */    MCD::OPC_Decode, 241, 12, 111, // Opcode: SWXC1
/* 3271 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 3289
/* 3275 */    MCD::OPC_CheckPredicate, 27, 121, 40, // Skip to: 13640
/* 3279 */    MCD::OPC_CheckField, 6, 5, 0, 115, 40, // Skip to: 13640
/* 3285 */    MCD::OPC_Decode, 153, 11, 112, // Opcode: SDXC1
/* 3289 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 3307
/* 3293 */    MCD::OPC_CheckPredicate, 28, 103, 40, // Skip to: 13640
/* 3297 */    MCD::OPC_CheckField, 6, 5, 0, 97, 40, // Skip to: 13640
/* 3303 */    MCD::OPC_Decode, 219, 12, 112, // Opcode: SUXC1
/* 3307 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 3319
/* 3311 */    MCD::OPC_CheckPredicate, 29, 85, 40, // Skip to: 13640
/* 3315 */    MCD::OPC_Decode, 136, 8, 113, // Opcode: MADD_S
/* 3319 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 3331
/* 3323 */    MCD::OPC_CheckPredicate, 30, 73, 40, // Skip to: 13640
/* 3327 */    MCD::OPC_Decode, 129, 8, 114, // Opcode: MADD_D32
/* 3331 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 3343
/* 3335 */    MCD::OPC_CheckPredicate, 29, 61, 40, // Skip to: 13640
/* 3339 */    MCD::OPC_Decode, 154, 9, 113, // Opcode: MSUB_S
/* 3343 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 3355
/* 3347 */    MCD::OPC_CheckPredicate, 30, 49, 40, // Skip to: 13640
/* 3351 */    MCD::OPC_Decode, 147, 9, 114, // Opcode: MSUB_D32
/* 3355 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 3367
/* 3359 */    MCD::OPC_CheckPredicate, 29, 37, 40, // Skip to: 13640
/* 3363 */    MCD::OPC_Decode, 229, 9, 113, // Opcode: NMADD_S
/* 3367 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 3379
/* 3371 */    MCD::OPC_CheckPredicate, 30, 25, 40, // Skip to: 13640
/* 3375 */    MCD::OPC_Decode, 226, 9, 114, // Opcode: NMADD_D32
/* 3379 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 3391
/* 3383 */    MCD::OPC_CheckPredicate, 29, 13, 40, // Skip to: 13640
/* 3387 */    MCD::OPC_Decode, 234, 9, 113, // Opcode: NMSUB_S
/* 3391 */    MCD::OPC_FilterValue, 57, 5, 40, // Skip to: 13640
/* 3395 */    MCD::OPC_CheckPredicate, 30, 1, 40, // Skip to: 13640
/* 3399 */    MCD::OPC_Decode, 231, 9, 114, // Opcode: NMSUB_D32
/* 3403 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3415
/* 3407 */    MCD::OPC_CheckPredicate, 16, 245, 39, // Skip to: 13640
/* 3411 */    MCD::OPC_Decode, 197, 1, 78, // Opcode: BEQL
/* 3415 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 3427
/* 3419 */    MCD::OPC_CheckPredicate, 16, 233, 39, // Skip to: 13640
/* 3423 */    MCD::OPC_Decode, 144, 2, 78, // Opcode: BNEL
/* 3427 */    MCD::OPC_FilterValue, 22, 14, 0, // Skip to: 3445
/* 3431 */    MCD::OPC_CheckPredicate, 16, 221, 39, // Skip to: 13640
/* 3435 */    MCD::OPC_CheckField, 16, 5, 0, 215, 39, // Skip to: 13640
/* 3441 */    MCD::OPC_Decode, 243, 1, 73, // Opcode: BLEZL
/* 3445 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 3463
/* 3449 */    MCD::OPC_CheckPredicate, 16, 203, 39, // Skip to: 13640
/* 3453 */    MCD::OPC_CheckField, 16, 5, 0, 197, 39, // Skip to: 13640
/* 3459 */    MCD::OPC_Decode, 219, 1, 73, // Opcode: BGTZL
/* 3463 */    MCD::OPC_FilterValue, 28, 229, 0, // Skip to: 3696
/* 3467 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3470 */    MCD::OPC_FilterValue, 0, 36, 0, // Skip to: 3510
/* 3474 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3477 */    MCD::OPC_FilterValue, 0, 175, 39, // Skip to: 13640
/* 3481 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3484 */    MCD::OPC_FilterValue, 0, 168, 39, // Skip to: 13640
/* 3488 */    MCD::OPC_CheckPredicate, 9, 10, 0, // Skip to: 3502
/* 3492 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3502
/* 3498 */    MCD::OPC_Decode, 245, 7, 43, // Opcode: MADD
/* 3502 */    MCD::OPC_CheckPredicate, 12, 150, 39, // Skip to: 13640
/* 3506 */    MCD::OPC_Decode, 132, 8, 115, // Opcode: MADD_DSP
/* 3510 */    MCD::OPC_FilterValue, 1, 36, 0, // Skip to: 3550
/* 3514 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3517 */    MCD::OPC_FilterValue, 0, 135, 39, // Skip to: 13640
/* 3521 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3524 */    MCD::OPC_FilterValue, 0, 128, 39, // Skip to: 13640
/* 3528 */    MCD::OPC_CheckPredicate, 9, 10, 0, // Skip to: 3542
/* 3532 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3542
/* 3538 */    MCD::OPC_Decode, 250, 7, 43, // Opcode: MADDU
/* 3542 */    MCD::OPC_CheckPredicate, 12, 110, 39, // Skip to: 13640
/* 3546 */    MCD::OPC_Decode, 251, 7, 115, // Opcode: MADDU_DSP
/* 3550 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 3568
/* 3554 */    MCD::OPC_CheckPredicate, 9, 98, 39, // Skip to: 13640
/* 3558 */    MCD::OPC_CheckField, 6, 5, 0, 92, 39, // Skip to: 13640
/* 3564 */    MCD::OPC_Decode, 180, 9, 35, // Opcode: MUL
/* 3568 */    MCD::OPC_FilterValue, 4, 36, 0, // Skip to: 3608
/* 3572 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3575 */    MCD::OPC_FilterValue, 0, 77, 39, // Skip to: 13640
/* 3579 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3582 */    MCD::OPC_FilterValue, 0, 70, 39, // Skip to: 13640
/* 3586 */    MCD::OPC_CheckPredicate, 9, 10, 0, // Skip to: 3600
/* 3590 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3600
/* 3596 */    MCD::OPC_Decode, 135, 9, 43, // Opcode: MSUB
/* 3600 */    MCD::OPC_CheckPredicate, 12, 52, 39, // Skip to: 13640
/* 3604 */    MCD::OPC_Decode, 150, 9, 115, // Opcode: MSUB_DSP
/* 3608 */    MCD::OPC_FilterValue, 5, 36, 0, // Skip to: 3648
/* 3612 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3615 */    MCD::OPC_FilterValue, 0, 37, 39, // Skip to: 13640
/* 3619 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3622 */    MCD::OPC_FilterValue, 0, 30, 39, // Skip to: 13640
/* 3626 */    MCD::OPC_CheckPredicate, 9, 10, 0, // Skip to: 3640
/* 3630 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3640
/* 3636 */    MCD::OPC_Decode, 140, 9, 43, // Opcode: MSUBU
/* 3640 */    MCD::OPC_CheckPredicate, 12, 12, 39, // Skip to: 13640
/* 3644 */    MCD::OPC_Decode, 141, 9, 115, // Opcode: MSUBU_DSP
/* 3648 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 3666
/* 3652 */    MCD::OPC_CheckPredicate, 9, 0, 39, // Skip to: 13640
/* 3656 */    MCD::OPC_CheckField, 6, 5, 0, 250, 38, // Skip to: 13640
/* 3662 */    MCD::OPC_Decode, 140, 3, 116, // Opcode: CLZ
/* 3666 */    MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 3684
/* 3670 */    MCD::OPC_CheckPredicate, 9, 238, 38, // Skip to: 13640
/* 3674 */    MCD::OPC_CheckField, 6, 5, 0, 232, 38, // Skip to: 13640
/* 3680 */    MCD::OPC_Decode, 249, 2, 116, // Opcode: CLO
/* 3684 */    MCD::OPC_FilterValue, 63, 224, 38, // Skip to: 13640
/* 3688 */    MCD::OPC_CheckPredicate, 9, 220, 38, // Skip to: 13640
/* 3692 */    MCD::OPC_Decode, 139, 11, 64, // Opcode: SDBBP
/* 3696 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 3708
/* 3700 */    MCD::OPC_CheckPredicate, 9, 208, 38, // Skip to: 13640
/* 3704 */    MCD::OPC_Decode, 247, 6, 77, // Opcode: JALX
/* 3708 */    MCD::OPC_FilterValue, 30, 27, 28, // Skip to: 10907
/* 3712 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3715 */    MCD::OPC_FilterValue, 0, 50, 0, // Skip to: 3769
/* 3719 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3722 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 3733
/* 3726 */    MCD::OPC_CheckPredicate, 8, 182, 38, // Skip to: 13640
/* 3730 */    MCD::OPC_Decode, 87, 117, // Opcode: ANDI_B
/* 3733 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3745
/* 3737 */    MCD::OPC_CheckPredicate, 8, 171, 38, // Skip to: 13640
/* 3741 */    MCD::OPC_Decode, 251, 9, 117, // Opcode: ORI_B
/* 3745 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3757
/* 3749 */    MCD::OPC_CheckPredicate, 8, 159, 38, // Skip to: 13640
/* 3753 */    MCD::OPC_Decode, 239, 9, 117, // Opcode: NORI_B
/* 3757 */    MCD::OPC_FilterValue, 3, 151, 38, // Skip to: 13640
/* 3761 */    MCD::OPC_CheckPredicate, 8, 147, 38, // Skip to: 13640
/* 3765 */    MCD::OPC_Decode, 226, 13, 117, // Opcode: XORI_B
/* 3769 */    MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 3812
/* 3773 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3776 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3788
/* 3780 */    MCD::OPC_CheckPredicate, 8, 128, 38, // Skip to: 13640
/* 3784 */    MCD::OPC_Decode, 129, 2, 118, // Opcode: BMNZI_B
/* 3788 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3800
/* 3792 */    MCD::OPC_CheckPredicate, 8, 116, 38, // Skip to: 13640
/* 3796 */    MCD::OPC_Decode, 131, 2, 118, // Opcode: BMZI_B
/* 3800 */    MCD::OPC_FilterValue, 2, 108, 38, // Skip to: 13640
/* 3804 */    MCD::OPC_CheckPredicate, 8, 104, 38, // Skip to: 13640
/* 3808 */    MCD::OPC_Decode, 162, 2, 118, // Opcode: BSELI_B
/* 3812 */    MCD::OPC_FilterValue, 2, 39, 0, // Skip to: 3855
/* 3816 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3819 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3831
/* 3823 */    MCD::OPC_CheckPredicate, 8, 85, 38, // Skip to: 13640
/* 3827 */    MCD::OPC_Decode, 176, 11, 117, // Opcode: SHF_B
/* 3831 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3843
/* 3835 */    MCD::OPC_CheckPredicate, 8, 73, 38, // Skip to: 13640
/* 3839 */    MCD::OPC_Decode, 177, 11, 119, // Opcode: SHF_H
/* 3843 */    MCD::OPC_FilterValue, 2, 65, 38, // Skip to: 13640
/* 3847 */    MCD::OPC_CheckPredicate, 8, 61, 38, // Skip to: 13640
/* 3851 */    MCD::OPC_Decode, 178, 11, 120, // Opcode: SHF_W
/* 3855 */    MCD::OPC_FilterValue, 6, 31, 1, // Skip to: 4146
/* 3859 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3862 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 3873
/* 3866 */    MCD::OPC_CheckPredicate, 8, 42, 38, // Skip to: 13640
/* 3870 */    MCD::OPC_Decode, 59, 121, // Opcode: ADDVI_B
/* 3873 */    MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 3884
/* 3877 */    MCD::OPC_CheckPredicate, 8, 31, 38, // Skip to: 13640
/* 3881 */    MCD::OPC_Decode, 61, 122, // Opcode: ADDVI_H
/* 3884 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 3895
/* 3888 */    MCD::OPC_CheckPredicate, 8, 20, 38, // Skip to: 13640
/* 3892 */    MCD::OPC_Decode, 62, 123, // Opcode: ADDVI_W
/* 3895 */    MCD::OPC_FilterValue, 3, 7, 0, // Skip to: 3906
/* 3899 */    MCD::OPC_CheckPredicate, 8, 9, 38, // Skip to: 13640
/* 3903 */    MCD::OPC_Decode, 60, 124, // Opcode: ADDVI_D
/* 3906 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3918
/* 3910 */    MCD::OPC_CheckPredicate, 8, 254, 37, // Skip to: 13640
/* 3914 */    MCD::OPC_Decode, 208, 12, 121, // Opcode: SUBVI_B
/* 3918 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3930
/* 3922 */    MCD::OPC_CheckPredicate, 8, 242, 37, // Skip to: 13640
/* 3926 */    MCD::OPC_Decode, 210, 12, 122, // Opcode: SUBVI_H
/* 3930 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3942
/* 3934 */    MCD::OPC_CheckPredicate, 8, 230, 37, // Skip to: 13640
/* 3938 */    MCD::OPC_Decode, 211, 12, 123, // Opcode: SUBVI_W
/* 3942 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3954
/* 3946 */    MCD::OPC_CheckPredicate, 8, 218, 37, // Skip to: 13640
/* 3950 */    MCD::OPC_Decode, 209, 12, 124, // Opcode: SUBVI_D
/* 3954 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3966
/* 3958 */    MCD::OPC_CheckPredicate, 8, 206, 37, // Skip to: 13640
/* 3962 */    MCD::OPC_Decode, 144, 8, 121, // Opcode: MAXI_S_B
/* 3966 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3978
/* 3970 */    MCD::OPC_CheckPredicate, 8, 194, 37, // Skip to: 13640
/* 3974 */    MCD::OPC_Decode, 146, 8, 122, // Opcode: MAXI_S_H
/* 3978 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3990
/* 3982 */    MCD::OPC_CheckPredicate, 8, 182, 37, // Skip to: 13640
/* 3986 */    MCD::OPC_Decode, 147, 8, 123, // Opcode: MAXI_S_W
/* 3990 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 4002
/* 3994 */    MCD::OPC_CheckPredicate, 8, 170, 37, // Skip to: 13640
/* 3998 */    MCD::OPC_Decode, 145, 8, 124, // Opcode: MAXI_S_D
/* 4002 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 4014
/* 4006 */    MCD::OPC_CheckPredicate, 8, 158, 37, // Skip to: 13640
/* 4010 */    MCD::OPC_Decode, 148, 8, 121, // Opcode: MAXI_U_B
/* 4014 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 4026
/* 4018 */    MCD::OPC_CheckPredicate, 8, 146, 37, // Skip to: 13640
/* 4022 */    MCD::OPC_Decode, 150, 8, 122, // Opcode: MAXI_U_H
/* 4026 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 4038
/* 4030 */    MCD::OPC_CheckPredicate, 8, 134, 37, // Skip to: 13640
/* 4034 */    MCD::OPC_Decode, 151, 8, 123, // Opcode: MAXI_U_W
/* 4038 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 4050
/* 4042 */    MCD::OPC_CheckPredicate, 8, 122, 37, // Skip to: 13640
/* 4046 */    MCD::OPC_Decode, 149, 8, 124, // Opcode: MAXI_U_D
/* 4050 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 4062
/* 4054 */    MCD::OPC_CheckPredicate, 8, 110, 37, // Skip to: 13640
/* 4058 */    MCD::OPC_Decode, 185, 8, 121, // Opcode: MINI_S_B
/* 4062 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 4074
/* 4066 */    MCD::OPC_CheckPredicate, 8, 98, 37, // Skip to: 13640
/* 4070 */    MCD::OPC_Decode, 187, 8, 122, // Opcode: MINI_S_H
/* 4074 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 4086
/* 4078 */    MCD::OPC_CheckPredicate, 8, 86, 37, // Skip to: 13640
/* 4082 */    MCD::OPC_Decode, 188, 8, 123, // Opcode: MINI_S_W
/* 4086 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 4098
/* 4090 */    MCD::OPC_CheckPredicate, 8, 74, 37, // Skip to: 13640
/* 4094 */    MCD::OPC_Decode, 186, 8, 124, // Opcode: MINI_S_D
/* 4098 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 4110
/* 4102 */    MCD::OPC_CheckPredicate, 8, 62, 37, // Skip to: 13640
/* 4106 */    MCD::OPC_Decode, 189, 8, 121, // Opcode: MINI_U_B
/* 4110 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 4122
/* 4114 */    MCD::OPC_CheckPredicate, 8, 50, 37, // Skip to: 13640
/* 4118 */    MCD::OPC_Decode, 191, 8, 122, // Opcode: MINI_U_H
/* 4122 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 4134
/* 4126 */    MCD::OPC_CheckPredicate, 8, 38, 37, // Skip to: 13640
/* 4130 */    MCD::OPC_Decode, 192, 8, 123, // Opcode: MINI_U_W
/* 4134 */    MCD::OPC_FilterValue, 23, 30, 37, // Skip to: 13640
/* 4138 */    MCD::OPC_CheckPredicate, 8, 26, 37, // Skip to: 13640
/* 4142 */    MCD::OPC_Decode, 190, 8, 124, // Opcode: MINI_U_D
/* 4146 */    MCD::OPC_FilterValue, 7, 36, 1, // Skip to: 4442
/* 4150 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 4153 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4165
/* 4157 */    MCD::OPC_CheckPredicate, 8, 7, 37, // Skip to: 13640
/* 4161 */    MCD::OPC_Decode, 218, 2, 121, // Opcode: CEQI_B
/* 4165 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 4177
/* 4169 */    MCD::OPC_CheckPredicate, 8, 251, 36, // Skip to: 13640
/* 4173 */    MCD::OPC_Decode, 220, 2, 122, // Opcode: CEQI_H
/* 4177 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 4189
/* 4181 */    MCD::OPC_CheckPredicate, 8, 239, 36, // Skip to: 13640
/* 4185 */    MCD::OPC_Decode, 221, 2, 123, // Opcode: CEQI_W
/* 4189 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 4201
/* 4193 */    MCD::OPC_CheckPredicate, 8, 227, 36, // Skip to: 13640
/* 4197 */    MCD::OPC_Decode, 219, 2, 124, // Opcode: CEQI_D
/* 4201 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 4213
/* 4205 */    MCD::OPC_CheckPredicate, 8, 215, 36, // Skip to: 13640
/* 4209 */    MCD::OPC_Decode, 252, 2, 121, // Opcode: CLTI_S_B
/* 4213 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 4225
/* 4217 */    MCD::OPC_CheckPredicate, 8, 203, 36, // Skip to: 13640
/* 4221 */    MCD::OPC_Decode, 254, 2, 122, // Opcode: CLTI_S_H
/* 4225 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 4237
/* 4229 */    MCD::OPC_CheckPredicate, 8, 191, 36, // Skip to: 13640
/* 4233 */    MCD::OPC_Decode, 255, 2, 123, // Opcode: CLTI_S_W
/* 4237 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 4249
/* 4241 */    MCD::OPC_CheckPredicate, 8, 179, 36, // Skip to: 13640
/* 4245 */    MCD::OPC_Decode, 253, 2, 124, // Opcode: CLTI_S_D
/* 4249 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 4261
/* 4253 */    MCD::OPC_CheckPredicate, 8, 167, 36, // Skip to: 13640
/* 4257 */    MCD::OPC_Decode, 128, 3, 121, // Opcode: CLTI_U_B
/* 4261 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 4273
/* 4265 */    MCD::OPC_CheckPredicate, 8, 155, 36, // Skip to: 13640
/* 4269 */    MCD::OPC_Decode, 130, 3, 122, // Opcode: CLTI_U_H
/* 4273 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 4285
/* 4277 */    MCD::OPC_CheckPredicate, 8, 143, 36, // Skip to: 13640
/* 4281 */    MCD::OPC_Decode, 131, 3, 123, // Opcode: CLTI_U_W
/* 4285 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 4297
/* 4289 */    MCD::OPC_CheckPredicate, 8, 131, 36, // Skip to: 13640
/* 4293 */    MCD::OPC_Decode, 129, 3, 124, // Opcode: CLTI_U_D
/* 4297 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 4309
/* 4301 */    MCD::OPC_CheckPredicate, 8, 119, 36, // Skip to: 13640
/* 4305 */    MCD::OPC_Decode, 233, 2, 121, // Opcode: CLEI_S_B
/* 4309 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 4321
/* 4313 */    MCD::OPC_CheckPredicate, 8, 107, 36, // Skip to: 13640
/* 4317 */    MCD::OPC_Decode, 235, 2, 122, // Opcode: CLEI_S_H
/* 4321 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 4333
/* 4325 */    MCD::OPC_CheckPredicate, 8, 95, 36, // Skip to: 13640
/* 4329 */    MCD::OPC_Decode, 236, 2, 123, // Opcode: CLEI_S_W
/* 4333 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 4345
/* 4337 */    MCD::OPC_CheckPredicate, 8, 83, 36, // Skip to: 13640
/* 4341 */    MCD::OPC_Decode, 234, 2, 124, // Opcode: CLEI_S_D
/* 4345 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 4357
/* 4349 */    MCD::OPC_CheckPredicate, 8, 71, 36, // Skip to: 13640
/* 4353 */    MCD::OPC_Decode, 237, 2, 121, // Opcode: CLEI_U_B
/* 4357 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 4369
/* 4361 */    MCD::OPC_CheckPredicate, 8, 59, 36, // Skip to: 13640
/* 4365 */    MCD::OPC_Decode, 239, 2, 122, // Opcode: CLEI_U_H
/* 4369 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 4381
/* 4373 */    MCD::OPC_CheckPredicate, 8, 47, 36, // Skip to: 13640
/* 4377 */    MCD::OPC_Decode, 240, 2, 123, // Opcode: CLEI_U_W
/* 4381 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 4393
/* 4385 */    MCD::OPC_CheckPredicate, 8, 35, 36, // Skip to: 13640
/* 4389 */    MCD::OPC_Decode, 238, 2, 124, // Opcode: CLEI_U_D
/* 4393 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 4405
/* 4397 */    MCD::OPC_CheckPredicate, 8, 23, 36, // Skip to: 13640
/* 4401 */    MCD::OPC_Decode, 155, 7, 125, // Opcode: LDI_B
/* 4405 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 4417
/* 4409 */    MCD::OPC_CheckPredicate, 8, 11, 36, // Skip to: 13640
/* 4413 */    MCD::OPC_Decode, 157, 7, 126, // Opcode: LDI_H
/* 4417 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 4429
/* 4421 */    MCD::OPC_CheckPredicate, 8, 255, 35, // Skip to: 13640
/* 4425 */    MCD::OPC_Decode, 158, 7, 127, // Opcode: LDI_W
/* 4429 */    MCD::OPC_FilterValue, 27, 247, 35, // Skip to: 13640
/* 4433 */    MCD::OPC_CheckPredicate, 8, 243, 35, // Skip to: 13640
/* 4437 */    MCD::OPC_Decode, 156, 7, 128, 1, // Opcode: LDI_D
/* 4442 */    MCD::OPC_FilterValue, 9, 61, 2, // Skip to: 5019
/* 4446 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 4449 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4462
/* 4453 */    MCD::OPC_CheckPredicate, 8, 223, 35, // Skip to: 13640
/* 4457 */    MCD::OPC_Decode, 217, 11, 129, 1, // Opcode: SLLI_D
/* 4462 */    MCD::OPC_FilterValue, 1, 54, 0, // Skip to: 4520
/* 4466 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4469 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4481
/* 4473 */    MCD::OPC_CheckPredicate, 8, 203, 35, // Skip to: 13640
/* 4477 */    MCD::OPC_Decode, 219, 11, 123, // Opcode: SLLI_W
/* 4481 */    MCD::OPC_FilterValue, 1, 195, 35, // Skip to: 13640
/* 4485 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4488 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4501
/* 4492 */    MCD::OPC_CheckPredicate, 8, 184, 35, // Skip to: 13640
/* 4496 */    MCD::OPC_Decode, 218, 11, 130, 1, // Opcode: SLLI_H
/* 4501 */    MCD::OPC_FilterValue, 1, 175, 35, // Skip to: 13640
/* 4505 */    MCD::OPC_CheckPredicate, 8, 171, 35, // Skip to: 13640
/* 4509 */    MCD::OPC_CheckField, 19, 1, 0, 165, 35, // Skip to: 13640
/* 4515 */    MCD::OPC_Decode, 216, 11, 131, 1, // Opcode: SLLI_B
/* 4520 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4533
/* 4524 */    MCD::OPC_CheckPredicate, 8, 152, 35, // Skip to: 13640
/* 4528 */    MCD::OPC_Decode, 128, 12, 129, 1, // Opcode: SRAI_D
/* 4533 */    MCD::OPC_FilterValue, 3, 54, 0, // Skip to: 4591
/* 4537 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4540 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4552
/* 4544 */    MCD::OPC_CheckPredicate, 8, 132, 35, // Skip to: 13640
/* 4548 */    MCD::OPC_Decode, 130, 12, 123, // Opcode: SRAI_W
/* 4552 */    MCD::OPC_FilterValue, 1, 124, 35, // Skip to: 13640
/* 4556 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4559 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4572
/* 4563 */    MCD::OPC_CheckPredicate, 8, 113, 35, // Skip to: 13640
/* 4567 */    MCD::OPC_Decode, 129, 12, 130, 1, // Opcode: SRAI_H
/* 4572 */    MCD::OPC_FilterValue, 1, 104, 35, // Skip to: 13640
/* 4576 */    MCD::OPC_CheckPredicate, 8, 100, 35, // Skip to: 13640
/* 4580 */    MCD::OPC_CheckField, 19, 1, 0, 94, 35, // Skip to: 13640
/* 4586 */    MCD::OPC_Decode, 255, 11, 131, 1, // Opcode: SRAI_B
/* 4591 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 4604
/* 4595 */    MCD::OPC_CheckPredicate, 8, 81, 35, // Skip to: 13640
/* 4599 */    MCD::OPC_Decode, 149, 12, 129, 1, // Opcode: SRLI_D
/* 4604 */    MCD::OPC_FilterValue, 5, 54, 0, // Skip to: 4662
/* 4608 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4611 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4623
/* 4615 */    MCD::OPC_CheckPredicate, 8, 61, 35, // Skip to: 13640
/* 4619 */    MCD::OPC_Decode, 151, 12, 123, // Opcode: SRLI_W
/* 4623 */    MCD::OPC_FilterValue, 1, 53, 35, // Skip to: 13640
/* 4627 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4630 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4643
/* 4634 */    MCD::OPC_CheckPredicate, 8, 42, 35, // Skip to: 13640
/* 4638 */    MCD::OPC_Decode, 150, 12, 130, 1, // Opcode: SRLI_H
/* 4643 */    MCD::OPC_FilterValue, 1, 33, 35, // Skip to: 13640
/* 4647 */    MCD::OPC_CheckPredicate, 8, 29, 35, // Skip to: 13640
/* 4651 */    MCD::OPC_CheckField, 19, 1, 0, 23, 35, // Skip to: 13640
/* 4657 */    MCD::OPC_Decode, 148, 12, 131, 1, // Opcode: SRLI_B
/* 4662 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 4675
/* 4666 */    MCD::OPC_CheckPredicate, 8, 10, 35, // Skip to: 13640
/* 4670 */    MCD::OPC_Decode, 187, 1, 129, 1, // Opcode: BCLRI_D
/* 4675 */    MCD::OPC_FilterValue, 7, 54, 0, // Skip to: 4733
/* 4679 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4682 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4694
/* 4686 */    MCD::OPC_CheckPredicate, 8, 246, 34, // Skip to: 13640
/* 4690 */    MCD::OPC_Decode, 189, 1, 123, // Opcode: BCLRI_W
/* 4694 */    MCD::OPC_FilterValue, 1, 238, 34, // Skip to: 13640
/* 4698 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4701 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4714
/* 4705 */    MCD::OPC_CheckPredicate, 8, 227, 34, // Skip to: 13640
/* 4709 */    MCD::OPC_Decode, 188, 1, 130, 1, // Opcode: BCLRI_H
/* 4714 */    MCD::OPC_FilterValue, 1, 218, 34, // Skip to: 13640
/* 4718 */    MCD::OPC_CheckPredicate, 8, 214, 34, // Skip to: 13640
/* 4722 */    MCD::OPC_CheckField, 19, 1, 0, 208, 34, // Skip to: 13640
/* 4728 */    MCD::OPC_Decode, 186, 1, 131, 1, // Opcode: BCLRI_B
/* 4733 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 4746
/* 4737 */    MCD::OPC_CheckPredicate, 8, 195, 34, // Skip to: 13640
/* 4741 */    MCD::OPC_Decode, 170, 2, 129, 1, // Opcode: BSETI_D
/* 4746 */    MCD::OPC_FilterValue, 9, 54, 0, // Skip to: 4804
/* 4750 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4753 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4765
/* 4757 */    MCD::OPC_CheckPredicate, 8, 175, 34, // Skip to: 13640
/* 4761 */    MCD::OPC_Decode, 172, 2, 123, // Opcode: BSETI_W
/* 4765 */    MCD::OPC_FilterValue, 1, 167, 34, // Skip to: 13640
/* 4769 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4772 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4785
/* 4776 */    MCD::OPC_CheckPredicate, 8, 156, 34, // Skip to: 13640
/* 4780 */    MCD::OPC_Decode, 171, 2, 130, 1, // Opcode: BSETI_H
/* 4785 */    MCD::OPC_FilterValue, 1, 147, 34, // Skip to: 13640
/* 4789 */    MCD::OPC_CheckPredicate, 8, 143, 34, // Skip to: 13640
/* 4793 */    MCD::OPC_CheckField, 19, 1, 0, 137, 34, // Skip to: 13640
/* 4799 */    MCD::OPC_Decode, 169, 2, 131, 1, // Opcode: BSETI_B
/* 4804 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 4817
/* 4808 */    MCD::OPC_CheckPredicate, 8, 124, 34, // Skip to: 13640
/* 4812 */    MCD::OPC_Decode, 137, 2, 129, 1, // Opcode: BNEGI_D
/* 4817 */    MCD::OPC_FilterValue, 11, 54, 0, // Skip to: 4875
/* 4821 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4824 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4836
/* 4828 */    MCD::OPC_CheckPredicate, 8, 104, 34, // Skip to: 13640
/* 4832 */    MCD::OPC_Decode, 139, 2, 123, // Opcode: BNEGI_W
/* 4836 */    MCD::OPC_FilterValue, 1, 96, 34, // Skip to: 13640
/* 4840 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4843 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4856
/* 4847 */    MCD::OPC_CheckPredicate, 8, 85, 34, // Skip to: 13640
/* 4851 */    MCD::OPC_Decode, 138, 2, 130, 1, // Opcode: BNEGI_H
/* 4856 */    MCD::OPC_FilterValue, 1, 76, 34, // Skip to: 13640
/* 4860 */    MCD::OPC_CheckPredicate, 8, 72, 34, // Skip to: 13640
/* 4864 */    MCD::OPC_CheckField, 19, 1, 0, 66, 34, // Skip to: 13640
/* 4870 */    MCD::OPC_Decode, 136, 2, 131, 1, // Opcode: BNEGI_B
/* 4875 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 4888
/* 4879 */    MCD::OPC_CheckPredicate, 8, 53, 34, // Skip to: 13640
/* 4883 */    MCD::OPC_Decode, 222, 1, 132, 1, // Opcode: BINSLI_D
/* 4888 */    MCD::OPC_FilterValue, 13, 55, 0, // Skip to: 4947
/* 4892 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4895 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4908
/* 4899 */    MCD::OPC_CheckPredicate, 8, 33, 34, // Skip to: 13640
/* 4903 */    MCD::OPC_Decode, 224, 1, 133, 1, // Opcode: BINSLI_W
/* 4908 */    MCD::OPC_FilterValue, 1, 24, 34, // Skip to: 13640
/* 4912 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4915 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4928
/* 4919 */    MCD::OPC_CheckPredicate, 8, 13, 34, // Skip to: 13640
/* 4923 */    MCD::OPC_Decode, 223, 1, 134, 1, // Opcode: BINSLI_H
/* 4928 */    MCD::OPC_FilterValue, 1, 4, 34, // Skip to: 13640
/* 4932 */    MCD::OPC_CheckPredicate, 8, 0, 34, // Skip to: 13640
/* 4936 */    MCD::OPC_CheckField, 19, 1, 0, 250, 33, // Skip to: 13640
/* 4942 */    MCD::OPC_Decode, 221, 1, 135, 1, // Opcode: BINSLI_B
/* 4947 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 4960
/* 4951 */    MCD::OPC_CheckPredicate, 8, 237, 33, // Skip to: 13640
/* 4955 */    MCD::OPC_Decode, 230, 1, 132, 1, // Opcode: BINSRI_D
/* 4960 */    MCD::OPC_FilterValue, 15, 228, 33, // Skip to: 13640
/* 4964 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4967 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4980
/* 4971 */    MCD::OPC_CheckPredicate, 8, 217, 33, // Skip to: 13640
/* 4975 */    MCD::OPC_Decode, 232, 1, 133, 1, // Opcode: BINSRI_W
/* 4980 */    MCD::OPC_FilterValue, 1, 208, 33, // Skip to: 13640
/* 4984 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4987 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5000
/* 4991 */    MCD::OPC_CheckPredicate, 8, 197, 33, // Skip to: 13640
/* 4995 */    MCD::OPC_Decode, 231, 1, 134, 1, // Opcode: BINSRI_H
/* 5000 */    MCD::OPC_FilterValue, 1, 188, 33, // Skip to: 13640
/* 5004 */    MCD::OPC_CheckPredicate, 8, 184, 33, // Skip to: 13640
/* 5008 */    MCD::OPC_CheckField, 19, 1, 0, 178, 33, // Skip to: 13640
/* 5014 */    MCD::OPC_Decode, 229, 1, 135, 1, // Opcode: BINSRI_B
/* 5019 */    MCD::OPC_FilterValue, 10, 31, 1, // Skip to: 5310
/* 5023 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 5026 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5039
/* 5030 */    MCD::OPC_CheckPredicate, 8, 158, 33, // Skip to: 13640
/* 5034 */    MCD::OPC_Decode, 250, 10, 129, 1, // Opcode: SAT_S_D
/* 5039 */    MCD::OPC_FilterValue, 1, 54, 0, // Skip to: 5097
/* 5043 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5046 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5058
/* 5050 */    MCD::OPC_CheckPredicate, 8, 138, 33, // Skip to: 13640
/* 5054 */    MCD::OPC_Decode, 252, 10, 123, // Opcode: SAT_S_W
/* 5058 */    MCD::OPC_FilterValue, 1, 130, 33, // Skip to: 13640
/* 5062 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5065 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5078
/* 5069 */    MCD::OPC_CheckPredicate, 8, 119, 33, // Skip to: 13640
/* 5073 */    MCD::OPC_Decode, 251, 10, 130, 1, // Opcode: SAT_S_H
/* 5078 */    MCD::OPC_FilterValue, 1, 110, 33, // Skip to: 13640
/* 5082 */    MCD::OPC_CheckPredicate, 8, 106, 33, // Skip to: 13640
/* 5086 */    MCD::OPC_CheckField, 19, 1, 0, 100, 33, // Skip to: 13640
/* 5092 */    MCD::OPC_Decode, 249, 10, 131, 1, // Opcode: SAT_S_B
/* 5097 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5110
/* 5101 */    MCD::OPC_CheckPredicate, 8, 87, 33, // Skip to: 13640
/* 5105 */    MCD::OPC_Decode, 254, 10, 129, 1, // Opcode: SAT_U_D
/* 5110 */    MCD::OPC_FilterValue, 3, 54, 0, // Skip to: 5168
/* 5114 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5117 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5129
/* 5121 */    MCD::OPC_CheckPredicate, 8, 67, 33, // Skip to: 13640
/* 5125 */    MCD::OPC_Decode, 128, 11, 123, // Opcode: SAT_U_W
/* 5129 */    MCD::OPC_FilterValue, 1, 59, 33, // Skip to: 13640
/* 5133 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5136 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5149
/* 5140 */    MCD::OPC_CheckPredicate, 8, 48, 33, // Skip to: 13640
/* 5144 */    MCD::OPC_Decode, 255, 10, 130, 1, // Opcode: SAT_U_H
/* 5149 */    MCD::OPC_FilterValue, 1, 39, 33, // Skip to: 13640
/* 5153 */    MCD::OPC_CheckPredicate, 8, 35, 33, // Skip to: 13640
/* 5157 */    MCD::OPC_CheckField, 19, 1, 0, 29, 33, // Skip to: 13640
/* 5163 */    MCD::OPC_Decode, 253, 10, 131, 1, // Opcode: SAT_U_B
/* 5168 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5181
/* 5172 */    MCD::OPC_CheckPredicate, 8, 16, 33, // Skip to: 13640
/* 5176 */    MCD::OPC_Decode, 132, 12, 129, 1, // Opcode: SRARI_D
/* 5181 */    MCD::OPC_FilterValue, 5, 54, 0, // Skip to: 5239
/* 5185 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5188 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5200
/* 5192 */    MCD::OPC_CheckPredicate, 8, 252, 32, // Skip to: 13640
/* 5196 */    MCD::OPC_Decode, 134, 12, 123, // Opcode: SRARI_W
/* 5200 */    MCD::OPC_FilterValue, 1, 244, 32, // Skip to: 13640
/* 5204 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5207 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5220
/* 5211 */    MCD::OPC_CheckPredicate, 8, 233, 32, // Skip to: 13640
/* 5215 */    MCD::OPC_Decode, 133, 12, 130, 1, // Opcode: SRARI_H
/* 5220 */    MCD::OPC_FilterValue, 1, 224, 32, // Skip to: 13640
/* 5224 */    MCD::OPC_CheckPredicate, 8, 220, 32, // Skip to: 13640
/* 5228 */    MCD::OPC_CheckField, 19, 1, 0, 214, 32, // Skip to: 13640
/* 5234 */    MCD::OPC_Decode, 131, 12, 131, 1, // Opcode: SRARI_B
/* 5239 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5252
/* 5243 */    MCD::OPC_CheckPredicate, 8, 201, 32, // Skip to: 13640
/* 5247 */    MCD::OPC_Decode, 153, 12, 129, 1, // Opcode: SRLRI_D
/* 5252 */    MCD::OPC_FilterValue, 7, 192, 32, // Skip to: 13640
/* 5256 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5259 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5271
/* 5263 */    MCD::OPC_CheckPredicate, 8, 181, 32, // Skip to: 13640
/* 5267 */    MCD::OPC_Decode, 155, 12, 123, // Opcode: SRLRI_W
/* 5271 */    MCD::OPC_FilterValue, 1, 173, 32, // Skip to: 13640
/* 5275 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5278 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5291
/* 5282 */    MCD::OPC_CheckPredicate, 8, 162, 32, // Skip to: 13640
/* 5286 */    MCD::OPC_Decode, 154, 12, 130, 1, // Opcode: SRLRI_H
/* 5291 */    MCD::OPC_FilterValue, 1, 153, 32, // Skip to: 13640
/* 5295 */    MCD::OPC_CheckPredicate, 8, 149, 32, // Skip to: 13640
/* 5299 */    MCD::OPC_CheckField, 19, 1, 0, 143, 32, // Skip to: 13640
/* 5305 */    MCD::OPC_Decode, 152, 12, 131, 1, // Opcode: SRLRI_B
/* 5310 */    MCD::OPC_FilterValue, 13, 163, 1, // Skip to: 5733
/* 5314 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5317 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5330
/* 5321 */    MCD::OPC_CheckPredicate, 8, 123, 32, // Skip to: 13640
/* 5325 */    MCD::OPC_Decode, 222, 11, 136, 1, // Opcode: SLL_B
/* 5330 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 5343
/* 5334 */    MCD::OPC_CheckPredicate, 8, 110, 32, // Skip to: 13640
/* 5338 */    MCD::OPC_Decode, 224, 11, 137, 1, // Opcode: SLL_H
/* 5343 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5356
/* 5347 */    MCD::OPC_CheckPredicate, 8, 97, 32, // Skip to: 13640
/* 5351 */    MCD::OPC_Decode, 226, 11, 138, 1, // Opcode: SLL_W
/* 5356 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 5369
/* 5360 */    MCD::OPC_CheckPredicate, 8, 84, 32, // Skip to: 13640
/* 5364 */    MCD::OPC_Decode, 223, 11, 139, 1, // Opcode: SLL_D
/* 5369 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5382
/* 5373 */    MCD::OPC_CheckPredicate, 8, 71, 32, // Skip to: 13640
/* 5377 */    MCD::OPC_Decode, 141, 12, 136, 1, // Opcode: SRA_B
/* 5382 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 5395
/* 5386 */    MCD::OPC_CheckPredicate, 8, 58, 32, // Skip to: 13640
/* 5390 */    MCD::OPC_Decode, 143, 12, 137, 1, // Opcode: SRA_H
/* 5395 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5408
/* 5399 */    MCD::OPC_CheckPredicate, 8, 45, 32, // Skip to: 13640
/* 5403 */    MCD::OPC_Decode, 145, 12, 138, 1, // Opcode: SRA_W
/* 5408 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 5421
/* 5412 */    MCD::OPC_CheckPredicate, 8, 32, 32, // Skip to: 13640
/* 5416 */    MCD::OPC_Decode, 142, 12, 139, 1, // Opcode: SRA_D
/* 5421 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5434
/* 5425 */    MCD::OPC_CheckPredicate, 8, 19, 32, // Skip to: 13640
/* 5429 */    MCD::OPC_Decode, 162, 12, 136, 1, // Opcode: SRL_B
/* 5434 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 5447
/* 5438 */    MCD::OPC_CheckPredicate, 8, 6, 32, // Skip to: 13640
/* 5442 */    MCD::OPC_Decode, 164, 12, 137, 1, // Opcode: SRL_H
/* 5447 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5460
/* 5451 */    MCD::OPC_CheckPredicate, 8, 249, 31, // Skip to: 13640
/* 5455 */    MCD::OPC_Decode, 166, 12, 138, 1, // Opcode: SRL_W
/* 5460 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 5473
/* 5464 */    MCD::OPC_CheckPredicate, 8, 236, 31, // Skip to: 13640
/* 5468 */    MCD::OPC_Decode, 163, 12, 139, 1, // Opcode: SRL_D
/* 5473 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5486
/* 5477 */    MCD::OPC_CheckPredicate, 8, 223, 31, // Skip to: 13640
/* 5481 */    MCD::OPC_Decode, 190, 1, 136, 1, // Opcode: BCLR_B
/* 5486 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 5499
/* 5490 */    MCD::OPC_CheckPredicate, 8, 210, 31, // Skip to: 13640
/* 5494 */    MCD::OPC_Decode, 192, 1, 137, 1, // Opcode: BCLR_H
/* 5499 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5512
/* 5503 */    MCD::OPC_CheckPredicate, 8, 197, 31, // Skip to: 13640
/* 5507 */    MCD::OPC_Decode, 193, 1, 138, 1, // Opcode: BCLR_W
/* 5512 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 5525
/* 5516 */    MCD::OPC_CheckPredicate, 8, 184, 31, // Skip to: 13640
/* 5520 */    MCD::OPC_Decode, 191, 1, 139, 1, // Opcode: BCLR_D
/* 5525 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 5538
/* 5529 */    MCD::OPC_CheckPredicate, 8, 171, 31, // Skip to: 13640
/* 5533 */    MCD::OPC_Decode, 173, 2, 136, 1, // Opcode: BSET_B
/* 5538 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 5551
/* 5542 */    MCD::OPC_CheckPredicate, 8, 158, 31, // Skip to: 13640
/* 5546 */    MCD::OPC_Decode, 175, 2, 137, 1, // Opcode: BSET_H
/* 5551 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 5564
/* 5555 */    MCD::OPC_CheckPredicate, 8, 145, 31, // Skip to: 13640
/* 5559 */    MCD::OPC_Decode, 176, 2, 138, 1, // Opcode: BSET_W
/* 5564 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 5577
/* 5568 */    MCD::OPC_CheckPredicate, 8, 132, 31, // Skip to: 13640
/* 5572 */    MCD::OPC_Decode, 174, 2, 139, 1, // Opcode: BSET_D
/* 5577 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 5590
/* 5581 */    MCD::OPC_CheckPredicate, 8, 119, 31, // Skip to: 13640
/* 5585 */    MCD::OPC_Decode, 140, 2, 136, 1, // Opcode: BNEG_B
/* 5590 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 5603
/* 5594 */    MCD::OPC_CheckPredicate, 8, 106, 31, // Skip to: 13640
/* 5598 */    MCD::OPC_Decode, 142, 2, 137, 1, // Opcode: BNEG_H
/* 5603 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 5616
/* 5607 */    MCD::OPC_CheckPredicate, 8, 93, 31, // Skip to: 13640
/* 5611 */    MCD::OPC_Decode, 143, 2, 138, 1, // Opcode: BNEG_W
/* 5616 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 5629
/* 5620 */    MCD::OPC_CheckPredicate, 8, 80, 31, // Skip to: 13640
/* 5624 */    MCD::OPC_Decode, 141, 2, 139, 1, // Opcode: BNEG_D
/* 5629 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 5642
/* 5633 */    MCD::OPC_CheckPredicate, 8, 67, 31, // Skip to: 13640
/* 5637 */    MCD::OPC_Decode, 225, 1, 140, 1, // Opcode: BINSL_B
/* 5642 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 5655
/* 5646 */    MCD::OPC_CheckPredicate, 8, 54, 31, // Skip to: 13640
/* 5650 */    MCD::OPC_Decode, 227, 1, 141, 1, // Opcode: BINSL_H
/* 5655 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 5668
/* 5659 */    MCD::OPC_CheckPredicate, 8, 41, 31, // Skip to: 13640
/* 5663 */    MCD::OPC_Decode, 228, 1, 142, 1, // Opcode: BINSL_W
/* 5668 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 5681
/* 5672 */    MCD::OPC_CheckPredicate, 8, 28, 31, // Skip to: 13640
/* 5676 */    MCD::OPC_Decode, 226, 1, 143, 1, // Opcode: BINSL_D
/* 5681 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 5694
/* 5685 */    MCD::OPC_CheckPredicate, 8, 15, 31, // Skip to: 13640
/* 5689 */    MCD::OPC_Decode, 233, 1, 140, 1, // Opcode: BINSR_B
/* 5694 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 5707
/* 5698 */    MCD::OPC_CheckPredicate, 8, 2, 31, // Skip to: 13640
/* 5702 */    MCD::OPC_Decode, 235, 1, 141, 1, // Opcode: BINSR_H
/* 5707 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 5720
/* 5711 */    MCD::OPC_CheckPredicate, 8, 245, 30, // Skip to: 13640
/* 5715 */    MCD::OPC_Decode, 236, 1, 142, 1, // Opcode: BINSR_W
/* 5720 */    MCD::OPC_FilterValue, 31, 236, 30, // Skip to: 13640
/* 5724 */    MCD::OPC_CheckPredicate, 8, 232, 30, // Skip to: 13640
/* 5728 */    MCD::OPC_Decode, 234, 1, 143, 1, // Opcode: BINSR_D
/* 5733 */    MCD::OPC_FilterValue, 14, 159, 1, // Skip to: 6152
/* 5737 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5740 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5752
/* 5744 */    MCD::OPC_CheckPredicate, 8, 212, 30, // Skip to: 13640
/* 5748 */    MCD::OPC_Decode, 63, 136, 1, // Opcode: ADDV_B
/* 5752 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 5764
/* 5756 */    MCD::OPC_CheckPredicate, 8, 200, 30, // Skip to: 13640
/* 5760 */    MCD::OPC_Decode, 65, 137, 1, // Opcode: ADDV_H
/* 5764 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 5776
/* 5768 */    MCD::OPC_CheckPredicate, 8, 188, 30, // Skip to: 13640
/* 5772 */    MCD::OPC_Decode, 66, 138, 1, // Opcode: ADDV_W
/* 5776 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 5788
/* 5780 */    MCD::OPC_CheckPredicate, 8, 176, 30, // Skip to: 13640
/* 5784 */    MCD::OPC_Decode, 64, 139, 1, // Opcode: ADDV_D
/* 5788 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5801
/* 5792 */    MCD::OPC_CheckPredicate, 8, 164, 30, // Skip to: 13640
/* 5796 */    MCD::OPC_Decode, 212, 12, 136, 1, // Opcode: SUBV_B
/* 5801 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 5814
/* 5805 */    MCD::OPC_CheckPredicate, 8, 151, 30, // Skip to: 13640
/* 5809 */    MCD::OPC_Decode, 214, 12, 137, 1, // Opcode: SUBV_H
/* 5814 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5827
/* 5818 */    MCD::OPC_CheckPredicate, 8, 138, 30, // Skip to: 13640
/* 5822 */    MCD::OPC_Decode, 215, 12, 138, 1, // Opcode: SUBV_W
/* 5827 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 5840
/* 5831 */    MCD::OPC_CheckPredicate, 8, 125, 30, // Skip to: 13640
/* 5835 */    MCD::OPC_Decode, 213, 12, 139, 1, // Opcode: SUBV_D
/* 5840 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5853
/* 5844 */    MCD::OPC_CheckPredicate, 8, 112, 30, // Skip to: 13640
/* 5848 */    MCD::OPC_Decode, 158, 8, 136, 1, // Opcode: MAX_S_B
/* 5853 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 5866
/* 5857 */    MCD::OPC_CheckPredicate, 8, 99, 30, // Skip to: 13640
/* 5861 */    MCD::OPC_Decode, 160, 8, 137, 1, // Opcode: MAX_S_H
/* 5866 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5879
/* 5870 */    MCD::OPC_CheckPredicate, 8, 86, 30, // Skip to: 13640
/* 5874 */    MCD::OPC_Decode, 161, 8, 138, 1, // Opcode: MAX_S_W
/* 5879 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 5892
/* 5883 */    MCD::OPC_CheckPredicate, 8, 73, 30, // Skip to: 13640
/* 5887 */    MCD::OPC_Decode, 159, 8, 139, 1, // Opcode: MAX_S_D
/* 5892 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5905
/* 5896 */    MCD::OPC_CheckPredicate, 8, 60, 30, // Skip to: 13640
/* 5900 */    MCD::OPC_Decode, 162, 8, 136, 1, // Opcode: MAX_U_B
/* 5905 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 5918
/* 5909 */    MCD::OPC_CheckPredicate, 8, 47, 30, // Skip to: 13640
/* 5913 */    MCD::OPC_Decode, 164, 8, 137, 1, // Opcode: MAX_U_H
/* 5918 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5931
/* 5922 */    MCD::OPC_CheckPredicate, 8, 34, 30, // Skip to: 13640
/* 5926 */    MCD::OPC_Decode, 165, 8, 138, 1, // Opcode: MAX_U_W
/* 5931 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 5944
/* 5935 */    MCD::OPC_CheckPredicate, 8, 21, 30, // Skip to: 13640
/* 5939 */    MCD::OPC_Decode, 163, 8, 139, 1, // Opcode: MAX_U_D
/* 5944 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 5957
/* 5948 */    MCD::OPC_CheckPredicate, 8, 8, 30, // Skip to: 13640
/* 5952 */    MCD::OPC_Decode, 199, 8, 136, 1, // Opcode: MIN_S_B
/* 5957 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 5970
/* 5961 */    MCD::OPC_CheckPredicate, 8, 251, 29, // Skip to: 13640
/* 5965 */    MCD::OPC_Decode, 201, 8, 137, 1, // Opcode: MIN_S_H
/* 5970 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 5983
/* 5974 */    MCD::OPC_CheckPredicate, 8, 238, 29, // Skip to: 13640
/* 5978 */    MCD::OPC_Decode, 202, 8, 138, 1, // Opcode: MIN_S_W
/* 5983 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 5996
/* 5987 */    MCD::OPC_CheckPredicate, 8, 225, 29, // Skip to: 13640
/* 5991 */    MCD::OPC_Decode, 200, 8, 139, 1, // Opcode: MIN_S_D
/* 5996 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6009
/* 6000 */    MCD::OPC_CheckPredicate, 8, 212, 29, // Skip to: 13640
/* 6004 */    MCD::OPC_Decode, 203, 8, 136, 1, // Opcode: MIN_U_B
/* 6009 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6022
/* 6013 */    MCD::OPC_CheckPredicate, 8, 199, 29, // Skip to: 13640
/* 6017 */    MCD::OPC_Decode, 205, 8, 137, 1, // Opcode: MIN_U_H
/* 6022 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6035
/* 6026 */    MCD::OPC_CheckPredicate, 8, 186, 29, // Skip to: 13640
/* 6030 */    MCD::OPC_Decode, 206, 8, 138, 1, // Opcode: MIN_U_W
/* 6035 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6048
/* 6039 */    MCD::OPC_CheckPredicate, 8, 173, 29, // Skip to: 13640
/* 6043 */    MCD::OPC_Decode, 204, 8, 139, 1, // Opcode: MIN_U_D
/* 6048 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6061
/* 6052 */    MCD::OPC_CheckPredicate, 8, 160, 29, // Skip to: 13640
/* 6056 */    MCD::OPC_Decode, 152, 8, 136, 1, // Opcode: MAX_A_B
/* 6061 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 6074
/* 6065 */    MCD::OPC_CheckPredicate, 8, 147, 29, // Skip to: 13640
/* 6069 */    MCD::OPC_Decode, 154, 8, 137, 1, // Opcode: MAX_A_H
/* 6074 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 6087
/* 6078 */    MCD::OPC_CheckPredicate, 8, 134, 29, // Skip to: 13640
/* 6082 */    MCD::OPC_Decode, 155, 8, 138, 1, // Opcode: MAX_A_W
/* 6087 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 6100
/* 6091 */    MCD::OPC_CheckPredicate, 8, 121, 29, // Skip to: 13640
/* 6095 */    MCD::OPC_Decode, 153, 8, 139, 1, // Opcode: MAX_A_D
/* 6100 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 6113
/* 6104 */    MCD::OPC_CheckPredicate, 8, 108, 29, // Skip to: 13640
/* 6108 */    MCD::OPC_Decode, 193, 8, 136, 1, // Opcode: MIN_A_B
/* 6113 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 6126
/* 6117 */    MCD::OPC_CheckPredicate, 8, 95, 29, // Skip to: 13640
/* 6121 */    MCD::OPC_Decode, 195, 8, 137, 1, // Opcode: MIN_A_H
/* 6126 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 6139
/* 6130 */    MCD::OPC_CheckPredicate, 8, 82, 29, // Skip to: 13640
/* 6134 */    MCD::OPC_Decode, 196, 8, 138, 1, // Opcode: MIN_A_W
/* 6139 */    MCD::OPC_FilterValue, 31, 73, 29, // Skip to: 13640
/* 6143 */    MCD::OPC_CheckPredicate, 8, 69, 29, // Skip to: 13640
/* 6147 */    MCD::OPC_Decode, 194, 8, 139, 1, // Opcode: MIN_A_D
/* 6152 */    MCD::OPC_FilterValue, 15, 7, 1, // Skip to: 6419
/* 6156 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6159 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6172
/* 6163 */    MCD::OPC_CheckPredicate, 8, 49, 29, // Skip to: 13640
/* 6167 */    MCD::OPC_Decode, 222, 2, 136, 1, // Opcode: CEQ_B
/* 6172 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6185
/* 6176 */    MCD::OPC_CheckPredicate, 8, 36, 29, // Skip to: 13640
/* 6180 */    MCD::OPC_Decode, 224, 2, 137, 1, // Opcode: CEQ_H
/* 6185 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6198
/* 6189 */    MCD::OPC_CheckPredicate, 8, 23, 29, // Skip to: 13640
/* 6193 */    MCD::OPC_Decode, 225, 2, 138, 1, // Opcode: CEQ_W
/* 6198 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 6211
/* 6202 */    MCD::OPC_CheckPredicate, 8, 10, 29, // Skip to: 13640
/* 6206 */    MCD::OPC_Decode, 223, 2, 139, 1, // Opcode: CEQ_D
/* 6211 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 6224
/* 6215 */    MCD::OPC_CheckPredicate, 8, 253, 28, // Skip to: 13640
/* 6219 */    MCD::OPC_Decode, 132, 3, 136, 1, // Opcode: CLT_S_B
/* 6224 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 6237
/* 6228 */    MCD::OPC_CheckPredicate, 8, 240, 28, // Skip to: 13640
/* 6232 */    MCD::OPC_Decode, 134, 3, 137, 1, // Opcode: CLT_S_H
/* 6237 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 6250
/* 6241 */    MCD::OPC_CheckPredicate, 8, 227, 28, // Skip to: 13640
/* 6245 */    MCD::OPC_Decode, 135, 3, 138, 1, // Opcode: CLT_S_W
/* 6250 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6263
/* 6254 */    MCD::OPC_CheckPredicate, 8, 214, 28, // Skip to: 13640
/* 6258 */    MCD::OPC_Decode, 133, 3, 139, 1, // Opcode: CLT_S_D
/* 6263 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 6276
/* 6267 */    MCD::OPC_CheckPredicate, 8, 201, 28, // Skip to: 13640
/* 6271 */    MCD::OPC_Decode, 136, 3, 136, 1, // Opcode: CLT_U_B
/* 6276 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6289
/* 6280 */    MCD::OPC_CheckPredicate, 8, 188, 28, // Skip to: 13640
/* 6284 */    MCD::OPC_Decode, 138, 3, 137, 1, // Opcode: CLT_U_H
/* 6289 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6302
/* 6293 */    MCD::OPC_CheckPredicate, 8, 175, 28, // Skip to: 13640
/* 6297 */    MCD::OPC_Decode, 139, 3, 138, 1, // Opcode: CLT_U_W
/* 6302 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6315
/* 6306 */    MCD::OPC_CheckPredicate, 8, 162, 28, // Skip to: 13640
/* 6310 */    MCD::OPC_Decode, 137, 3, 139, 1, // Opcode: CLT_U_D
/* 6315 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6328
/* 6319 */    MCD::OPC_CheckPredicate, 8, 149, 28, // Skip to: 13640
/* 6323 */    MCD::OPC_Decode, 241, 2, 136, 1, // Opcode: CLE_S_B
/* 6328 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6341
/* 6332 */    MCD::OPC_CheckPredicate, 8, 136, 28, // Skip to: 13640
/* 6336 */    MCD::OPC_Decode, 243, 2, 137, 1, // Opcode: CLE_S_H
/* 6341 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6354
/* 6345 */    MCD::OPC_CheckPredicate, 8, 123, 28, // Skip to: 13640
/* 6349 */    MCD::OPC_Decode, 244, 2, 138, 1, // Opcode: CLE_S_W
/* 6354 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6367
/* 6358 */    MCD::OPC_CheckPredicate, 8, 110, 28, // Skip to: 13640
/* 6362 */    MCD::OPC_Decode, 242, 2, 139, 1, // Opcode: CLE_S_D
/* 6367 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6380
/* 6371 */    MCD::OPC_CheckPredicate, 8, 97, 28, // Skip to: 13640
/* 6375 */    MCD::OPC_Decode, 245, 2, 136, 1, // Opcode: CLE_U_B
/* 6380 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6393
/* 6384 */    MCD::OPC_CheckPredicate, 8, 84, 28, // Skip to: 13640
/* 6388 */    MCD::OPC_Decode, 247, 2, 137, 1, // Opcode: CLE_U_H
/* 6393 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6406
/* 6397 */    MCD::OPC_CheckPredicate, 8, 71, 28, // Skip to: 13640
/* 6401 */    MCD::OPC_Decode, 248, 2, 138, 1, // Opcode: CLE_U_W
/* 6406 */    MCD::OPC_FilterValue, 23, 62, 28, // Skip to: 13640
/* 6410 */    MCD::OPC_CheckPredicate, 8, 58, 28, // Skip to: 13640
/* 6414 */    MCD::OPC_Decode, 246, 2, 139, 1, // Opcode: CLE_U_D
/* 6419 */    MCD::OPC_FilterValue, 16, 147, 1, // Skip to: 6826
/* 6423 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6426 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 6438
/* 6430 */    MCD::OPC_CheckPredicate, 8, 38, 28, // Skip to: 13640
/* 6434 */    MCD::OPC_Decode, 68, 136, 1, // Opcode: ADD_A_B
/* 6438 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 6450
/* 6442 */    MCD::OPC_CheckPredicate, 8, 26, 28, // Skip to: 13640
/* 6446 */    MCD::OPC_Decode, 70, 137, 1, // Opcode: ADD_A_H
/* 6450 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 6462
/* 6454 */    MCD::OPC_CheckPredicate, 8, 14, 28, // Skip to: 13640
/* 6458 */    MCD::OPC_Decode, 71, 138, 1, // Opcode: ADD_A_W
/* 6462 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 6474
/* 6466 */    MCD::OPC_CheckPredicate, 8, 2, 28, // Skip to: 13640
/* 6470 */    MCD::OPC_Decode, 69, 139, 1, // Opcode: ADD_A_D
/* 6474 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 6486
/* 6478 */    MCD::OPC_CheckPredicate, 8, 246, 27, // Skip to: 13640
/* 6482 */    MCD::OPC_Decode, 40, 136, 1, // Opcode: ADDS_A_B
/* 6486 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 6498
/* 6490 */    MCD::OPC_CheckPredicate, 8, 234, 27, // Skip to: 13640
/* 6494 */    MCD::OPC_Decode, 42, 137, 1, // Opcode: ADDS_A_H
/* 6498 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 6510
/* 6502 */    MCD::OPC_CheckPredicate, 8, 222, 27, // Skip to: 13640
/* 6506 */    MCD::OPC_Decode, 43, 138, 1, // Opcode: ADDS_A_W
/* 6510 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 6522
/* 6514 */    MCD::OPC_CheckPredicate, 8, 210, 27, // Skip to: 13640
/* 6518 */    MCD::OPC_Decode, 41, 139, 1, // Opcode: ADDS_A_D
/* 6522 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 6534
/* 6526 */    MCD::OPC_CheckPredicate, 8, 198, 27, // Skip to: 13640
/* 6530 */    MCD::OPC_Decode, 44, 136, 1, // Opcode: ADDS_S_B
/* 6534 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 6546
/* 6538 */    MCD::OPC_CheckPredicate, 8, 186, 27, // Skip to: 13640
/* 6542 */    MCD::OPC_Decode, 46, 137, 1, // Opcode: ADDS_S_H
/* 6546 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 6558
/* 6550 */    MCD::OPC_CheckPredicate, 8, 174, 27, // Skip to: 13640
/* 6554 */    MCD::OPC_Decode, 47, 138, 1, // Opcode: ADDS_S_W
/* 6558 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 6570
/* 6562 */    MCD::OPC_CheckPredicate, 8, 162, 27, // Skip to: 13640
/* 6566 */    MCD::OPC_Decode, 45, 139, 1, // Opcode: ADDS_S_D
/* 6570 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 6582
/* 6574 */    MCD::OPC_CheckPredicate, 8, 150, 27, // Skip to: 13640
/* 6578 */    MCD::OPC_Decode, 48, 136, 1, // Opcode: ADDS_U_B
/* 6582 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 6594
/* 6586 */    MCD::OPC_CheckPredicate, 8, 138, 27, // Skip to: 13640
/* 6590 */    MCD::OPC_Decode, 50, 137, 1, // Opcode: ADDS_U_H
/* 6594 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 6606
/* 6598 */    MCD::OPC_CheckPredicate, 8, 126, 27, // Skip to: 13640
/* 6602 */    MCD::OPC_Decode, 51, 138, 1, // Opcode: ADDS_U_W
/* 6606 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 6618
/* 6610 */    MCD::OPC_CheckPredicate, 8, 114, 27, // Skip to: 13640
/* 6614 */    MCD::OPC_Decode, 49, 139, 1, // Opcode: ADDS_U_D
/* 6618 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6631
/* 6622 */    MCD::OPC_CheckPredicate, 8, 102, 27, // Skip to: 13640
/* 6626 */    MCD::OPC_Decode, 147, 1, 136, 1, // Opcode: AVE_S_B
/* 6631 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6644
/* 6635 */    MCD::OPC_CheckPredicate, 8, 89, 27, // Skip to: 13640
/* 6639 */    MCD::OPC_Decode, 149, 1, 137, 1, // Opcode: AVE_S_H
/* 6644 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6657
/* 6648 */    MCD::OPC_CheckPredicate, 8, 76, 27, // Skip to: 13640
/* 6652 */    MCD::OPC_Decode, 150, 1, 138, 1, // Opcode: AVE_S_W
/* 6657 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6670
/* 6661 */    MCD::OPC_CheckPredicate, 8, 63, 27, // Skip to: 13640
/* 6665 */    MCD::OPC_Decode, 148, 1, 139, 1, // Opcode: AVE_S_D
/* 6670 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6683
/* 6674 */    MCD::OPC_CheckPredicate, 8, 50, 27, // Skip to: 13640
/* 6678 */    MCD::OPC_Decode, 151, 1, 136, 1, // Opcode: AVE_U_B
/* 6683 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6696
/* 6687 */    MCD::OPC_CheckPredicate, 8, 37, 27, // Skip to: 13640
/* 6691 */    MCD::OPC_Decode, 153, 1, 137, 1, // Opcode: AVE_U_H
/* 6696 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6709
/* 6700 */    MCD::OPC_CheckPredicate, 8, 24, 27, // Skip to: 13640
/* 6704 */    MCD::OPC_Decode, 154, 1, 138, 1, // Opcode: AVE_U_W
/* 6709 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6722
/* 6713 */    MCD::OPC_CheckPredicate, 8, 11, 27, // Skip to: 13640
/* 6717 */    MCD::OPC_Decode, 152, 1, 139, 1, // Opcode: AVE_U_D
/* 6722 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6735
/* 6726 */    MCD::OPC_CheckPredicate, 8, 254, 26, // Skip to: 13640
/* 6730 */    MCD::OPC_Decode, 139, 1, 136, 1, // Opcode: AVER_S_B
/* 6735 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 6748
/* 6739 */    MCD::OPC_CheckPredicate, 8, 241, 26, // Skip to: 13640
/* 6743 */    MCD::OPC_Decode, 141, 1, 137, 1, // Opcode: AVER_S_H
/* 6748 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 6761
/* 6752 */    MCD::OPC_CheckPredicate, 8, 228, 26, // Skip to: 13640
/* 6756 */    MCD::OPC_Decode, 142, 1, 138, 1, // Opcode: AVER_S_W
/* 6761 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 6774
/* 6765 */    MCD::OPC_CheckPredicate, 8, 215, 26, // Skip to: 13640
/* 6769 */    MCD::OPC_Decode, 140, 1, 139, 1, // Opcode: AVER_S_D
/* 6774 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 6787
/* 6778 */    MCD::OPC_CheckPredicate, 8, 202, 26, // Skip to: 13640
/* 6782 */    MCD::OPC_Decode, 143, 1, 136, 1, // Opcode: AVER_U_B
/* 6787 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 6800
/* 6791 */    MCD::OPC_CheckPredicate, 8, 189, 26, // Skip to: 13640
/* 6795 */    MCD::OPC_Decode, 145, 1, 137, 1, // Opcode: AVER_U_H
/* 6800 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 6813
/* 6804 */    MCD::OPC_CheckPredicate, 8, 176, 26, // Skip to: 13640
/* 6808 */    MCD::OPC_Decode, 146, 1, 138, 1, // Opcode: AVER_U_W
/* 6813 */    MCD::OPC_FilterValue, 31, 167, 26, // Skip to: 13640
/* 6817 */    MCD::OPC_CheckPredicate, 8, 163, 26, // Skip to: 13640
/* 6821 */    MCD::OPC_Decode, 144, 1, 139, 1, // Opcode: AVER_U_D
/* 6826 */    MCD::OPC_FilterValue, 17, 51, 1, // Skip to: 7137
/* 6830 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6833 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6846
/* 6837 */    MCD::OPC_CheckPredicate, 8, 143, 26, // Skip to: 13640
/* 6841 */    MCD::OPC_Decode, 193, 12, 136, 1, // Opcode: SUBS_S_B
/* 6846 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6859
/* 6850 */    MCD::OPC_CheckPredicate, 8, 130, 26, // Skip to: 13640
/* 6854 */    MCD::OPC_Decode, 195, 12, 137, 1, // Opcode: SUBS_S_H
/* 6859 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6872
/* 6863 */    MCD::OPC_CheckPredicate, 8, 117, 26, // Skip to: 13640
/* 6867 */    MCD::OPC_Decode, 196, 12, 138, 1, // Opcode: SUBS_S_W
/* 6872 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 6885
/* 6876 */    MCD::OPC_CheckPredicate, 8, 104, 26, // Skip to: 13640
/* 6880 */    MCD::OPC_Decode, 194, 12, 139, 1, // Opcode: SUBS_S_D
/* 6885 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6898
/* 6889 */    MCD::OPC_CheckPredicate, 8, 91, 26, // Skip to: 13640
/* 6893 */    MCD::OPC_Decode, 197, 12, 136, 1, // Opcode: SUBS_U_B
/* 6898 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 6911
/* 6902 */    MCD::OPC_CheckPredicate, 8, 78, 26, // Skip to: 13640
/* 6906 */    MCD::OPC_Decode, 199, 12, 137, 1, // Opcode: SUBS_U_H
/* 6911 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 6924
/* 6915 */    MCD::OPC_CheckPredicate, 8, 65, 26, // Skip to: 13640
/* 6919 */    MCD::OPC_Decode, 200, 12, 138, 1, // Opcode: SUBS_U_W
/* 6924 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 6937
/* 6928 */    MCD::OPC_CheckPredicate, 8, 52, 26, // Skip to: 13640
/* 6932 */    MCD::OPC_Decode, 198, 12, 139, 1, // Opcode: SUBS_U_D
/* 6937 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 6950
/* 6941 */    MCD::OPC_CheckPredicate, 8, 39, 26, // Skip to: 13640
/* 6945 */    MCD::OPC_Decode, 185, 12, 136, 1, // Opcode: SUBSUS_U_B
/* 6950 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 6963
/* 6954 */    MCD::OPC_CheckPredicate, 8, 26, 26, // Skip to: 13640
/* 6958 */    MCD::OPC_Decode, 187, 12, 137, 1, // Opcode: SUBSUS_U_H
/* 6963 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 6976
/* 6967 */    MCD::OPC_CheckPredicate, 8, 13, 26, // Skip to: 13640
/* 6971 */    MCD::OPC_Decode, 188, 12, 138, 1, // Opcode: SUBSUS_U_W
/* 6976 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6989
/* 6980 */    MCD::OPC_CheckPredicate, 8, 0, 26, // Skip to: 13640
/* 6984 */    MCD::OPC_Decode, 186, 12, 139, 1, // Opcode: SUBSUS_U_D
/* 6989 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7002
/* 6993 */    MCD::OPC_CheckPredicate, 8, 243, 25, // Skip to: 13640
/* 6997 */    MCD::OPC_Decode, 189, 12, 136, 1, // Opcode: SUBSUU_S_B
/* 7002 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7015
/* 7006 */    MCD::OPC_CheckPredicate, 8, 230, 25, // Skip to: 13640
/* 7010 */    MCD::OPC_Decode, 191, 12, 137, 1, // Opcode: SUBSUU_S_H
/* 7015 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7028
/* 7019 */    MCD::OPC_CheckPredicate, 8, 217, 25, // Skip to: 13640
/* 7023 */    MCD::OPC_Decode, 192, 12, 138, 1, // Opcode: SUBSUU_S_W
/* 7028 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7041
/* 7032 */    MCD::OPC_CheckPredicate, 8, 204, 25, // Skip to: 13640
/* 7036 */    MCD::OPC_Decode, 190, 12, 139, 1, // Opcode: SUBSUU_S_D
/* 7041 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 7053
/* 7045 */    MCD::OPC_CheckPredicate, 8, 191, 25, // Skip to: 13640
/* 7049 */    MCD::OPC_Decode, 97, 136, 1, // Opcode: ASUB_S_B
/* 7053 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 7065
/* 7057 */    MCD::OPC_CheckPredicate, 8, 179, 25, // Skip to: 13640
/* 7061 */    MCD::OPC_Decode, 99, 137, 1, // Opcode: ASUB_S_H
/* 7065 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 7077
/* 7069 */    MCD::OPC_CheckPredicate, 8, 167, 25, // Skip to: 13640
/* 7073 */    MCD::OPC_Decode, 100, 138, 1, // Opcode: ASUB_S_W
/* 7077 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 7089
/* 7081 */    MCD::OPC_CheckPredicate, 8, 155, 25, // Skip to: 13640
/* 7085 */    MCD::OPC_Decode, 98, 139, 1, // Opcode: ASUB_S_D
/* 7089 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 7101
/* 7093 */    MCD::OPC_CheckPredicate, 8, 143, 25, // Skip to: 13640
/* 7097 */    MCD::OPC_Decode, 101, 136, 1, // Opcode: ASUB_U_B
/* 7101 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 7113
/* 7105 */    MCD::OPC_CheckPredicate, 8, 131, 25, // Skip to: 13640
/* 7109 */    MCD::OPC_Decode, 103, 137, 1, // Opcode: ASUB_U_H
/* 7113 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 7125
/* 7117 */    MCD::OPC_CheckPredicate, 8, 119, 25, // Skip to: 13640
/* 7121 */    MCD::OPC_Decode, 104, 138, 1, // Opcode: ASUB_U_W
/* 7125 */    MCD::OPC_FilterValue, 23, 111, 25, // Skip to: 13640
/* 7129 */    MCD::OPC_CheckPredicate, 8, 107, 25, // Skip to: 13640
/* 7133 */    MCD::OPC_Decode, 102, 139, 1, // Opcode: ASUB_U_D
/* 7137 */    MCD::OPC_FilterValue, 18, 111, 1, // Skip to: 7508
/* 7141 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7144 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7157
/* 7148 */    MCD::OPC_CheckPredicate, 8, 88, 25, // Skip to: 13640
/* 7152 */    MCD::OPC_Decode, 200, 9, 136, 1, // Opcode: MULV_B
/* 7157 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7170
/* 7161 */    MCD::OPC_CheckPredicate, 8, 75, 25, // Skip to: 13640
/* 7165 */    MCD::OPC_Decode, 202, 9, 137, 1, // Opcode: MULV_H
/* 7170 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7183
/* 7174 */    MCD::OPC_CheckPredicate, 8, 62, 25, // Skip to: 13640
/* 7178 */    MCD::OPC_Decode, 203, 9, 138, 1, // Opcode: MULV_W
/* 7183 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7196
/* 7187 */    MCD::OPC_CheckPredicate, 8, 49, 25, // Skip to: 13640
/* 7191 */    MCD::OPC_Decode, 201, 9, 139, 1, // Opcode: MULV_D
/* 7196 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7209
/* 7200 */    MCD::OPC_CheckPredicate, 8, 36, 25, // Skip to: 13640
/* 7204 */    MCD::OPC_Decode, 253, 7, 140, 1, // Opcode: MADDV_B
/* 7209 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7222
/* 7213 */    MCD::OPC_CheckPredicate, 8, 23, 25, // Skip to: 13640
/* 7217 */    MCD::OPC_Decode, 255, 7, 141, 1, // Opcode: MADDV_H
/* 7222 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7235
/* 7226 */    MCD::OPC_CheckPredicate, 8, 10, 25, // Skip to: 13640
/* 7230 */    MCD::OPC_Decode, 128, 8, 142, 1, // Opcode: MADDV_W
/* 7235 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7248
/* 7239 */    MCD::OPC_CheckPredicate, 8, 253, 24, // Skip to: 13640
/* 7243 */    MCD::OPC_Decode, 254, 7, 143, 1, // Opcode: MADDV_D
/* 7248 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7261
/* 7252 */    MCD::OPC_CheckPredicate, 8, 240, 24, // Skip to: 13640
/* 7256 */    MCD::OPC_Decode, 143, 9, 140, 1, // Opcode: MSUBV_B
/* 7261 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7274
/* 7265 */    MCD::OPC_CheckPredicate, 8, 227, 24, // Skip to: 13640
/* 7269 */    MCD::OPC_Decode, 145, 9, 141, 1, // Opcode: MSUBV_H
/* 7274 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7287
/* 7278 */    MCD::OPC_CheckPredicate, 8, 214, 24, // Skip to: 13640
/* 7282 */    MCD::OPC_Decode, 146, 9, 142, 1, // Opcode: MSUBV_W
/* 7287 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7300
/* 7291 */    MCD::OPC_CheckPredicate, 8, 201, 24, // Skip to: 13640
/* 7295 */    MCD::OPC_Decode, 144, 9, 143, 1, // Opcode: MSUBV_D
/* 7300 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7313
/* 7304 */    MCD::OPC_CheckPredicate, 8, 188, 24, // Skip to: 13640
/* 7308 */    MCD::OPC_Decode, 173, 4, 136, 1, // Opcode: DIV_S_B
/* 7313 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7326
/* 7317 */    MCD::OPC_CheckPredicate, 8, 175, 24, // Skip to: 13640
/* 7321 */    MCD::OPC_Decode, 175, 4, 137, 1, // Opcode: DIV_S_H
/* 7326 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7339
/* 7330 */    MCD::OPC_CheckPredicate, 8, 162, 24, // Skip to: 13640
/* 7334 */    MCD::OPC_Decode, 176, 4, 138, 1, // Opcode: DIV_S_W
/* 7339 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7352
/* 7343 */    MCD::OPC_CheckPredicate, 8, 149, 24, // Skip to: 13640
/* 7347 */    MCD::OPC_Decode, 174, 4, 139, 1, // Opcode: DIV_S_D
/* 7352 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7365
/* 7356 */    MCD::OPC_CheckPredicate, 8, 136, 24, // Skip to: 13640
/* 7360 */    MCD::OPC_Decode, 177, 4, 136, 1, // Opcode: DIV_U_B
/* 7365 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7378
/* 7369 */    MCD::OPC_CheckPredicate, 8, 123, 24, // Skip to: 13640
/* 7373 */    MCD::OPC_Decode, 179, 4, 137, 1, // Opcode: DIV_U_H
/* 7378 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7391
/* 7382 */    MCD::OPC_CheckPredicate, 8, 110, 24, // Skip to: 13640
/* 7386 */    MCD::OPC_Decode, 180, 4, 138, 1, // Opcode: DIV_U_W
/* 7391 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 7404
/* 7395 */    MCD::OPC_CheckPredicate, 8, 97, 24, // Skip to: 13640
/* 7399 */    MCD::OPC_Decode, 178, 4, 139, 1, // Opcode: DIV_U_D
/* 7404 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 7417
/* 7408 */    MCD::OPC_CheckPredicate, 8, 84, 24, // Skip to: 13640
/* 7412 */    MCD::OPC_Decode, 212, 8, 136, 1, // Opcode: MOD_S_B
/* 7417 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 7430
/* 7421 */    MCD::OPC_CheckPredicate, 8, 71, 24, // Skip to: 13640
/* 7425 */    MCD::OPC_Decode, 214, 8, 137, 1, // Opcode: MOD_S_H
/* 7430 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 7443
/* 7434 */    MCD::OPC_CheckPredicate, 8, 58, 24, // Skip to: 13640
/* 7438 */    MCD::OPC_Decode, 215, 8, 138, 1, // Opcode: MOD_S_W
/* 7443 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 7456
/* 7447 */    MCD::OPC_CheckPredicate, 8, 45, 24, // Skip to: 13640
/* 7451 */    MCD::OPC_Decode, 213, 8, 139, 1, // Opcode: MOD_S_D
/* 7456 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 7469
/* 7460 */    MCD::OPC_CheckPredicate, 8, 32, 24, // Skip to: 13640
/* 7464 */    MCD::OPC_Decode, 216, 8, 136, 1, // Opcode: MOD_U_B
/* 7469 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 7482
/* 7473 */    MCD::OPC_CheckPredicate, 8, 19, 24, // Skip to: 13640
/* 7477 */    MCD::OPC_Decode, 218, 8, 137, 1, // Opcode: MOD_U_H
/* 7482 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 7495
/* 7486 */    MCD::OPC_CheckPredicate, 8, 6, 24, // Skip to: 13640
/* 7490 */    MCD::OPC_Decode, 219, 8, 138, 1, // Opcode: MOD_U_W
/* 7495 */    MCD::OPC_FilterValue, 31, 253, 23, // Skip to: 13640
/* 7499 */    MCD::OPC_CheckPredicate, 8, 249, 23, // Skip to: 13640
/* 7503 */    MCD::OPC_Decode, 217, 8, 139, 1, // Opcode: MOD_U_D
/* 7508 */    MCD::OPC_FilterValue, 19, 237, 0, // Skip to: 7749
/* 7512 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7515 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7528
/* 7519 */    MCD::OPC_CheckPredicate, 8, 229, 23, // Skip to: 13640
/* 7523 */    MCD::OPC_Decode, 200, 4, 144, 1, // Opcode: DOTP_S_H
/* 7528 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7541
/* 7532 */    MCD::OPC_CheckPredicate, 8, 216, 23, // Skip to: 13640
/* 7536 */    MCD::OPC_Decode, 201, 4, 145, 1, // Opcode: DOTP_S_W
/* 7541 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7554
/* 7545 */    MCD::OPC_CheckPredicate, 8, 203, 23, // Skip to: 13640
/* 7549 */    MCD::OPC_Decode, 199, 4, 146, 1, // Opcode: DOTP_S_D
/* 7554 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7567
/* 7558 */    MCD::OPC_CheckPredicate, 8, 190, 23, // Skip to: 13640
/* 7562 */    MCD::OPC_Decode, 203, 4, 144, 1, // Opcode: DOTP_U_H
/* 7567 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7580
/* 7571 */    MCD::OPC_CheckPredicate, 8, 177, 23, // Skip to: 13640
/* 7575 */    MCD::OPC_Decode, 204, 4, 145, 1, // Opcode: DOTP_U_W
/* 7580 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7593
/* 7584 */    MCD::OPC_CheckPredicate, 8, 164, 23, // Skip to: 13640
/* 7588 */    MCD::OPC_Decode, 202, 4, 146, 1, // Opcode: DOTP_U_D
/* 7593 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7606
/* 7597 */    MCD::OPC_CheckPredicate, 8, 151, 23, // Skip to: 13640
/* 7601 */    MCD::OPC_Decode, 206, 4, 147, 1, // Opcode: DPADD_S_H
/* 7606 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7619
/* 7610 */    MCD::OPC_CheckPredicate, 8, 138, 23, // Skip to: 13640
/* 7614 */    MCD::OPC_Decode, 207, 4, 148, 1, // Opcode: DPADD_S_W
/* 7619 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7632
/* 7623 */    MCD::OPC_CheckPredicate, 8, 125, 23, // Skip to: 13640
/* 7627 */    MCD::OPC_Decode, 205, 4, 149, 1, // Opcode: DPADD_S_D
/* 7632 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7645
/* 7636 */    MCD::OPC_CheckPredicate, 8, 112, 23, // Skip to: 13640
/* 7640 */    MCD::OPC_Decode, 209, 4, 147, 1, // Opcode: DPADD_U_H
/* 7645 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7658
/* 7649 */    MCD::OPC_CheckPredicate, 8, 99, 23, // Skip to: 13640
/* 7653 */    MCD::OPC_Decode, 210, 4, 148, 1, // Opcode: DPADD_U_W
/* 7658 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7671
/* 7662 */    MCD::OPC_CheckPredicate, 8, 86, 23, // Skip to: 13640
/* 7666 */    MCD::OPC_Decode, 208, 4, 149, 1, // Opcode: DPADD_U_D
/* 7671 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7684
/* 7675 */    MCD::OPC_CheckPredicate, 8, 73, 23, // Skip to: 13640
/* 7679 */    MCD::OPC_Decode, 225, 4, 147, 1, // Opcode: DPSUB_S_H
/* 7684 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7697
/* 7688 */    MCD::OPC_CheckPredicate, 8, 60, 23, // Skip to: 13640
/* 7692 */    MCD::OPC_Decode, 226, 4, 148, 1, // Opcode: DPSUB_S_W
/* 7697 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7710
/* 7701 */    MCD::OPC_CheckPredicate, 8, 47, 23, // Skip to: 13640
/* 7705 */    MCD::OPC_Decode, 224, 4, 149, 1, // Opcode: DPSUB_S_D
/* 7710 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7723
/* 7714 */    MCD::OPC_CheckPredicate, 8, 34, 23, // Skip to: 13640
/* 7718 */    MCD::OPC_Decode, 228, 4, 147, 1, // Opcode: DPSUB_U_H
/* 7723 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7736
/* 7727 */    MCD::OPC_CheckPredicate, 8, 21, 23, // Skip to: 13640
/* 7731 */    MCD::OPC_Decode, 229, 4, 148, 1, // Opcode: DPSUB_U_W
/* 7736 */    MCD::OPC_FilterValue, 23, 12, 23, // Skip to: 13640
/* 7740 */    MCD::OPC_CheckPredicate, 8, 8, 23, // Skip to: 13640
/* 7744 */    MCD::OPC_Decode, 227, 4, 149, 1, // Opcode: DPSUB_U_D
/* 7749 */    MCD::OPC_FilterValue, 20, 163, 1, // Skip to: 8172
/* 7753 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7756 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7769
/* 7760 */    MCD::OPC_CheckPredicate, 8, 244, 22, // Skip to: 13640
/* 7764 */    MCD::OPC_Decode, 208, 11, 150, 1, // Opcode: SLD_B
/* 7769 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7782
/* 7773 */    MCD::OPC_CheckPredicate, 8, 231, 22, // Skip to: 13640
/* 7777 */    MCD::OPC_Decode, 210, 11, 151, 1, // Opcode: SLD_H
/* 7782 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7795
/* 7786 */    MCD::OPC_CheckPredicate, 8, 218, 22, // Skip to: 13640
/* 7790 */    MCD::OPC_Decode, 211, 11, 152, 1, // Opcode: SLD_W
/* 7795 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7808
/* 7799 */    MCD::OPC_CheckPredicate, 8, 205, 22, // Skip to: 13640
/* 7803 */    MCD::OPC_Decode, 209, 11, 153, 1, // Opcode: SLD_D
/* 7808 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7821
/* 7812 */    MCD::OPC_CheckPredicate, 8, 192, 22, // Skip to: 13640
/* 7816 */    MCD::OPC_Decode, 250, 11, 154, 1, // Opcode: SPLAT_B
/* 7821 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7834
/* 7825 */    MCD::OPC_CheckPredicate, 8, 179, 22, // Skip to: 13640
/* 7829 */    MCD::OPC_Decode, 252, 11, 155, 1, // Opcode: SPLAT_H
/* 7834 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7847
/* 7838 */    MCD::OPC_CheckPredicate, 8, 166, 22, // Skip to: 13640
/* 7842 */    MCD::OPC_Decode, 253, 11, 156, 1, // Opcode: SPLAT_W
/* 7847 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7860
/* 7851 */    MCD::OPC_CheckPredicate, 8, 153, 22, // Skip to: 13640
/* 7855 */    MCD::OPC_Decode, 251, 11, 157, 1, // Opcode: SPLAT_D
/* 7860 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7873
/* 7864 */    MCD::OPC_CheckPredicate, 8, 140, 22, // Skip to: 13640
/* 7868 */    MCD::OPC_Decode, 136, 10, 136, 1, // Opcode: PCKEV_B
/* 7873 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7886
/* 7877 */    MCD::OPC_CheckPredicate, 8, 127, 22, // Skip to: 13640
/* 7881 */    MCD::OPC_Decode, 138, 10, 137, 1, // Opcode: PCKEV_H
/* 7886 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7899
/* 7890 */    MCD::OPC_CheckPredicate, 8, 114, 22, // Skip to: 13640
/* 7894 */    MCD::OPC_Decode, 139, 10, 138, 1, // Opcode: PCKEV_W
/* 7899 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7912
/* 7903 */    MCD::OPC_CheckPredicate, 8, 101, 22, // Skip to: 13640
/* 7907 */    MCD::OPC_Decode, 137, 10, 139, 1, // Opcode: PCKEV_D
/* 7912 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7925
/* 7916 */    MCD::OPC_CheckPredicate, 8, 88, 22, // Skip to: 13640
/* 7920 */    MCD::OPC_Decode, 140, 10, 136, 1, // Opcode: PCKOD_B
/* 7925 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7938
/* 7929 */    MCD::OPC_CheckPredicate, 8, 75, 22, // Skip to: 13640
/* 7933 */    MCD::OPC_Decode, 142, 10, 137, 1, // Opcode: PCKOD_H
/* 7938 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7951
/* 7942 */    MCD::OPC_CheckPredicate, 8, 62, 22, // Skip to: 13640
/* 7946 */    MCD::OPC_Decode, 143, 10, 138, 1, // Opcode: PCKOD_W
/* 7951 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7964
/* 7955 */    MCD::OPC_CheckPredicate, 8, 49, 22, // Skip to: 13640
/* 7959 */    MCD::OPC_Decode, 141, 10, 139, 1, // Opcode: PCKOD_D
/* 7964 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7977
/* 7968 */    MCD::OPC_CheckPredicate, 8, 36, 22, // Skip to: 13640
/* 7972 */    MCD::OPC_Decode, 204, 6, 136, 1, // Opcode: ILVL_B
/* 7977 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7990
/* 7981 */    MCD::OPC_CheckPredicate, 8, 23, 22, // Skip to: 13640
/* 7985 */    MCD::OPC_Decode, 206, 6, 137, 1, // Opcode: ILVL_H
/* 7990 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8003
/* 7994 */    MCD::OPC_CheckPredicate, 8, 10, 22, // Skip to: 13640
/* 7998 */    MCD::OPC_Decode, 207, 6, 138, 1, // Opcode: ILVL_W
/* 8003 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8016
/* 8007 */    MCD::OPC_CheckPredicate, 8, 253, 21, // Skip to: 13640
/* 8011 */    MCD::OPC_Decode, 205, 6, 139, 1, // Opcode: ILVL_D
/* 8016 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8029
/* 8020 */    MCD::OPC_CheckPredicate, 8, 240, 21, // Skip to: 13640
/* 8024 */    MCD::OPC_Decode, 212, 6, 136, 1, // Opcode: ILVR_B
/* 8029 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8042
/* 8033 */    MCD::OPC_CheckPredicate, 8, 227, 21, // Skip to: 13640
/* 8037 */    MCD::OPC_Decode, 214, 6, 137, 1, // Opcode: ILVR_H
/* 8042 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8055
/* 8046 */    MCD::OPC_CheckPredicate, 8, 214, 21, // Skip to: 13640
/* 8050 */    MCD::OPC_Decode, 215, 6, 138, 1, // Opcode: ILVR_W
/* 8055 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 8068
/* 8059 */    MCD::OPC_CheckPredicate, 8, 201, 21, // Skip to: 13640
/* 8063 */    MCD::OPC_Decode, 213, 6, 139, 1, // Opcode: ILVR_D
/* 8068 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 8081
/* 8072 */    MCD::OPC_CheckPredicate, 8, 188, 21, // Skip to: 13640
/* 8076 */    MCD::OPC_Decode, 200, 6, 136, 1, // Opcode: ILVEV_B
/* 8081 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 8094
/* 8085 */    MCD::OPC_CheckPredicate, 8, 175, 21, // Skip to: 13640
/* 8089 */    MCD::OPC_Decode, 202, 6, 137, 1, // Opcode: ILVEV_H
/* 8094 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 8107
/* 8098 */    MCD::OPC_CheckPredicate, 8, 162, 21, // Skip to: 13640
/* 8102 */    MCD::OPC_Decode, 203, 6, 138, 1, // Opcode: ILVEV_W
/* 8107 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 8120
/* 8111 */    MCD::OPC_CheckPredicate, 8, 149, 21, // Skip to: 13640
/* 8115 */    MCD::OPC_Decode, 201, 6, 139, 1, // Opcode: ILVEV_D
/* 8120 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 8133
/* 8124 */    MCD::OPC_CheckPredicate, 8, 136, 21, // Skip to: 13640
/* 8128 */    MCD::OPC_Decode, 208, 6, 136, 1, // Opcode: ILVOD_B
/* 8133 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 8146
/* 8137 */    MCD::OPC_CheckPredicate, 8, 123, 21, // Skip to: 13640
/* 8141 */    MCD::OPC_Decode, 210, 6, 137, 1, // Opcode: ILVOD_H
/* 8146 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 8159
/* 8150 */    MCD::OPC_CheckPredicate, 8, 110, 21, // Skip to: 13640
/* 8154 */    MCD::OPC_Decode, 211, 6, 138, 1, // Opcode: ILVOD_W
/* 8159 */    MCD::OPC_FilterValue, 31, 101, 21, // Skip to: 13640
/* 8163 */    MCD::OPC_CheckPredicate, 8, 97, 21, // Skip to: 13640
/* 8167 */    MCD::OPC_Decode, 209, 6, 139, 1, // Opcode: ILVOD_D
/* 8172 */    MCD::OPC_FilterValue, 21, 59, 1, // Skip to: 8491
/* 8176 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8179 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8192
/* 8183 */    MCD::OPC_CheckPredicate, 8, 77, 21, // Skip to: 13640
/* 8187 */    MCD::OPC_Decode, 214, 13, 140, 1, // Opcode: VSHF_B
/* 8192 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8205
/* 8196 */    MCD::OPC_CheckPredicate, 8, 64, 21, // Skip to: 13640
/* 8200 */    MCD::OPC_Decode, 216, 13, 141, 1, // Opcode: VSHF_H
/* 8205 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8218
/* 8209 */    MCD::OPC_CheckPredicate, 8, 51, 21, // Skip to: 13640
/* 8213 */    MCD::OPC_Decode, 217, 13, 142, 1, // Opcode: VSHF_W
/* 8218 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8231
/* 8222 */    MCD::OPC_CheckPredicate, 8, 38, 21, // Skip to: 13640
/* 8226 */    MCD::OPC_Decode, 215, 13, 143, 1, // Opcode: VSHF_D
/* 8231 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8244
/* 8235 */    MCD::OPC_CheckPredicate, 8, 25, 21, // Skip to: 13640
/* 8239 */    MCD::OPC_Decode, 135, 12, 136, 1, // Opcode: SRAR_B
/* 8244 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8257
/* 8248 */    MCD::OPC_CheckPredicate, 8, 12, 21, // Skip to: 13640
/* 8252 */    MCD::OPC_Decode, 137, 12, 137, 1, // Opcode: SRAR_H
/* 8257 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8270
/* 8261 */    MCD::OPC_CheckPredicate, 8, 255, 20, // Skip to: 13640
/* 8265 */    MCD::OPC_Decode, 138, 12, 138, 1, // Opcode: SRAR_W
/* 8270 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8283
/* 8274 */    MCD::OPC_CheckPredicate, 8, 242, 20, // Skip to: 13640
/* 8278 */    MCD::OPC_Decode, 136, 12, 139, 1, // Opcode: SRAR_D
/* 8283 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8296
/* 8287 */    MCD::OPC_CheckPredicate, 8, 229, 20, // Skip to: 13640
/* 8291 */    MCD::OPC_Decode, 156, 12, 136, 1, // Opcode: SRLR_B
/* 8296 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8309
/* 8300 */    MCD::OPC_CheckPredicate, 8, 216, 20, // Skip to: 13640
/* 8304 */    MCD::OPC_Decode, 158, 12, 137, 1, // Opcode: SRLR_H
/* 8309 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8322
/* 8313 */    MCD::OPC_CheckPredicate, 8, 203, 20, // Skip to: 13640
/* 8317 */    MCD::OPC_Decode, 159, 12, 138, 1, // Opcode: SRLR_W
/* 8322 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8335
/* 8326 */    MCD::OPC_CheckPredicate, 8, 190, 20, // Skip to: 13640
/* 8330 */    MCD::OPC_Decode, 157, 12, 139, 1, // Opcode: SRLR_D
/* 8335 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8348
/* 8339 */    MCD::OPC_CheckPredicate, 8, 177, 20, // Skip to: 13640
/* 8343 */    MCD::OPC_Decode, 189, 6, 144, 1, // Opcode: HADD_S_H
/* 8348 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8361
/* 8352 */    MCD::OPC_CheckPredicate, 8, 164, 20, // Skip to: 13640
/* 8356 */    MCD::OPC_Decode, 190, 6, 145, 1, // Opcode: HADD_S_W
/* 8361 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8374
/* 8365 */    MCD::OPC_CheckPredicate, 8, 151, 20, // Skip to: 13640
/* 8369 */    MCD::OPC_Decode, 188, 6, 146, 1, // Opcode: HADD_S_D
/* 8374 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8387
/* 8378 */    MCD::OPC_CheckPredicate, 8, 138, 20, // Skip to: 13640
/* 8382 */    MCD::OPC_Decode, 192, 6, 144, 1, // Opcode: HADD_U_H
/* 8387 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8400
/* 8391 */    MCD::OPC_CheckPredicate, 8, 125, 20, // Skip to: 13640
/* 8395 */    MCD::OPC_Decode, 193, 6, 145, 1, // Opcode: HADD_U_W
/* 8400 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 8413
/* 8404 */    MCD::OPC_CheckPredicate, 8, 112, 20, // Skip to: 13640
/* 8408 */    MCD::OPC_Decode, 191, 6, 146, 1, // Opcode: HADD_U_D
/* 8413 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 8426
/* 8417 */    MCD::OPC_CheckPredicate, 8, 99, 20, // Skip to: 13640
/* 8421 */    MCD::OPC_Decode, 195, 6, 144, 1, // Opcode: HSUB_S_H
/* 8426 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 8439
/* 8430 */    MCD::OPC_CheckPredicate, 8, 86, 20, // Skip to: 13640
/* 8434 */    MCD::OPC_Decode, 196, 6, 145, 1, // Opcode: HSUB_S_W
/* 8439 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 8452
/* 8443 */    MCD::OPC_CheckPredicate, 8, 73, 20, // Skip to: 13640
/* 8447 */    MCD::OPC_Decode, 194, 6, 146, 1, // Opcode: HSUB_S_D
/* 8452 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 8465
/* 8456 */    MCD::OPC_CheckPredicate, 8, 60, 20, // Skip to: 13640
/* 8460 */    MCD::OPC_Decode, 198, 6, 144, 1, // Opcode: HSUB_U_H
/* 8465 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 8478
/* 8469 */    MCD::OPC_CheckPredicate, 8, 47, 20, // Skip to: 13640
/* 8473 */    MCD::OPC_Decode, 199, 6, 145, 1, // Opcode: HSUB_U_W
/* 8478 */    MCD::OPC_FilterValue, 31, 38, 20, // Skip to: 13640
/* 8482 */    MCD::OPC_CheckPredicate, 8, 34, 20, // Skip to: 13640
/* 8486 */    MCD::OPC_Decode, 197, 6, 146, 1, // Opcode: HSUB_U_D
/* 8491 */    MCD::OPC_FilterValue, 25, 230, 1, // Skip to: 8981
/* 8495 */    MCD::OPC_ExtractField, 20, 6,  // Inst{25-20} ...
/* 8498 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8511
/* 8502 */    MCD::OPC_CheckPredicate, 8, 14, 20, // Skip to: 13640
/* 8506 */    MCD::OPC_Decode, 204, 11, 158, 1, // Opcode: SLDI_B
/* 8511 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8530
/* 8515 */    MCD::OPC_CheckPredicate, 8, 1, 20, // Skip to: 13640
/* 8519 */    MCD::OPC_CheckField, 19, 1, 0, 251, 19, // Skip to: 13640
/* 8525 */    MCD::OPC_Decode, 206, 11, 159, 1, // Opcode: SLDI_H
/* 8530 */    MCD::OPC_FilterValue, 3, 54, 0, // Skip to: 8588
/* 8534 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8537 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8550
/* 8541 */    MCD::OPC_CheckPredicate, 8, 231, 19, // Skip to: 13640
/* 8545 */    MCD::OPC_Decode, 207, 11, 160, 1, // Opcode: SLDI_W
/* 8550 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8569
/* 8554 */    MCD::OPC_CheckPredicate, 8, 218, 19, // Skip to: 13640
/* 8558 */    MCD::OPC_CheckField, 17, 1, 0, 212, 19, // Skip to: 13640
/* 8564 */    MCD::OPC_Decode, 205, 11, 161, 1, // Opcode: SLDI_D
/* 8569 */    MCD::OPC_FilterValue, 3, 203, 19, // Skip to: 13640
/* 8573 */    MCD::OPC_CheckPredicate, 8, 199, 19, // Skip to: 13640
/* 8577 */    MCD::OPC_CheckField, 16, 2, 2, 193, 19, // Skip to: 13640
/* 8583 */    MCD::OPC_Decode, 200, 3, 162, 1, // Opcode: CTCMSA
/* 8588 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8601
/* 8592 */    MCD::OPC_CheckPredicate, 8, 180, 19, // Skip to: 13640
/* 8596 */    MCD::OPC_Decode, 246, 11, 163, 1, // Opcode: SPLATI_B
/* 8601 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 8620
/* 8605 */    MCD::OPC_CheckPredicate, 8, 167, 19, // Skip to: 13640
/* 8609 */    MCD::OPC_CheckField, 19, 1, 0, 161, 19, // Skip to: 13640
/* 8615 */    MCD::OPC_Decode, 248, 11, 164, 1, // Opcode: SPLATI_H
/* 8620 */    MCD::OPC_FilterValue, 7, 54, 0, // Skip to: 8678
/* 8624 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8627 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8640
/* 8631 */    MCD::OPC_CheckPredicate, 8, 141, 19, // Skip to: 13640
/* 8635 */    MCD::OPC_Decode, 249, 11, 165, 1, // Opcode: SPLATI_W
/* 8640 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8659
/* 8644 */    MCD::OPC_CheckPredicate, 8, 128, 19, // Skip to: 13640
/* 8648 */    MCD::OPC_CheckField, 17, 1, 0, 122, 19, // Skip to: 13640
/* 8654 */    MCD::OPC_Decode, 247, 11, 166, 1, // Opcode: SPLATI_D
/* 8659 */    MCD::OPC_FilterValue, 3, 113, 19, // Skip to: 13640
/* 8663 */    MCD::OPC_CheckPredicate, 8, 109, 19, // Skip to: 13640
/* 8667 */    MCD::OPC_CheckField, 16, 2, 2, 103, 19, // Skip to: 13640
/* 8673 */    MCD::OPC_Decode, 228, 2, 167, 1, // Opcode: CFCMSA
/* 8678 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8691
/* 8682 */    MCD::OPC_CheckPredicate, 8, 90, 19, // Skip to: 13640
/* 8686 */    MCD::OPC_Decode, 190, 3, 168, 1, // Opcode: COPY_S_B
/* 8691 */    MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 8710
/* 8695 */    MCD::OPC_CheckPredicate, 8, 77, 19, // Skip to: 13640
/* 8699 */    MCD::OPC_CheckField, 19, 1, 0, 71, 19, // Skip to: 13640
/* 8705 */    MCD::OPC_Decode, 192, 3, 169, 1, // Opcode: COPY_S_H
/* 8710 */    MCD::OPC_FilterValue, 11, 54, 0, // Skip to: 8768
/* 8714 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8717 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8730
/* 8721 */    MCD::OPC_CheckPredicate, 8, 51, 19, // Skip to: 13640
/* 8725 */    MCD::OPC_Decode, 193, 3, 170, 1, // Opcode: COPY_S_W
/* 8730 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8749
/* 8734 */    MCD::OPC_CheckPredicate, 14, 38, 19, // Skip to: 13640
/* 8738 */    MCD::OPC_CheckField, 17, 1, 0, 32, 19, // Skip to: 13640
/* 8744 */    MCD::OPC_Decode, 191, 3, 171, 1, // Opcode: COPY_S_D
/* 8749 */    MCD::OPC_FilterValue, 3, 23, 19, // Skip to: 13640
/* 8753 */    MCD::OPC_CheckPredicate, 8, 19, 19, // Skip to: 13640
/* 8757 */    MCD::OPC_CheckField, 16, 2, 2, 13, 19, // Skip to: 13640
/* 8763 */    MCD::OPC_Decode, 222, 8, 172, 1, // Opcode: MOVE_V
/* 8768 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 8781
/* 8772 */    MCD::OPC_CheckPredicate, 8, 0, 19, // Skip to: 13640
/* 8776 */    MCD::OPC_Decode, 194, 3, 168, 1, // Opcode: COPY_U_B
/* 8781 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 8800
/* 8785 */    MCD::OPC_CheckPredicate, 8, 243, 18, // Skip to: 13640
/* 8789 */    MCD::OPC_CheckField, 19, 1, 0, 237, 18, // Skip to: 13640
/* 8795 */    MCD::OPC_Decode, 196, 3, 169, 1, // Opcode: COPY_U_H
/* 8800 */    MCD::OPC_FilterValue, 15, 35, 0, // Skip to: 8839
/* 8804 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8807 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8820
/* 8811 */    MCD::OPC_CheckPredicate, 8, 217, 18, // Skip to: 13640
/* 8815 */    MCD::OPC_Decode, 197, 3, 170, 1, // Opcode: COPY_U_W
/* 8820 */    MCD::OPC_FilterValue, 2, 208, 18, // Skip to: 13640
/* 8824 */    MCD::OPC_CheckPredicate, 14, 204, 18, // Skip to: 13640
/* 8828 */    MCD::OPC_CheckField, 17, 1, 0, 198, 18, // Skip to: 13640
/* 8834 */    MCD::OPC_Decode, 195, 3, 171, 1, // Opcode: COPY_U_D
/* 8839 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8852
/* 8843 */    MCD::OPC_CheckPredicate, 8, 185, 18, // Skip to: 13640
/* 8847 */    MCD::OPC_Decode, 217, 6, 173, 1, // Opcode: INSERT_B
/* 8852 */    MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 8871
/* 8856 */    MCD::OPC_CheckPredicate, 8, 172, 18, // Skip to: 13640
/* 8860 */    MCD::OPC_CheckField, 19, 1, 0, 166, 18, // Skip to: 13640
/* 8866 */    MCD::OPC_Decode, 225, 6, 174, 1, // Opcode: INSERT_H
/* 8871 */    MCD::OPC_FilterValue, 19, 35, 0, // Skip to: 8910
/* 8875 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8878 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8891
/* 8882 */    MCD::OPC_CheckPredicate, 8, 146, 18, // Skip to: 13640
/* 8886 */    MCD::OPC_Decode, 227, 6, 175, 1, // Opcode: INSERT_W
/* 8891 */    MCD::OPC_FilterValue, 2, 137, 18, // Skip to: 13640
/* 8895 */    MCD::OPC_CheckPredicate, 14, 133, 18, // Skip to: 13640
/* 8899 */    MCD::OPC_CheckField, 17, 1, 0, 127, 18, // Skip to: 13640
/* 8905 */    MCD::OPC_Decode, 219, 6, 176, 1, // Opcode: INSERT_D
/* 8910 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8923
/* 8914 */    MCD::OPC_CheckPredicate, 8, 114, 18, // Skip to: 13640
/* 8918 */    MCD::OPC_Decode, 230, 6, 177, 1, // Opcode: INSVE_B
/* 8923 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 8942
/* 8927 */    MCD::OPC_CheckPredicate, 8, 101, 18, // Skip to: 13640
/* 8931 */    MCD::OPC_CheckField, 19, 1, 0, 95, 18, // Skip to: 13640
/* 8937 */    MCD::OPC_Decode, 232, 6, 177, 1, // Opcode: INSVE_H
/* 8942 */    MCD::OPC_FilterValue, 23, 86, 18, // Skip to: 13640
/* 8946 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8949 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8962
/* 8953 */    MCD::OPC_CheckPredicate, 8, 75, 18, // Skip to: 13640
/* 8957 */    MCD::OPC_Decode, 233, 6, 177, 1, // Opcode: INSVE_W
/* 8962 */    MCD::OPC_FilterValue, 2, 66, 18, // Skip to: 13640
/* 8966 */    MCD::OPC_CheckPredicate, 8, 62, 18, // Skip to: 13640
/* 8970 */    MCD::OPC_CheckField, 17, 1, 0, 56, 18, // Skip to: 13640
/* 8976 */    MCD::OPC_Decode, 231, 6, 177, 1, // Opcode: INSVE_D
/* 8981 */    MCD::OPC_FilterValue, 26, 163, 1, // Skip to: 9404
/* 8985 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8988 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9001
/* 8992 */    MCD::OPC_CheckPredicate, 8, 36, 18, // Skip to: 13640
/* 8996 */    MCD::OPC_Decode, 166, 5, 138, 1, // Opcode: FCAF_W
/* 9001 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9014
/* 9005 */    MCD::OPC_CheckPredicate, 8, 23, 18, // Skip to: 13640
/* 9009 */    MCD::OPC_Decode, 165, 5, 139, 1, // Opcode: FCAF_D
/* 9014 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9027
/* 9018 */    MCD::OPC_CheckPredicate, 8, 10, 18, // Skip to: 13640
/* 9022 */    MCD::OPC_Decode, 193, 5, 138, 1, // Opcode: FCUN_W
/* 9027 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9040
/* 9031 */    MCD::OPC_CheckPredicate, 8, 253, 17, // Skip to: 13640
/* 9035 */    MCD::OPC_Decode, 192, 5, 139, 1, // Opcode: FCUN_D
/* 9040 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9053
/* 9044 */    MCD::OPC_CheckPredicate, 8, 240, 17, // Skip to: 13640
/* 9048 */    MCD::OPC_Decode, 168, 5, 138, 1, // Opcode: FCEQ_W
/* 9053 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9066
/* 9057 */    MCD::OPC_CheckPredicate, 8, 227, 17, // Skip to: 13640
/* 9061 */    MCD::OPC_Decode, 167, 5, 139, 1, // Opcode: FCEQ_D
/* 9066 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9079
/* 9070 */    MCD::OPC_CheckPredicate, 8, 214, 17, // Skip to: 13640
/* 9074 */    MCD::OPC_Decode, 185, 5, 138, 1, // Opcode: FCUEQ_W
/* 9079 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9092
/* 9083 */    MCD::OPC_CheckPredicate, 8, 201, 17, // Skip to: 13640
/* 9087 */    MCD::OPC_Decode, 184, 5, 139, 1, // Opcode: FCUEQ_D
/* 9092 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9105
/* 9096 */    MCD::OPC_CheckPredicate, 8, 188, 17, // Skip to: 13640
/* 9100 */    MCD::OPC_Decode, 174, 5, 138, 1, // Opcode: FCLT_W
/* 9105 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9118
/* 9109 */    MCD::OPC_CheckPredicate, 8, 175, 17, // Skip to: 13640
/* 9113 */    MCD::OPC_Decode, 173, 5, 139, 1, // Opcode: FCLT_D
/* 9118 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9131
/* 9122 */    MCD::OPC_CheckPredicate, 8, 162, 17, // Skip to: 13640
/* 9126 */    MCD::OPC_Decode, 189, 5, 138, 1, // Opcode: FCULT_W
/* 9131 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9144
/* 9135 */    MCD::OPC_CheckPredicate, 8, 149, 17, // Skip to: 13640
/* 9139 */    MCD::OPC_Decode, 188, 5, 139, 1, // Opcode: FCULT_D
/* 9144 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 9157
/* 9148 */    MCD::OPC_CheckPredicate, 8, 136, 17, // Skip to: 13640
/* 9152 */    MCD::OPC_Decode, 172, 5, 138, 1, // Opcode: FCLE_W
/* 9157 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 9170
/* 9161 */    MCD::OPC_CheckPredicate, 8, 123, 17, // Skip to: 13640
/* 9165 */    MCD::OPC_Decode, 171, 5, 139, 1, // Opcode: FCLE_D
/* 9170 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 9183
/* 9174 */    MCD::OPC_CheckPredicate, 8, 110, 17, // Skip to: 13640
/* 9178 */    MCD::OPC_Decode, 187, 5, 138, 1, // Opcode: FCULE_W
/* 9183 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 9196
/* 9187 */    MCD::OPC_CheckPredicate, 8, 97, 17, // Skip to: 13640
/* 9191 */    MCD::OPC_Decode, 186, 5, 139, 1, // Opcode: FCULE_D
/* 9196 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9209
/* 9200 */    MCD::OPC_CheckPredicate, 8, 84, 17, // Skip to: 13640
/* 9204 */    MCD::OPC_Decode, 142, 6, 138, 1, // Opcode: FSAF_W
/* 9209 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 9222
/* 9213 */    MCD::OPC_CheckPredicate, 8, 71, 17, // Skip to: 13640
/* 9217 */    MCD::OPC_Decode, 141, 6, 139, 1, // Opcode: FSAF_D
/* 9222 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 9235
/* 9226 */    MCD::OPC_CheckPredicate, 8, 58, 17, // Skip to: 13640
/* 9230 */    MCD::OPC_Decode, 176, 6, 138, 1, // Opcode: FSUN_W
/* 9235 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 9248
/* 9239 */    MCD::OPC_CheckPredicate, 8, 45, 17, // Skip to: 13640
/* 9243 */    MCD::OPC_Decode, 175, 6, 139, 1, // Opcode: FSUN_D
/* 9248 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9261
/* 9252 */    MCD::OPC_CheckPredicate, 8, 32, 17, // Skip to: 13640
/* 9256 */    MCD::OPC_Decode, 144, 6, 138, 1, // Opcode: FSEQ_W
/* 9261 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 9274
/* 9265 */    MCD::OPC_CheckPredicate, 8, 19, 17, // Skip to: 13640
/* 9269 */    MCD::OPC_Decode, 143, 6, 139, 1, // Opcode: FSEQ_D
/* 9274 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 9287
/* 9278 */    MCD::OPC_CheckPredicate, 8, 6, 17, // Skip to: 13640
/* 9282 */    MCD::OPC_Decode, 168, 6, 138, 1, // Opcode: FSUEQ_W
/* 9287 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 9300
/* 9291 */    MCD::OPC_CheckPredicate, 8, 249, 16, // Skip to: 13640
/* 9295 */    MCD::OPC_Decode, 167, 6, 139, 1, // Opcode: FSUEQ_D
/* 9300 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 9313
/* 9304 */    MCD::OPC_CheckPredicate, 8, 236, 16, // Skip to: 13640
/* 9308 */    MCD::OPC_Decode, 148, 6, 138, 1, // Opcode: FSLT_W
/* 9313 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9326
/* 9317 */    MCD::OPC_CheckPredicate, 8, 223, 16, // Skip to: 13640
/* 9321 */    MCD::OPC_Decode, 147, 6, 139, 1, // Opcode: FSLT_D
/* 9326 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9339
/* 9330 */    MCD::OPC_CheckPredicate, 8, 210, 16, // Skip to: 13640
/* 9334 */    MCD::OPC_Decode, 172, 6, 138, 1, // Opcode: FSULT_W
/* 9339 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9352
/* 9343 */    MCD::OPC_CheckPredicate, 8, 197, 16, // Skip to: 13640
/* 9347 */    MCD::OPC_Decode, 171, 6, 139, 1, // Opcode: FSULT_D
/* 9352 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 9365
/* 9356 */    MCD::OPC_CheckPredicate, 8, 184, 16, // Skip to: 13640
/* 9360 */    MCD::OPC_Decode, 146, 6, 138, 1, // Opcode: FSLE_W
/* 9365 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9378
/* 9369 */    MCD::OPC_CheckPredicate, 8, 171, 16, // Skip to: 13640
/* 9373 */    MCD::OPC_Decode, 145, 6, 139, 1, // Opcode: FSLE_D
/* 9378 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9391
/* 9382 */    MCD::OPC_CheckPredicate, 8, 158, 16, // Skip to: 13640
/* 9386 */    MCD::OPC_Decode, 170, 6, 138, 1, // Opcode: FSULE_W
/* 9391 */    MCD::OPC_FilterValue, 31, 149, 16, // Skip to: 13640
/* 9395 */    MCD::OPC_CheckPredicate, 8, 145, 16, // Skip to: 13640
/* 9399 */    MCD::OPC_Decode, 169, 6, 139, 1, // Opcode: FSULE_D
/* 9404 */    MCD::OPC_FilterValue, 27, 85, 1, // Skip to: 9749
/* 9408 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9411 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9424
/* 9415 */    MCD::OPC_CheckPredicate, 8, 125, 16, // Skip to: 13640
/* 9419 */    MCD::OPC_Decode, 164, 5, 138, 1, // Opcode: FADD_W
/* 9424 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9437
/* 9428 */    MCD::OPC_CheckPredicate, 8, 112, 16, // Skip to: 13640
/* 9432 */    MCD::OPC_Decode, 158, 5, 139, 1, // Opcode: FADD_D
/* 9437 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9450
/* 9441 */    MCD::OPC_CheckPredicate, 8, 99, 16, // Skip to: 13640
/* 9445 */    MCD::OPC_Decode, 166, 6, 138, 1, // Opcode: FSUB_W
/* 9450 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9463
/* 9454 */    MCD::OPC_CheckPredicate, 8, 86, 16, // Skip to: 13640
/* 9458 */    MCD::OPC_Decode, 160, 6, 139, 1, // Opcode: FSUB_D
/* 9463 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9476
/* 9467 */    MCD::OPC_CheckPredicate, 8, 73, 16, // Skip to: 13640
/* 9471 */    MCD::OPC_Decode, 129, 6, 138, 1, // Opcode: FMUL_W
/* 9476 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9489
/* 9480 */    MCD::OPC_CheckPredicate, 8, 60, 16, // Skip to: 13640
/* 9484 */    MCD::OPC_Decode, 251, 5, 139, 1, // Opcode: FMUL_D
/* 9489 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9502
/* 9493 */    MCD::OPC_CheckPredicate, 8, 47, 16, // Skip to: 13640
/* 9497 */    MCD::OPC_Decode, 200, 5, 138, 1, // Opcode: FDIV_W
/* 9502 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9515
/* 9506 */    MCD::OPC_CheckPredicate, 8, 34, 16, // Skip to: 13640
/* 9510 */    MCD::OPC_Decode, 194, 5, 139, 1, // Opcode: FDIV_D
/* 9515 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9528
/* 9519 */    MCD::OPC_CheckPredicate, 8, 21, 16, // Skip to: 13640
/* 9523 */    MCD::OPC_Decode, 235, 5, 142, 1, // Opcode: FMADD_W
/* 9528 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9541
/* 9532 */    MCD::OPC_CheckPredicate, 8, 8, 16, // Skip to: 13640
/* 9536 */    MCD::OPC_Decode, 234, 5, 143, 1, // Opcode: FMADD_D
/* 9541 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9554
/* 9545 */    MCD::OPC_CheckPredicate, 8, 251, 15, // Skip to: 13640
/* 9549 */    MCD::OPC_Decode, 250, 5, 142, 1, // Opcode: FMSUB_W
/* 9554 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9567
/* 9558 */    MCD::OPC_CheckPredicate, 8, 238, 15, // Skip to: 13640
/* 9562 */    MCD::OPC_Decode, 249, 5, 143, 1, // Opcode: FMSUB_D
/* 9567 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 9580
/* 9571 */    MCD::OPC_CheckPredicate, 8, 225, 15, // Skip to: 13640
/* 9575 */    MCD::OPC_Decode, 205, 5, 138, 1, // Opcode: FEXP2_W
/* 9580 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 9593
/* 9584 */    MCD::OPC_CheckPredicate, 8, 212, 15, // Skip to: 13640
/* 9588 */    MCD::OPC_Decode, 203, 5, 139, 1, // Opcode: FEXP2_D
/* 9593 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9606
/* 9597 */    MCD::OPC_CheckPredicate, 8, 199, 15, // Skip to: 13640
/* 9601 */    MCD::OPC_Decode, 201, 5, 178, 1, // Opcode: FEXDO_H
/* 9606 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 9619
/* 9610 */    MCD::OPC_CheckPredicate, 8, 186, 15, // Skip to: 13640
/* 9614 */    MCD::OPC_Decode, 202, 5, 179, 1, // Opcode: FEXDO_W
/* 9619 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9632
/* 9623 */    MCD::OPC_CheckPredicate, 8, 173, 15, // Skip to: 13640
/* 9627 */    MCD::OPC_Decode, 181, 6, 178, 1, // Opcode: FTQ_H
/* 9632 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 9645
/* 9636 */    MCD::OPC_CheckPredicate, 8, 160, 15, // Skip to: 13640
/* 9640 */    MCD::OPC_Decode, 182, 6, 179, 1, // Opcode: FTQ_W
/* 9645 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 9658
/* 9649 */    MCD::OPC_CheckPredicate, 8, 147, 15, // Skip to: 13640
/* 9653 */    MCD::OPC_Decode, 243, 5, 138, 1, // Opcode: FMIN_W
/* 9658 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9671
/* 9662 */    MCD::OPC_CheckPredicate, 8, 134, 15, // Skip to: 13640
/* 9666 */    MCD::OPC_Decode, 242, 5, 139, 1, // Opcode: FMIN_D
/* 9671 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9684
/* 9675 */    MCD::OPC_CheckPredicate, 8, 121, 15, // Skip to: 13640
/* 9679 */    MCD::OPC_Decode, 241, 5, 138, 1, // Opcode: FMIN_A_W
/* 9684 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9697
/* 9688 */    MCD::OPC_CheckPredicate, 8, 108, 15, // Skip to: 13640
/* 9692 */    MCD::OPC_Decode, 240, 5, 139, 1, // Opcode: FMIN_A_D
/* 9697 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 9710
/* 9701 */    MCD::OPC_CheckPredicate, 8, 95, 15, // Skip to: 13640
/* 9705 */    MCD::OPC_Decode, 239, 5, 138, 1, // Opcode: FMAX_W
/* 9710 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9723
/* 9714 */    MCD::OPC_CheckPredicate, 8, 82, 15, // Skip to: 13640
/* 9718 */    MCD::OPC_Decode, 238, 5, 139, 1, // Opcode: FMAX_D
/* 9723 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9736
/* 9727 */    MCD::OPC_CheckPredicate, 8, 69, 15, // Skip to: 13640
/* 9731 */    MCD::OPC_Decode, 237, 5, 138, 1, // Opcode: FMAX_A_W
/* 9736 */    MCD::OPC_FilterValue, 31, 60, 15, // Skip to: 13640
/* 9740 */    MCD::OPC_CheckPredicate, 8, 56, 15, // Skip to: 13640
/* 9744 */    MCD::OPC_Decode, 236, 5, 139, 1, // Opcode: FMAX_A_D
/* 9749 */    MCD::OPC_FilterValue, 28, 59, 1, // Skip to: 10068
/* 9753 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9756 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9769
/* 9760 */    MCD::OPC_CheckPredicate, 8, 36, 15, // Skip to: 13640
/* 9764 */    MCD::OPC_Decode, 183, 5, 138, 1, // Opcode: FCOR_W
/* 9769 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9782
/* 9773 */    MCD::OPC_CheckPredicate, 8, 23, 15, // Skip to: 13640
/* 9777 */    MCD::OPC_Decode, 182, 5, 139, 1, // Opcode: FCOR_D
/* 9782 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9795
/* 9786 */    MCD::OPC_CheckPredicate, 8, 10, 15, // Skip to: 13640
/* 9790 */    MCD::OPC_Decode, 191, 5, 138, 1, // Opcode: FCUNE_W
/* 9795 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9808
/* 9799 */    MCD::OPC_CheckPredicate, 8, 253, 14, // Skip to: 13640
/* 9803 */    MCD::OPC_Decode, 190, 5, 139, 1, // Opcode: FCUNE_D
/* 9808 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9821
/* 9812 */    MCD::OPC_CheckPredicate, 8, 240, 14, // Skip to: 13640
/* 9816 */    MCD::OPC_Decode, 181, 5, 138, 1, // Opcode: FCNE_W
/* 9821 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9834
/* 9825 */    MCD::OPC_CheckPredicate, 8, 227, 14, // Skip to: 13640
/* 9829 */    MCD::OPC_Decode, 180, 5, 139, 1, // Opcode: FCNE_D
/* 9834 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9847
/* 9838 */    MCD::OPC_CheckPredicate, 8, 214, 14, // Skip to: 13640
/* 9842 */    MCD::OPC_Decode, 206, 9, 137, 1, // Opcode: MUL_Q_H
/* 9847 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9860
/* 9851 */    MCD::OPC_CheckPredicate, 8, 201, 14, // Skip to: 13640
/* 9855 */    MCD::OPC_Decode, 207, 9, 138, 1, // Opcode: MUL_Q_W
/* 9860 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9873
/* 9864 */    MCD::OPC_CheckPredicate, 8, 188, 14, // Skip to: 13640
/* 9868 */    MCD::OPC_Decode, 134, 8, 141, 1, // Opcode: MADD_Q_H
/* 9873 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9886
/* 9877 */    MCD::OPC_CheckPredicate, 8, 175, 14, // Skip to: 13640
/* 9881 */    MCD::OPC_Decode, 135, 8, 142, 1, // Opcode: MADD_Q_W
/* 9886 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 9899
/* 9890 */    MCD::OPC_CheckPredicate, 8, 162, 14, // Skip to: 13640
/* 9894 */    MCD::OPC_Decode, 152, 9, 141, 1, // Opcode: MSUB_Q_H
/* 9899 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 9912
/* 9903 */    MCD::OPC_CheckPredicate, 8, 149, 14, // Skip to: 13640
/* 9907 */    MCD::OPC_Decode, 153, 9, 142, 1, // Opcode: MSUB_Q_W
/* 9912 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 9925
/* 9916 */    MCD::OPC_CheckPredicate, 8, 136, 14, // Skip to: 13640
/* 9920 */    MCD::OPC_Decode, 152, 6, 138, 1, // Opcode: FSOR_W
/* 9925 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 9938
/* 9929 */    MCD::OPC_CheckPredicate, 8, 123, 14, // Skip to: 13640
/* 9933 */    MCD::OPC_Decode, 151, 6, 139, 1, // Opcode: FSOR_D
/* 9938 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9951
/* 9942 */    MCD::OPC_CheckPredicate, 8, 110, 14, // Skip to: 13640
/* 9946 */    MCD::OPC_Decode, 174, 6, 138, 1, // Opcode: FSUNE_W
/* 9951 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 9964
/* 9955 */    MCD::OPC_CheckPredicate, 8, 97, 14, // Skip to: 13640
/* 9959 */    MCD::OPC_Decode, 173, 6, 139, 1, // Opcode: FSUNE_D
/* 9964 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 9977
/* 9968 */    MCD::OPC_CheckPredicate, 8, 84, 14, // Skip to: 13640
/* 9972 */    MCD::OPC_Decode, 150, 6, 138, 1, // Opcode: FSNE_W
/* 9977 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 9990
/* 9981 */    MCD::OPC_CheckPredicate, 8, 71, 14, // Skip to: 13640
/* 9985 */    MCD::OPC_Decode, 149, 6, 139, 1, // Opcode: FSNE_D
/* 9990 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10003
/* 9994 */    MCD::OPC_CheckPredicate, 8, 58, 14, // Skip to: 13640
/* 9998 */    MCD::OPC_Decode, 189, 9, 137, 1, // Opcode: MULR_Q_H
/* 10003 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10016
/* 10007 */   MCD::OPC_CheckPredicate, 8, 45, 14, // Skip to: 13640
/* 10011 */   MCD::OPC_Decode, 190, 9, 138, 1, // Opcode: MULR_Q_W
/* 10016 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10029
/* 10020 */   MCD::OPC_CheckPredicate, 8, 32, 14, // Skip to: 13640
/* 10024 */   MCD::OPC_Decode, 248, 7, 141, 1, // Opcode: MADDR_Q_H
/* 10029 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10042
/* 10033 */   MCD::OPC_CheckPredicate, 8, 19, 14, // Skip to: 13640
/* 10037 */   MCD::OPC_Decode, 249, 7, 142, 1, // Opcode: MADDR_Q_W
/* 10042 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10055
/* 10046 */   MCD::OPC_CheckPredicate, 8, 6, 14, // Skip to: 13640
/* 10050 */   MCD::OPC_Decode, 138, 9, 141, 1, // Opcode: MSUBR_Q_H
/* 10055 */   MCD::OPC_FilterValue, 29, 253, 13, // Skip to: 13640
/* 10059 */   MCD::OPC_CheckPredicate, 8, 249, 13, // Skip to: 13640
/* 10063 */   MCD::OPC_Decode, 139, 9, 142, 1, // Opcode: MSUBR_Q_W
/* 10068 */   MCD::OPC_FilterValue, 30, 219, 2, // Skip to: 10803
/* 10072 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10075 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 10087
/* 10079 */   MCD::OPC_CheckPredicate, 8, 229, 13, // Skip to: 13640
/* 10083 */   MCD::OPC_Decode, 89, 136, 1, // Opcode: AND_V
/* 10087 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10100
/* 10091 */   MCD::OPC_CheckPredicate, 8, 217, 13, // Skip to: 13640
/* 10095 */   MCD::OPC_Decode, 253, 9, 136, 1, // Opcode: OR_V
/* 10100 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10113
/* 10104 */   MCD::OPC_CheckPredicate, 8, 204, 13, // Skip to: 13640
/* 10108 */   MCD::OPC_Decode, 241, 9, 136, 1, // Opcode: NOR_V
/* 10113 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10126
/* 10117 */   MCD::OPC_CheckPredicate, 8, 191, 13, // Skip to: 13640
/* 10121 */   MCD::OPC_Decode, 228, 13, 136, 1, // Opcode: XOR_V
/* 10126 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10139
/* 10130 */   MCD::OPC_CheckPredicate, 8, 178, 13, // Skip to: 13640
/* 10134 */   MCD::OPC_Decode, 130, 2, 140, 1, // Opcode: BMNZ_V
/* 10139 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10152
/* 10143 */   MCD::OPC_CheckPredicate, 8, 165, 13, // Skip to: 13640
/* 10147 */   MCD::OPC_Decode, 132, 2, 140, 1, // Opcode: BMZ_V
/* 10152 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10165
/* 10156 */   MCD::OPC_CheckPredicate, 8, 152, 13, // Skip to: 13640
/* 10160 */   MCD::OPC_Decode, 167, 2, 140, 1, // Opcode: BSEL_V
/* 10165 */   MCD::OPC_FilterValue, 24, 211, 0, // Skip to: 10380
/* 10169 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 10172 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10185
/* 10176 */   MCD::OPC_CheckPredicate, 8, 132, 13, // Skip to: 13640
/* 10180 */   MCD::OPC_Decode, 219, 5, 180, 1, // Opcode: FILL_B
/* 10185 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10198
/* 10189 */   MCD::OPC_CheckPredicate, 8, 119, 13, // Skip to: 13640
/* 10193 */   MCD::OPC_Decode, 223, 5, 181, 1, // Opcode: FILL_H
/* 10198 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10211
/* 10202 */   MCD::OPC_CheckPredicate, 8, 106, 13, // Skip to: 13640
/* 10206 */   MCD::OPC_Decode, 224, 5, 182, 1, // Opcode: FILL_W
/* 10211 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10224
/* 10215 */   MCD::OPC_CheckPredicate, 14, 93, 13, // Skip to: 13640
/* 10219 */   MCD::OPC_Decode, 220, 5, 183, 1, // Opcode: FILL_D
/* 10224 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10237
/* 10228 */   MCD::OPC_CheckPredicate, 8, 80, 13, // Skip to: 13640
/* 10232 */   MCD::OPC_Decode, 144, 10, 172, 1, // Opcode: PCNT_B
/* 10237 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10250
/* 10241 */   MCD::OPC_CheckPredicate, 8, 67, 13, // Skip to: 13640
/* 10245 */   MCD::OPC_Decode, 146, 10, 184, 1, // Opcode: PCNT_H
/* 10250 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10263
/* 10254 */   MCD::OPC_CheckPredicate, 8, 54, 13, // Skip to: 13640
/* 10258 */   MCD::OPC_Decode, 147, 10, 185, 1, // Opcode: PCNT_W
/* 10263 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10276
/* 10267 */   MCD::OPC_CheckPredicate, 8, 41, 13, // Skip to: 13640
/* 10271 */   MCD::OPC_Decode, 145, 10, 186, 1, // Opcode: PCNT_D
/* 10276 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10289
/* 10280 */   MCD::OPC_CheckPredicate, 8, 28, 13, // Skip to: 13640
/* 10284 */   MCD::OPC_Decode, 218, 9, 172, 1, // Opcode: NLOC_B
/* 10289 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10302
/* 10293 */   MCD::OPC_CheckPredicate, 8, 15, 13, // Skip to: 13640
/* 10297 */   MCD::OPC_Decode, 220, 9, 184, 1, // Opcode: NLOC_H
/* 10302 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10315
/* 10306 */   MCD::OPC_CheckPredicate, 8, 2, 13, // Skip to: 13640
/* 10310 */   MCD::OPC_Decode, 221, 9, 185, 1, // Opcode: NLOC_W
/* 10315 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10328
/* 10319 */   MCD::OPC_CheckPredicate, 8, 245, 12, // Skip to: 13640
/* 10323 */   MCD::OPC_Decode, 219, 9, 186, 1, // Opcode: NLOC_D
/* 10328 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10341
/* 10332 */   MCD::OPC_CheckPredicate, 8, 232, 12, // Skip to: 13640
/* 10336 */   MCD::OPC_Decode, 222, 9, 172, 1, // Opcode: NLZC_B
/* 10341 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10354
/* 10345 */   MCD::OPC_CheckPredicate, 8, 219, 12, // Skip to: 13640
/* 10349 */   MCD::OPC_Decode, 224, 9, 184, 1, // Opcode: NLZC_H
/* 10354 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10367
/* 10358 */   MCD::OPC_CheckPredicate, 8, 206, 12, // Skip to: 13640
/* 10362 */   MCD::OPC_Decode, 225, 9, 185, 1, // Opcode: NLZC_W
/* 10367 */   MCD::OPC_FilterValue, 15, 197, 12, // Skip to: 13640
/* 10371 */   MCD::OPC_CheckPredicate, 8, 193, 12, // Skip to: 13640
/* 10375 */   MCD::OPC_Decode, 223, 9, 186, 1, // Opcode: NLZC_D
/* 10380 */   MCD::OPC_FilterValue, 25, 184, 12, // Skip to: 13640
/* 10384 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 10387 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10400
/* 10391 */   MCD::OPC_CheckPredicate, 8, 173, 12, // Skip to: 13640
/* 10395 */   MCD::OPC_Decode, 170, 5, 185, 1, // Opcode: FCLASS_W
/* 10400 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10413
/* 10404 */   MCD::OPC_CheckPredicate, 8, 160, 12, // Skip to: 13640
/* 10408 */   MCD::OPC_Decode, 169, 5, 186, 1, // Opcode: FCLASS_D
/* 10413 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10426
/* 10417 */   MCD::OPC_CheckPredicate, 8, 147, 12, // Skip to: 13640
/* 10421 */   MCD::OPC_Decode, 184, 6, 185, 1, // Opcode: FTRUNC_S_W
/* 10426 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10439
/* 10430 */   MCD::OPC_CheckPredicate, 8, 134, 12, // Skip to: 13640
/* 10434 */   MCD::OPC_Decode, 183, 6, 186, 1, // Opcode: FTRUNC_S_D
/* 10439 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10452
/* 10443 */   MCD::OPC_CheckPredicate, 8, 121, 12, // Skip to: 13640
/* 10447 */   MCD::OPC_Decode, 186, 6, 185, 1, // Opcode: FTRUNC_U_W
/* 10452 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10465
/* 10456 */   MCD::OPC_CheckPredicate, 8, 108, 12, // Skip to: 13640
/* 10460 */   MCD::OPC_Decode, 185, 6, 186, 1, // Opcode: FTRUNC_U_D
/* 10465 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10478
/* 10469 */   MCD::OPC_CheckPredicate, 8, 95, 12, // Skip to: 13640
/* 10473 */   MCD::OPC_Decode, 159, 6, 185, 1, // Opcode: FSQRT_W
/* 10478 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10491
/* 10482 */   MCD::OPC_CheckPredicate, 8, 82, 12, // Skip to: 13640
/* 10486 */   MCD::OPC_Decode, 153, 6, 186, 1, // Opcode: FSQRT_D
/* 10491 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10504
/* 10495 */   MCD::OPC_CheckPredicate, 8, 69, 12, // Skip to: 13640
/* 10499 */   MCD::OPC_Decode, 140, 6, 185, 1, // Opcode: FRSQRT_W
/* 10504 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10517
/* 10508 */   MCD::OPC_CheckPredicate, 8, 56, 12, // Skip to: 13640
/* 10512 */   MCD::OPC_Decode, 139, 6, 186, 1, // Opcode: FRSQRT_D
/* 10517 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10530
/* 10521 */   MCD::OPC_CheckPredicate, 8, 43, 12, // Skip to: 13640
/* 10525 */   MCD::OPC_Decode, 136, 6, 185, 1, // Opcode: FRCP_W
/* 10530 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10543
/* 10534 */   MCD::OPC_CheckPredicate, 8, 30, 12, // Skip to: 13640
/* 10538 */   MCD::OPC_Decode, 135, 6, 186, 1, // Opcode: FRCP_D
/* 10543 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10556
/* 10547 */   MCD::OPC_CheckPredicate, 8, 17, 12, // Skip to: 13640
/* 10551 */   MCD::OPC_Decode, 138, 6, 185, 1, // Opcode: FRINT_W
/* 10556 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10569
/* 10560 */   MCD::OPC_CheckPredicate, 8, 4, 12, // Skip to: 13640
/* 10564 */   MCD::OPC_Decode, 137, 6, 186, 1, // Opcode: FRINT_D
/* 10569 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10582
/* 10573 */   MCD::OPC_CheckPredicate, 8, 247, 11, // Skip to: 13640
/* 10577 */   MCD::OPC_Decode, 226, 5, 185, 1, // Opcode: FLOG2_W
/* 10582 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 10595
/* 10586 */   MCD::OPC_CheckPredicate, 8, 234, 11, // Skip to: 13640
/* 10590 */   MCD::OPC_Decode, 225, 5, 186, 1, // Opcode: FLOG2_D
/* 10595 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 10608
/* 10599 */   MCD::OPC_CheckPredicate, 8, 221, 11, // Skip to: 13640
/* 10603 */   MCD::OPC_Decode, 208, 5, 187, 1, // Opcode: FEXUPL_W
/* 10608 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 10621
/* 10612 */   MCD::OPC_CheckPredicate, 8, 208, 11, // Skip to: 13640
/* 10616 */   MCD::OPC_Decode, 207, 5, 188, 1, // Opcode: FEXUPL_D
/* 10621 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10634
/* 10625 */   MCD::OPC_CheckPredicate, 8, 195, 11, // Skip to: 13640
/* 10629 */   MCD::OPC_Decode, 210, 5, 187, 1, // Opcode: FEXUPR_W
/* 10634 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10647
/* 10638 */   MCD::OPC_CheckPredicate, 8, 182, 11, // Skip to: 13640
/* 10642 */   MCD::OPC_Decode, 209, 5, 188, 1, // Opcode: FEXUPR_D
/* 10647 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10660
/* 10651 */   MCD::OPC_CheckPredicate, 8, 169, 11, // Skip to: 13640
/* 10655 */   MCD::OPC_Decode, 216, 5, 187, 1, // Opcode: FFQL_W
/* 10660 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10673
/* 10664 */   MCD::OPC_CheckPredicate, 8, 156, 11, // Skip to: 13640
/* 10668 */   MCD::OPC_Decode, 215, 5, 188, 1, // Opcode: FFQL_D
/* 10673 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 10686
/* 10677 */   MCD::OPC_CheckPredicate, 8, 143, 11, // Skip to: 13640
/* 10681 */   MCD::OPC_Decode, 218, 5, 187, 1, // Opcode: FFQR_W
/* 10686 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 10699
/* 10690 */   MCD::OPC_CheckPredicate, 8, 130, 11, // Skip to: 13640
/* 10694 */   MCD::OPC_Decode, 217, 5, 188, 1, // Opcode: FFQR_D
/* 10699 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10712
/* 10703 */   MCD::OPC_CheckPredicate, 8, 117, 11, // Skip to: 13640
/* 10707 */   MCD::OPC_Decode, 178, 6, 185, 1, // Opcode: FTINT_S_W
/* 10712 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10725
/* 10716 */   MCD::OPC_CheckPredicate, 8, 104, 11, // Skip to: 13640
/* 10720 */   MCD::OPC_Decode, 177, 6, 186, 1, // Opcode: FTINT_S_D
/* 10725 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10738
/* 10729 */   MCD::OPC_CheckPredicate, 8, 91, 11, // Skip to: 13640
/* 10733 */   MCD::OPC_Decode, 180, 6, 185, 1, // Opcode: FTINT_U_W
/* 10738 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10751
/* 10742 */   MCD::OPC_CheckPredicate, 8, 78, 11, // Skip to: 13640
/* 10746 */   MCD::OPC_Decode, 179, 6, 186, 1, // Opcode: FTINT_U_D
/* 10751 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10764
/* 10755 */   MCD::OPC_CheckPredicate, 8, 65, 11, // Skip to: 13640
/* 10759 */   MCD::OPC_Decode, 212, 5, 185, 1, // Opcode: FFINT_S_W
/* 10764 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 10777
/* 10768 */   MCD::OPC_CheckPredicate, 8, 52, 11, // Skip to: 13640
/* 10772 */   MCD::OPC_Decode, 211, 5, 186, 1, // Opcode: FFINT_S_D
/* 10777 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 10790
/* 10781 */   MCD::OPC_CheckPredicate, 8, 39, 11, // Skip to: 13640
/* 10785 */   MCD::OPC_Decode, 214, 5, 185, 1, // Opcode: FFINT_U_W
/* 10790 */   MCD::OPC_FilterValue, 31, 30, 11, // Skip to: 13640
/* 10794 */   MCD::OPC_CheckPredicate, 8, 26, 11, // Skip to: 13640
/* 10798 */   MCD::OPC_Decode, 213, 5, 186, 1, // Opcode: FFINT_U_D
/* 10803 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 10816
/* 10807 */   MCD::OPC_CheckPredicate, 8, 13, 11, // Skip to: 13640
/* 10811 */   MCD::OPC_Decode, 164, 7, 189, 1, // Opcode: LD_B
/* 10816 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 10829
/* 10820 */   MCD::OPC_CheckPredicate, 8, 0, 11, // Skip to: 13640
/* 10824 */   MCD::OPC_Decode, 166, 7, 189, 1, // Opcode: LD_H
/* 10829 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 10842
/* 10833 */   MCD::OPC_CheckPredicate, 8, 243, 10, // Skip to: 13640
/* 10837 */   MCD::OPC_Decode, 167, 7, 189, 1, // Opcode: LD_W
/* 10842 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 10855
/* 10846 */   MCD::OPC_CheckPredicate, 8, 230, 10, // Skip to: 13640
/* 10850 */   MCD::OPC_Decode, 165, 7, 189, 1, // Opcode: LD_D
/* 10855 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 10868
/* 10859 */   MCD::OPC_CheckPredicate, 8, 217, 10, // Skip to: 13640
/* 10863 */   MCD::OPC_Decode, 173, 12, 189, 1, // Opcode: ST_B
/* 10868 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 10881
/* 10872 */   MCD::OPC_CheckPredicate, 8, 204, 10, // Skip to: 13640
/* 10876 */   MCD::OPC_Decode, 175, 12, 189, 1, // Opcode: ST_H
/* 10881 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 10894
/* 10885 */   MCD::OPC_CheckPredicate, 8, 191, 10, // Skip to: 13640
/* 10889 */   MCD::OPC_Decode, 176, 12, 189, 1, // Opcode: ST_W
/* 10894 */   MCD::OPC_FilterValue, 39, 182, 10, // Skip to: 13640
/* 10898 */   MCD::OPC_CheckPredicate, 8, 178, 10, // Skip to: 13640
/* 10902 */   MCD::OPC_Decode, 174, 12, 189, 1, // Opcode: ST_D
/* 10907 */   MCD::OPC_FilterValue, 31, 113, 9, // Skip to: 13328
/* 10911 */   MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10914 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10927
/* 10918 */   MCD::OPC_CheckPredicate, 6, 158, 10, // Skip to: 13640
/* 10922 */   MCD::OPC_Decode, 133, 5, 190, 1, // Opcode: EXT
/* 10927 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10940
/* 10931 */   MCD::OPC_CheckPredicate, 6, 145, 10, // Skip to: 13640
/* 10935 */   MCD::OPC_Decode, 216, 6, 191, 1, // Opcode: INS
/* 10940 */   MCD::OPC_FilterValue, 10, 42, 0, // Skip to: 10986
/* 10944 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10947 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10960
/* 10951 */   MCD::OPC_CheckPredicate, 12, 125, 10, // Skip to: 13640
/* 10955 */   MCD::OPC_Decode, 223, 7, 192, 1, // Opcode: LWX
/* 10960 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10973
/* 10964 */   MCD::OPC_CheckPredicate, 12, 112, 10, // Skip to: 13640
/* 10968 */   MCD::OPC_Decode, 174, 7, 192, 1, // Opcode: LHX
/* 10973 */   MCD::OPC_FilterValue, 6, 103, 10, // Skip to: 13640
/* 10977 */   MCD::OPC_CheckPredicate, 12, 99, 10, // Skip to: 13640
/* 10981 */   MCD::OPC_Decode, 143, 7, 192, 1, // Opcode: LBUX
/* 10986 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 11005
/* 10990 */   MCD::OPC_CheckPredicate, 12, 86, 10, // Skip to: 13640
/* 10994 */   MCD::OPC_CheckField, 6, 10, 0, 80, 10, // Skip to: 13640
/* 11000 */   MCD::OPC_Decode, 229, 6, 193, 1, // Opcode: INSV
/* 11005 */   MCD::OPC_FilterValue, 16, 51, 1, // Skip to: 11316
/* 11009 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11012 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 11024
/* 11016 */   MCD::OPC_CheckPredicate, 12, 60, 10, // Skip to: 13640
/* 11020 */   MCD::OPC_Decode, 56, 194, 1, // Opcode: ADDU_QB
/* 11024 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11037
/* 11028 */   MCD::OPC_CheckPredicate, 12, 48, 10, // Skip to: 13640
/* 11032 */   MCD::OPC_Decode, 205, 12, 194, 1, // Opcode: SUBU_QB
/* 11037 */   MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 11049
/* 11041 */   MCD::OPC_CheckPredicate, 12, 35, 10, // Skip to: 13640
/* 11045 */   MCD::OPC_Decode, 58, 194, 1, // Opcode: ADDU_S_QB
/* 11049 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11062
/* 11053 */   MCD::OPC_CheckPredicate, 12, 23, 10, // Skip to: 13640
/* 11057 */   MCD::OPC_Decode, 207, 12, 194, 1, // Opcode: SUBU_S_QB
/* 11062 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11075
/* 11066 */   MCD::OPC_CheckPredicate, 12, 10, 10, // Skip to: 13640
/* 11070 */   MCD::OPC_Decode, 183, 9, 194, 1, // Opcode: MULEU_S_PH_QBL
/* 11075 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 11088
/* 11079 */   MCD::OPC_CheckPredicate, 12, 253, 9, // Skip to: 13640
/* 11083 */   MCD::OPC_Decode, 184, 9, 194, 1, // Opcode: MULEU_S_PH_QBR
/* 11088 */   MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 11100
/* 11092 */   MCD::OPC_CheckPredicate, 31, 240, 9, // Skip to: 13640
/* 11096 */   MCD::OPC_Decode, 55, 194, 1, // Opcode: ADDU_PH
/* 11100 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 11113
/* 11104 */   MCD::OPC_CheckPredicate, 31, 228, 9, // Skip to: 13640
/* 11108 */   MCD::OPC_Decode, 204, 12, 194, 1, // Opcode: SUBU_PH
/* 11113 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 11125
/* 11117 */   MCD::OPC_CheckPredicate, 12, 215, 9, // Skip to: 13640
/* 11121 */   MCD::OPC_Decode, 36, 194, 1, // Opcode: ADDQ_PH
/* 11125 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11138
/* 11129 */   MCD::OPC_CheckPredicate, 12, 203, 9, // Skip to: 13640
/* 11133 */   MCD::OPC_Decode, 182, 12, 194, 1, // Opcode: SUBQ_PH
/* 11138 */   MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 11150
/* 11142 */   MCD::OPC_CheckPredicate, 31, 190, 9, // Skip to: 13640
/* 11146 */   MCD::OPC_Decode, 57, 194, 1, // Opcode: ADDU_S_PH
/* 11150 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11163
/* 11154 */   MCD::OPC_CheckPredicate, 31, 178, 9, // Skip to: 13640
/* 11158 */   MCD::OPC_Decode, 206, 12, 194, 1, // Opcode: SUBU_S_PH
/* 11163 */   MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 11175
/* 11167 */   MCD::OPC_CheckPredicate, 12, 165, 9, // Skip to: 13640
/* 11171 */   MCD::OPC_Decode, 37, 194, 1, // Opcode: ADDQ_S_PH
/* 11175 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 11188
/* 11179 */   MCD::OPC_CheckPredicate, 12, 153, 9, // Skip to: 13640
/* 11183 */   MCD::OPC_Decode, 183, 12, 194, 1, // Opcode: SUBQ_S_PH
/* 11188 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 11199
/* 11192 */   MCD::OPC_CheckPredicate, 12, 140, 9, // Skip to: 13640
/* 11196 */   MCD::OPC_Decode, 39, 35, // Opcode: ADDSC
/* 11199 */   MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 11210
/* 11203 */   MCD::OPC_CheckPredicate, 12, 129, 9, // Skip to: 13640
/* 11207 */   MCD::OPC_Decode, 67, 35, // Opcode: ADDWC
/* 11210 */   MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 11222
/* 11214 */   MCD::OPC_CheckPredicate, 12, 118, 9, // Skip to: 13640
/* 11218 */   MCD::OPC_Decode, 210, 8, 35, // Opcode: MODSUB
/* 11222 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 11241
/* 11226 */   MCD::OPC_CheckPredicate, 12, 106, 9, // Skip to: 13640
/* 11230 */   MCD::OPC_CheckField, 16, 5, 0, 100, 9, // Skip to: 13640
/* 11236 */   MCD::OPC_Decode, 223, 10, 195, 1, // Opcode: RADDU_W_QB
/* 11241 */   MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 11252
/* 11245 */   MCD::OPC_CheckPredicate, 12, 87, 9, // Skip to: 13640
/* 11249 */   MCD::OPC_Decode, 38, 35, // Opcode: ADDQ_S_W
/* 11252 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 11264
/* 11256 */   MCD::OPC_CheckPredicate, 12, 76, 9, // Skip to: 13640
/* 11260 */   MCD::OPC_Decode, 184, 12, 35, // Opcode: SUBQ_S_W
/* 11264 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 11277
/* 11268 */   MCD::OPC_CheckPredicate, 12, 64, 9, // Skip to: 13640
/* 11272 */   MCD::OPC_Decode, 181, 9, 196, 1, // Opcode: MULEQ_S_W_PHL
/* 11277 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 11290
/* 11281 */   MCD::OPC_CheckPredicate, 12, 51, 9, // Skip to: 13640
/* 11285 */   MCD::OPC_Decode, 182, 9, 196, 1, // Opcode: MULEQ_S_W_PHR
/* 11290 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 11303
/* 11294 */   MCD::OPC_CheckPredicate, 31, 38, 9, // Skip to: 13640
/* 11298 */   MCD::OPC_Decode, 187, 9, 194, 1, // Opcode: MULQ_S_PH
/* 11303 */   MCD::OPC_FilterValue, 31, 29, 9, // Skip to: 13640
/* 11307 */   MCD::OPC_CheckPredicate, 12, 25, 9, // Skip to: 13640
/* 11311 */   MCD::OPC_Decode, 185, 9, 194, 1, // Opcode: MULQ_RS_PH
/* 11316 */   MCD::OPC_FilterValue, 17, 69, 1, // Skip to: 11645
/* 11320 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11323 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 11342
/* 11327 */   MCD::OPC_CheckPredicate, 12, 5, 9, // Skip to: 13640
/* 11331 */   MCD::OPC_CheckField, 11, 5, 0, 255, 8, // Skip to: 13640
/* 11337 */   MCD::OPC_Decode, 149, 3, 197, 1, // Opcode: CMPU_EQ_QB
/* 11342 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 11361
/* 11346 */   MCD::OPC_CheckPredicate, 12, 242, 8, // Skip to: 13640
/* 11350 */   MCD::OPC_CheckField, 11, 5, 0, 236, 8, // Skip to: 13640
/* 11356 */   MCD::OPC_Decode, 151, 3, 197, 1, // Opcode: CMPU_LT_QB
/* 11361 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 11380
/* 11365 */   MCD::OPC_CheckPredicate, 12, 223, 8, // Skip to: 13640
/* 11369 */   MCD::OPC_CheckField, 11, 5, 0, 217, 8, // Skip to: 13640
/* 11375 */   MCD::OPC_Decode, 150, 3, 197, 1, // Opcode: CMPU_LE_QB
/* 11380 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11393
/* 11384 */   MCD::OPC_CheckPredicate, 12, 204, 8, // Skip to: 13640
/* 11388 */   MCD::OPC_Decode, 149, 10, 194, 1, // Opcode: PICK_QB
/* 11393 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11406
/* 11397 */   MCD::OPC_CheckPredicate, 12, 191, 8, // Skip to: 13640
/* 11401 */   MCD::OPC_Decode, 146, 3, 196, 1, // Opcode: CMPGU_EQ_QB
/* 11406 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11419
/* 11410 */   MCD::OPC_CheckPredicate, 12, 178, 8, // Skip to: 13640
/* 11414 */   MCD::OPC_Decode, 148, 3, 196, 1, // Opcode: CMPGU_LT_QB
/* 11419 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11432
/* 11423 */   MCD::OPC_CheckPredicate, 12, 165, 8, // Skip to: 13640
/* 11427 */   MCD::OPC_Decode, 147, 3, 196, 1, // Opcode: CMPGU_LE_QB
/* 11432 */   MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 11451
/* 11436 */   MCD::OPC_CheckPredicate, 12, 152, 8, // Skip to: 13640
/* 11440 */   MCD::OPC_CheckField, 11, 5, 0, 146, 8, // Skip to: 13640
/* 11446 */   MCD::OPC_Decode, 153, 3, 197, 1, // Opcode: CMP_EQ_PH
/* 11451 */   MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 11470
/* 11455 */   MCD::OPC_CheckPredicate, 12, 133, 8, // Skip to: 13640
/* 11459 */   MCD::OPC_CheckField, 11, 5, 0, 127, 8, // Skip to: 13640
/* 11465 */   MCD::OPC_Decode, 161, 3, 197, 1, // Opcode: CMP_LT_PH
/* 11470 */   MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 11489
/* 11474 */   MCD::OPC_CheckPredicate, 12, 114, 8, // Skip to: 13640
/* 11478 */   MCD::OPC_CheckField, 11, 5, 0, 108, 8, // Skip to: 13640
/* 11484 */   MCD::OPC_Decode, 158, 3, 197, 1, // Opcode: CMP_LE_PH
/* 11489 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11502
/* 11493 */   MCD::OPC_CheckPredicate, 12, 95, 8, // Skip to: 13640
/* 11497 */   MCD::OPC_Decode, 148, 10, 194, 1, // Opcode: PICK_PH
/* 11502 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 11515
/* 11506 */   MCD::OPC_CheckPredicate, 12, 82, 8, // Skip to: 13640
/* 11510 */   MCD::OPC_Decode, 163, 10, 194, 1, // Opcode: PRECRQ_QB_PH
/* 11515 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11528
/* 11519 */   MCD::OPC_CheckPredicate, 31, 69, 8, // Skip to: 13640
/* 11523 */   MCD::OPC_Decode, 165, 10, 194, 1, // Opcode: PRECR_QB_PH
/* 11528 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 11541
/* 11532 */   MCD::OPC_CheckPredicate, 12, 56, 8, // Skip to: 13640
/* 11536 */   MCD::OPC_Decode, 133, 10, 194, 1, // Opcode: PACKRL_PH
/* 11541 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 11554
/* 11545 */   MCD::OPC_CheckPredicate, 12, 43, 8, // Skip to: 13640
/* 11549 */   MCD::OPC_Decode, 161, 10, 194, 1, // Opcode: PRECRQU_S_QB_PH
/* 11554 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 11567
/* 11558 */   MCD::OPC_CheckPredicate, 12, 30, 8, // Skip to: 13640
/* 11562 */   MCD::OPC_Decode, 162, 10, 198, 1, // Opcode: PRECRQ_PH_W
/* 11567 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 11580
/* 11571 */   MCD::OPC_CheckPredicate, 12, 17, 8, // Skip to: 13640
/* 11575 */   MCD::OPC_Decode, 164, 10, 198, 1, // Opcode: PRECRQ_RS_PH_W
/* 11580 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 11593
/* 11584 */   MCD::OPC_CheckPredicate, 31, 4, 8, // Skip to: 13640
/* 11588 */   MCD::OPC_Decode, 143, 3, 196, 1, // Opcode: CMPGDU_EQ_QB
/* 11593 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 11606
/* 11597 */   MCD::OPC_CheckPredicate, 31, 247, 7, // Skip to: 13640
/* 11601 */   MCD::OPC_Decode, 145, 3, 196, 1, // Opcode: CMPGDU_LT_QB
/* 11606 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 11619
/* 11610 */   MCD::OPC_CheckPredicate, 31, 234, 7, // Skip to: 13640
/* 11614 */   MCD::OPC_Decode, 144, 3, 196, 1, // Opcode: CMPGDU_LE_QB
/* 11619 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 11632
/* 11623 */   MCD::OPC_CheckPredicate, 31, 221, 7, // Skip to: 13640
/* 11627 */   MCD::OPC_Decode, 166, 10, 199, 1, // Opcode: PRECR_SRA_PH_W
/* 11632 */   MCD::OPC_FilterValue, 31, 212, 7, // Skip to: 13640
/* 11636 */   MCD::OPC_CheckPredicate, 31, 208, 7, // Skip to: 13640
/* 11640 */   MCD::OPC_Decode, 167, 10, 199, 1, // Opcode: PRECR_SRA_R_PH_W
/* 11645 */   MCD::OPC_FilterValue, 18, 74, 1, // Skip to: 11979
/* 11649 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11652 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 11670
/* 11656 */   MCD::OPC_CheckPredicate, 31, 188, 7, // Skip to: 13640
/* 11660 */   MCD::OPC_CheckField, 21, 5, 0, 182, 7, // Skip to: 13640
/* 11666 */   MCD::OPC_Decode, 23, 200, 1, // Opcode: ABSQ_S_QB
/* 11670 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11683
/* 11674 */   MCD::OPC_CheckPredicate, 12, 170, 7, // Skip to: 13640
/* 11678 */   MCD::OPC_Decode, 231, 10, 201, 1, // Opcode: REPL_QB
/* 11683 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 11702
/* 11687 */   MCD::OPC_CheckPredicate, 12, 157, 7, // Skip to: 13640
/* 11691 */   MCD::OPC_CheckField, 21, 5, 0, 151, 7, // Skip to: 13640
/* 11697 */   MCD::OPC_Decode, 229, 10, 202, 1, // Opcode: REPLV_QB
/* 11702 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 11721
/* 11706 */   MCD::OPC_CheckPredicate, 12, 138, 7, // Skip to: 13640
/* 11710 */   MCD::OPC_CheckField, 21, 5, 0, 132, 7, // Skip to: 13640
/* 11716 */   MCD::OPC_Decode, 151, 10, 200, 1, // Opcode: PRECEQU_PH_QBL
/* 11721 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 11740
/* 11725 */   MCD::OPC_CheckPredicate, 12, 119, 7, // Skip to: 13640
/* 11729 */   MCD::OPC_CheckField, 21, 5, 0, 113, 7, // Skip to: 13640
/* 11735 */   MCD::OPC_Decode, 153, 10, 200, 1, // Opcode: PRECEQU_PH_QBR
/* 11740 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 11759
/* 11744 */   MCD::OPC_CheckPredicate, 12, 100, 7, // Skip to: 13640
/* 11748 */   MCD::OPC_CheckField, 21, 5, 0, 94, 7, // Skip to: 13640
/* 11754 */   MCD::OPC_Decode, 152, 10, 200, 1, // Opcode: PRECEQU_PH_QBLA
/* 11759 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 11778
/* 11763 */   MCD::OPC_CheckPredicate, 12, 81, 7, // Skip to: 13640
/* 11767 */   MCD::OPC_CheckField, 21, 5, 0, 75, 7, // Skip to: 13640
/* 11773 */   MCD::OPC_Decode, 154, 10, 200, 1, // Opcode: PRECEQU_PH_QBRA
/* 11778 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 11796
/* 11782 */   MCD::OPC_CheckPredicate, 12, 62, 7, // Skip to: 13640
/* 11786 */   MCD::OPC_CheckField, 21, 5, 0, 56, 7, // Skip to: 13640
/* 11792 */   MCD::OPC_Decode, 22, 200, 1, // Opcode: ABSQ_S_PH
/* 11796 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 11809
/* 11800 */   MCD::OPC_CheckPredicate, 12, 44, 7, // Skip to: 13640
/* 11804 */   MCD::OPC_Decode, 230, 10, 201, 1, // Opcode: REPL_PH
/* 11809 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 11828
/* 11813 */   MCD::OPC_CheckPredicate, 12, 31, 7, // Skip to: 13640
/* 11817 */   MCD::OPC_CheckField, 21, 5, 0, 25, 7, // Skip to: 13640
/* 11823 */   MCD::OPC_Decode, 228, 10, 202, 1, // Opcode: REPLV_PH
/* 11828 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 11847
/* 11832 */   MCD::OPC_CheckPredicate, 12, 12, 7, // Skip to: 13640
/* 11836 */   MCD::OPC_CheckField, 21, 5, 0, 6, 7, // Skip to: 13640
/* 11842 */   MCD::OPC_Decode, 155, 10, 203, 1, // Opcode: PRECEQ_W_PHL
/* 11847 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 11866
/* 11851 */   MCD::OPC_CheckPredicate, 12, 249, 6, // Skip to: 13640
/* 11855 */   MCD::OPC_CheckField, 21, 5, 0, 243, 6, // Skip to: 13640
/* 11861 */   MCD::OPC_Decode, 156, 10, 203, 1, // Opcode: PRECEQ_W_PHR
/* 11866 */   MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 11884
/* 11870 */   MCD::OPC_CheckPredicate, 12, 230, 6, // Skip to: 13640
/* 11874 */   MCD::OPC_CheckField, 21, 5, 0, 224, 6, // Skip to: 13640
/* 11880 */   MCD::OPC_Decode, 24, 204, 1, // Opcode: ABSQ_S_W
/* 11884 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 11903
/* 11888 */   MCD::OPC_CheckPredicate, 12, 212, 6, // Skip to: 13640
/* 11892 */   MCD::OPC_CheckField, 21, 5, 0, 206, 6, // Skip to: 13640
/* 11898 */   MCD::OPC_Decode, 237, 1, 204, 1, // Opcode: BITREV
/* 11903 */   MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 11922
/* 11907 */   MCD::OPC_CheckPredicate, 12, 193, 6, // Skip to: 13640
/* 11911 */   MCD::OPC_CheckField, 21, 5, 0, 187, 6, // Skip to: 13640
/* 11917 */   MCD::OPC_Decode, 157, 10, 200, 1, // Opcode: PRECEU_PH_QBL
/* 11922 */   MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 11941
/* 11926 */   MCD::OPC_CheckPredicate, 12, 174, 6, // Skip to: 13640
/* 11930 */   MCD::OPC_CheckField, 21, 5, 0, 168, 6, // Skip to: 13640
/* 11936 */   MCD::OPC_Decode, 159, 10, 200, 1, // Opcode: PRECEU_PH_QBR
/* 11941 */   MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 11960
/* 11945 */   MCD::OPC_CheckPredicate, 12, 155, 6, // Skip to: 13640
/* 11949 */   MCD::OPC_CheckField, 21, 5, 0, 149, 6, // Skip to: 13640
/* 11955 */   MCD::OPC_Decode, 158, 10, 200, 1, // Opcode: PRECEU_PH_QBLA
/* 11960 */   MCD::OPC_FilterValue, 31, 140, 6, // Skip to: 13640
/* 11964 */   MCD::OPC_CheckPredicate, 12, 136, 6, // Skip to: 13640
/* 11968 */   MCD::OPC_CheckField, 21, 5, 0, 130, 6, // Skip to: 13640
/* 11974 */   MCD::OPC_Decode, 160, 10, 200, 1, // Opcode: PRECEU_PH_QBRA
/* 11979 */   MCD::OPC_FilterValue, 19, 31, 1, // Skip to: 12270
/* 11983 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11986 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11999
/* 11990 */   MCD::OPC_CheckPredicate, 12, 110, 6, // Skip to: 13640
/* 11994 */   MCD::OPC_Decode, 186, 11, 205, 1, // Opcode: SHLL_QB
/* 11999 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12012
/* 12003 */   MCD::OPC_CheckPredicate, 12, 97, 6, // Skip to: 13640
/* 12007 */   MCD::OPC_Decode, 202, 11, 205, 1, // Opcode: SHRL_QB
/* 12012 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 12025
/* 12016 */   MCD::OPC_CheckPredicate, 12, 84, 6, // Skip to: 13640
/* 12020 */   MCD::OPC_Decode, 182, 11, 206, 1, // Opcode: SHLLV_QB
/* 12025 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 12038
/* 12029 */   MCD::OPC_CheckPredicate, 12, 71, 6, // Skip to: 13640
/* 12033 */   MCD::OPC_Decode, 200, 11, 206, 1, // Opcode: SHRLV_QB
/* 12038 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 12051
/* 12042 */   MCD::OPC_CheckPredicate, 31, 58, 6, // Skip to: 13640
/* 12046 */   MCD::OPC_Decode, 195, 11, 205, 1, // Opcode: SHRA_QB
/* 12051 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 12064
/* 12055 */   MCD::OPC_CheckPredicate, 31, 45, 6, // Skip to: 13640
/* 12059 */   MCD::OPC_Decode, 197, 11, 205, 1, // Opcode: SHRA_R_QB
/* 12064 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 12077
/* 12068 */   MCD::OPC_CheckPredicate, 31, 32, 6, // Skip to: 13640
/* 12072 */   MCD::OPC_Decode, 190, 11, 206, 1, // Opcode: SHRAV_QB
/* 12077 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 12090
/* 12081 */   MCD::OPC_CheckPredicate, 31, 19, 6, // Skip to: 13640
/* 12085 */   MCD::OPC_Decode, 192, 11, 206, 1, // Opcode: SHRAV_R_QB
/* 12090 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 12103
/* 12094 */   MCD::OPC_CheckPredicate, 12, 6, 6, // Skip to: 13640
/* 12098 */   MCD::OPC_Decode, 185, 11, 205, 1, // Opcode: SHLL_PH
/* 12103 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 12116
/* 12107 */   MCD::OPC_CheckPredicate, 12, 249, 5, // Skip to: 13640
/* 12111 */   MCD::OPC_Decode, 194, 11, 205, 1, // Opcode: SHRA_PH
/* 12116 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 12129
/* 12120 */   MCD::OPC_CheckPredicate, 12, 236, 5, // Skip to: 13640
/* 12124 */   MCD::OPC_Decode, 181, 11, 206, 1, // Opcode: SHLLV_PH
/* 12129 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12142
/* 12133 */   MCD::OPC_CheckPredicate, 12, 223, 5, // Skip to: 13640
/* 12137 */   MCD::OPC_Decode, 189, 11, 206, 1, // Opcode: SHRAV_PH
/* 12142 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12155
/* 12146 */   MCD::OPC_CheckPredicate, 12, 210, 5, // Skip to: 13640
/* 12150 */   MCD::OPC_Decode, 187, 11, 205, 1, // Opcode: SHLL_S_PH
/* 12155 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 12168
/* 12159 */   MCD::OPC_CheckPredicate, 12, 197, 5, // Skip to: 13640
/* 12163 */   MCD::OPC_Decode, 196, 11, 205, 1, // Opcode: SHRA_R_PH
/* 12168 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12181
/* 12172 */   MCD::OPC_CheckPredicate, 12, 184, 5, // Skip to: 13640
/* 12176 */   MCD::OPC_Decode, 183, 11, 206, 1, // Opcode: SHLLV_S_PH
/* 12181 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 12194
/* 12185 */   MCD::OPC_CheckPredicate, 12, 171, 5, // Skip to: 13640
/* 12189 */   MCD::OPC_Decode, 191, 11, 206, 1, // Opcode: SHRAV_R_PH
/* 12194 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 12207
/* 12198 */   MCD::OPC_CheckPredicate, 12, 158, 5, // Skip to: 13640
/* 12202 */   MCD::OPC_Decode, 188, 11, 207, 1, // Opcode: SHLL_S_W
/* 12207 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 12220
/* 12211 */   MCD::OPC_CheckPredicate, 12, 145, 5, // Skip to: 13640
/* 12215 */   MCD::OPC_Decode, 198, 11, 207, 1, // Opcode: SHRA_R_W
/* 12220 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 12232
/* 12224 */   MCD::OPC_CheckPredicate, 12, 132, 5, // Skip to: 13640
/* 12228 */   MCD::OPC_Decode, 184, 11, 36, // Opcode: SHLLV_S_W
/* 12232 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 12244
/* 12236 */   MCD::OPC_CheckPredicate, 12, 120, 5, // Skip to: 13640
/* 12240 */   MCD::OPC_Decode, 193, 11, 36, // Opcode: SHRAV_R_W
/* 12244 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 12257
/* 12248 */   MCD::OPC_CheckPredicate, 31, 108, 5, // Skip to: 13640
/* 12252 */   MCD::OPC_Decode, 201, 11, 205, 1, // Opcode: SHRL_PH
/* 12257 */   MCD::OPC_FilterValue, 27, 99, 5, // Skip to: 13640
/* 12261 */   MCD::OPC_CheckPredicate, 31, 95, 5, // Skip to: 13640
/* 12265 */   MCD::OPC_Decode, 199, 11, 206, 1, // Opcode: SHRLV_PH
/* 12270 */   MCD::OPC_FilterValue, 24, 199, 0, // Skip to: 12473
/* 12274 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12277 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 12289
/* 12281 */   MCD::OPC_CheckPredicate, 31, 75, 5, // Skip to: 13640
/* 12285 */   MCD::OPC_Decode, 53, 194, 1, // Opcode: ADDUH_QB
/* 12289 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12302
/* 12293 */   MCD::OPC_CheckPredicate, 31, 63, 5, // Skip to: 13640
/* 12297 */   MCD::OPC_Decode, 202, 12, 194, 1, // Opcode: SUBUH_QB
/* 12302 */   MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 12314
/* 12306 */   MCD::OPC_CheckPredicate, 31, 50, 5, // Skip to: 13640
/* 12310 */   MCD::OPC_Decode, 54, 194, 1, // Opcode: ADDUH_R_QB
/* 12314 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 12327
/* 12318 */   MCD::OPC_CheckPredicate, 31, 38, 5, // Skip to: 13640
/* 12322 */   MCD::OPC_Decode, 203, 12, 194, 1, // Opcode: SUBUH_R_QB
/* 12327 */   MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 12339
/* 12331 */   MCD::OPC_CheckPredicate, 31, 25, 5, // Skip to: 13640
/* 12335 */   MCD::OPC_Decode, 32, 194, 1, // Opcode: ADDQH_PH
/* 12339 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 12352
/* 12343 */   MCD::OPC_CheckPredicate, 31, 13, 5, // Skip to: 13640
/* 12347 */   MCD::OPC_Decode, 178, 12, 194, 1, // Opcode: SUBQH_PH
/* 12352 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 12364
/* 12356 */   MCD::OPC_CheckPredicate, 31, 0, 5, // Skip to: 13640
/* 12360 */   MCD::OPC_Decode, 33, 194, 1, // Opcode: ADDQH_R_PH
/* 12364 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12377
/* 12368 */   MCD::OPC_CheckPredicate, 31, 244, 4, // Skip to: 13640
/* 12372 */   MCD::OPC_Decode, 179, 12, 194, 1, // Opcode: SUBQH_R_PH
/* 12377 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12390
/* 12381 */   MCD::OPC_CheckPredicate, 31, 231, 4, // Skip to: 13640
/* 12385 */   MCD::OPC_Decode, 205, 9, 194, 1, // Opcode: MUL_PH
/* 12390 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12403
/* 12394 */   MCD::OPC_CheckPredicate, 31, 218, 4, // Skip to: 13640
/* 12398 */   MCD::OPC_Decode, 209, 9, 194, 1, // Opcode: MUL_S_PH
/* 12403 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 12414
/* 12407 */   MCD::OPC_CheckPredicate, 31, 205, 4, // Skip to: 13640
/* 12411 */   MCD::OPC_Decode, 35, 35, // Opcode: ADDQH_W
/* 12414 */   MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 12426
/* 12418 */   MCD::OPC_CheckPredicate, 31, 194, 4, // Skip to: 13640
/* 12422 */   MCD::OPC_Decode, 181, 12, 35, // Opcode: SUBQH_W
/* 12426 */   MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 12437
/* 12430 */   MCD::OPC_CheckPredicate, 31, 182, 4, // Skip to: 13640
/* 12434 */   MCD::OPC_Decode, 34, 35, // Opcode: ADDQH_R_W
/* 12437 */   MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 12449
/* 12441 */   MCD::OPC_CheckPredicate, 31, 171, 4, // Skip to: 13640
/* 12445 */   MCD::OPC_Decode, 180, 12, 35, // Opcode: SUBQH_R_W
/* 12449 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 12461
/* 12453 */   MCD::OPC_CheckPredicate, 31, 159, 4, // Skip to: 13640
/* 12457 */   MCD::OPC_Decode, 188, 9, 35, // Opcode: MULQ_S_W
/* 12461 */   MCD::OPC_FilterValue, 23, 151, 4, // Skip to: 13640
/* 12465 */   MCD::OPC_CheckPredicate, 31, 147, 4, // Skip to: 13640
/* 12469 */   MCD::OPC_Decode, 186, 9, 35, // Opcode: MULQ_RS_W
/* 12473 */   MCD::OPC_FilterValue, 32, 60, 0, // Skip to: 12537
/* 12477 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12480 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 12499
/* 12484 */   MCD::OPC_CheckPredicate, 6, 128, 4, // Skip to: 13640
/* 12488 */   MCD::OPC_CheckField, 21, 5, 0, 122, 4, // Skip to: 13640
/* 12494 */   MCD::OPC_Decode, 221, 13, 204, 1, // Opcode: WSBH
/* 12499 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 12518
/* 12503 */   MCD::OPC_CheckPredicate, 6, 109, 4, // Skip to: 13640
/* 12507 */   MCD::OPC_CheckField, 21, 5, 0, 103, 4, // Skip to: 13640
/* 12513 */   MCD::OPC_Decode, 155, 11, 204, 1, // Opcode: SEB
/* 12518 */   MCD::OPC_FilterValue, 24, 94, 4, // Skip to: 13640
/* 12522 */   MCD::OPC_CheckPredicate, 6, 90, 4, // Skip to: 13640
/* 12526 */   MCD::OPC_CheckField, 21, 5, 0, 84, 4, // Skip to: 13640
/* 12532 */   MCD::OPC_Decode, 158, 11, 204, 1, // Opcode: SEH
/* 12537 */   MCD::OPC_FilterValue, 48, 143, 1, // Skip to: 12940
/* 12541 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12544 */   MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 12562
/* 12548 */   MCD::OPC_CheckPredicate, 31, 64, 4, // Skip to: 13640
/* 12552 */   MCD::OPC_CheckField, 13, 3, 0, 58, 4, // Skip to: 13640
/* 12558 */   MCD::OPC_Decode, 218, 4, 115, // Opcode: DPA_W_PH
/* 12562 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 12580
/* 12566 */   MCD::OPC_CheckPredicate, 31, 46, 4, // Skip to: 13640
/* 12570 */   MCD::OPC_CheckField, 13, 3, 0, 40, 4, // Skip to: 13640
/* 12576 */   MCD::OPC_Decode, 233, 4, 115, // Opcode: DPS_W_PH
/* 12580 */   MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 12598
/* 12584 */   MCD::OPC_CheckPredicate, 31, 28, 4, // Skip to: 13640
/* 12588 */   MCD::OPC_CheckField, 13, 3, 0, 22, 4, // Skip to: 13640
/* 12594 */   MCD::OPC_Decode, 192, 9, 115, // Opcode: MULSA_W_PH
/* 12598 */   MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 12616
/* 12602 */   MCD::OPC_CheckPredicate, 12, 10, 4, // Skip to: 13640
/* 12606 */   MCD::OPC_CheckField, 13, 3, 0, 4, 4, // Skip to: 13640
/* 12612 */   MCD::OPC_Decode, 215, 4, 115, // Opcode: DPAU_H_QBL
/* 12616 */   MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 12634
/* 12620 */   MCD::OPC_CheckPredicate, 12, 248, 3, // Skip to: 13640
/* 12624 */   MCD::OPC_CheckField, 13, 3, 0, 242, 3, // Skip to: 13640
/* 12630 */   MCD::OPC_Decode, 214, 4, 115, // Opcode: DPAQ_S_W_PH
/* 12634 */   MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 12652
/* 12638 */   MCD::OPC_CheckPredicate, 12, 230, 3, // Skip to: 13640
/* 12642 */   MCD::OPC_CheckField, 13, 3, 0, 224, 3, // Skip to: 13640
/* 12648 */   MCD::OPC_Decode, 223, 4, 115, // Opcode: DPSQ_S_W_PH
/* 12652 */   MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 12670
/* 12656 */   MCD::OPC_CheckPredicate, 12, 212, 3, // Skip to: 13640
/* 12660 */   MCD::OPC_CheckField, 13, 3, 0, 206, 3, // Skip to: 13640
/* 12666 */   MCD::OPC_Decode, 191, 9, 115, // Opcode: MULSAQ_S_W_PH
/* 12670 */   MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 12688
/* 12674 */   MCD::OPC_CheckPredicate, 12, 194, 3, // Skip to: 13640
/* 12678 */   MCD::OPC_CheckField, 13, 3, 0, 188, 3, // Skip to: 13640
/* 12684 */   MCD::OPC_Decode, 216, 4, 115, // Opcode: DPAU_H_QBR
/* 12688 */   MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 12706
/* 12692 */   MCD::OPC_CheckPredicate, 31, 176, 3, // Skip to: 13640
/* 12696 */   MCD::OPC_CheckField, 13, 3, 0, 170, 3, // Skip to: 13640
/* 12702 */   MCD::OPC_Decode, 217, 4, 115, // Opcode: DPAX_W_PH
/* 12706 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 12724
/* 12710 */   MCD::OPC_CheckPredicate, 31, 158, 3, // Skip to: 13640
/* 12714 */   MCD::OPC_CheckField, 13, 3, 0, 152, 3, // Skip to: 13640
/* 12720 */   MCD::OPC_Decode, 232, 4, 115, // Opcode: DPSX_W_PH
/* 12724 */   MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 12742
/* 12728 */   MCD::OPC_CheckPredicate, 12, 140, 3, // Skip to: 13640
/* 12732 */   MCD::OPC_CheckField, 13, 3, 0, 134, 3, // Skip to: 13640
/* 12738 */   MCD::OPC_Decode, 230, 4, 115, // Opcode: DPSU_H_QBL
/* 12742 */   MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 12760
/* 12746 */   MCD::OPC_CheckPredicate, 12, 122, 3, // Skip to: 13640
/* 12750 */   MCD::OPC_CheckField, 13, 3, 0, 116, 3, // Skip to: 13640
/* 12756 */   MCD::OPC_Decode, 213, 4, 115, // Opcode: DPAQ_SA_L_W
/* 12760 */   MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 12778
/* 12764 */   MCD::OPC_CheckPredicate, 12, 104, 3, // Skip to: 13640
/* 12768 */   MCD::OPC_CheckField, 13, 3, 0, 98, 3, // Skip to: 13640
/* 12774 */   MCD::OPC_Decode, 222, 4, 115, // Opcode: DPSQ_SA_L_W
/* 12778 */   MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 12796
/* 12782 */   MCD::OPC_CheckPredicate, 12, 86, 3, // Skip to: 13640
/* 12786 */   MCD::OPC_CheckField, 13, 3, 0, 80, 3, // Skip to: 13640
/* 12792 */   MCD::OPC_Decode, 231, 4, 115, // Opcode: DPSU_H_QBR
/* 12796 */   MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 12814
/* 12800 */   MCD::OPC_CheckPredicate, 12, 68, 3, // Skip to: 13640
/* 12804 */   MCD::OPC_CheckField, 13, 3, 0, 62, 3, // Skip to: 13640
/* 12810 */   MCD::OPC_Decode, 138, 8, 115, // Opcode: MAQ_SA_W_PHL
/* 12814 */   MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 12832
/* 12818 */   MCD::OPC_CheckPredicate, 12, 50, 3, // Skip to: 13640
/* 12822 */   MCD::OPC_CheckField, 13, 3, 0, 44, 3, // Skip to: 13640
/* 12828 */   MCD::OPC_Decode, 139, 8, 115, // Opcode: MAQ_SA_W_PHR
/* 12832 */   MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 12850
/* 12836 */   MCD::OPC_CheckPredicate, 12, 32, 3, // Skip to: 13640
/* 12840 */   MCD::OPC_CheckField, 13, 3, 0, 26, 3, // Skip to: 13640
/* 12846 */   MCD::OPC_Decode, 140, 8, 115, // Opcode: MAQ_S_W_PHL
/* 12850 */   MCD::OPC_FilterValue, 22, 14, 0, // Skip to: 12868
/* 12854 */   MCD::OPC_CheckPredicate, 12, 14, 3, // Skip to: 13640
/* 12858 */   MCD::OPC_CheckField, 13, 3, 0, 8, 3, // Skip to: 13640
/* 12864 */   MCD::OPC_Decode, 141, 8, 115, // Opcode: MAQ_S_W_PHR
/* 12868 */   MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 12886
/* 12872 */   MCD::OPC_CheckPredicate, 31, 252, 2, // Skip to: 13640
/* 12876 */   MCD::OPC_CheckField, 13, 3, 0, 246, 2, // Skip to: 13640
/* 12882 */   MCD::OPC_Decode, 212, 4, 115, // Opcode: DPAQX_S_W_PH
/* 12886 */   MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 12904
/* 12890 */   MCD::OPC_CheckPredicate, 31, 234, 2, // Skip to: 13640
/* 12894 */   MCD::OPC_CheckField, 13, 3, 0, 228, 2, // Skip to: 13640
/* 12900 */   MCD::OPC_Decode, 221, 4, 115, // Opcode: DPSQX_S_W_PH
/* 12904 */   MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 12922
/* 12908 */   MCD::OPC_CheckPredicate, 31, 216, 2, // Skip to: 13640
/* 12912 */   MCD::OPC_CheckField, 13, 3, 0, 210, 2, // Skip to: 13640
/* 12918 */   MCD::OPC_Decode, 211, 4, 115, // Opcode: DPAQX_SA_W_PH
/* 12922 */   MCD::OPC_FilterValue, 27, 202, 2, // Skip to: 13640
/* 12926 */   MCD::OPC_CheckPredicate, 31, 198, 2, // Skip to: 13640
/* 12930 */   MCD::OPC_CheckField, 13, 3, 0, 192, 2, // Skip to: 13640
/* 12936 */   MCD::OPC_Decode, 220, 4, 115, // Opcode: DPSQX_SA_W_PH
/* 12940 */   MCD::OPC_FilterValue, 49, 41, 0, // Skip to: 12985
/* 12944 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12947 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 12959
/* 12951 */   MCD::OPC_CheckPredicate, 31, 173, 2, // Skip to: 13640
/* 12955 */   MCD::OPC_Decode, 96, 208, 1, // Opcode: APPEND
/* 12959 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12972
/* 12963 */   MCD::OPC_CheckPredicate, 31, 161, 2, // Skip to: 13640
/* 12967 */   MCD::OPC_Decode, 171, 10, 208, 1, // Opcode: PREPEND
/* 12972 */   MCD::OPC_FilterValue, 16, 152, 2, // Skip to: 13640
/* 12976 */   MCD::OPC_CheckPredicate, 31, 148, 2, // Skip to: 13640
/* 12980 */   MCD::OPC_Decode, 169, 1, 208, 1, // Opcode: BALIGN
/* 12985 */   MCD::OPC_FilterValue, 56, 58, 1, // Skip to: 13303
/* 12989 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12992 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 13011
/* 12996 */   MCD::OPC_CheckPredicate, 12, 128, 2, // Skip to: 13640
/* 13000 */   MCD::OPC_CheckField, 13, 3, 0, 122, 2, // Skip to: 13640
/* 13006 */   MCD::OPC_Decode, 145, 5, 209, 1, // Opcode: EXTR_W
/* 13011 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 13030
/* 13015 */   MCD::OPC_CheckPredicate, 12, 109, 2, // Skip to: 13640
/* 13019 */   MCD::OPC_CheckField, 13, 3, 0, 103, 2, // Skip to: 13640
/* 13025 */   MCD::OPC_Decode, 141, 5, 210, 1, // Opcode: EXTRV_W
/* 13030 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 13049
/* 13034 */   MCD::OPC_CheckPredicate, 12, 90, 2, // Skip to: 13640
/* 13038 */   MCD::OPC_CheckField, 13, 3, 0, 84, 2, // Skip to: 13640
/* 13044 */   MCD::OPC_Decode, 134, 5, 209, 1, // Opcode: EXTP
/* 13049 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 13068
/* 13053 */   MCD::OPC_CheckPredicate, 12, 71, 2, // Skip to: 13640
/* 13057 */   MCD::OPC_CheckField, 13, 3, 0, 65, 2, // Skip to: 13640
/* 13063 */   MCD::OPC_Decode, 137, 5, 210, 1, // Opcode: EXTPV
/* 13068 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 13087
/* 13072 */   MCD::OPC_CheckPredicate, 12, 52, 2, // Skip to: 13640
/* 13076 */   MCD::OPC_CheckField, 13, 3, 0, 46, 2, // Skip to: 13640
/* 13082 */   MCD::OPC_Decode, 143, 5, 209, 1, // Opcode: EXTR_R_W
/* 13087 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 13106
/* 13091 */   MCD::OPC_CheckPredicate, 12, 33, 2, // Skip to: 13640
/* 13095 */   MCD::OPC_CheckField, 13, 3, 0, 27, 2, // Skip to: 13640
/* 13101 */   MCD::OPC_Decode, 139, 5, 210, 1, // Opcode: EXTRV_R_W
/* 13106 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 13125
/* 13110 */   MCD::OPC_CheckPredicate, 12, 14, 2, // Skip to: 13640
/* 13114 */   MCD::OPC_CheckField, 13, 3, 0, 8, 2, // Skip to: 13640
/* 13120 */   MCD::OPC_Decode, 142, 5, 209, 1, // Opcode: EXTR_RS_W
/* 13125 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 13144
/* 13129 */   MCD::OPC_CheckPredicate, 12, 251, 1, // Skip to: 13640
/* 13133 */   MCD::OPC_CheckField, 13, 3, 0, 245, 1, // Skip to: 13640
/* 13139 */   MCD::OPC_Decode, 138, 5, 210, 1, // Opcode: EXTRV_RS_W
/* 13144 */   MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 13163
/* 13148 */   MCD::OPC_CheckPredicate, 12, 232, 1, // Skip to: 13640
/* 13152 */   MCD::OPC_CheckField, 13, 3, 0, 226, 1, // Skip to: 13640
/* 13158 */   MCD::OPC_Decode, 135, 5, 209, 1, // Opcode: EXTPDP
/* 13163 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 13182
/* 13167 */   MCD::OPC_CheckPredicate, 12, 213, 1, // Skip to: 13640
/* 13171 */   MCD::OPC_CheckField, 13, 3, 0, 207, 1, // Skip to: 13640
/* 13177 */   MCD::OPC_Decode, 136, 5, 210, 1, // Opcode: EXTPDPV
/* 13182 */   MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 13201
/* 13186 */   MCD::OPC_CheckPredicate, 12, 194, 1, // Skip to: 13640
/* 13190 */   MCD::OPC_CheckField, 13, 3, 0, 188, 1, // Skip to: 13640
/* 13196 */   MCD::OPC_Decode, 144, 5, 209, 1, // Opcode: EXTR_S_H
/* 13201 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 13220
/* 13205 */   MCD::OPC_CheckPredicate, 12, 175, 1, // Skip to: 13640
/* 13209 */   MCD::OPC_CheckField, 13, 3, 0, 169, 1, // Skip to: 13640
/* 13215 */   MCD::OPC_Decode, 140, 5, 210, 1, // Opcode: EXTRV_S_H
/* 13220 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 13233
/* 13224 */   MCD::OPC_CheckPredicate, 12, 156, 1, // Skip to: 13640
/* 13228 */   MCD::OPC_Decode, 224, 10, 211, 1, // Opcode: RDDSP
/* 13233 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 13246
/* 13237 */   MCD::OPC_CheckPredicate, 12, 143, 1, // Skip to: 13640
/* 13241 */   MCD::OPC_Decode, 220, 13, 212, 1, // Opcode: WRDSP
/* 13246 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 13265
/* 13250 */   MCD::OPC_CheckPredicate, 12, 130, 1, // Skip to: 13640
/* 13254 */   MCD::OPC_CheckField, 13, 7, 0, 124, 1, // Skip to: 13640
/* 13260 */   MCD::OPC_Decode, 179, 11, 213, 1, // Opcode: SHILO
/* 13265 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 13284
/* 13269 */   MCD::OPC_CheckPredicate, 12, 111, 1, // Skip to: 13640
/* 13273 */   MCD::OPC_CheckField, 13, 8, 0, 105, 1, // Skip to: 13640
/* 13279 */   MCD::OPC_Decode, 180, 11, 214, 1, // Opcode: SHILOV
/* 13284 */   MCD::OPC_FilterValue, 31, 96, 1, // Skip to: 13640
/* 13288 */   MCD::OPC_CheckPredicate, 12, 92, 1, // Skip to: 13640
/* 13292 */   MCD::OPC_CheckField, 13, 8, 0, 86, 1, // Skip to: 13640
/* 13298 */   MCD::OPC_Decode, 167, 9, 214, 1, // Opcode: MTHLIP
/* 13303 */   MCD::OPC_FilterValue, 59, 77, 1, // Skip to: 13640
/* 13307 */   MCD::OPC_CheckPredicate, 5, 73, 1, // Skip to: 13640
/* 13311 */   MCD::OPC_CheckField, 21, 5, 0, 67, 1, // Skip to: 13640
/* 13317 */   MCD::OPC_CheckField, 6, 5, 0, 61, 1, // Skip to: 13640
/* 13323 */   MCD::OPC_Decode, 225, 10, 215, 1, // Opcode: RDHWR
/* 13328 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 13341
/* 13332 */   MCD::OPC_CheckPredicate, 5, 48, 1, // Skip to: 13640
/* 13336 */   MCD::OPC_Decode, 140, 7, 216, 1, // Opcode: LB
/* 13341 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 13354
/* 13345 */   MCD::OPC_CheckPredicate, 5, 35, 1, // Skip to: 13640
/* 13349 */   MCD::OPC_Decode, 171, 7, 216, 1, // Opcode: LH
/* 13354 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 13367
/* 13358 */   MCD::OPC_CheckPredicate, 11, 22, 1, // Skip to: 13640
/* 13362 */   MCD::OPC_Decode, 209, 7, 216, 1, // Opcode: LWL
/* 13367 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 13380
/* 13371 */   MCD::OPC_CheckPredicate, 1, 9, 1, // Skip to: 13640
/* 13375 */   MCD::OPC_Decode, 200, 7, 216, 1, // Opcode: LW
/* 13380 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 13393
/* 13384 */   MCD::OPC_CheckPredicate, 5, 252, 0, // Skip to: 13640
/* 13388 */   MCD::OPC_Decode, 145, 7, 216, 1, // Opcode: LBu
/* 13393 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 13406
/* 13397 */   MCD::OPC_CheckPredicate, 5, 239, 0, // Skip to: 13640
/* 13401 */   MCD::OPC_Decode, 176, 7, 216, 1, // Opcode: LHu
/* 13406 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 13419
/* 13410 */   MCD::OPC_CheckPredicate, 11, 226, 0, // Skip to: 13640
/* 13414 */   MCD::OPC_Decode, 217, 7, 216, 1, // Opcode: LWR
/* 13419 */   MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 13432
/* 13423 */   MCD::OPC_CheckPredicate, 5, 213, 0, // Skip to: 13640
/* 13427 */   MCD::OPC_Decode, 129, 11, 216, 1, // Opcode: SB
/* 13432 */   MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 13445
/* 13436 */   MCD::OPC_CheckPredicate, 5, 200, 0, // Skip to: 13640
/* 13440 */   MCD::OPC_Decode, 173, 11, 216, 1, // Opcode: SH
/* 13445 */   MCD::OPC_FilterValue, 42, 9, 0, // Skip to: 13458
/* 13449 */   MCD::OPC_CheckPredicate, 11, 187, 0, // Skip to: 13640
/* 13453 */   MCD::OPC_Decode, 230, 12, 216, 1, // Opcode: SWL
/* 13458 */   MCD::OPC_FilterValue, 43, 9, 0, // Skip to: 13471
/* 13462 */   MCD::OPC_CheckPredicate, 1, 174, 0, // Skip to: 13640
/* 13466 */   MCD::OPC_Decode, 222, 12, 216, 1, // Opcode: SW
/* 13471 */   MCD::OPC_FilterValue, 46, 9, 0, // Skip to: 13484
/* 13475 */   MCD::OPC_CheckPredicate, 11, 161, 0, // Skip to: 13640
/* 13479 */   MCD::OPC_Decode, 237, 12, 216, 1, // Opcode: SWR
/* 13484 */   MCD::OPC_FilterValue, 47, 9, 0, // Skip to: 13497
/* 13488 */   MCD::OPC_CheckPredicate, 32, 148, 0, // Skip to: 13640
/* 13492 */   MCD::OPC_Decode, 208, 2, 217, 1, // Opcode: CACHE
/* 13497 */   MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 13510
/* 13501 */   MCD::OPC_CheckPredicate, 33, 135, 0, // Skip to: 13640
/* 13505 */   MCD::OPC_Decode, 180, 7, 216, 1, // Opcode: LL
/* 13510 */   MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 13523
/* 13514 */   MCD::OPC_CheckPredicate, 5, 122, 0, // Skip to: 13640
/* 13518 */   MCD::OPC_Decode, 203, 7, 218, 1, // Opcode: LWC1
/* 13523 */   MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 13536
/* 13527 */   MCD::OPC_CheckPredicate, 34, 109, 0, // Skip to: 13640
/* 13531 */   MCD::OPC_Decode, 205, 7, 219, 1, // Opcode: LWC2
/* 13536 */   MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 13549
/* 13540 */   MCD::OPC_CheckPredicate, 32, 96, 0, // Skip to: 13640
/* 13544 */   MCD::OPC_Decode, 168, 10, 217, 1, // Opcode: PREF
/* 13549 */   MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 13562
/* 13553 */   MCD::OPC_CheckPredicate, 35, 83, 0, // Skip to: 13640
/* 13557 */   MCD::OPC_Decode, 149, 7, 218, 1, // Opcode: LDC1
/* 13562 */   MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 13575
/* 13566 */   MCD::OPC_CheckPredicate, 36, 70, 0, // Skip to: 13640
/* 13570 */   MCD::OPC_Decode, 152, 7, 219, 1, // Opcode: LDC2
/* 13575 */   MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 13588
/* 13579 */   MCD::OPC_CheckPredicate, 33, 57, 0, // Skip to: 13640
/* 13583 */   MCD::OPC_Decode, 133, 11, 216, 1, // Opcode: SC
/* 13588 */   MCD::OPC_FilterValue, 57, 9, 0, // Skip to: 13601
/* 13592 */   MCD::OPC_CheckPredicate, 5, 44, 0, // Skip to: 13640
/* 13596 */   MCD::OPC_Decode, 225, 12, 218, 1, // Opcode: SWC1
/* 13601 */   MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 13614
/* 13605 */   MCD::OPC_CheckPredicate, 34, 31, 0, // Skip to: 13640
/* 13609 */   MCD::OPC_Decode, 227, 12, 219, 1, // Opcode: SWC2
/* 13614 */   MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 13627
/* 13618 */   MCD::OPC_CheckPredicate, 35, 18, 0, // Skip to: 13640
/* 13622 */   MCD::OPC_Decode, 143, 11, 218, 1, // Opcode: SDC1
/* 13627 */   MCD::OPC_FilterValue, 62, 9, 0, // Skip to: 13640
/* 13631 */   MCD::OPC_CheckPredicate, 36, 5, 0, // Skip to: 13640
/* 13635 */   MCD::OPC_Decode, 146, 11, 219, 1, // Opcode: SDC2
/* 13640 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 205, 1, // Skip to: 468
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 29
/* 14 */      MCD::OPC_CheckPredicate, 37, 37, 7, // Skip to: 1847
/* 18 */      MCD::OPC_CheckField, 8, 3, 0, 31, 7, // Skip to: 1847
/* 24 */      MCD::OPC_Decode, 193, 7, 220, 1, // Opcode: LSA_R6
/* 29 */      MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 47
/* 33 */      MCD::OPC_CheckPredicate, 37, 18, 7, // Skip to: 1847
/* 37 */      MCD::OPC_CheckField, 6, 15, 16, 12, 7, // Skip to: 1847
/* 43 */      MCD::OPC_Decode, 129, 7, 61, // Opcode: JR_HB_R6
/* 47 */      MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 59
/* 51 */      MCD::OPC_CheckPredicate, 37, 0, 7, // Skip to: 1847
/* 55 */      MCD::OPC_Decode, 142, 11, 64, // Opcode: SDBBP_R6
/* 59 */      MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 83
/* 63 */      MCD::OPC_CheckPredicate, 37, 244, 6, // Skip to: 1847
/* 67 */      MCD::OPC_CheckField, 16, 5, 0, 238, 6, // Skip to: 1847
/* 73 */      MCD::OPC_CheckField, 6, 5, 1, 232, 6, // Skip to: 1847
/* 79 */      MCD::OPC_Decode, 142, 3, 62, // Opcode: CLZ_R6
/* 83 */      MCD::OPC_FilterValue, 17, 20, 0, // Skip to: 107
/* 87 */      MCD::OPC_CheckPredicate, 37, 220, 6, // Skip to: 1847
/* 91 */      MCD::OPC_CheckField, 16, 5, 0, 214, 6, // Skip to: 1847
/* 97 */      MCD::OPC_CheckField, 6, 5, 1, 208, 6, // Skip to: 1847
/* 103 */     MCD::OPC_Decode, 251, 2, 62, // Opcode: CLO_R6
/* 107 */     MCD::OPC_FilterValue, 18, 21, 0, // Skip to: 132
/* 111 */     MCD::OPC_CheckPredicate, 38, 196, 6, // Skip to: 1847
/* 115 */     MCD::OPC_CheckField, 16, 5, 0, 190, 6, // Skip to: 1847
/* 121 */     MCD::OPC_CheckField, 6, 5, 1, 184, 6, // Skip to: 1847
/* 127 */     MCD::OPC_Decode, 159, 4, 221, 1, // Opcode: DCLZ_R6
/* 132 */     MCD::OPC_FilterValue, 19, 21, 0, // Skip to: 157
/* 136 */     MCD::OPC_CheckPredicate, 38, 171, 6, // Skip to: 1847
/* 140 */     MCD::OPC_CheckField, 16, 5, 0, 165, 6, // Skip to: 1847
/* 146 */     MCD::OPC_CheckField, 6, 5, 1, 159, 6, // Skip to: 1847
/* 152 */     MCD::OPC_Decode, 157, 4, 221, 1, // Opcode: DCLO_R6
/* 157 */     MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 176
/* 161 */     MCD::OPC_CheckPredicate, 38, 146, 6, // Skip to: 1847
/* 165 */     MCD::OPC_CheckField, 8, 3, 0, 140, 6, // Skip to: 1847
/* 171 */     MCD::OPC_Decode, 183, 4, 222, 1, // Opcode: DLSA_R6
/* 176 */     MCD::OPC_FilterValue, 24, 27, 0, // Skip to: 207
/* 180 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 183 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 195
/* 187 */     MCD::OPC_CheckPredicate, 37, 120, 6, // Skip to: 1847
/* 191 */     MCD::OPC_Decode, 208, 9, 35, // Opcode: MUL_R6
/* 195 */     MCD::OPC_FilterValue, 3, 112, 6, // Skip to: 1847
/* 199 */     MCD::OPC_CheckPredicate, 37, 108, 6, // Skip to: 1847
/* 203 */     MCD::OPC_Decode, 178, 9, 35, // Opcode: MUH
/* 207 */     MCD::OPC_FilterValue, 25, 27, 0, // Skip to: 238
/* 211 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 214 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 226
/* 218 */     MCD::OPC_CheckPredicate, 37, 89, 6, // Skip to: 1847
/* 222 */     MCD::OPC_Decode, 199, 9, 35, // Opcode: MULU
/* 226 */     MCD::OPC_FilterValue, 3, 81, 6, // Skip to: 1847
/* 230 */     MCD::OPC_CheckPredicate, 37, 77, 6, // Skip to: 1847
/* 234 */     MCD::OPC_Decode, 179, 9, 35, // Opcode: MUHU
/* 238 */     MCD::OPC_FilterValue, 26, 27, 0, // Skip to: 269
/* 242 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 245 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 257
/* 249 */     MCD::OPC_CheckPredicate, 37, 58, 6, // Skip to: 1847
/* 253 */     MCD::OPC_Decode, 171, 4, 35, // Opcode: DIV
/* 257 */     MCD::OPC_FilterValue, 3, 50, 6, // Skip to: 1847
/* 261 */     MCD::OPC_CheckPredicate, 37, 46, 6, // Skip to: 1847
/* 265 */     MCD::OPC_Decode, 209, 8, 35, // Opcode: MOD
/* 269 */     MCD::OPC_FilterValue, 27, 27, 0, // Skip to: 300
/* 273 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 276 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 288
/* 280 */     MCD::OPC_CheckPredicate, 37, 27, 6, // Skip to: 1847
/* 284 */     MCD::OPC_Decode, 172, 4, 35, // Opcode: DIVU
/* 288 */     MCD::OPC_FilterValue, 3, 19, 6, // Skip to: 1847
/* 292 */     MCD::OPC_CheckPredicate, 37, 15, 6, // Skip to: 1847
/* 296 */     MCD::OPC_Decode, 211, 8, 35, // Opcode: MODU
/* 300 */     MCD::OPC_FilterValue, 28, 29, 0, // Skip to: 333
/* 304 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 307 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 320
/* 311 */     MCD::OPC_CheckPredicate, 38, 252, 5, // Skip to: 1847
/* 315 */     MCD::OPC_Decode, 198, 4, 223, 1, // Opcode: DMUL_R6
/* 320 */     MCD::OPC_FilterValue, 3, 243, 5, // Skip to: 1847
/* 324 */     MCD::OPC_CheckPredicate, 38, 239, 5, // Skip to: 1847
/* 328 */     MCD::OPC_Decode, 192, 4, 223, 1, // Opcode: DMUH
/* 333 */     MCD::OPC_FilterValue, 29, 29, 0, // Skip to: 366
/* 337 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 340 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 353
/* 344 */     MCD::OPC_CheckPredicate, 38, 219, 5, // Skip to: 1847
/* 348 */     MCD::OPC_Decode, 197, 4, 223, 1, // Opcode: DMULU
/* 353 */     MCD::OPC_FilterValue, 3, 210, 5, // Skip to: 1847
/* 357 */     MCD::OPC_CheckPredicate, 38, 206, 5, // Skip to: 1847
/* 361 */     MCD::OPC_Decode, 193, 4, 223, 1, // Opcode: DMUHU
/* 366 */     MCD::OPC_FilterValue, 30, 29, 0, // Skip to: 399
/* 370 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 373 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 386
/* 377 */     MCD::OPC_CheckPredicate, 38, 186, 5, // Skip to: 1847
/* 381 */     MCD::OPC_Decode, 160, 4, 223, 1, // Opcode: DDIV
/* 386 */     MCD::OPC_FilterValue, 3, 177, 5, // Skip to: 1847
/* 390 */     MCD::OPC_CheckPredicate, 38, 173, 5, // Skip to: 1847
/* 394 */     MCD::OPC_Decode, 187, 4, 223, 1, // Opcode: DMOD
/* 399 */     MCD::OPC_FilterValue, 31, 29, 0, // Skip to: 432
/* 403 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 406 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 419
/* 410 */     MCD::OPC_CheckPredicate, 38, 153, 5, // Skip to: 1847
/* 414 */     MCD::OPC_Decode, 161, 4, 223, 1, // Opcode: DDIVU
/* 419 */     MCD::OPC_FilterValue, 3, 144, 5, // Skip to: 1847
/* 423 */     MCD::OPC_CheckPredicate, 38, 140, 5, // Skip to: 1847
/* 427 */     MCD::OPC_Decode, 188, 4, 223, 1, // Opcode: DMODU
/* 432 */     MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 450
/* 436 */     MCD::OPC_CheckPredicate, 39, 127, 5, // Skip to: 1847
/* 440 */     MCD::OPC_CheckField, 6, 5, 0, 121, 5, // Skip to: 1847
/* 446 */     MCD::OPC_Decode, 161, 11, 35, // Opcode: SELEQZ
/* 450 */     MCD::OPC_FilterValue, 55, 113, 5, // Skip to: 1847
/* 454 */     MCD::OPC_CheckPredicate, 39, 109, 5, // Skip to: 1847
/* 458 */     MCD::OPC_CheckField, 6, 5, 0, 103, 5, // Skip to: 1847
/* 464 */     MCD::OPC_Decode, 165, 11, 35, // Opcode: SELNEZ
/* 468 */     MCD::OPC_FilterValue, 1, 47, 0, // Skip to: 519
/* 472 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 475 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 488
/* 479 */     MCD::OPC_CheckPredicate, 38, 84, 5, // Skip to: 1847
/* 483 */     MCD::OPC_Decode, 151, 4, 224, 1, // Opcode: DAHI
/* 488 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 506
/* 492 */     MCD::OPC_CheckPredicate, 37, 71, 5, // Skip to: 1847
/* 496 */     MCD::OPC_CheckField, 21, 5, 0, 65, 5, // Skip to: 1847
/* 502 */     MCD::OPC_Decode, 167, 1, 75, // Opcode: BAL
/* 506 */     MCD::OPC_FilterValue, 30, 57, 5, // Skip to: 1847
/* 510 */     MCD::OPC_CheckPredicate, 38, 53, 5, // Skip to: 1847
/* 514 */     MCD::OPC_Decode, 153, 4, 224, 1, // Opcode: DATI
/* 519 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 532
/* 523 */     MCD::OPC_CheckPredicate, 37, 40, 5, // Skip to: 1847
/* 527 */     MCD::OPC_Decode, 208, 1, 225, 1, // Opcode: BGEZALC
/* 532 */     MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 545
/* 536 */     MCD::OPC_CheckPredicate, 37, 27, 5, // Skip to: 1847
/* 540 */     MCD::OPC_Decode, 250, 1, 226, 1, // Opcode: BLTZALC
/* 545 */     MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 558
/* 549 */     MCD::OPC_CheckPredicate, 37, 14, 5, // Skip to: 1847
/* 553 */     MCD::OPC_Decode, 196, 1, 227, 1, // Opcode: BEQC
/* 558 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 570
/* 562 */     MCD::OPC_CheckPredicate, 37, 1, 5, // Skip to: 1847
/* 566 */     MCD::OPC_Decode, 137, 1, 47, // Opcode: AUI
/* 570 */     MCD::OPC_FilterValue, 17, 5, 3, // Skip to: 1347
/* 574 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 577 */     MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 590
/* 581 */     MCD::OPC_CheckPredicate, 37, 238, 4, // Skip to: 1847
/* 585 */     MCD::OPC_Decode, 176, 1, 228, 1, // Opcode: BC1EQZ
/* 590 */     MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 603
/* 594 */     MCD::OPC_CheckPredicate, 37, 225, 4, // Skip to: 1847
/* 598 */     MCD::OPC_Decode, 180, 1, 228, 1, // Opcode: BC1NEZ
/* 603 */     MCD::OPC_FilterValue, 16, 150, 0, // Skip to: 757
/* 607 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 610 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 623
/* 614 */     MCD::OPC_CheckPredicate, 37, 205, 4, // Skip to: 1847
/* 618 */     MCD::OPC_Decode, 170, 11, 229, 1, // Opcode: SEL_S
/* 623 */     MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 635
/* 627 */     MCD::OPC_CheckPredicate, 37, 192, 4, // Skip to: 1847
/* 631 */     MCD::OPC_Decode, 164, 11, 92, // Opcode: SELEQZ_S
/* 635 */     MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 647
/* 639 */     MCD::OPC_CheckPredicate, 37, 180, 4, // Skip to: 1847
/* 643 */     MCD::OPC_Decode, 168, 11, 92, // Opcode: SELNEZ_S
/* 647 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 660
/* 651 */     MCD::OPC_CheckPredicate, 37, 168, 4, // Skip to: 1847
/* 655 */     MCD::OPC_Decode, 247, 7, 230, 1, // Opcode: MADDF_S
/* 660 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 673
/* 664 */     MCD::OPC_CheckPredicate, 37, 155, 4, // Skip to: 1847
/* 668 */     MCD::OPC_Decode, 137, 9, 230, 1, // Opcode: MSUBF_S
/* 673 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 691
/* 677 */     MCD::OPC_CheckPredicate, 37, 142, 4, // Skip to: 1847
/* 681 */     MCD::OPC_CheckField, 16, 5, 0, 136, 4, // Skip to: 1847
/* 687 */     MCD::OPC_Decode, 233, 10, 93, // Opcode: RINT_S
/* 691 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 709
/* 695 */     MCD::OPC_CheckPredicate, 37, 124, 4, // Skip to: 1847
/* 699 */     MCD::OPC_CheckField, 16, 5, 0, 118, 4, // Skip to: 1847
/* 705 */     MCD::OPC_Decode, 232, 2, 93, // Opcode: CLASS_S
/* 709 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 721
/* 713 */     MCD::OPC_CheckPredicate, 37, 106, 4, // Skip to: 1847
/* 717 */     MCD::OPC_Decode, 198, 8, 92, // Opcode: MIN_S
/* 721 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 733
/* 725 */     MCD::OPC_CheckPredicate, 37, 94, 4, // Skip to: 1847
/* 729 */     MCD::OPC_Decode, 157, 8, 92, // Opcode: MAX_S
/* 733 */     MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 745
/* 737 */     MCD::OPC_CheckPredicate, 37, 82, 4, // Skip to: 1847
/* 741 */     MCD::OPC_Decode, 184, 8, 92, // Opcode: MINA_S
/* 745 */     MCD::OPC_FilterValue, 31, 74, 4, // Skip to: 1847
/* 749 */     MCD::OPC_CheckPredicate, 37, 70, 4, // Skip to: 1847
/* 753 */     MCD::OPC_Decode, 143, 8, 92, // Opcode: MAXA_S
/* 757 */     MCD::OPC_FilterValue, 17, 156, 0, // Skip to: 917
/* 761 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 764 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 777
/* 768 */     MCD::OPC_CheckPredicate, 37, 51, 4, // Skip to: 1847
/* 772 */     MCD::OPC_Decode, 169, 11, 231, 1, // Opcode: SEL_D
/* 777 */     MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 790
/* 781 */     MCD::OPC_CheckPredicate, 37, 38, 4, // Skip to: 1847
/* 785 */     MCD::OPC_Decode, 163, 11, 232, 1, // Opcode: SELEQZ_D
/* 790 */     MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 803
/* 794 */     MCD::OPC_CheckPredicate, 37, 25, 4, // Skip to: 1847
/* 798 */     MCD::OPC_Decode, 167, 11, 232, 1, // Opcode: SELNEZ_D
/* 803 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 816
/* 807 */     MCD::OPC_CheckPredicate, 37, 12, 4, // Skip to: 1847
/* 811 */     MCD::OPC_Decode, 246, 7, 233, 1, // Opcode: MADDF_D
/* 816 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 829
/* 820 */     MCD::OPC_CheckPredicate, 37, 255, 3, // Skip to: 1847
/* 824 */     MCD::OPC_Decode, 136, 9, 233, 1, // Opcode: MSUBF_D
/* 829 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 847
/* 833 */     MCD::OPC_CheckPredicate, 37, 242, 3, // Skip to: 1847
/* 837 */     MCD::OPC_CheckField, 16, 5, 0, 236, 3, // Skip to: 1847
/* 843 */     MCD::OPC_Decode, 232, 10, 104, // Opcode: RINT_D
/* 847 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 865
/* 851 */     MCD::OPC_CheckPredicate, 37, 224, 3, // Skip to: 1847
/* 855 */     MCD::OPC_CheckField, 16, 5, 0, 218, 3, // Skip to: 1847
/* 861 */     MCD::OPC_Decode, 231, 2, 104, // Opcode: CLASS_D
/* 865 */     MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 878
/* 869 */     MCD::OPC_CheckPredicate, 37, 206, 3, // Skip to: 1847
/* 873 */     MCD::OPC_Decode, 197, 8, 232, 1, // Opcode: MIN_D
/* 878 */     MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 891
/* 882 */     MCD::OPC_CheckPredicate, 37, 193, 3, // Skip to: 1847
/* 886 */     MCD::OPC_Decode, 156, 8, 232, 1, // Opcode: MAX_D
/* 891 */     MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 904
/* 895 */     MCD::OPC_CheckPredicate, 37, 180, 3, // Skip to: 1847
/* 899 */     MCD::OPC_Decode, 183, 8, 232, 1, // Opcode: MINA_D
/* 904 */     MCD::OPC_FilterValue, 31, 171, 3, // Skip to: 1847
/* 908 */     MCD::OPC_CheckPredicate, 37, 167, 3, // Skip to: 1847
/* 912 */     MCD::OPC_Decode, 142, 8, 232, 1, // Opcode: MAXA_D
/* 917 */     MCD::OPC_FilterValue, 20, 211, 0, // Skip to: 1132
/* 921 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 924 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 937
/* 928 */     MCD::OPC_CheckPredicate, 37, 147, 3, // Skip to: 1847
/* 932 */     MCD::OPC_Decode, 156, 3, 234, 1, // Opcode: CMP_F_S
/* 937 */     MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 950
/* 941 */     MCD::OPC_CheckPredicate, 37, 134, 3, // Skip to: 1847
/* 945 */     MCD::OPC_Decode, 186, 3, 234, 1, // Opcode: CMP_UN_S
/* 950 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 963
/* 954 */     MCD::OPC_CheckPredicate, 37, 121, 3, // Skip to: 1847
/* 958 */     MCD::OPC_Decode, 154, 3, 234, 1, // Opcode: CMP_EQ_S
/* 963 */     MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 976
/* 967 */     MCD::OPC_CheckPredicate, 37, 108, 3, // Skip to: 1847
/* 971 */     MCD::OPC_Decode, 180, 3, 234, 1, // Opcode: CMP_UEQ_S
/* 976 */     MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 989
/* 980 */     MCD::OPC_CheckPredicate, 37, 95, 3, // Skip to: 1847
/* 984 */     MCD::OPC_Decode, 162, 3, 234, 1, // Opcode: CMP_LT_S
/* 989 */     MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1002
/* 993 */     MCD::OPC_CheckPredicate, 37, 82, 3, // Skip to: 1847
/* 997 */     MCD::OPC_Decode, 184, 3, 234, 1, // Opcode: CMP_ULT_S
/* 1002 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1015
/* 1006 */    MCD::OPC_CheckPredicate, 37, 69, 3, // Skip to: 1847
/* 1010 */    MCD::OPC_Decode, 159, 3, 234, 1, // Opcode: CMP_LE_S
/* 1015 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1028
/* 1019 */    MCD::OPC_CheckPredicate, 37, 56, 3, // Skip to: 1847
/* 1023 */    MCD::OPC_Decode, 182, 3, 234, 1, // Opcode: CMP_ULE_S
/* 1028 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1041
/* 1032 */    MCD::OPC_CheckPredicate, 37, 43, 3, // Skip to: 1847
/* 1036 */    MCD::OPC_Decode, 164, 3, 234, 1, // Opcode: CMP_SAF_S
/* 1041 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1054
/* 1045 */    MCD::OPC_CheckPredicate, 37, 30, 3, // Skip to: 1847
/* 1049 */    MCD::OPC_Decode, 178, 3, 234, 1, // Opcode: CMP_SUN_S
/* 1054 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1067
/* 1058 */    MCD::OPC_CheckPredicate, 37, 17, 3, // Skip to: 1847
/* 1062 */    MCD::OPC_Decode, 166, 3, 234, 1, // Opcode: CMP_SEQ_S
/* 1067 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1080
/* 1071 */    MCD::OPC_CheckPredicate, 37, 4, 3, // Skip to: 1847
/* 1075 */    MCD::OPC_Decode, 172, 3, 234, 1, // Opcode: CMP_SUEQ_S
/* 1080 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1093
/* 1084 */    MCD::OPC_CheckPredicate, 37, 247, 2, // Skip to: 1847
/* 1088 */    MCD::OPC_Decode, 170, 3, 234, 1, // Opcode: CMP_SLT_S
/* 1093 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1106
/* 1097 */    MCD::OPC_CheckPredicate, 37, 234, 2, // Skip to: 1847
/* 1101 */    MCD::OPC_Decode, 176, 3, 234, 1, // Opcode: CMP_SULT_S
/* 1106 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1119
/* 1110 */    MCD::OPC_CheckPredicate, 37, 221, 2, // Skip to: 1847
/* 1114 */    MCD::OPC_Decode, 168, 3, 234, 1, // Opcode: CMP_SLE_S
/* 1119 */    MCD::OPC_FilterValue, 15, 212, 2, // Skip to: 1847
/* 1123 */    MCD::OPC_CheckPredicate, 37, 208, 2, // Skip to: 1847
/* 1127 */    MCD::OPC_Decode, 174, 3, 234, 1, // Opcode: CMP_SULE_S
/* 1132 */    MCD::OPC_FilterValue, 21, 199, 2, // Skip to: 1847
/* 1136 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1139 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1152
/* 1143 */    MCD::OPC_CheckPredicate, 37, 188, 2, // Skip to: 1847
/* 1147 */    MCD::OPC_Decode, 155, 3, 235, 1, // Opcode: CMP_F_D
/* 1152 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1165
/* 1156 */    MCD::OPC_CheckPredicate, 37, 175, 2, // Skip to: 1847
/* 1160 */    MCD::OPC_Decode, 185, 3, 235, 1, // Opcode: CMP_UN_D
/* 1165 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1178
/* 1169 */    MCD::OPC_CheckPredicate, 37, 162, 2, // Skip to: 1847
/* 1173 */    MCD::OPC_Decode, 152, 3, 235, 1, // Opcode: CMP_EQ_D
/* 1178 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1191
/* 1182 */    MCD::OPC_CheckPredicate, 37, 149, 2, // Skip to: 1847
/* 1186 */    MCD::OPC_Decode, 179, 3, 235, 1, // Opcode: CMP_UEQ_D
/* 1191 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1204
/* 1195 */    MCD::OPC_CheckPredicate, 37, 136, 2, // Skip to: 1847
/* 1199 */    MCD::OPC_Decode, 160, 3, 235, 1, // Opcode: CMP_LT_D
/* 1204 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1217
/* 1208 */    MCD::OPC_CheckPredicate, 37, 123, 2, // Skip to: 1847
/* 1212 */    MCD::OPC_Decode, 183, 3, 235, 1, // Opcode: CMP_ULT_D
/* 1217 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1230
/* 1221 */    MCD::OPC_CheckPredicate, 37, 110, 2, // Skip to: 1847
/* 1225 */    MCD::OPC_Decode, 157, 3, 235, 1, // Opcode: CMP_LE_D
/* 1230 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1243
/* 1234 */    MCD::OPC_CheckPredicate, 37, 97, 2, // Skip to: 1847
/* 1238 */    MCD::OPC_Decode, 181, 3, 235, 1, // Opcode: CMP_ULE_D
/* 1243 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1256
/* 1247 */    MCD::OPC_CheckPredicate, 37, 84, 2, // Skip to: 1847
/* 1251 */    MCD::OPC_Decode, 163, 3, 235, 1, // Opcode: CMP_SAF_D
/* 1256 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1269
/* 1260 */    MCD::OPC_CheckPredicate, 37, 71, 2, // Skip to: 1847
/* 1264 */    MCD::OPC_Decode, 177, 3, 235, 1, // Opcode: CMP_SUN_D
/* 1269 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1282
/* 1273 */    MCD::OPC_CheckPredicate, 37, 58, 2, // Skip to: 1847
/* 1277 */    MCD::OPC_Decode, 165, 3, 235, 1, // Opcode: CMP_SEQ_D
/* 1282 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1295
/* 1286 */    MCD::OPC_CheckPredicate, 37, 45, 2, // Skip to: 1847
/* 1290 */    MCD::OPC_Decode, 171, 3, 235, 1, // Opcode: CMP_SUEQ_D
/* 1295 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1308
/* 1299 */    MCD::OPC_CheckPredicate, 37, 32, 2, // Skip to: 1847
/* 1303 */    MCD::OPC_Decode, 169, 3, 235, 1, // Opcode: CMP_SLT_D
/* 1308 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1321
/* 1312 */    MCD::OPC_CheckPredicate, 37, 19, 2, // Skip to: 1847
/* 1316 */    MCD::OPC_Decode, 175, 3, 235, 1, // Opcode: CMP_SULT_D
/* 1321 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1334
/* 1325 */    MCD::OPC_CheckPredicate, 37, 6, 2, // Skip to: 1847
/* 1329 */    MCD::OPC_Decode, 167, 3, 235, 1, // Opcode: CMP_SLE_D
/* 1334 */    MCD::OPC_FilterValue, 15, 253, 1, // Skip to: 1847
/* 1338 */    MCD::OPC_CheckPredicate, 37, 249, 1, // Skip to: 1847
/* 1342 */    MCD::OPC_Decode, 173, 3, 235, 1, // Opcode: CMP_SULE_D
/* 1347 */    MCD::OPC_FilterValue, 18, 81, 0, // Skip to: 1432
/* 1351 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1354 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1367
/* 1358 */    MCD::OPC_CheckPredicate, 37, 229, 1, // Skip to: 1847
/* 1362 */    MCD::OPC_Decode, 184, 1, 236, 1, // Opcode: BC2EQZ
/* 1367 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1380
/* 1371 */    MCD::OPC_CheckPredicate, 37, 216, 1, // Skip to: 1847
/* 1375 */    MCD::OPC_Decode, 206, 7, 237, 1, // Opcode: LWC2_R6
/* 1380 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1393
/* 1384 */    MCD::OPC_CheckPredicate, 37, 203, 1, // Skip to: 1847
/* 1388 */    MCD::OPC_Decode, 228, 12, 237, 1, // Opcode: SWC2_R6
/* 1393 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1406
/* 1397 */    MCD::OPC_CheckPredicate, 37, 190, 1, // Skip to: 1847
/* 1401 */    MCD::OPC_Decode, 185, 1, 236, 1, // Opcode: BC2NEZ
/* 1406 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1419
/* 1410 */    MCD::OPC_CheckPredicate, 37, 177, 1, // Skip to: 1847
/* 1414 */    MCD::OPC_Decode, 153, 7, 237, 1, // Opcode: LDC2_R6
/* 1419 */    MCD::OPC_FilterValue, 15, 168, 1, // Skip to: 1847
/* 1423 */    MCD::OPC_CheckPredicate, 37, 164, 1, // Skip to: 1847
/* 1427 */    MCD::OPC_Decode, 147, 11, 237, 1, // Opcode: SDC2_R6
/* 1432 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 1445
/* 1436 */    MCD::OPC_CheckPredicate, 37, 151, 1, // Skip to: 1847
/* 1440 */    MCD::OPC_Decode, 212, 1, 238, 1, // Opcode: BGEZC
/* 1445 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 1458
/* 1449 */    MCD::OPC_CheckPredicate, 37, 138, 1, // Skip to: 1847
/* 1453 */    MCD::OPC_Decode, 254, 1, 239, 1, // Opcode: BLTZC
/* 1458 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1471
/* 1462 */    MCD::OPC_CheckPredicate, 37, 125, 1, // Skip to: 1847
/* 1466 */    MCD::OPC_Decode, 135, 2, 240, 1, // Opcode: BNEC
/* 1471 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 1484
/* 1475 */    MCD::OPC_CheckPredicate, 38, 112, 1, // Skip to: 1847
/* 1479 */    MCD::OPC_Decode, 154, 4, 241, 1, // Opcode: DAUI
/* 1484 */    MCD::OPC_FilterValue, 31, 182, 0, // Skip to: 1670
/* 1488 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1491 */    MCD::OPC_FilterValue, 32, 40, 0, // Skip to: 1535
/* 1495 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 1498 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1523
/* 1502 */    MCD::OPC_CheckPredicate, 37, 85, 1, // Skip to: 1847
/* 1506 */    MCD::OPC_CheckField, 21, 5, 0, 79, 1, // Skip to: 1847
/* 1512 */    MCD::OPC_CheckField, 6, 2, 0, 73, 1, // Skip to: 1847
/* 1518 */    MCD::OPC_Decode, 238, 1, 204, 1, // Opcode: BITSWAP
/* 1523 */    MCD::OPC_FilterValue, 2, 64, 1, // Skip to: 1847
/* 1527 */    MCD::OPC_CheckPredicate, 37, 60, 1, // Skip to: 1847
/* 1531 */    MCD::OPC_Decode, 81, 220, 1, // Opcode: ALIGN
/* 1535 */    MCD::OPC_FilterValue, 36, 41, 0, // Skip to: 1580
/* 1539 */    MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 1542 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1567
/* 1546 */    MCD::OPC_CheckPredicate, 38, 41, 1, // Skip to: 1847
/* 1550 */    MCD::OPC_CheckField, 21, 5, 0, 35, 1, // Skip to: 1847
/* 1556 */    MCD::OPC_CheckField, 6, 3, 0, 29, 1, // Skip to: 1847
/* 1562 */    MCD::OPC_Decode, 155, 4, 242, 1, // Opcode: DBITSWAP
/* 1567 */    MCD::OPC_FilterValue, 1, 20, 1, // Skip to: 1847
/* 1571 */    MCD::OPC_CheckPredicate, 38, 16, 1, // Skip to: 1847
/* 1575 */    MCD::OPC_Decode, 152, 4, 243, 1, // Opcode: DALIGN
/* 1580 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 1599
/* 1584 */    MCD::OPC_CheckPredicate, 37, 3, 1, // Skip to: 1847
/* 1588 */    MCD::OPC_CheckField, 6, 1, 0, 253, 0, // Skip to: 1847
/* 1594 */    MCD::OPC_Decode, 210, 2, 244, 1, // Opcode: CACHE_R6
/* 1599 */    MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 1612
/* 1603 */    MCD::OPC_CheckPredicate, 37, 240, 0, // Skip to: 1847
/* 1607 */    MCD::OPC_Decode, 137, 11, 245, 1, // Opcode: SC_R6
/* 1612 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 1625
/* 1616 */    MCD::OPC_CheckPredicate, 37, 227, 0, // Skip to: 1847
/* 1620 */    MCD::OPC_Decode, 135, 11, 245, 1, // Opcode: SCD_R6
/* 1625 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 1644
/* 1629 */    MCD::OPC_CheckPredicate, 37, 214, 0, // Skip to: 1847
/* 1633 */    MCD::OPC_CheckField, 6, 1, 0, 208, 0, // Skip to: 1847
/* 1639 */    MCD::OPC_Decode, 170, 10, 244, 1, // Opcode: PREF_R6
/* 1644 */    MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 1657
/* 1648 */    MCD::OPC_CheckPredicate, 37, 195, 0, // Skip to: 1847
/* 1652 */    MCD::OPC_Decode, 184, 7, 245, 1, // Opcode: LL_R6
/* 1657 */    MCD::OPC_FilterValue, 55, 186, 0, // Skip to: 1847
/* 1661 */    MCD::OPC_CheckPredicate, 37, 182, 0, // Skip to: 1847
/* 1665 */    MCD::OPC_Decode, 182, 7, 245, 1, // Opcode: LLD_R6
/* 1670 */    MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 1683
/* 1674 */    MCD::OPC_CheckPredicate, 37, 169, 0, // Skip to: 1847
/* 1678 */    MCD::OPC_Decode, 175, 1, 246, 1, // Opcode: BC
/* 1683 */    MCD::OPC_FilterValue, 54, 23, 0, // Skip to: 1710
/* 1687 */    MCD::OPC_CheckPredicate, 37, 10, 0, // Skip to: 1701
/* 1691 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1701
/* 1697 */    MCD::OPC_Decode, 250, 6, 52, // Opcode: JIC
/* 1701 */    MCD::OPC_CheckPredicate, 37, 142, 0, // Skip to: 1847
/* 1705 */    MCD::OPC_Decode, 200, 1, 247, 1, // Opcode: BEQZC
/* 1710 */    MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 1723
/* 1714 */    MCD::OPC_CheckPredicate, 37, 129, 0, // Skip to: 1847
/* 1718 */    MCD::OPC_Decode, 168, 1, 246, 1, // Opcode: BALC
/* 1723 */    MCD::OPC_FilterValue, 59, 93, 0, // Skip to: 1820
/* 1727 */    MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 1730 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1742
/* 1734 */    MCD::OPC_CheckPredicate, 37, 109, 0, // Skip to: 1847
/* 1738 */    MCD::OPC_Decode, 26, 248, 1, // Opcode: ADDIUPC
/* 1742 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1755
/* 1746 */    MCD::OPC_CheckPredicate, 37, 97, 0, // Skip to: 1847
/* 1750 */    MCD::OPC_Decode, 215, 7, 248, 1, // Opcode: LWPC
/* 1755 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1768
/* 1759 */    MCD::OPC_CheckPredicate, 37, 84, 0, // Skip to: 1847
/* 1763 */    MCD::OPC_Decode, 221, 7, 248, 1, // Opcode: LWUPC
/* 1768 */    MCD::OPC_FilterValue, 3, 75, 0, // Skip to: 1847
/* 1772 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1775 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1788
/* 1779 */    MCD::OPC_CheckPredicate, 38, 64, 0, // Skip to: 1847
/* 1783 */    MCD::OPC_Decode, 160, 7, 249, 1, // Opcode: LDPC
/* 1788 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 1847
/* 1792 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1795 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1808
/* 1799 */    MCD::OPC_CheckPredicate, 37, 44, 0, // Skip to: 1847
/* 1803 */    MCD::OPC_Decode, 138, 1, 250, 1, // Opcode: AUIPC
/* 1808 */    MCD::OPC_FilterValue, 3, 35, 0, // Skip to: 1847
/* 1812 */    MCD::OPC_CheckPredicate, 37, 31, 0, // Skip to: 1847
/* 1816 */    MCD::OPC_Decode, 82, 250, 1, // Opcode: ALUIPC
/* 1820 */    MCD::OPC_FilterValue, 62, 23, 0, // Skip to: 1847
/* 1824 */    MCD::OPC_CheckPredicate, 37, 10, 0, // Skip to: 1838
/* 1828 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1838
/* 1834 */    MCD::OPC_Decode, 249, 6, 52, // Opcode: JIALC
/* 1838 */    MCD::OPC_CheckPredicate, 37, 5, 0, // Skip to: 1847
/* 1842 */    MCD::OPC_Decode, 147, 2, 247, 1, // Opcode: BNEZC
/* 1847 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_Ambiguous32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 6, 24, 0, // Skip to: 31
/* 7 */       MCD::OPC_CheckPredicate, 37, 11, 0, // Skip to: 22
/* 11 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 22
/* 17 */      MCD::OPC_Decode, 241, 1, 225, 1, // Opcode: BLEZALC
/* 22 */      MCD::OPC_CheckPredicate, 37, 145, 0, // Skip to: 171
/* 26 */      MCD::OPC_Decode, 204, 1, 225, 1, // Opcode: BGEUC
/* 31 */      MCD::OPC_FilterValue, 7, 24, 0, // Skip to: 59
/* 35 */      MCD::OPC_CheckPredicate, 37, 11, 0, // Skip to: 50
/* 39 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 50
/* 45 */      MCD::OPC_Decode, 217, 1, 226, 1, // Opcode: BGTZALC
/* 50 */      MCD::OPC_CheckPredicate, 37, 117, 0, // Skip to: 171
/* 54 */      MCD::OPC_Decode, 246, 1, 226, 1, // Opcode: BLTUC
/* 59 */      MCD::OPC_FilterValue, 8, 24, 0, // Skip to: 87
/* 63 */      MCD::OPC_CheckPredicate, 37, 11, 0, // Skip to: 78
/* 67 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 78
/* 73 */      MCD::OPC_Decode, 199, 1, 240, 1, // Opcode: BEQZALC
/* 78 */      MCD::OPC_CheckPredicate, 37, 89, 0, // Skip to: 171
/* 82 */      MCD::OPC_Decode, 156, 2, 227, 1, // Opcode: BOVC
/* 87 */      MCD::OPC_FilterValue, 22, 24, 0, // Skip to: 115
/* 91 */      MCD::OPC_CheckPredicate, 37, 11, 0, // Skip to: 106
/* 95 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 106
/* 101 */     MCD::OPC_Decode, 242, 1, 238, 1, // Opcode: BLEZC
/* 106 */     MCD::OPC_CheckPredicate, 37, 61, 0, // Skip to: 171
/* 110 */     MCD::OPC_Decode, 203, 1, 238, 1, // Opcode: BGEC
/* 115 */     MCD::OPC_FilterValue, 23, 24, 0, // Skip to: 143
/* 119 */     MCD::OPC_CheckPredicate, 37, 11, 0, // Skip to: 134
/* 123 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 134
/* 129 */     MCD::OPC_Decode, 218, 1, 239, 1, // Opcode: BGTZC
/* 134 */     MCD::OPC_CheckPredicate, 37, 33, 0, // Skip to: 171
/* 138 */     MCD::OPC_Decode, 245, 1, 239, 1, // Opcode: BLTC
/* 143 */     MCD::OPC_FilterValue, 24, 24, 0, // Skip to: 171
/* 147 */     MCD::OPC_CheckPredicate, 37, 11, 0, // Skip to: 162
/* 151 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 162
/* 157 */     MCD::OPC_Decode, 146, 2, 240, 1, // Opcode: BNEZALC
/* 162 */     MCD::OPC_CheckPredicate, 37, 5, 0, // Skip to: 171
/* 166 */     MCD::OPC_Decode, 150, 2, 240, 1, // Opcode: BNVC
/* 171 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_GP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3 */       MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 22
/* 7 */       MCD::OPC_CheckPredicate, 40, 30, 0, // Skip to: 41
/* 11 */      MCD::OPC_CheckField, 26, 6, 0, 24, 0, // Skip to: 41
/* 17 */      MCD::OPC_Decode, 162, 11, 223, 1, // Opcode: SELEQZ64
/* 22 */      MCD::OPC_FilterValue, 55, 15, 0, // Skip to: 41
/* 26 */      MCD::OPC_CheckPredicate, 40, 11, 0, // Skip to: 41
/* 30 */      MCD::OPC_CheckField, 26, 6, 0, 5, 0, // Skip to: 41
/* 36 */      MCD::OPC_Decode, 166, 11, 223, 1, // Opcode: SELNEZ64
/* 41 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 112, 1, // Skip to: 375
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 29
/* 14 */      MCD::OPC_CheckPredicate, 19, 246, 8, // Skip to: 2312
/* 18 */      MCD::OPC_CheckField, 6, 5, 0, 240, 8, // Skip to: 2312
/* 24 */      MCD::OPC_Decode, 243, 4, 251, 1, // Opcode: DSLLV
/* 29 */      MCD::OPC_FilterValue, 22, 29, 0, // Skip to: 62
/* 33 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 36 */      MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 49
/* 40 */      MCD::OPC_CheckPredicate, 19, 220, 8, // Skip to: 2312
/* 44 */      MCD::OPC_Decode, 249, 4, 251, 1, // Opcode: DSRLV
/* 49 */      MCD::OPC_FilterValue, 1, 211, 8, // Skip to: 2312
/* 53 */      MCD::OPC_CheckPredicate, 41, 207, 8, // Skip to: 2312
/* 57 */      MCD::OPC_Decode, 236, 4, 251, 1, // Opcode: DROTRV
/* 62 */      MCD::OPC_FilterValue, 23, 15, 0, // Skip to: 81
/* 66 */      MCD::OPC_CheckPredicate, 19, 194, 8, // Skip to: 2312
/* 70 */      MCD::OPC_CheckField, 6, 5, 0, 188, 8, // Skip to: 2312
/* 76 */      MCD::OPC_Decode, 246, 4, 251, 1, // Opcode: DSRAV
/* 81 */      MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 100
/* 85 */      MCD::OPC_CheckPredicate, 42, 175, 8, // Skip to: 2312
/* 89 */      MCD::OPC_CheckField, 6, 10, 0, 169, 8, // Skip to: 2312
/* 95 */      MCD::OPC_Decode, 195, 4, 252, 1, // Opcode: DMULT
/* 100 */     MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 119
/* 104 */     MCD::OPC_CheckPredicate, 42, 156, 8, // Skip to: 2312
/* 108 */     MCD::OPC_CheckField, 6, 10, 0, 150, 8, // Skip to: 2312
/* 114 */     MCD::OPC_Decode, 196, 4, 252, 1, // Opcode: DMULTu
/* 119 */     MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 138
/* 123 */     MCD::OPC_CheckPredicate, 42, 137, 8, // Skip to: 2312
/* 127 */     MCD::OPC_CheckField, 6, 10, 0, 131, 8, // Skip to: 2312
/* 133 */     MCD::OPC_Decode, 238, 4, 252, 1, // Opcode: DSDIV
/* 138 */     MCD::OPC_FilterValue, 31, 15, 0, // Skip to: 157
/* 142 */     MCD::OPC_CheckPredicate, 42, 118, 8, // Skip to: 2312
/* 146 */     MCD::OPC_CheckField, 6, 10, 0, 112, 8, // Skip to: 2312
/* 152 */     MCD::OPC_Decode, 252, 4, 252, 1, // Opcode: DUDIV
/* 157 */     MCD::OPC_FilterValue, 44, 15, 0, // Skip to: 176
/* 161 */     MCD::OPC_CheckPredicate, 19, 99, 8, // Skip to: 2312
/* 165 */     MCD::OPC_CheckField, 6, 5, 0, 93, 8, // Skip to: 2312
/* 171 */     MCD::OPC_Decode, 147, 4, 223, 1, // Opcode: DADD
/* 176 */     MCD::OPC_FilterValue, 45, 15, 0, // Skip to: 195
/* 180 */     MCD::OPC_CheckPredicate, 19, 80, 8, // Skip to: 2312
/* 184 */     MCD::OPC_CheckField, 6, 5, 0, 74, 8, // Skip to: 2312
/* 190 */     MCD::OPC_Decode, 150, 4, 223, 1, // Opcode: DADDu
/* 195 */     MCD::OPC_FilterValue, 46, 15, 0, // Skip to: 214
/* 199 */     MCD::OPC_CheckPredicate, 19, 61, 8, // Skip to: 2312
/* 203 */     MCD::OPC_CheckField, 6, 5, 0, 55, 8, // Skip to: 2312
/* 209 */     MCD::OPC_Decode, 250, 4, 223, 1, // Opcode: DSUB
/* 214 */     MCD::OPC_FilterValue, 47, 15, 0, // Skip to: 233
/* 218 */     MCD::OPC_CheckPredicate, 19, 42, 8, // Skip to: 2312
/* 222 */     MCD::OPC_CheckField, 6, 5, 0, 36, 8, // Skip to: 2312
/* 228 */     MCD::OPC_Decode, 251, 4, 223, 1, // Opcode: DSUBu
/* 233 */     MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 252
/* 237 */     MCD::OPC_CheckPredicate, 19, 23, 8, // Skip to: 2312
/* 241 */     MCD::OPC_CheckField, 21, 5, 0, 17, 8, // Skip to: 2312
/* 247 */     MCD::OPC_Decode, 240, 4, 253, 1, // Opcode: DSLL
/* 252 */     MCD::OPC_FilterValue, 58, 29, 0, // Skip to: 285
/* 256 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 259 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 272
/* 263 */     MCD::OPC_CheckPredicate, 19, 253, 7, // Skip to: 2312
/* 267 */     MCD::OPC_Decode, 247, 4, 253, 1, // Opcode: DSRL
/* 272 */     MCD::OPC_FilterValue, 1, 244, 7, // Skip to: 2312
/* 276 */     MCD::OPC_CheckPredicate, 41, 240, 7, // Skip to: 2312
/* 280 */     MCD::OPC_Decode, 234, 4, 253, 1, // Opcode: DROTR
/* 285 */     MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 304
/* 289 */     MCD::OPC_CheckPredicate, 19, 227, 7, // Skip to: 2312
/* 293 */     MCD::OPC_CheckField, 21, 5, 0, 221, 7, // Skip to: 2312
/* 299 */     MCD::OPC_Decode, 244, 4, 253, 1, // Opcode: DSRA
/* 304 */     MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 323
/* 308 */     MCD::OPC_CheckPredicate, 19, 208, 7, // Skip to: 2312
/* 312 */     MCD::OPC_CheckField, 21, 5, 0, 202, 7, // Skip to: 2312
/* 318 */     MCD::OPC_Decode, 241, 4, 253, 1, // Opcode: DSLL32
/* 323 */     MCD::OPC_FilterValue, 62, 29, 0, // Skip to: 356
/* 327 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 330 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 343
/* 334 */     MCD::OPC_CheckPredicate, 19, 182, 7, // Skip to: 2312
/* 338 */     MCD::OPC_Decode, 248, 4, 253, 1, // Opcode: DSRL32
/* 343 */     MCD::OPC_FilterValue, 1, 173, 7, // Skip to: 2312
/* 347 */     MCD::OPC_CheckPredicate, 41, 169, 7, // Skip to: 2312
/* 351 */     MCD::OPC_Decode, 235, 4, 253, 1, // Opcode: DROTR32
/* 356 */     MCD::OPC_FilterValue, 63, 160, 7, // Skip to: 2312
/* 360 */     MCD::OPC_CheckPredicate, 19, 156, 7, // Skip to: 2312
/* 364 */     MCD::OPC_CheckField, 21, 5, 0, 150, 7, // Skip to: 2312
/* 370 */     MCD::OPC_Decode, 245, 4, 253, 1, // Opcode: DSRA32
/* 375 */     MCD::OPC_FilterValue, 16, 41, 0, // Skip to: 420
/* 379 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 382 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 401
/* 386 */     MCD::OPC_CheckPredicate, 43, 130, 7, // Skip to: 2312
/* 390 */     MCD::OPC_CheckField, 3, 8, 0, 124, 7, // Skip to: 2312
/* 396 */     MCD::OPC_Decode, 184, 4, 254, 1, // Opcode: DMFC0
/* 401 */     MCD::OPC_FilterValue, 5, 115, 7, // Skip to: 2312
/* 405 */     MCD::OPC_CheckPredicate, 43, 111, 7, // Skip to: 2312
/* 409 */     MCD::OPC_CheckField, 3, 8, 0, 105, 7, // Skip to: 2312
/* 415 */     MCD::OPC_Decode, 189, 4, 254, 1, // Opcode: DMTC0
/* 420 */     MCD::OPC_FilterValue, 17, 222, 3, // Skip to: 1414
/* 424 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 427 */     MCD::OPC_FilterValue, 0, 54, 0, // Skip to: 485
/* 431 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 434 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 453
/* 438 */     MCD::OPC_CheckPredicate, 44, 78, 7, // Skip to: 2312
/* 442 */     MCD::OPC_CheckField, 6, 5, 0, 72, 7, // Skip to: 2312
/* 448 */     MCD::OPC_Decode, 171, 8, 255, 1, // Opcode: MFHC1_D64
/* 453 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 472
/* 457 */     MCD::OPC_CheckPredicate, 44, 59, 7, // Skip to: 2312
/* 461 */     MCD::OPC_CheckField, 6, 5, 0, 53, 7, // Skip to: 2312
/* 467 */     MCD::OPC_Decode, 161, 9, 128, 2, // Opcode: MTHC1_D64
/* 472 */     MCD::OPC_FilterValue, 17, 44, 7, // Skip to: 2312
/* 476 */     MCD::OPC_CheckPredicate, 45, 40, 7, // Skip to: 2312
/* 480 */     MCD::OPC_Decode, 160, 5, 232, 1, // Opcode: FADD_D64
/* 485 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 504
/* 489 */     MCD::OPC_CheckPredicate, 45, 27, 7, // Skip to: 2312
/* 493 */     MCD::OPC_CheckField, 21, 5, 17, 21, 7, // Skip to: 2312
/* 499 */     MCD::OPC_Decode, 162, 6, 232, 1, // Opcode: FSUB_D64
/* 504 */     MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 523
/* 508 */     MCD::OPC_CheckPredicate, 45, 8, 7, // Skip to: 2312
/* 512 */     MCD::OPC_CheckField, 21, 5, 17, 2, 7, // Skip to: 2312
/* 518 */     MCD::OPC_Decode, 253, 5, 232, 1, // Opcode: FMUL_D64
/* 523 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 542
/* 527 */     MCD::OPC_CheckPredicate, 45, 245, 6, // Skip to: 2312
/* 531 */     MCD::OPC_CheckField, 21, 5, 17, 239, 6, // Skip to: 2312
/* 537 */     MCD::OPC_Decode, 196, 5, 232, 1, // Opcode: FDIV_D64
/* 542 */     MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 561
/* 546 */     MCD::OPC_CheckPredicate, 46, 226, 6, // Skip to: 2312
/* 550 */     MCD::OPC_CheckField, 16, 10, 160, 4, 219, 6, // Skip to: 2312
/* 557 */     MCD::OPC_Decode, 155, 6, 104, // Opcode: FSQRT_D64
/* 561 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 580
/* 565 */     MCD::OPC_CheckPredicate, 45, 207, 6, // Skip to: 2312
/* 569 */     MCD::OPC_CheckField, 16, 10, 160, 4, 200, 6, // Skip to: 2312
/* 576 */     MCD::OPC_Decode, 153, 5, 104, // Opcode: FABS_D64
/* 580 */     MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 599
/* 584 */     MCD::OPC_CheckPredicate, 45, 188, 6, // Skip to: 2312
/* 588 */     MCD::OPC_CheckField, 16, 10, 160, 4, 181, 6, // Skip to: 2312
/* 595 */     MCD::OPC_Decode, 246, 5, 104, // Opcode: FMOV_D64
/* 599 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 618
/* 603 */     MCD::OPC_CheckPredicate, 45, 169, 6, // Skip to: 2312
/* 607 */     MCD::OPC_CheckField, 16, 10, 160, 4, 162, 6, // Skip to: 2312
/* 614 */     MCD::OPC_Decode, 131, 6, 104, // Opcode: FNEG_D64
/* 618 */     MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 651
/* 622 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 625 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 638
/* 630 */     MCD::OPC_CheckPredicate, 45, 142, 6, // Skip to: 2312
/* 634 */     MCD::OPC_Decode, 239, 10, 97, // Opcode: ROUND_L_S
/* 638 */     MCD::OPC_FilterValue, 160, 4, 133, 6, // Skip to: 2312
/* 643 */     MCD::OPC_CheckPredicate, 45, 129, 6, // Skip to: 2312
/* 647 */     MCD::OPC_Decode, 238, 10, 104, // Opcode: ROUND_L_D64
/* 651 */     MCD::OPC_FilterValue, 9, 29, 0, // Skip to: 684
/* 655 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 658 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 671
/* 663 */     MCD::OPC_CheckPredicate, 45, 109, 6, // Skip to: 2312
/* 667 */     MCD::OPC_Decode, 202, 13, 97, // Opcode: TRUNC_L_S
/* 671 */     MCD::OPC_FilterValue, 160, 4, 100, 6, // Skip to: 2312
/* 676 */     MCD::OPC_CheckPredicate, 45, 96, 6, // Skip to: 2312
/* 680 */     MCD::OPC_Decode, 201, 13, 104, // Opcode: TRUNC_L_D64
/* 684 */     MCD::OPC_FilterValue, 10, 29, 0, // Skip to: 717
/* 688 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 691 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 704
/* 696 */     MCD::OPC_CheckPredicate, 45, 76, 6, // Skip to: 2312
/* 700 */     MCD::OPC_Decode, 212, 2, 97, // Opcode: CEIL_L_S
/* 704 */     MCD::OPC_FilterValue, 160, 4, 67, 6, // Skip to: 2312
/* 709 */     MCD::OPC_CheckPredicate, 45, 63, 6, // Skip to: 2312
/* 713 */     MCD::OPC_Decode, 211, 2, 104, // Opcode: CEIL_L_D64
/* 717 */     MCD::OPC_FilterValue, 11, 29, 0, // Skip to: 750
/* 721 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 724 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 737
/* 729 */     MCD::OPC_CheckPredicate, 45, 43, 6, // Skip to: 2312
/* 733 */     MCD::OPC_Decode, 228, 5, 97, // Opcode: FLOOR_L_S
/* 737 */     MCD::OPC_FilterValue, 160, 4, 34, 6, // Skip to: 2312
/* 742 */     MCD::OPC_CheckPredicate, 45, 30, 6, // Skip to: 2312
/* 746 */     MCD::OPC_Decode, 227, 5, 104, // Opcode: FLOOR_L_D64
/* 750 */     MCD::OPC_FilterValue, 12, 16, 0, // Skip to: 770
/* 754 */     MCD::OPC_CheckPredicate, 46, 18, 6, // Skip to: 2312
/* 758 */     MCD::OPC_CheckField, 16, 10, 160, 4, 11, 6, // Skip to: 2312
/* 765 */     MCD::OPC_Decode, 241, 10, 129, 2, // Opcode: ROUND_W_D64
/* 770 */     MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 790
/* 774 */     MCD::OPC_CheckPredicate, 46, 254, 5, // Skip to: 2312
/* 778 */     MCD::OPC_CheckField, 16, 10, 160, 4, 247, 5, // Skip to: 2312
/* 785 */     MCD::OPC_Decode, 204, 13, 129, 2, // Opcode: TRUNC_W_D64
/* 790 */     MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 810
/* 794 */     MCD::OPC_CheckPredicate, 46, 234, 5, // Skip to: 2312
/* 798 */     MCD::OPC_CheckField, 16, 10, 160, 4, 227, 5, // Skip to: 2312
/* 805 */     MCD::OPC_Decode, 214, 2, 129, 2, // Opcode: CEIL_W_D64
/* 810 */     MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 830
/* 814 */     MCD::OPC_CheckPredicate, 46, 214, 5, // Skip to: 2312
/* 818 */     MCD::OPC_CheckField, 16, 10, 160, 4, 207, 5, // Skip to: 2312
/* 825 */     MCD::OPC_Decode, 230, 5, 129, 2, // Opcode: FLOOR_W_D64
/* 830 */     MCD::OPC_FilterValue, 17, 41, 0, // Skip to: 875
/* 834 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 837 */     MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 856
/* 841 */     MCD::OPC_CheckPredicate, 47, 187, 5, // Skip to: 2312
/* 845 */     MCD::OPC_CheckField, 21, 5, 17, 181, 5, // Skip to: 2312
/* 851 */     MCD::OPC_Decode, 225, 8, 130, 2, // Opcode: MOVF_D64
/* 856 */     MCD::OPC_FilterValue, 1, 172, 5, // Skip to: 2312
/* 860 */     MCD::OPC_CheckPredicate, 47, 168, 5, // Skip to: 2312
/* 864 */     MCD::OPC_CheckField, 21, 5, 17, 162, 5, // Skip to: 2312
/* 870 */     MCD::OPC_Decode, 245, 8, 130, 2, // Opcode: MOVT_D64
/* 875 */     MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 894
/* 879 */     MCD::OPC_CheckPredicate, 47, 149, 5, // Skip to: 2312
/* 883 */     MCD::OPC_CheckField, 21, 5, 17, 143, 5, // Skip to: 2312
/* 889 */     MCD::OPC_Decode, 129, 9, 131, 2, // Opcode: MOVZ_I_D64
/* 894 */     MCD::OPC_FilterValue, 19, 15, 0, // Skip to: 913
/* 898 */     MCD::OPC_CheckPredicate, 47, 130, 5, // Skip to: 2312
/* 902 */     MCD::OPC_CheckField, 21, 5, 17, 124, 5, // Skip to: 2312
/* 908 */     MCD::OPC_Decode, 237, 8, 131, 2, // Opcode: MOVN_I_D64
/* 913 */     MCD::OPC_FilterValue, 32, 31, 0, // Skip to: 948
/* 917 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 920 */     MCD::OPC_FilterValue, 160, 4, 9, 0, // Skip to: 934
/* 925 */     MCD::OPC_CheckPredicate, 45, 103, 5, // Skip to: 2312
/* 929 */     MCD::OPC_Decode, 214, 3, 129, 2, // Opcode: CVT_S_D64
/* 934 */     MCD::OPC_FilterValue, 160, 5, 93, 5, // Skip to: 2312
/* 939 */     MCD::OPC_CheckPredicate, 45, 89, 5, // Skip to: 2312
/* 943 */     MCD::OPC_Decode, 215, 3, 129, 2, // Opcode: CVT_S_L
/* 948 */     MCD::OPC_FilterValue, 33, 42, 0, // Skip to: 994
/* 952 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 955 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 968
/* 960 */     MCD::OPC_CheckPredicate, 45, 68, 5, // Skip to: 2312
/* 964 */     MCD::OPC_Decode, 205, 3, 97, // Opcode: CVT_D64_S
/* 968 */     MCD::OPC_FilterValue, 128, 5, 8, 0, // Skip to: 981
/* 973 */     MCD::OPC_CheckPredicate, 45, 55, 5, // Skip to: 2312
/* 977 */     MCD::OPC_Decode, 206, 3, 97, // Opcode: CVT_D64_W
/* 981 */     MCD::OPC_FilterValue, 160, 5, 46, 5, // Skip to: 2312
/* 986 */     MCD::OPC_CheckPredicate, 45, 42, 5, // Skip to: 2312
/* 990 */     MCD::OPC_Decode, 204, 3, 104, // Opcode: CVT_D64_L
/* 994 */     MCD::OPC_FilterValue, 36, 16, 0, // Skip to: 1014
/* 998 */     MCD::OPC_CheckPredicate, 45, 30, 5, // Skip to: 2312
/* 1002 */    MCD::OPC_CheckField, 16, 10, 160, 4, 23, 5, // Skip to: 2312
/* 1009 */    MCD::OPC_Decode, 219, 3, 129, 2, // Opcode: CVT_W_D64
/* 1014 */    MCD::OPC_FilterValue, 48, 21, 0, // Skip to: 1039
/* 1018 */    MCD::OPC_CheckPredicate, 48, 10, 5, // Skip to: 2312
/* 1022 */    MCD::OPC_CheckField, 21, 5, 17, 4, 5, // Skip to: 2312
/* 1028 */    MCD::OPC_CheckField, 6, 5, 0, 254, 4, // Skip to: 2312
/* 1034 */    MCD::OPC_Decode, 227, 3, 132, 2, // Opcode: C_F_D64
/* 1039 */    MCD::OPC_FilterValue, 49, 21, 0, // Skip to: 1064
/* 1043 */    MCD::OPC_CheckPredicate, 48, 241, 4, // Skip to: 2312
/* 1047 */    MCD::OPC_CheckField, 21, 5, 17, 235, 4, // Skip to: 2312
/* 1053 */    MCD::OPC_CheckField, 6, 5, 0, 229, 4, // Skip to: 2312
/* 1059 */    MCD::OPC_Decode, 141, 4, 132, 2, // Opcode: C_UN_D64
/* 1064 */    MCD::OPC_FilterValue, 50, 21, 0, // Skip to: 1089
/* 1068 */    MCD::OPC_CheckPredicate, 48, 216, 4, // Skip to: 2312
/* 1072 */    MCD::OPC_CheckField, 21, 5, 17, 210, 4, // Skip to: 2312
/* 1078 */    MCD::OPC_CheckField, 6, 5, 0, 204, 4, // Skip to: 2312
/* 1084 */    MCD::OPC_Decode, 224, 3, 132, 2, // Opcode: C_EQ_D64
/* 1089 */    MCD::OPC_FilterValue, 51, 21, 0, // Skip to: 1114
/* 1093 */    MCD::OPC_CheckPredicate, 48, 191, 4, // Skip to: 2312
/* 1097 */    MCD::OPC_CheckField, 21, 5, 17, 185, 4, // Skip to: 2312
/* 1103 */    MCD::OPC_CheckField, 6, 5, 0, 179, 4, // Skip to: 2312
/* 1109 */    MCD::OPC_Decode, 132, 4, 132, 2, // Opcode: C_UEQ_D64
/* 1114 */    MCD::OPC_FilterValue, 52, 21, 0, // Skip to: 1139
/* 1118 */    MCD::OPC_CheckPredicate, 48, 166, 4, // Skip to: 2312
/* 1122 */    MCD::OPC_CheckField, 21, 5, 17, 160, 4, // Skip to: 2312
/* 1128 */    MCD::OPC_CheckField, 6, 5, 0, 154, 4, // Skip to: 2312
/* 1134 */    MCD::OPC_Decode, 251, 3, 132, 2, // Opcode: C_OLT_D64
/* 1139 */    MCD::OPC_FilterValue, 53, 21, 0, // Skip to: 1164
/* 1143 */    MCD::OPC_CheckPredicate, 48, 141, 4, // Skip to: 2312
/* 1147 */    MCD::OPC_CheckField, 21, 5, 17, 135, 4, // Skip to: 2312
/* 1153 */    MCD::OPC_CheckField, 6, 5, 0, 129, 4, // Skip to: 2312
/* 1159 */    MCD::OPC_Decode, 138, 4, 132, 2, // Opcode: C_ULT_D64
/* 1164 */    MCD::OPC_FilterValue, 54, 21, 0, // Skip to: 1189
/* 1168 */    MCD::OPC_CheckPredicate, 48, 116, 4, // Skip to: 2312
/* 1172 */    MCD::OPC_CheckField, 21, 5, 17, 110, 4, // Skip to: 2312
/* 1178 */    MCD::OPC_CheckField, 6, 5, 0, 104, 4, // Skip to: 2312
/* 1184 */    MCD::OPC_Decode, 248, 3, 132, 2, // Opcode: C_OLE_D64
/* 1189 */    MCD::OPC_FilterValue, 55, 21, 0, // Skip to: 1214
/* 1193 */    MCD::OPC_CheckPredicate, 48, 91, 4, // Skip to: 2312
/* 1197 */    MCD::OPC_CheckField, 21, 5, 17, 85, 4, // Skip to: 2312
/* 1203 */    MCD::OPC_CheckField, 6, 5, 0, 79, 4, // Skip to: 2312
/* 1209 */    MCD::OPC_Decode, 135, 4, 132, 2, // Opcode: C_ULE_D64
/* 1214 */    MCD::OPC_FilterValue, 56, 21, 0, // Skip to: 1239
/* 1218 */    MCD::OPC_CheckPredicate, 48, 66, 4, // Skip to: 2312
/* 1222 */    MCD::OPC_CheckField, 21, 5, 17, 60, 4, // Skip to: 2312
/* 1228 */    MCD::OPC_CheckField, 6, 5, 0, 54, 4, // Skip to: 2312
/* 1234 */    MCD::OPC_Decode, 129, 4, 132, 2, // Opcode: C_SF_D64
/* 1239 */    MCD::OPC_FilterValue, 57, 21, 0, // Skip to: 1264
/* 1243 */    MCD::OPC_CheckPredicate, 48, 41, 4, // Skip to: 2312
/* 1247 */    MCD::OPC_CheckField, 21, 5, 17, 35, 4, // Skip to: 2312
/* 1253 */    MCD::OPC_CheckField, 6, 5, 0, 29, 4, // Skip to: 2312
/* 1259 */    MCD::OPC_Decode, 239, 3, 132, 2, // Opcode: C_NGLE_D64
/* 1264 */    MCD::OPC_FilterValue, 58, 21, 0, // Skip to: 1289
/* 1268 */    MCD::OPC_CheckPredicate, 48, 16, 4, // Skip to: 2312
/* 1272 */    MCD::OPC_CheckField, 21, 5, 17, 10, 4, // Skip to: 2312
/* 1278 */    MCD::OPC_CheckField, 6, 5, 0, 4, 4, // Skip to: 2312
/* 1284 */    MCD::OPC_Decode, 254, 3, 132, 2, // Opcode: C_SEQ_D64
/* 1289 */    MCD::OPC_FilterValue, 59, 21, 0, // Skip to: 1314
/* 1293 */    MCD::OPC_CheckPredicate, 48, 247, 3, // Skip to: 2312
/* 1297 */    MCD::OPC_CheckField, 21, 5, 17, 241, 3, // Skip to: 2312
/* 1303 */    MCD::OPC_CheckField, 6, 5, 0, 235, 3, // Skip to: 2312
/* 1309 */    MCD::OPC_Decode, 242, 3, 132, 2, // Opcode: C_NGL_D64
/* 1314 */    MCD::OPC_FilterValue, 60, 21, 0, // Skip to: 1339
/* 1318 */    MCD::OPC_CheckPredicate, 48, 222, 3, // Skip to: 2312
/* 1322 */    MCD::OPC_CheckField, 21, 5, 17, 216, 3, // Skip to: 2312
/* 1328 */    MCD::OPC_CheckField, 6, 5, 0, 210, 3, // Skip to: 2312
/* 1334 */    MCD::OPC_Decode, 233, 3, 132, 2, // Opcode: C_LT_D64
/* 1339 */    MCD::OPC_FilterValue, 61, 21, 0, // Skip to: 1364
/* 1343 */    MCD::OPC_CheckPredicate, 48, 197, 3, // Skip to: 2312
/* 1347 */    MCD::OPC_CheckField, 21, 5, 17, 191, 3, // Skip to: 2312
/* 1353 */    MCD::OPC_CheckField, 6, 5, 0, 185, 3, // Skip to: 2312
/* 1359 */    MCD::OPC_Decode, 236, 3, 132, 2, // Opcode: C_NGE_D64
/* 1364 */    MCD::OPC_FilterValue, 62, 21, 0, // Skip to: 1389
/* 1368 */    MCD::OPC_CheckPredicate, 48, 172, 3, // Skip to: 2312
/* 1372 */    MCD::OPC_CheckField, 21, 5, 17, 166, 3, // Skip to: 2312
/* 1378 */    MCD::OPC_CheckField, 6, 5, 0, 160, 3, // Skip to: 2312
/* 1384 */    MCD::OPC_Decode, 230, 3, 132, 2, // Opcode: C_LE_D64
/* 1389 */    MCD::OPC_FilterValue, 63, 151, 3, // Skip to: 2312
/* 1393 */    MCD::OPC_CheckPredicate, 48, 147, 3, // Skip to: 2312
/* 1397 */    MCD::OPC_CheckField, 21, 5, 17, 141, 3, // Skip to: 2312
/* 1403 */    MCD::OPC_CheckField, 6, 5, 0, 135, 3, // Skip to: 2312
/* 1409 */    MCD::OPC_Decode, 245, 3, 132, 2, // Opcode: C_NGT_D64
/* 1414 */    MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 1459
/* 1418 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1421 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1440
/* 1425 */    MCD::OPC_CheckPredicate, 43, 115, 3, // Skip to: 2312
/* 1429 */    MCD::OPC_CheckField, 3, 8, 0, 109, 3, // Skip to: 2312
/* 1435 */    MCD::OPC_Decode, 186, 4, 254, 1, // Opcode: DMFC2
/* 1440 */    MCD::OPC_FilterValue, 5, 100, 3, // Skip to: 2312
/* 1444 */    MCD::OPC_CheckPredicate, 43, 96, 3, // Skip to: 2312
/* 1448 */    MCD::OPC_CheckField, 3, 8, 0, 90, 3, // Skip to: 2312
/* 1454 */    MCD::OPC_Decode, 191, 4, 254, 1, // Opcode: DMTC2
/* 1459 */    MCD::OPC_FilterValue, 19, 79, 0, // Skip to: 1542
/* 1463 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1466 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1485
/* 1470 */    MCD::OPC_CheckPredicate, 49, 70, 3, // Skip to: 2312
/* 1474 */    MCD::OPC_CheckField, 11, 5, 0, 64, 3, // Skip to: 2312
/* 1480 */    MCD::OPC_Decode, 163, 7, 133, 2, // Opcode: LDXC164
/* 1485 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1504
/* 1489 */    MCD::OPC_CheckPredicate, 50, 51, 3, // Skip to: 2312
/* 1493 */    MCD::OPC_CheckField, 11, 5, 0, 45, 3, // Skip to: 2312
/* 1499 */    MCD::OPC_Decode, 195, 7, 133, 2, // Opcode: LUXC164
/* 1504 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 1523
/* 1508 */    MCD::OPC_CheckPredicate, 49, 32, 3, // Skip to: 2312
/* 1512 */    MCD::OPC_CheckField, 6, 5, 0, 26, 3, // Skip to: 2312
/* 1518 */    MCD::OPC_Decode, 154, 11, 134, 2, // Opcode: SDXC164
/* 1523 */    MCD::OPC_FilterValue, 13, 17, 3, // Skip to: 2312
/* 1527 */    MCD::OPC_CheckPredicate, 50, 13, 3, // Skip to: 2312
/* 1531 */    MCD::OPC_CheckField, 6, 5, 0, 7, 3, // Skip to: 2312
/* 1537 */    MCD::OPC_Decode, 220, 12, 134, 2, // Opcode: SUXC164
/* 1542 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1555
/* 1546 */    MCD::OPC_CheckPredicate, 42, 250, 2, // Skip to: 2312
/* 1550 */    MCD::OPC_Decode, 148, 4, 135, 2, // Opcode: DADDi
/* 1555 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 1568
/* 1559 */    MCD::OPC_CheckPredicate, 19, 237, 2, // Skip to: 2312
/* 1563 */    MCD::OPC_Decode, 149, 4, 135, 2, // Opcode: DADDiu
/* 1568 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1581
/* 1572 */    MCD::OPC_CheckPredicate, 42, 224, 2, // Skip to: 2312
/* 1576 */    MCD::OPC_Decode, 159, 7, 216, 1, // Opcode: LDL
/* 1581 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 1594
/* 1585 */    MCD::OPC_CheckPredicate, 42, 211, 2, // Skip to: 2312
/* 1589 */    MCD::OPC_Decode, 161, 7, 216, 1, // Opcode: LDR
/* 1594 */    MCD::OPC_FilterValue, 28, 159, 1, // Skip to: 2013
/* 1598 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1601 */    MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 1620
/* 1605 */    MCD::OPC_CheckPredicate, 51, 191, 2, // Skip to: 2312
/* 1609 */    MCD::OPC_CheckField, 6, 5, 0, 185, 2, // Skip to: 2312
/* 1615 */    MCD::OPC_Decode, 194, 4, 223, 1, // Opcode: DMUL
/* 1620 */    MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 1639
/* 1624 */    MCD::OPC_CheckPredicate, 51, 172, 2, // Skip to: 2312
/* 1628 */    MCD::OPC_CheckField, 6, 15, 0, 166, 2, // Skip to: 2312
/* 1634 */    MCD::OPC_Decode, 172, 9, 136, 2, // Opcode: MTM0
/* 1639 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 1658
/* 1643 */    MCD::OPC_CheckPredicate, 51, 153, 2, // Skip to: 2312
/* 1647 */    MCD::OPC_CheckField, 6, 15, 0, 147, 2, // Skip to: 2312
/* 1653 */    MCD::OPC_Decode, 175, 9, 136, 2, // Opcode: MTP0
/* 1658 */    MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 1677
/* 1662 */    MCD::OPC_CheckPredicate, 51, 134, 2, // Skip to: 2312
/* 1666 */    MCD::OPC_CheckField, 6, 15, 0, 128, 2, // Skip to: 2312
/* 1672 */    MCD::OPC_Decode, 176, 9, 136, 2, // Opcode: MTP1
/* 1677 */    MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 1696
/* 1681 */    MCD::OPC_CheckPredicate, 51, 115, 2, // Skip to: 2312
/* 1685 */    MCD::OPC_CheckField, 6, 15, 0, 109, 2, // Skip to: 2312
/* 1691 */    MCD::OPC_Decode, 177, 9, 136, 2, // Opcode: MTP2
/* 1696 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 1715
/* 1700 */    MCD::OPC_CheckPredicate, 51, 96, 2, // Skip to: 2312
/* 1704 */    MCD::OPC_CheckField, 6, 15, 0, 90, 2, // Skip to: 2312
/* 1710 */    MCD::OPC_Decode, 173, 9, 136, 2, // Opcode: MTM1
/* 1715 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 1734
/* 1719 */    MCD::OPC_CheckPredicate, 51, 77, 2, // Skip to: 2312
/* 1723 */    MCD::OPC_CheckField, 6, 15, 0, 71, 2, // Skip to: 2312
/* 1729 */    MCD::OPC_Decode, 174, 9, 136, 2, // Opcode: MTM2
/* 1734 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 1753
/* 1738 */    MCD::OPC_CheckPredicate, 51, 58, 2, // Skip to: 2312
/* 1742 */    MCD::OPC_CheckField, 6, 5, 0, 52, 2, // Skip to: 2312
/* 1748 */    MCD::OPC_Decode, 213, 13, 223, 1, // Opcode: VMULU
/* 1753 */    MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 1772
/* 1757 */    MCD::OPC_CheckPredicate, 51, 39, 2, // Skip to: 2312
/* 1761 */    MCD::OPC_CheckField, 6, 5, 0, 33, 2, // Skip to: 2312
/* 1767 */    MCD::OPC_Decode, 212, 13, 223, 1, // Opcode: VMM0
/* 1772 */    MCD::OPC_FilterValue, 17, 15, 0, // Skip to: 1791
/* 1776 */    MCD::OPC_CheckPredicate, 51, 20, 2, // Skip to: 2312
/* 1780 */    MCD::OPC_CheckField, 6, 5, 0, 14, 2, // Skip to: 2312
/* 1786 */    MCD::OPC_Decode, 211, 13, 223, 1, // Opcode: V3MULU
/* 1791 */    MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 1810
/* 1795 */    MCD::OPC_CheckPredicate, 52, 1, 2, // Skip to: 2312
/* 1799 */    MCD::OPC_CheckField, 6, 5, 0, 251, 1, // Skip to: 2312
/* 1805 */    MCD::OPC_Decode, 158, 4, 137, 2, // Opcode: DCLZ
/* 1810 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 1829
/* 1814 */    MCD::OPC_CheckPredicate, 52, 238, 1, // Skip to: 2312
/* 1818 */    MCD::OPC_CheckField, 6, 5, 0, 232, 1, // Skip to: 2312
/* 1824 */    MCD::OPC_Decode, 156, 4, 137, 2, // Opcode: DCLO
/* 1829 */    MCD::OPC_FilterValue, 40, 15, 0, // Skip to: 1848
/* 1833 */    MCD::OPC_CheckPredicate, 51, 219, 1, // Skip to: 2312
/* 1837 */    MCD::OPC_CheckField, 6, 5, 0, 213, 1, // Skip to: 2312
/* 1843 */    MCD::OPC_Decode, 166, 1, 223, 1, // Opcode: BADDu
/* 1848 */    MCD::OPC_FilterValue, 42, 15, 0, // Skip to: 1867
/* 1852 */    MCD::OPC_CheckPredicate, 51, 200, 1, // Skip to: 2312
/* 1856 */    MCD::OPC_CheckField, 6, 5, 0, 194, 1, // Skip to: 2312
/* 1862 */    MCD::OPC_Decode, 171, 11, 223, 1, // Opcode: SEQ
/* 1867 */    MCD::OPC_FilterValue, 43, 15, 0, // Skip to: 1886
/* 1871 */    MCD::OPC_CheckPredicate, 51, 181, 1, // Skip to: 2312
/* 1875 */    MCD::OPC_CheckField, 6, 5, 0, 175, 1, // Skip to: 2312
/* 1881 */    MCD::OPC_Decode, 239, 11, 223, 1, // Opcode: SNE
/* 1886 */    MCD::OPC_FilterValue, 44, 20, 0, // Skip to: 1910
/* 1890 */    MCD::OPC_CheckPredicate, 51, 162, 1, // Skip to: 2312
/* 1894 */    MCD::OPC_CheckField, 16, 5, 0, 156, 1, // Skip to: 2312
/* 1900 */    MCD::OPC_CheckField, 6, 5, 0, 150, 1, // Skip to: 2312
/* 1906 */    MCD::OPC_Decode, 150, 10, 62, // Opcode: POP
/* 1910 */    MCD::OPC_FilterValue, 45, 21, 0, // Skip to: 1935
/* 1914 */    MCD::OPC_CheckPredicate, 51, 138, 1, // Skip to: 2312
/* 1918 */    MCD::OPC_CheckField, 16, 5, 0, 132, 1, // Skip to: 2312
/* 1924 */    MCD::OPC_CheckField, 6, 5, 0, 126, 1, // Skip to: 2312
/* 1930 */    MCD::OPC_Decode, 219, 4, 221, 1, // Opcode: DPOP
/* 1935 */    MCD::OPC_FilterValue, 46, 9, 0, // Skip to: 1948
/* 1939 */    MCD::OPC_CheckPredicate, 51, 113, 1, // Skip to: 2312
/* 1943 */    MCD::OPC_Decode, 172, 11, 138, 2, // Opcode: SEQi
/* 1948 */    MCD::OPC_FilterValue, 47, 9, 0, // Skip to: 1961
/* 1952 */    MCD::OPC_CheckPredicate, 51, 100, 1, // Skip to: 2312
/* 1956 */    MCD::OPC_Decode, 240, 11, 138, 2, // Opcode: SNEi
/* 1961 */    MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 1974
/* 1965 */    MCD::OPC_CheckPredicate, 51, 87, 1, // Skip to: 2312
/* 1969 */    MCD::OPC_Decode, 229, 2, 139, 2, // Opcode: CINS
/* 1974 */    MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 1987
/* 1978 */    MCD::OPC_CheckPredicate, 51, 74, 1, // Skip to: 2312
/* 1982 */    MCD::OPC_Decode, 230, 2, 139, 2, // Opcode: CINS32
/* 1987 */    MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 2000
/* 1991 */    MCD::OPC_CheckPredicate, 51, 61, 1, // Skip to: 2312
/* 1995 */    MCD::OPC_Decode, 146, 5, 139, 2, // Opcode: EXTS
/* 2000 */    MCD::OPC_FilterValue, 59, 52, 1, // Skip to: 2312
/* 2004 */    MCD::OPC_CheckPredicate, 51, 48, 1, // Skip to: 2312
/* 2008 */    MCD::OPC_Decode, 147, 5, 139, 2, // Opcode: EXTS32
/* 2013 */    MCD::OPC_FilterValue, 31, 126, 0, // Skip to: 2143
/* 2017 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2020 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2033
/* 2024 */    MCD::OPC_CheckPredicate, 6, 28, 1, // Skip to: 2312
/* 2028 */    MCD::OPC_Decode, 165, 4, 140, 2, // Opcode: DEXTM
/* 2033 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2046
/* 2037 */    MCD::OPC_CheckPredicate, 6, 15, 1, // Skip to: 2312
/* 2041 */    MCD::OPC_Decode, 166, 4, 140, 2, // Opcode: DEXTU
/* 2046 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2059
/* 2050 */    MCD::OPC_CheckPredicate, 6, 2, 1, // Skip to: 2312
/* 2054 */    MCD::OPC_Decode, 164, 4, 140, 2, // Opcode: DEXT
/* 2059 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 2072
/* 2063 */    MCD::OPC_CheckPredicate, 6, 245, 0, // Skip to: 2312
/* 2067 */    MCD::OPC_Decode, 169, 4, 141, 2, // Opcode: DINSM
/* 2072 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2085
/* 2076 */    MCD::OPC_CheckPredicate, 6, 232, 0, // Skip to: 2312
/* 2080 */    MCD::OPC_Decode, 170, 4, 141, 2, // Opcode: DINSU
/* 2085 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 2098
/* 2089 */    MCD::OPC_CheckPredicate, 6, 219, 0, // Skip to: 2312
/* 2093 */    MCD::OPC_Decode, 168, 4, 141, 2, // Opcode: DINS
/* 2098 */    MCD::OPC_FilterValue, 36, 210, 0, // Skip to: 2312
/* 2102 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2105 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 2124
/* 2109 */    MCD::OPC_CheckPredicate, 41, 199, 0, // Skip to: 2312
/* 2113 */    MCD::OPC_CheckField, 21, 5, 0, 193, 0, // Skip to: 2312
/* 2119 */    MCD::OPC_Decode, 237, 4, 242, 1, // Opcode: DSBH
/* 2124 */    MCD::OPC_FilterValue, 5, 184, 0, // Skip to: 2312
/* 2128 */    MCD::OPC_CheckPredicate, 41, 180, 0, // Skip to: 2312
/* 2132 */    MCD::OPC_CheckField, 21, 5, 0, 174, 0, // Skip to: 2312
/* 2138 */    MCD::OPC_Decode, 239, 4, 242, 1, // Opcode: DSHD
/* 2143 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 2156
/* 2147 */    MCD::OPC_CheckPredicate, 19, 161, 0, // Skip to: 2312
/* 2151 */    MCD::OPC_Decode, 228, 7, 216, 1, // Opcode: LWu
/* 2156 */    MCD::OPC_FilterValue, 44, 9, 0, // Skip to: 2169
/* 2160 */    MCD::OPC_CheckPredicate, 42, 148, 0, // Skip to: 2312
/* 2164 */    MCD::OPC_Decode, 151, 11, 216, 1, // Opcode: SDL
/* 2169 */    MCD::OPC_FilterValue, 45, 9, 0, // Skip to: 2182
/* 2173 */    MCD::OPC_CheckPredicate, 42, 135, 0, // Skip to: 2312
/* 2177 */    MCD::OPC_Decode, 152, 11, 216, 1, // Opcode: SDR
/* 2182 */    MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 2195
/* 2186 */    MCD::OPC_CheckPredicate, 51, 122, 0, // Skip to: 2312
/* 2190 */    MCD::OPC_Decode, 171, 1, 142, 2, // Opcode: BBIT0
/* 2195 */    MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 2208
/* 2199 */    MCD::OPC_CheckPredicate, 42, 109, 0, // Skip to: 2312
/* 2203 */    MCD::OPC_Decode, 181, 7, 216, 1, // Opcode: LLD
/* 2208 */    MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 2221
/* 2212 */    MCD::OPC_CheckPredicate, 53, 96, 0, // Skip to: 2312
/* 2216 */    MCD::OPC_Decode, 150, 7, 218, 1, // Opcode: LDC164
/* 2221 */    MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 2234
/* 2225 */    MCD::OPC_CheckPredicate, 51, 83, 0, // Skip to: 2312
/* 2229 */    MCD::OPC_Decode, 172, 1, 142, 2, // Opcode: BBIT032
/* 2234 */    MCD::OPC_FilterValue, 55, 9, 0, // Skip to: 2247
/* 2238 */    MCD::OPC_CheckPredicate, 19, 70, 0, // Skip to: 2312
/* 2242 */    MCD::OPC_Decode, 148, 7, 216, 1, // Opcode: LD
/* 2247 */    MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 2260
/* 2251 */    MCD::OPC_CheckPredicate, 51, 57, 0, // Skip to: 2312
/* 2255 */    MCD::OPC_Decode, 173, 1, 142, 2, // Opcode: BBIT1
/* 2260 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 2273
/* 2264 */    MCD::OPC_CheckPredicate, 42, 44, 0, // Skip to: 2312
/* 2268 */    MCD::OPC_Decode, 134, 11, 216, 1, // Opcode: SCD
/* 2273 */    MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 2286
/* 2277 */    MCD::OPC_CheckPredicate, 53, 31, 0, // Skip to: 2312
/* 2281 */    MCD::OPC_Decode, 144, 11, 218, 1, // Opcode: SDC164
/* 2286 */    MCD::OPC_FilterValue, 62, 9, 0, // Skip to: 2299
/* 2290 */    MCD::OPC_CheckPredicate, 51, 18, 0, // Skip to: 2312
/* 2294 */    MCD::OPC_Decode, 174, 1, 142, 2, // Opcode: BBIT132
/* 2299 */    MCD::OPC_FilterValue, 63, 9, 0, // Skip to: 2312
/* 2303 */    MCD::OPC_CheckPredicate, 19, 5, 0, // Skip to: 2312
/* 2307 */    MCD::OPC_Decode, 138, 11, 216, 1, // Opcode: SD
/* 2312 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return ((Bits & Mips::FeatureMips16));
  case 1:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 2:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips2) && !(Bits & Mips::FeatureMicroMips));
  case 3:
    return ((Bits & Mips::FeatureMicroMips));
  case 4:
    return ((Bits & Mips::FeatureMips32) && (Bits & Mips::FeatureMicroMips));
  case 5:
    return (!(Bits & Mips::FeatureMips16));
  case 6:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips32r2));
  case 7:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips4_32) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 8:
    return ((Bits & Mips::FeatureMSA));
  case 9:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 10:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips32));
  case 11:
    return (!(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6) && !(Bits & Mips::FeatureMicroMips));
  case 12:
    return ((Bits & Mips::FeatureDSP));
  case 13:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 14:
    return ((Bits & Mips::FeatureMSA) && (Bits & Mips::FeatureMips64));
  case 15:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips2));
  case 16:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 17:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips3_32));
  case 18:
    return (!(Bits & Mips::FeatureMicroMips));
  case 19:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips3));
  case 20:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit));
  case 21:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureFP64Bit));
  case 22:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips3_32r2));
  case 23:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips2) && !(Bits & Mips::FeatureFP64Bit));
  case 24:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips4_32) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 25:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6) && !(Bits & Mips::FeatureFP64Bit));
  case 26:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips4_32r2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 27:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips4_32r2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6) && !(Bits & Mips::FeatureMicroMips));
  case 28:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips5_32r2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 29:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 30:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 31:
    return ((Bits & Mips::FeatureDSPR2));
  case 32:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips3_32) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 33:
    return ((Bits & Mips::FeatureMips2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6) && !(Bits & Mips::FeatureMicroMips));
  case 34:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6) && !(Bits & Mips::FeatureMicroMips));
  case 35:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips2));
  case 36:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6) && !(Bits & Mips::FeatureMicroMips));
  case 37:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips32r6));
  case 38:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips64r6));
  case 39:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureGP64Bit) && (Bits & Mips::FeatureMips32r6));
  case 40:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureGP64Bit) && (Bits & Mips::FeatureMips32r6));
  case 41:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips64r2));
  case 42:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips3) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 43:
    return ((Bits & Mips::FeatureMips64));
  case 44:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureFP64Bit));
  case 45:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureFP64Bit));
  case 46:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips2) && (Bits & Mips::FeatureFP64Bit));
  case 47:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips4_32) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 48:
    return (!(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6) && (Bits & Mips::FeatureFP64Bit));
  case 49:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips4_32r2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 50:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips5_32r2) && !(Bits & Mips::FeatureMips32r6) && !(Bits & Mips::FeatureMips64r6));
  case 51:
    return ((Bits & Mips::FeatureCnMips));
  case 52:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips64r6));
  case 53:
    return (!(Bits & Mips::FeatureMips16) && (Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips2));
  }
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
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 2) << 3;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 11;
    tmp |= fieldFromInstruction(insn, 21, 6) << 5;
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    if (DecodeFMem3(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    if (DecodeMemMMImm4(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeANDI16Imm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 18:
    if (DecodeMemMMReglistImm4Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeUImm5lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 22:
    if (DecodeMemMMSPImm5Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 4);
    if (DecodeSimm4(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 1, 9);
    if (DecodeSimm9SP(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    if (DecodeMemMMGPImm7Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeAddiur2Simm7(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 6);
    if (DecodeUImm6Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeMovePRegPair(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeBranchTarget7MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 0, 10);
    if (DecodeBranchTarget10MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeLiSimm7(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    if (DecodeMemMMImm16(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    if (DecodeMemMMImm12(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    if (DecodeCacheOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    if (DecodeJumpTargetMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 23);
    if (DecodeSimm23Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeLSAImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 6, 20);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeLSAImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    if (DecodeSyncI(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 116:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 123:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 126:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 127:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 128:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 129:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 130:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 132:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 133:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 134:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 135:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 136:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 137:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 139:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 141:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 142:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 143:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 145:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 146:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 147:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 148:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 149:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 150:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 151:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 152:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 155:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 156:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 157:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 158:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 160:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 161:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 162:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 163:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 164:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 165:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 166:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 167:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 168:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 169:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 170:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 171:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 172:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 173:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 174:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 175:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 176:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 177:
    if (DecodeINSVE_DF(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 178:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 179:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 180:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 181:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 182:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 183:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 184:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 185:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 186:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 187:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 188:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 189:
    if (DecodeMSA128Mem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 190:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 191:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 192:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 193:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 194:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 195:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 196:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 197:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 198:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 199:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 200:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 201:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 202:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 203:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 204:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 205:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 206:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 207:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 208:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 209:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 210:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 211:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 212:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 213:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 214:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 215:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 216:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 217:
    if (DecodeCacheOp(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 218:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 219:
    if (DecodeFMem2(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 220:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 221:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 222:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 223:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 224:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 225:
    if (DecodeBlezGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 226:
    if (DecodeBgtzGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 227:
    if (DecodeAddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 228:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 229:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 230:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 231:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 232:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 233:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 234:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 235:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 236:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 237:
    if (DecodeFMemCop2R6(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 238:
    if (DecodeBlezlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 239:
    if (DecodeBgtzlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 240:
    if (DecodeDaddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 241:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 242:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 243:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 244:
    if (DecodeCacheOpR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 245:
    if (DecodeSpecial3LlSc(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 246:
    tmp = fieldFromInstruction(insn, 0, 26);
    if (DecodeBranchTarget26(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 247:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 248:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 19);
    if (DecodeSimm19Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 249:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 18);
    if (DecodeSimm18Lsl3(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 250:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 251:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 252:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 253:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 254:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 255:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 256:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 257:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 258:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 259:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 260:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 261:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 262:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 263:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 264:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 265:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 266:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 267:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 268:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 269:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 270:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
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
