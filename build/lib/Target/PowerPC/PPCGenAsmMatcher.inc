/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Assembly Matcher Source Fragment                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  uint64_t ComputeAvailableFeatures(uint64_t FeatureBits) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  bool mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) override;
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo, bool matchingInlineAsm,
                                unsigned VariantID = 0);
#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint8_t {
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  return "(unknown)";
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addRegG8RCOperands,
  CVT_95_addTLSRegOperands,
  CVT_95_addRegGPRCOperands,
  CVT_95_addRegGPRCNoR0Operands,
  CVT_95_addS16ImmOperands,
  CVT_95_addU16ImmOperands,
  CVT_95_addBranchTargetOperands,
  CVT_95_addImmOperands,
  CVT_95_addRegCRBITRCOperands,
  CVT_imm_95_0,
  CVT_imm_95_8,
  CVT_imm_95_2,
  CVT_imm_95_10,
  CVT_imm_95_76,
  CVT_regCR0,
  CVT_95_addRegCRRCOperands,
  CVT_imm_95_79,
  CVT_imm_95_78,
  CVT_imm_95_4,
  CVT_imm_95_7,
  CVT_imm_95_6,
  CVT_imm_95_44,
  CVT_imm_95_47,
  CVT_imm_95_46,
  CVT_imm_95_36,
  CVT_imm_95_39,
  CVT_imm_95_38,
  CVT_imm_95_12,
  CVT_imm_95_15,
  CVT_imm_95_14,
  CVT_imm_95_68,
  CVT_imm_95_71,
  CVT_imm_95_70,
  CVT_imm_95_100,
  CVT_imm_95_103,
  CVT_imm_95_102,
  CVT_imm_95_108,
  CVT_imm_95_111,
  CVT_imm_95_110,
  CVT_imm_95_31,
  CVT_95_addRegGxRCNoR0Operands,
  CVT_95_addRegGxRCOperands,
  CVT_regR0,
  CVT_95_addRegF4RCOperands,
  CVT_95_addRegF8RCOperands,
  CVT_95_addRegVRRCOperands,
  CVT_imm_95_1,
  CVT_95_addRegVSFRCOperands,
  CVT_95_addRegVSRCOperands,
  CVT_imm_95_29,
  CVT_imm_95_280,
  CVT_imm_95_128,
  CVT_imm_95_129,
  CVT_imm_95_130,
  CVT_imm_95_131,
  CVT_imm_95_132,
  CVT_imm_95_133,
  CVT_imm_95_134,
  CVT_imm_95_135,
  CVT_imm_95_28,
  CVT_imm_95_19,
  CVT_imm_95_537,
  CVT_imm_95_539,
  CVT_imm_95_541,
  CVT_imm_95_543,
  CVT_imm_95_536,
  CVT_imm_95_538,
  CVT_imm_95_540,
  CVT_imm_95_542,
  CVT_imm_95_1018,
  CVT_imm_95_981,
  CVT_imm_95_22,
  CVT_imm_95_17,
  CVT_imm_95_18,
  CVT_imm_95_980,
  CVT_imm_95_529,
  CVT_imm_95_531,
  CVT_imm_95_533,
  CVT_imm_95_535,
  CVT_imm_95_528,
  CVT_imm_95_530,
  CVT_imm_95_532,
  CVT_imm_95_534,
  CVT_imm_95_1019,
  CVT_95_addCRBitMaskOperands,
  CVT_imm_95_48,
  CVT_imm_95_287,
  CVT_imm_95_5,
  CVT_imm_95_25,
  CVT_imm_95_512,
  CVT_imm_95_272,
  CVT_imm_95_273,
  CVT_imm_95_274,
  CVT_imm_95_275,
  CVT_imm_95_260,
  CVT_imm_95_261,
  CVT_imm_95_262,
  CVT_imm_95_263,
  CVT_imm_95_26,
  CVT_imm_95_27,
  CVT_imm_95_990,
  CVT_imm_95_991,
  CVT_imm_95_268,
  CVT_imm_95_988,
  CVT_imm_95_989,
  CVT_imm_95_269,
  CVT_imm_95_986,
  CVT_imm_95_255,
  CVT_imm_95_284,
  CVT_imm_95_285,
  CVT_imm_95_20,
  CVT_imm_95_16,
  CVT_imm_95_24,
  CVT_imm_95_3,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1,
  Convert__RegGPRC1_1__RegGPRC1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3,
  Convert_NoOperands,
  Convert__DirectBr1_0,
  Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2,
  Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0,
  Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2,
  Convert__CondBr1_0,
  Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_0__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_8__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_2__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_10__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_76__regCR0__CondBr1_0,
  Convert__imm_95_76__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_79__regCR0__CondBr1_0,
  Convert__imm_95_79__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_78__regCR0__CondBr1_0,
  Convert__imm_95_78__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_76__regCR0,
  Convert__imm_95_76__RegCRRC1_0,
  Convert__imm_95_79__regCR0,
  Convert__imm_95_79__RegCRRC1_0,
  Convert__imm_95_78__regCR0,
  Convert__imm_95_78__RegCRRC1_0,
  Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_4__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_7__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_6__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_4__regCR0__CondBr1_0,
  Convert__imm_95_4__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_7__regCR0__CondBr1_0,
  Convert__imm_95_7__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_6__regCR0__CondBr1_0,
  Convert__imm_95_6__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_4__regCR0,
  Convert__imm_95_4__RegCRRC1_0,
  Convert__imm_95_7__regCR0,
  Convert__imm_95_7__RegCRRC1_0,
  Convert__imm_95_6__regCR0,
  Convert__imm_95_6__RegCRRC1_0,
  Convert__imm_95_44__regCR0__CondBr1_0,
  Convert__imm_95_44__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_47__regCR0__CondBr1_0,
  Convert__imm_95_47__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_46__regCR0__CondBr1_0,
  Convert__imm_95_46__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_44__regCR0,
  Convert__imm_95_44__RegCRRC1_0,
  Convert__imm_95_47__regCR0,
  Convert__imm_95_47__RegCRRC1_0,
  Convert__imm_95_46__regCR0,
  Convert__imm_95_46__RegCRRC1_0,
  Convert__DirectBr1_0__Imm1_1,
  Convert__imm_95_36__regCR0__CondBr1_0,
  Convert__imm_95_36__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_39__regCR0__CondBr1_0,
  Convert__imm_95_39__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_38__regCR0__CondBr1_0,
  Convert__imm_95_38__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_36__regCR0,
  Convert__imm_95_36__RegCRRC1_0,
  Convert__imm_95_39__regCR0,
  Convert__imm_95_39__RegCRRC1_0,
  Convert__imm_95_38__regCR0,
  Convert__imm_95_38__RegCRRC1_0,
  Convert__imm_95_12__regCR0__CondBr1_0,
  Convert__imm_95_12__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_15__regCR0__CondBr1_0,
  Convert__imm_95_15__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_14__regCR0__CondBr1_0,
  Convert__imm_95_14__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_12__regCR0,
  Convert__imm_95_12__RegCRRC1_0,
  Convert__imm_95_15__regCR0,
  Convert__imm_95_15__RegCRRC1_0,
  Convert__imm_95_14__regCR0,
  Convert__imm_95_14__RegCRRC1_0,
  Convert__imm_95_68__regCR0__CondBr1_0,
  Convert__imm_95_68__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_71__regCR0__CondBr1_0,
  Convert__imm_95_71__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_70__regCR0__CondBr1_0,
  Convert__imm_95_70__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_68__regCR0,
  Convert__imm_95_68__RegCRRC1_0,
  Convert__imm_95_71__regCR0,
  Convert__imm_95_71__RegCRRC1_0,
  Convert__imm_95_70__regCR0,
  Convert__imm_95_70__RegCRRC1_0,
  Convert__imm_95_100__regCR0__CondBr1_0,
  Convert__imm_95_100__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_103__regCR0__CondBr1_0,
  Convert__imm_95_103__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_102__regCR0__CondBr1_0,
  Convert__imm_95_102__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_100__regCR0,
  Convert__imm_95_100__RegCRRC1_0,
  Convert__imm_95_103__regCR0,
  Convert__imm_95_103__RegCRRC1_0,
  Convert__imm_95_102__regCR0,
  Convert__imm_95_102__RegCRRC1_0,
  Convert__imm_95_108__regCR0__CondBr1_0,
  Convert__imm_95_108__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_111__regCR0__CondBr1_0,
  Convert__imm_95_111__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_110__regCR0__CondBr1_0,
  Convert__imm_95_110__RegCRRC1_0__CondBr1_1,
  Convert__imm_95_108__regCR0,
  Convert__imm_95_108__RegCRRC1_0,
  Convert__imm_95_111__regCR0,
  Convert__imm_95_111__RegCRRC1_0,
  Convert__imm_95_110__regCR0,
  Convert__imm_95_110__RegCRRC1_0,
  Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1,
  Convert__imm_95_12__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_15__RegCRBITRC1_0__imm_95_0,
  Convert__imm_95_14__RegCRBITRC1_0__imm_95_0,
  Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U6Imm1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U6Imm1_3,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0__U5Imm1_2__imm_95_31,
  Convert__RegGPRC1_1__RegGPRC1_2__imm_95_0__U5Imm1_3__imm_95_31,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3,
  Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3,
  Convert__regCR0__RegG8RC1_0__RegG8RC1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__regCR0__RegG8RC1_0__S16Imm1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2,
  Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3,
  Convert__regCR0__RegG8RC1_0__U16Imm1_1,
  Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2,
  Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3,
  Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3,
  Convert__regCR0__RegGPRC1_0__RegGPRC1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__regCR0__RegGPRC1_0__U16Imm1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2,
  Convert__regCR0__RegGPRC1_0__S16Imm1_1,
  Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2,
  Convert__RegG8RC1_0__RegG8RC1_1,
  Convert__RegG8RC1_1__RegG8RC1_2,
  Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2,
  Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0,
  Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1,
  Convert__RegGxRCNoR01_0__RegGxRC1_1,
  Convert__regR0__regR0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3,
  Convert__U5Imm1_0,
  Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1,
  Convert__RegGPRC1_0__RegGPRC1_2__U5Imm1_1,
  Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__Imm1_1,
  Convert__RegGPRC1_0__U5Imm1_1__RegGPRC1_2,
  Convert__RegF4RC1_0__RegF4RC1_1,
  Convert__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3,
  Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF8RC1_0__RegF8RC1_1,
  Convert__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF4RC1_0__RegF8RC1_1,
  Convert__RegF4RC1_1__RegF8RC1_2,
  Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3,
  Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4,
  Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4,
  Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4,
  Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3,
  Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__imm_95_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__S16Imm1_1,
  Convert__RegGPRC1_0__S17Imm1_1,
  Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_1,
  Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_0,
  Convert__RegCRRC1_0__RegCRRC1_1,
  Convert__RegGPRC1_0__imm_95_29,
  Convert__RegGPRC1_0__imm_95_280,
  Convert__RegGPRC1_0__imm_95_128,
  Convert__RegGPRC1_0__imm_95_129,
  Convert__RegGPRC1_0__imm_95_130,
  Convert__RegGPRC1_0__imm_95_131,
  Convert__RegGPRC1_0__imm_95_132,
  Convert__RegGPRC1_0__imm_95_133,
  Convert__RegGPRC1_0__imm_95_134,
  Convert__RegGPRC1_0__imm_95_135,
  Convert__RegGPRC1_0__imm_95_28,
  Convert__RegGPRC1_0,
  Convert__RegGPRC1_0__imm_95_19,
  Convert__RegGPRC1_0__imm_95_537,
  Convert__RegGPRC1_0__imm_95_539,
  Convert__RegGPRC1_0__imm_95_541,
  Convert__RegGPRC1_0__imm_95_543,
  Convert__RegGPRC1_0__imm_95_536,
  Convert__RegGPRC1_0__imm_95_538,
  Convert__RegGPRC1_0__imm_95_540,
  Convert__RegGPRC1_0__imm_95_542,
  Convert__RegGPRC1_0__imm_95_1018,
  Convert__RegGPRC1_0__imm_95_981,
  Convert__RegGPRC1_0__imm_95_22,
  Convert__RegGPRC1_0__imm_95_17,
  Convert__RegGPRC1_0__imm_95_18,
  Convert__RegGPRC1_0__imm_95_980,
  Convert__RegF8RC1_0,
  Convert__RegF8RC1_1,
  Convert__RegGPRC1_0__imm_95_529,
  Convert__RegGPRC1_0__imm_95_531,
  Convert__RegGPRC1_0__imm_95_533,
  Convert__RegGPRC1_0__imm_95_535,
  Convert__RegGPRC1_0__imm_95_528,
  Convert__RegGPRC1_0__imm_95_530,
  Convert__RegGPRC1_0__imm_95_532,
  Convert__RegGPRC1_0__imm_95_534,
  Convert__RegGPRC1_0__imm_95_1019,
  Convert__RegGPRC1_0__CRBitMask1_1,
  Convert__RegGPRC1_0__imm_95_48,
  Convert__RegGPRC1_0__imm_95_287,
  Convert__RegGPRC1_0__imm_95_5,
  Convert__RegGPRC1_0__imm_95_4,
  Convert__RegGPRC1_0__imm_95_25,
  Convert__RegGPRC1_0__imm_95_512,
  Convert__RegGPRC1_0__imm_95_272,
  Convert__RegGPRC1_0__imm_95_273,
  Convert__RegGPRC1_0__imm_95_274,
  Convert__RegGPRC1_0__imm_95_275,
  Convert__RegGPRC1_0__imm_95_260,
  Convert__RegGPRC1_0__imm_95_261,
  Convert__RegGPRC1_0__imm_95_262,
  Convert__RegGPRC1_0__imm_95_263,
  Convert__RegGPRC1_0__U4Imm1_1,
  Convert__RegGPRC1_0__imm_95_26,
  Convert__RegGPRC1_0__imm_95_27,
  Convert__RegGPRC1_0__imm_95_990,
  Convert__RegGPRC1_0__imm_95_991,
  Convert__RegGPRC1_0__imm_95_268,
  Convert__RegGPRC1_0__imm_95_988,
  Convert__RegGPRC1_0__imm_95_989,
  Convert__RegGPRC1_0__imm_95_269,
  Convert__RegGPRC1_0__imm_95_986,
  Convert__RegVRRC1_0,
  Convert__RegGPRC1_0__imm_95_1,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2,
  Convert__imm_95_29__RegGPRC1_0,
  Convert__imm_95_280__RegGPRC1_0,
  Convert__imm_95_28__RegGPRC1_0,
  Convert__imm_95_255__RegG8RC1_0,
  Convert__Imm1_0__RegGPRC1_1,
  Convert__imm_95_19__RegGPRC1_0,
  Convert__imm_95_537__RegGPRC1_1,
  Convert__imm_95_539__RegGPRC1_1,
  Convert__imm_95_541__RegGPRC1_1,
  Convert__imm_95_543__RegGPRC1_1,
  Convert__imm_95_536__RegGPRC1_1,
  Convert__imm_95_538__RegGPRC1_1,
  Convert__imm_95_540__RegGPRC1_1,
  Convert__imm_95_542__RegGPRC1_1,
  Convert__imm_95_1018__RegGPRC1_0,
  Convert__RegGPRC1_1__Imm1_0,
  Convert__imm_95_981__RegGPRC1_0,
  Convert__imm_95_22__RegGPRC1_0,
  Convert__imm_95_17__RegGPRC1_0,
  Convert__imm_95_18__RegGPRC1_0,
  Convert__imm_95_980__RegGPRC1_0,
  Convert__Imm1_0__RegF8RC1_1__imm_95_0__imm_95_0,
  Convert__Imm1_1__RegF8RC1_2__imm_95_0__imm_95_0,
  Convert__Imm1_0__RegF8RC1_1__Imm1_2__Imm1_3,
  Convert__Imm1_1__RegF8RC1_2__Imm1_3__Imm1_4,
  Convert__RegCRRC1_0__Imm1_1__imm_95_0,
  Convert__RegCRRC1_1__Imm1_2__imm_95_0,
  Convert__RegCRRC1_0__Imm1_1__Imm1_2,
  Convert__RegCRRC1_1__Imm1_2__Imm1_3,
  Convert__imm_95_529__RegGPRC1_1,
  Convert__imm_95_531__RegGPRC1_1,
  Convert__imm_95_533__RegGPRC1_1,
  Convert__imm_95_535__RegGPRC1_1,
  Convert__imm_95_528__RegGPRC1_1,
  Convert__imm_95_530__RegGPRC1_1,
  Convert__imm_95_532__RegGPRC1_1,
  Convert__imm_95_534__RegGPRC1_1,
  Convert__imm_95_1019__RegGPRC1_0,
  Convert__RegGPRC1_0__imm_95_0,
  Convert__CRBitMask1_0__RegGPRC1_1,
  Convert__imm_95_48__RegGPRC1_0,
  Convert__imm_95_25__RegGPRC1_0,
  Convert__imm_95_512__RegGPRC1_0,
  Convert__imm_95_272__RegGPRC1_1,
  Convert__imm_95_273__RegGPRC1_1,
  Convert__imm_95_274__RegGPRC1_1,
  Convert__imm_95_275__RegGPRC1_1,
  Convert__imm_95_260__RegGPRC1_1,
  Convert__imm_95_261__RegGPRC1_1,
  Convert__imm_95_262__RegGPRC1_1,
  Convert__imm_95_263__RegGPRC1_1,
  Convert__imm_95_272__RegGPRC1_0,
  Convert__imm_95_273__RegGPRC1_0,
  Convert__imm_95_274__RegGPRC1_0,
  Convert__imm_95_275__RegGPRC1_0,
  Convert__imm_95_260__RegGPRC1_0,
  Convert__imm_95_261__RegGPRC1_0,
  Convert__imm_95_262__RegGPRC1_0,
  Convert__imm_95_263__RegGPRC1_0,
  Convert__RegGPRC1_1__U4Imm1_0,
  Convert__imm_95_26__RegGPRC1_0,
  Convert__imm_95_27__RegGPRC1_0,
  Convert__imm_95_990__RegGPRC1_0,
  Convert__imm_95_991__RegGPRC1_0,
  Convert__imm_95_988__RegGPRC1_0,
  Convert__imm_95_284__RegGPRC1_0,
  Convert__imm_95_989__RegGPRC1_0,
  Convert__imm_95_285__RegGPRC1_0,
  Convert__imm_95_986__RegGPRC1_0,
  Convert__imm_95_1__RegGPRC1_0,
  Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2,
  Convert__imm_95_2,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4,
  Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3,
  Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4,
  Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_95_0,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_95_0,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_95_0,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_95_0,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_95_0__imm_95_31,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_95_0__imm_95_31,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_95_0__imm_95_31,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_95_0__imm_95_31,
  Convert__Imm1_0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3,
  Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__imm_95_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_95_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_95_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1,
  Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2,
  Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__imm_95_4__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_4__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_12__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_8__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_8__RegG8RC1_0__S16Imm1_1,
  Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2,
  Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_20__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_5__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_1__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_1__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_6__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_2__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_2__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_16__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_16__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_24__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_24__RegG8RC1_0__S16Imm1_1,
  Convert__imm_95_31__RegG8RC1_0__RegG8RC1_1,
  Convert__imm_95_31__RegG8RC1_0__S16Imm1_1,
  Convert__regR0__RegGPRC1_0,
  Convert__RegGPRC1_1__RegGPRC1_0,
  Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0,
  Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1,
  Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__imm_95_4__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_4__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_12__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_8__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_8__RegGPRC1_0__S16Imm1_1,
  Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2,
  Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_20__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_5__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_1__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_1__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_6__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_2__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_2__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_16__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_16__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_24__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_24__RegGPRC1_0__S16Imm1_1,
  Convert__imm_95_31__RegGPRC1_0__RegGPRC1_1,
  Convert__imm_95_31__RegGPRC1_0__S16Imm1_1,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2,
  Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1,
  Convert__RegVRRC1_0__RegVRRC1_1,
  Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3,
  Convert__RegVRRC1_0__S5Imm1_1,
  Convert__regR0__regR0__imm_95_0,
  Convert__RegVSFRC1_0__RegVSFRC1_1,
  Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2,
  Convert__RegCRRC1_0__RegVSFRC1_1,
  Convert__RegVSRC1_0__RegVSRC1_1,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3,
  Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1,
  Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2,
  Convert__RegCRRC1_0__RegVSRC1_1,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_0,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_0,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_3,
  Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2,
  Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_2,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addTLSRegOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__DirectBr1_0
  { CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addBranchTargetOperands, 3, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__CondBr1_0
  { CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_0, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_0__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_8, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_8, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_2, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_2, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_10, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_10__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_10, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_76__regCR0__CondBr1_0
  { CVT_imm_95_76, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_76__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_76, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_79__regCR0__CondBr1_0
  { CVT_imm_95_79, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_79__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_79, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_78__regCR0__CondBr1_0
  { CVT_imm_95_78, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_78__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_78, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_76__regCR0
  { CVT_imm_95_76, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_76__RegCRRC1_0
  { CVT_imm_95_76, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_79__regCR0
  { CVT_imm_95_79, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_79__RegCRRC1_0
  { CVT_imm_95_79, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_78__regCR0
  { CVT_imm_95_78, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_78__RegCRRC1_0
  { CVT_imm_95_78, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_4, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_7, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_6, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_4__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_4, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_7__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_7, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_6__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_6, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_4__regCR0__CondBr1_0
  { CVT_imm_95_4, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_4__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_4, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_7__regCR0__CondBr1_0
  { CVT_imm_95_7, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_7__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_7, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_6__regCR0__CondBr1_0
  { CVT_imm_95_6, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_6__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_6, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_4__regCR0
  { CVT_imm_95_4, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_4__RegCRRC1_0
  { CVT_imm_95_4, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_7__regCR0
  { CVT_imm_95_7, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_7__RegCRRC1_0
  { CVT_imm_95_7, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_6__regCR0
  { CVT_imm_95_6, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_6__RegCRRC1_0
  { CVT_imm_95_6, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_44__regCR0__CondBr1_0
  { CVT_imm_95_44, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_44__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_44, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_47__regCR0__CondBr1_0
  { CVT_imm_95_47, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_47__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_47, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_46__regCR0__CondBr1_0
  { CVT_imm_95_46, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_46__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_46, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_44__regCR0
  { CVT_imm_95_44, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_44__RegCRRC1_0
  { CVT_imm_95_44, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_47__regCR0
  { CVT_imm_95_47, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_47__RegCRRC1_0
  { CVT_imm_95_47, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_46__regCR0
  { CVT_imm_95_46, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_46__RegCRRC1_0
  { CVT_imm_95_46, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__DirectBr1_0__Imm1_1
  { CVT_95_addBranchTargetOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_95_36__regCR0__CondBr1_0
  { CVT_imm_95_36, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_36__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_36, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_39__regCR0__CondBr1_0
  { CVT_imm_95_39, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_39__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_39, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_38__regCR0__CondBr1_0
  { CVT_imm_95_38, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_38__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_38, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_36__regCR0
  { CVT_imm_95_36, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_36__RegCRRC1_0
  { CVT_imm_95_36, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_39__regCR0
  { CVT_imm_95_39, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_39__RegCRRC1_0
  { CVT_imm_95_39, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_38__regCR0
  { CVT_imm_95_38, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_38__RegCRRC1_0
  { CVT_imm_95_38, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_12__regCR0__CondBr1_0
  { CVT_imm_95_12, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_12__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_12, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_15__regCR0__CondBr1_0
  { CVT_imm_95_15, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_15__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_15, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_14__regCR0__CondBr1_0
  { CVT_imm_95_14, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_14__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_14, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_12__regCR0
  { CVT_imm_95_12, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_12__RegCRRC1_0
  { CVT_imm_95_12, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_15__regCR0
  { CVT_imm_95_15, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_15__RegCRRC1_0
  { CVT_imm_95_15, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_14__regCR0
  { CVT_imm_95_14, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_14__RegCRRC1_0
  { CVT_imm_95_14, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_68__regCR0__CondBr1_0
  { CVT_imm_95_68, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_68__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_68, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_71__regCR0__CondBr1_0
  { CVT_imm_95_71, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_71__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_71, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_70__regCR0__CondBr1_0
  { CVT_imm_95_70, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_70__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_70, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_68__regCR0
  { CVT_imm_95_68, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_68__RegCRRC1_0
  { CVT_imm_95_68, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_71__regCR0
  { CVT_imm_95_71, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_71__RegCRRC1_0
  { CVT_imm_95_71, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_70__regCR0
  { CVT_imm_95_70, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_70__RegCRRC1_0
  { CVT_imm_95_70, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_100__regCR0__CondBr1_0
  { CVT_imm_95_100, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_100__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_100, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_103__regCR0__CondBr1_0
  { CVT_imm_95_103, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_103__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_103, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_102__regCR0__CondBr1_0
  { CVT_imm_95_102, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_102__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_102, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_100__regCR0
  { CVT_imm_95_100, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_100__RegCRRC1_0
  { CVT_imm_95_100, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_103__regCR0
  { CVT_imm_95_103, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_103__RegCRRC1_0
  { CVT_imm_95_103, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_102__regCR0
  { CVT_imm_95_102, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_102__RegCRRC1_0
  { CVT_imm_95_102, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_108__regCR0__CondBr1_0
  { CVT_imm_95_108, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_108__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_108, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_111__regCR0__CondBr1_0
  { CVT_imm_95_111, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_111__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_111, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_110__regCR0__CondBr1_0
  { CVT_imm_95_110, 0, CVT_regCR0, 0, CVT_95_addBranchTargetOperands, 1, CVT_Done },
  // Convert__imm_95_110__RegCRRC1_0__CondBr1_1
  { CVT_imm_95_110, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_108__regCR0
  { CVT_imm_95_108, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_108__RegCRRC1_0
  { CVT_imm_95_108, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_111__regCR0
  { CVT_imm_95_111, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_111__RegCRRC1_0
  { CVT_imm_95_111, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_110__regCR0
  { CVT_imm_95_110, 0, CVT_regCR0, 0, CVT_Done },
  // Convert__imm_95_110__RegCRRC1_0
  { CVT_imm_95_110, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_12, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_15, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1
  { CVT_imm_95_14, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addBranchTargetOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_12, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_15__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_15, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__imm_95_14__RegCRBITRC1_0__imm_95_0
  { CVT_imm_95_14, 0, CVT_95_addRegCRBITRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_imm_95_0, 0, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_imm_95_0, 0, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0__U5Imm1_2__imm_95_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_95_0, 0, CVT_95_addImmOperands, 3, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__imm_95_0__U5Imm1_3__imm_95_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_95_0, 0, CVT_95_addImmOperands, 4, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__RegG8RC1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__S16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addS16ImmOperands, 4, CVT_Done },
  // Convert__regCR0__RegG8RC1_0__U16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addU16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addU16ImmOperands, 4, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__RegGPRC1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__U16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addU16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__regCR0__RegGPRC1_0__S16Imm1_1
  { CVT_regCR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addRegCRBITRCOperands, 3, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 1, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addRegCRBITRCOperands, 2, CVT_Done },
  // Convert__RegGxRCNoR01_0__RegGxRC1_1
  { CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_Done },
  // Convert__regR0__regR0
  { CVT_regR0, 0, CVT_regR0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__U5Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1
  { CVT_95_addImmOperands, 3, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_2__U5Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__U5Imm1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegF8RC1_1
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF4RC1_1__RegF8RC1_2
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_95_addRegF8RCOperands, 5, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_95_addRegF4RCOperands, 5, CVT_Done },
  // Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_95_addRegF4RCOperands, 5, CVT_Done },
  // Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegCRBITRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_imm_95_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__S16Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__S17Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_1
  { CVT_imm_95_1, 0, CVT_Done },
  // Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_0
  { CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegCRRC1_0__RegCRRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegCRRCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_29
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_29, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_280
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_280, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_128
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_128, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_129
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_129, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_130
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_130, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_131
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_131, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_132
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_132, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_133
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_133, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_134
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_134, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_135
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_135, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_28
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_28, 0, CVT_Done },
  // Convert__RegGPRC1_0
  { CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_19
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_19, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_537
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_537, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_539
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_539, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_541
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_541, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_543
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_543, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_536
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_536, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_538
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_538, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_540
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_540, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_542
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_542, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_1018
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_1018, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_981
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_981, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_22
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_22, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_17
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_17, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_18
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_18, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_980
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_980, 0, CVT_Done },
  // Convert__RegF8RC1_0
  { CVT_95_addRegF8RCOperands, 1, CVT_Done },
  // Convert__RegF8RC1_1
  { CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_529
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_529, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_531
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_531, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_533
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_533, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_535
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_535, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_528
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_528, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_530
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_530, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_532
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_532, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_534
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_534, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_1019
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_1019, 0, CVT_Done },
  // Convert__RegGPRC1_0__CRBitMask1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addCRBitMaskOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_48
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_48, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_287
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_287, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_5
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_4
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_25
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_25, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_512
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_512, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_272
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_272, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_273
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_273, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_274
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_274, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_275
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_275, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_260
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_260, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_261
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_261, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_262
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_262, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_263
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_263, 0, CVT_Done },
  // Convert__RegGPRC1_0__U4Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_26
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_26, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_27
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_27, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_990
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_990, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_991
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_991, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_268
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_268, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_988
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_988, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_989
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_989, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_269
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_269, 0, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_986
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_986, 0, CVT_Done },
  // Convert__RegVRRC1_0
  { CVT_95_addRegVRRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_1
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__imm_95_29__RegGPRC1_0
  { CVT_imm_95_29, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_280__RegGPRC1_0
  { CVT_imm_95_280, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_28__RegGPRC1_0
  { CVT_imm_95_28, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_255__RegG8RC1_0
  { CVT_imm_95_255, 0, CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__Imm1_0__RegGPRC1_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_19__RegGPRC1_0
  { CVT_imm_95_19, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_537__RegGPRC1_1
  { CVT_imm_95_537, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_539__RegGPRC1_1
  { CVT_imm_95_539, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_541__RegGPRC1_1
  { CVT_imm_95_541, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_543__RegGPRC1_1
  { CVT_imm_95_543, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_536__RegGPRC1_1
  { CVT_imm_95_536, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_538__RegGPRC1_1
  { CVT_imm_95_538, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_540__RegGPRC1_1
  { CVT_imm_95_540, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_542__RegGPRC1_1
  { CVT_imm_95_542, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1018__RegGPRC1_0
  { CVT_imm_95_1018, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__Imm1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__imm_95_981__RegGPRC1_0
  { CVT_imm_95_981, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_22__RegGPRC1_0
  { CVT_imm_95_22, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_17__RegGPRC1_0
  { CVT_imm_95_17, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_18__RegGPRC1_0
  { CVT_imm_95_18, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_980__RegGPRC1_0
  { CVT_imm_95_980, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__Imm1_0__RegF8RC1_1__imm_95_0__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_1__RegF8RC1_2__imm_95_0__imm_95_0
  { CVT_95_addImmOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_0__RegF8RC1_1__Imm1_2__Imm1_3
  { CVT_95_addImmOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Imm1_1__RegF8RC1_2__Imm1_3__Imm1_4
  { CVT_95_addImmOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegCRRC1_0__Imm1_1__imm_95_0
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegCRRC1_1__Imm1_2__imm_95_0
  { CVT_95_addRegCRRCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegCRRC1_0__Imm1_1__Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_1__Imm1_2__Imm1_3
  { CVT_95_addRegCRRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__imm_95_529__RegGPRC1_1
  { CVT_imm_95_529, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_531__RegGPRC1_1
  { CVT_imm_95_531, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_533__RegGPRC1_1
  { CVT_imm_95_533, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_535__RegGPRC1_1
  { CVT_imm_95_535, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_528__RegGPRC1_1
  { CVT_imm_95_528, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_530__RegGPRC1_1
  { CVT_imm_95_530, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_532__RegGPRC1_1
  { CVT_imm_95_532, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_534__RegGPRC1_1
  { CVT_imm_95_534, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1019__RegGPRC1_0
  { CVT_imm_95_1019, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__imm_95_0
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__CRBitMask1_0__RegGPRC1_1
  { CVT_95_addCRBitMaskOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_48__RegGPRC1_0
  { CVT_imm_95_48, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_25__RegGPRC1_0
  { CVT_imm_95_25, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_512__RegGPRC1_0
  { CVT_imm_95_512, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_272__RegGPRC1_1
  { CVT_imm_95_272, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_273__RegGPRC1_1
  { CVT_imm_95_273, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_274__RegGPRC1_1
  { CVT_imm_95_274, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_275__RegGPRC1_1
  { CVT_imm_95_275, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_260__RegGPRC1_1
  { CVT_imm_95_260, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_261__RegGPRC1_1
  { CVT_imm_95_261, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_262__RegGPRC1_1
  { CVT_imm_95_262, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_263__RegGPRC1_1
  { CVT_imm_95_263, 0, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_272__RegGPRC1_0
  { CVT_imm_95_272, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_273__RegGPRC1_0
  { CVT_imm_95_273, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_274__RegGPRC1_0
  { CVT_imm_95_274, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_275__RegGPRC1_0
  { CVT_imm_95_275, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_260__RegGPRC1_0
  { CVT_imm_95_260, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_261__RegGPRC1_0
  { CVT_imm_95_261, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_262__RegGPRC1_0
  { CVT_imm_95_262, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_263__RegGPRC1_0
  { CVT_imm_95_263, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__U4Imm1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__imm_95_26__RegGPRC1_0
  { CVT_imm_95_26, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_27__RegGPRC1_0
  { CVT_imm_95_27, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_990__RegGPRC1_0
  { CVT_imm_95_990, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_991__RegGPRC1_0
  { CVT_imm_95_991, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_988__RegGPRC1_0
  { CVT_imm_95_988, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_284__RegGPRC1_0
  { CVT_imm_95_284, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_989__RegGPRC1_0
  { CVT_imm_95_989, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_285__RegGPRC1_0
  { CVT_imm_95_285, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_986__RegGPRC1_0
  { CVT_imm_95_986, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__imm_95_1__RegGPRC1_0
  { CVT_imm_95_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addU16ImmOperands, 3, CVT_Done },
  // Convert__imm_95_2
  { CVT_imm_95_2, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_Tied, 0, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_Tied, 0, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_Tied, 0, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_Tied, 0, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_95_0
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_95_0
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_95_0
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_95_0
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_95_0__imm_95_31
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_imm_95_31, 0, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__imm_95_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegF8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_95_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_95_0, 0, CVT_95_addRegF4RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_95_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_95_0, 0, CVT_95_addRegF4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 4, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__imm_95_4__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_4, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_4__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_4, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_12, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_12, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_8, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_8, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_20, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_20__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_20, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_5, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_5, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_1, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_1, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_6, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_6, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_2, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_2, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_16, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_16, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_24, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_24, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegG8RC1_0__RegG8RC1_1
  { CVT_imm_95_31, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegG8RC1_0__S16Imm1_1
  { CVT_imm_95_31, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__regR0__RegGPRC1_0
  { CVT_regR0, 0, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_0
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__imm_95_4__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_4, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_4__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_4, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_12, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_12__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_12, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_8, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_8__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_8, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addImmOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addS16ImmOperands, 3, CVT_Done },
  // Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_20, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_20__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_20, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_5, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_5__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_5, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_1__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_1, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_6, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_6__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_6, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_2, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_2__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_2, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_16, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_16__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_16, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_24, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_24__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_24, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegGPRC1_0__RegGPRC1_1
  { CVT_imm_95_31, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__imm_95_31__RegGPRC1_0__S16Imm1_1
  { CVT_imm_95_31, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addS16ImmOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__S5Imm1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regR0__regR0__imm_95_0
  { CVT_regR0, 0, CVT_regR0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegVSFRC1_0__RegVSFRC1_1
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2
  { CVT_95_addRegVSFRCOperands, 1, CVT_Tied, 0, CVT_95_addRegVSFRCOperands, 2, CVT_95_addRegVSFRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegVSFRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSFRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3
  { CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addRegVSRCOperands, 4, CVT_Done },
  // Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_Tied, 0, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegVSRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_0
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 3, CVT_95_addRegVSRCOperands, 4, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_0
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_3
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_2
  { CVT_95_addRegVSRCOperands, 1, CVT_95_addRegVSRCOperands, 2, CVT_95_addRegVSRCOperands, 2, CVT_imm_95_2, 0, CVT_Done },
};

void PPCAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addRegG8RCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegG8RCOperands(Inst, 1);
      break;
    case CVT_95_addTLSRegOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addTLSRegOperands(Inst, 1);
      break;
    case CVT_95_addRegGPRCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegGPRCOperands(Inst, 1);
      break;
    case CVT_95_addRegGPRCNoR0Operands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegGPRCNoR0Operands(Inst, 1);
      break;
    case CVT_95_addS16ImmOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addS16ImmOperands(Inst, 1);
      break;
    case CVT_95_addU16ImmOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addU16ImmOperands(Inst, 1);
      break;
    case CVT_95_addBranchTargetOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addBranchTargetOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addRegCRBITRCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegCRBITRCOperands(Inst, 1);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::CreateImm(0));
      break;
    case CVT_imm_95_8:
      Inst.addOperand(MCOperand::CreateImm(8));
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::CreateImm(2));
      break;
    case CVT_imm_95_10:
      Inst.addOperand(MCOperand::CreateImm(10));
      break;
    case CVT_imm_95_76:
      Inst.addOperand(MCOperand::CreateImm(76));
      break;
    case CVT_regCR0:
      Inst.addOperand(MCOperand::CreateReg(PPC::CR0));
      break;
    case CVT_95_addRegCRRCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegCRRCOperands(Inst, 1);
      break;
    case CVT_imm_95_79:
      Inst.addOperand(MCOperand::CreateImm(79));
      break;
    case CVT_imm_95_78:
      Inst.addOperand(MCOperand::CreateImm(78));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::CreateImm(4));
      break;
    case CVT_imm_95_7:
      Inst.addOperand(MCOperand::CreateImm(7));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::CreateImm(6));
      break;
    case CVT_imm_95_44:
      Inst.addOperand(MCOperand::CreateImm(44));
      break;
    case CVT_imm_95_47:
      Inst.addOperand(MCOperand::CreateImm(47));
      break;
    case CVT_imm_95_46:
      Inst.addOperand(MCOperand::CreateImm(46));
      break;
    case CVT_imm_95_36:
      Inst.addOperand(MCOperand::CreateImm(36));
      break;
    case CVT_imm_95_39:
      Inst.addOperand(MCOperand::CreateImm(39));
      break;
    case CVT_imm_95_38:
      Inst.addOperand(MCOperand::CreateImm(38));
      break;
    case CVT_imm_95_12:
      Inst.addOperand(MCOperand::CreateImm(12));
      break;
    case CVT_imm_95_15:
      Inst.addOperand(MCOperand::CreateImm(15));
      break;
    case CVT_imm_95_14:
      Inst.addOperand(MCOperand::CreateImm(14));
      break;
    case CVT_imm_95_68:
      Inst.addOperand(MCOperand::CreateImm(68));
      break;
    case CVT_imm_95_71:
      Inst.addOperand(MCOperand::CreateImm(71));
      break;
    case CVT_imm_95_70:
      Inst.addOperand(MCOperand::CreateImm(70));
      break;
    case CVT_imm_95_100:
      Inst.addOperand(MCOperand::CreateImm(100));
      break;
    case CVT_imm_95_103:
      Inst.addOperand(MCOperand::CreateImm(103));
      break;
    case CVT_imm_95_102:
      Inst.addOperand(MCOperand::CreateImm(102));
      break;
    case CVT_imm_95_108:
      Inst.addOperand(MCOperand::CreateImm(108));
      break;
    case CVT_imm_95_111:
      Inst.addOperand(MCOperand::CreateImm(111));
      break;
    case CVT_imm_95_110:
      Inst.addOperand(MCOperand::CreateImm(110));
      break;
    case CVT_imm_95_31:
      Inst.addOperand(MCOperand::CreateImm(31));
      break;
    case CVT_95_addRegGxRCNoR0Operands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegGxRCNoR0Operands(Inst, 1);
      break;
    case CVT_95_addRegGxRCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegGxRCOperands(Inst, 1);
      break;
    case CVT_regR0:
      Inst.addOperand(MCOperand::CreateReg(PPC::R0));
      break;
    case CVT_95_addRegF4RCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegF4RCOperands(Inst, 1);
      break;
    case CVT_95_addRegF8RCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegF8RCOperands(Inst, 1);
      break;
    case CVT_95_addRegVRRCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegVRRCOperands(Inst, 1);
      break;
    case CVT_imm_95_1:
      Inst.addOperand(MCOperand::CreateImm(1));
      break;
    case CVT_95_addRegVSFRCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegVSFRCOperands(Inst, 1);
      break;
    case CVT_95_addRegVSRCOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addRegVSRCOperands(Inst, 1);
      break;
    case CVT_imm_95_29:
      Inst.addOperand(MCOperand::CreateImm(29));
      break;
    case CVT_imm_95_280:
      Inst.addOperand(MCOperand::CreateImm(280));
      break;
    case CVT_imm_95_128:
      Inst.addOperand(MCOperand::CreateImm(128));
      break;
    case CVT_imm_95_129:
      Inst.addOperand(MCOperand::CreateImm(129));
      break;
    case CVT_imm_95_130:
      Inst.addOperand(MCOperand::CreateImm(130));
      break;
    case CVT_imm_95_131:
      Inst.addOperand(MCOperand::CreateImm(131));
      break;
    case CVT_imm_95_132:
      Inst.addOperand(MCOperand::CreateImm(132));
      break;
    case CVT_imm_95_133:
      Inst.addOperand(MCOperand::CreateImm(133));
      break;
    case CVT_imm_95_134:
      Inst.addOperand(MCOperand::CreateImm(134));
      break;
    case CVT_imm_95_135:
      Inst.addOperand(MCOperand::CreateImm(135));
      break;
    case CVT_imm_95_28:
      Inst.addOperand(MCOperand::CreateImm(28));
      break;
    case CVT_imm_95_19:
      Inst.addOperand(MCOperand::CreateImm(19));
      break;
    case CVT_imm_95_537:
      Inst.addOperand(MCOperand::CreateImm(537));
      break;
    case CVT_imm_95_539:
      Inst.addOperand(MCOperand::CreateImm(539));
      break;
    case CVT_imm_95_541:
      Inst.addOperand(MCOperand::CreateImm(541));
      break;
    case CVT_imm_95_543:
      Inst.addOperand(MCOperand::CreateImm(543));
      break;
    case CVT_imm_95_536:
      Inst.addOperand(MCOperand::CreateImm(536));
      break;
    case CVT_imm_95_538:
      Inst.addOperand(MCOperand::CreateImm(538));
      break;
    case CVT_imm_95_540:
      Inst.addOperand(MCOperand::CreateImm(540));
      break;
    case CVT_imm_95_542:
      Inst.addOperand(MCOperand::CreateImm(542));
      break;
    case CVT_imm_95_1018:
      Inst.addOperand(MCOperand::CreateImm(1018));
      break;
    case CVT_imm_95_981:
      Inst.addOperand(MCOperand::CreateImm(981));
      break;
    case CVT_imm_95_22:
      Inst.addOperand(MCOperand::CreateImm(22));
      break;
    case CVT_imm_95_17:
      Inst.addOperand(MCOperand::CreateImm(17));
      break;
    case CVT_imm_95_18:
      Inst.addOperand(MCOperand::CreateImm(18));
      break;
    case CVT_imm_95_980:
      Inst.addOperand(MCOperand::CreateImm(980));
      break;
    case CVT_imm_95_529:
      Inst.addOperand(MCOperand::CreateImm(529));
      break;
    case CVT_imm_95_531:
      Inst.addOperand(MCOperand::CreateImm(531));
      break;
    case CVT_imm_95_533:
      Inst.addOperand(MCOperand::CreateImm(533));
      break;
    case CVT_imm_95_535:
      Inst.addOperand(MCOperand::CreateImm(535));
      break;
    case CVT_imm_95_528:
      Inst.addOperand(MCOperand::CreateImm(528));
      break;
    case CVT_imm_95_530:
      Inst.addOperand(MCOperand::CreateImm(530));
      break;
    case CVT_imm_95_532:
      Inst.addOperand(MCOperand::CreateImm(532));
      break;
    case CVT_imm_95_534:
      Inst.addOperand(MCOperand::CreateImm(534));
      break;
    case CVT_imm_95_1019:
      Inst.addOperand(MCOperand::CreateImm(1019));
      break;
    case CVT_95_addCRBitMaskOperands:
      static_cast<PPCOperand&>(*Operands[*(p + 1)]).addCRBitMaskOperands(Inst, 1);
      break;
    case CVT_imm_95_48:
      Inst.addOperand(MCOperand::CreateImm(48));
      break;
    case CVT_imm_95_287:
      Inst.addOperand(MCOperand::CreateImm(287));
      break;
    case CVT_imm_95_5:
      Inst.addOperand(MCOperand::CreateImm(5));
      break;
    case CVT_imm_95_25:
      Inst.addOperand(MCOperand::CreateImm(25));
      break;
    case CVT_imm_95_512:
      Inst.addOperand(MCOperand::CreateImm(512));
      break;
    case CVT_imm_95_272:
      Inst.addOperand(MCOperand::CreateImm(272));
      break;
    case CVT_imm_95_273:
      Inst.addOperand(MCOperand::CreateImm(273));
      break;
    case CVT_imm_95_274:
      Inst.addOperand(MCOperand::CreateImm(274));
      break;
    case CVT_imm_95_275:
      Inst.addOperand(MCOperand::CreateImm(275));
      break;
    case CVT_imm_95_260:
      Inst.addOperand(MCOperand::CreateImm(260));
      break;
    case CVT_imm_95_261:
      Inst.addOperand(MCOperand::CreateImm(261));
      break;
    case CVT_imm_95_262:
      Inst.addOperand(MCOperand::CreateImm(262));
      break;
    case CVT_imm_95_263:
      Inst.addOperand(MCOperand::CreateImm(263));
      break;
    case CVT_imm_95_26:
      Inst.addOperand(MCOperand::CreateImm(26));
      break;
    case CVT_imm_95_27:
      Inst.addOperand(MCOperand::CreateImm(27));
      break;
    case CVT_imm_95_990:
      Inst.addOperand(MCOperand::CreateImm(990));
      break;
    case CVT_imm_95_991:
      Inst.addOperand(MCOperand::CreateImm(991));
      break;
    case CVT_imm_95_268:
      Inst.addOperand(MCOperand::CreateImm(268));
      break;
    case CVT_imm_95_988:
      Inst.addOperand(MCOperand::CreateImm(988));
      break;
    case CVT_imm_95_989:
      Inst.addOperand(MCOperand::CreateImm(989));
      break;
    case CVT_imm_95_269:
      Inst.addOperand(MCOperand::CreateImm(269));
      break;
    case CVT_imm_95_986:
      Inst.addOperand(MCOperand::CreateImm(986));
      break;
    case CVT_imm_95_255:
      Inst.addOperand(MCOperand::CreateImm(255));
      break;
    case CVT_imm_95_284:
      Inst.addOperand(MCOperand::CreateImm(284));
      break;
    case CVT_imm_95_285:
      Inst.addOperand(MCOperand::CreateImm(285));
      break;
    case CVT_imm_95_20:
      Inst.addOperand(MCOperand::CreateImm(20));
      break;
    case CVT_imm_95_16:
      Inst.addOperand(MCOperand::CreateImm(16));
      break;
    case CVT_imm_95_24:
      Inst.addOperand(MCOperand::CreateImm(24));
      break;
    case CVT_imm_95_3:
      Inst.addOperand(MCOperand::CreateImm(3));
      break;
    }
  }
}

void PPCAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addRegG8RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addTLSRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGPRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGPRCNoR0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addS16ImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addU16ImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBranchTargetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegCRBITRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_10:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_76:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regCR0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegCRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_79:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_78:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_44:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_47:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_46:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_36:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_39:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_38:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_68:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_71:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_70:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_100:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_103:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_102:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_108:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_111:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_110:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_31:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegGxRCNoR0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGxRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regR0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addRegF4RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegF8RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegVSFRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVSRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_29:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_280:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_128:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_129:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_130:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_131:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_132:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_133:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_134:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_135:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_28:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_19:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_537:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_539:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_541:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_543:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_536:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_538:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_540:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_542:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1018:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_981:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_22:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_17:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_18:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_980:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_529:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_531:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_533:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_535:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_528:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_530:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_532:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_534:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1019:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addCRBitMaskOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_48:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_287:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_25:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_512:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_272:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_273:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_274:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_275:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_260:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_261:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_262:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_263:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_26:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_27:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_990:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_991:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_268:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_988:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_989:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_269:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_986:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_255:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_284:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_285:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_20:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_16:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_24:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK__DOT_, // '.'
  MCK_0, // '0'
  MCK_1, // '1'
  MCK_2, // '2'
  MCK_3, // '3'
  MCK_4, // '4'
  MCK_5, // '5'
  MCK_6, // '6'
  MCK_7, // '7'
  MCK_Reg2, // derived register class
  MCK_GPRC, // register class 'GPRC'
  MCK_GPRC_NOR0, // register class 'GPRC_NOR0'
  MCK_Reg5, // derived register class
  MCK_G8RC, // register class 'G8RC'
  MCK_G8RC_NOX0, // register class 'G8RC_NOX0'
  MCK_F4RC, // register class 'F4RC,F8RC'
  MCK_VFRC, // register class 'VFRC'
  MCK_VSFRC, // register class 'VSFRC'
  MCK_VRRC, // register class 'VRRC'
  MCK_VSLRC, // register class 'VSLRC'
  MCK_VSHRC, // register class 'VSHRC'
  MCK_VSRC, // register class 'VSRC'
  MCK_CRBITRC, // register class 'CRBITRC'
  MCK_CRRC, // register class 'CRRC'
  MCK_CTRRC, // register class 'CTRRC'
  MCK_CTRRC8, // register class 'CTRRC8'
  MCK_VRSAVERC, // register class 'VRSAVERC'
  MCK_CARRYRC, // register class 'CARRYRC'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_CRBitMask, // user defined class 'PPCCRBitMaskOperand'
  MCK_CondBr, // user defined class 'PPCCondBrAsmOperand'
  MCK_DirectBr, // user defined class 'PPCDirectBrAsmOperand'
  MCK_DispRI, // user defined class 'PPCDispRIOperand'
  MCK_DispRIX, // user defined class 'PPCDispRIXOperand'
  MCK_DispSPE2, // user defined class 'PPCDispSPE2Operand'
  MCK_DispSPE4, // user defined class 'PPCDispSPE4Operand'
  MCK_DispSPE8, // user defined class 'PPCDispSPE8Operand'
  MCK_RegCRBITRC, // user defined class 'PPCRegCRBITRCAsmOperand'
  MCK_RegCRRC, // user defined class 'PPCRegCRRCAsmOperand'
  MCK_RegF4RC, // user defined class 'PPCRegF4RCAsmOperand'
  MCK_RegF8RC, // user defined class 'PPCRegF8RCAsmOperand'
  MCK_RegG8RC, // user defined class 'PPCRegG8RCAsmOperand'
  MCK_RegG8RCNoX0, // user defined class 'PPCRegG8RCNoX0AsmOperand'
  MCK_RegGPRC, // user defined class 'PPCRegGPRCAsmOperand'
  MCK_RegGPRCNoR0, // user defined class 'PPCRegGPRCNoR0AsmOperand'
  MCK_RegGxRCNoR0, // user defined class 'PPCRegGxRCNoR0Operand'
  MCK_RegGxRC, // user defined class 'PPCRegGxRCOperand'
  MCK_RegVRRC, // user defined class 'PPCRegVRRCAsmOperand'
  MCK_RegVSFRC, // user defined class 'PPCRegVSFRCAsmOperand'
  MCK_RegVSRC, // user defined class 'PPCRegVSRCAsmOperand'
  MCK_S16Imm, // user defined class 'PPCS16ImmAsmOperand'
  MCK_S17Imm, // user defined class 'PPCS17ImmAsmOperand'
  MCK_S5Imm, // user defined class 'PPCS5ImmAsmOperand'
  MCK_TLSReg, // user defined class 'PPCTLSRegOperand'
  MCK_U16Imm, // user defined class 'PPCU16ImmAsmOperand'
  MCK_U2Imm, // user defined class 'PPCU2ImmAsmOperand'
  MCK_U4Imm, // user defined class 'PPCU4ImmAsmOperand'
  MCK_U5Imm, // user defined class 'PPCU5ImmAsmOperand'
  MCK_U6Imm, // user defined class 'PPCU6ImmAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 9 strings to match.
    switch (Name[0]) {
    default: break;
    case '.':	 // 1 string to match.
      return MCK__DOT_;	 // "."
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    case '1':	 // 1 string to match.
      return MCK_1;	 // "1"
    case '2':	 // 1 string to match.
      return MCK_2;	 // "2"
    case '3':	 // 1 string to match.
      return MCK_3;	 // "3"
    case '4':	 // 1 string to match.
      return MCK_4;	 // "4"
    case '5':	 // 1 string to match.
      return MCK_5;	 // "5"
    case '6':	 // 1 string to match.
      return MCK_6;	 // "6"
    case '7':	 // 1 string to match.
      return MCK_7;	 // "7"
    }
    break;
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_Reg2:
    switch (B) {
    default: return false;
    case MCK_GPRC: return true;
    case MCK_GPRC_NOR0: return true;
    }

  case MCK_Reg5:
    switch (B) {
    default: return false;
    case MCK_G8RC: return true;
    case MCK_G8RC_NOX0: return true;
    }

  case MCK_F4RC:
    return B == MCK_VSFRC;

  case MCK_VFRC:
    return B == MCK_VSFRC;

  case MCK_VSLRC:
    return B == MCK_VSRC;

  case MCK_VSHRC:
    return B == MCK_VSRC;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  PPCOperand &Operand = (PPCOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CRBitMask' class
  if (Kind == MCK_CRBitMask) {
    if (Operand.isCRBitMask())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CondBr' class
  if (Kind == MCK_CondBr) {
    if (Operand.isCondBr())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DirectBr' class
  if (Kind == MCK_DirectBr) {
    if (Operand.isDirectBr())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DispRI' class
  if (Kind == MCK_DispRI) {
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DispRIX' class
  if (Kind == MCK_DispRIX) {
    if (Operand.isS16ImmX4())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DispSPE2' class
  if (Kind == MCK_DispSPE2) {
    if (Operand.isU6ImmX2())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DispSPE4' class
  if (Kind == MCK_DispSPE4) {
    if (Operand.isU7ImmX4())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DispSPE8' class
  if (Kind == MCK_DispSPE8) {
    if (Operand.isU8ImmX8())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegCRBITRC' class
  if (Kind == MCK_RegCRBITRC) {
    if (Operand.isCRBitNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegCRRC' class
  if (Kind == MCK_RegCRRC) {
    if (Operand.isCCRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegF4RC' class
  if (Kind == MCK_RegF4RC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegF8RC' class
  if (Kind == MCK_RegF8RC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegG8RC' class
  if (Kind == MCK_RegG8RC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegG8RCNoX0' class
  if (Kind == MCK_RegG8RCNoX0) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGPRC' class
  if (Kind == MCK_RegGPRC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGPRCNoR0' class
  if (Kind == MCK_RegGPRCNoR0) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGxRCNoR0' class
  if (Kind == MCK_RegGxRCNoR0) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGxRC' class
  if (Kind == MCK_RegGxRC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegVRRC' class
  if (Kind == MCK_RegVRRC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegVSFRC' class
  if (Kind == MCK_RegVSFRC) {
    if (Operand.isVSRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegVSRC' class
  if (Kind == MCK_RegVSRC) {
    if (Operand.isVSRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S16Imm' class
  if (Kind == MCK_S16Imm) {
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S17Imm' class
  if (Kind == MCK_S17Imm) {
    if (Operand.isS17Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S5Imm' class
  if (Kind == MCK_S5Imm) {
    if (Operand.isS5Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'TLSReg' class
  if (Kind == MCK_TLSReg) {
    if (Operand.isTLSReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U16Imm' class
  if (Kind == MCK_U16Imm) {
    if (Operand.isU16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U2Imm' class
  if (Kind == MCK_U2Imm) {
    if (Operand.isU2Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U4Imm' class
  if (Kind == MCK_U4Imm) {
    if (Operand.isU4Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U5Imm' class
  if (Kind == MCK_U5Imm) {
    if (Operand.isU5Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U6Imm' class
  if (Kind == MCK_U6Imm) {
    if (Operand.isU6Imm())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case PPC::R0: OpKind = MCK_GPRC; break;
    case PPC::R1: OpKind = MCK_Reg2; break;
    case PPC::R2: OpKind = MCK_Reg2; break;
    case PPC::R3: OpKind = MCK_Reg2; break;
    case PPC::R4: OpKind = MCK_Reg2; break;
    case PPC::R5: OpKind = MCK_Reg2; break;
    case PPC::R6: OpKind = MCK_Reg2; break;
    case PPC::R7: OpKind = MCK_Reg2; break;
    case PPC::R8: OpKind = MCK_Reg2; break;
    case PPC::R9: OpKind = MCK_Reg2; break;
    case PPC::R10: OpKind = MCK_Reg2; break;
    case PPC::R11: OpKind = MCK_Reg2; break;
    case PPC::R12: OpKind = MCK_Reg2; break;
    case PPC::R13: OpKind = MCK_Reg2; break;
    case PPC::R14: OpKind = MCK_Reg2; break;
    case PPC::R15: OpKind = MCK_Reg2; break;
    case PPC::R16: OpKind = MCK_Reg2; break;
    case PPC::R17: OpKind = MCK_Reg2; break;
    case PPC::R18: OpKind = MCK_Reg2; break;
    case PPC::R19: OpKind = MCK_Reg2; break;
    case PPC::R20: OpKind = MCK_Reg2; break;
    case PPC::R21: OpKind = MCK_Reg2; break;
    case PPC::R22: OpKind = MCK_Reg2; break;
    case PPC::R23: OpKind = MCK_Reg2; break;
    case PPC::R24: OpKind = MCK_Reg2; break;
    case PPC::R25: OpKind = MCK_Reg2; break;
    case PPC::R26: OpKind = MCK_Reg2; break;
    case PPC::R27: OpKind = MCK_Reg2; break;
    case PPC::R28: OpKind = MCK_Reg2; break;
    case PPC::R29: OpKind = MCK_Reg2; break;
    case PPC::R30: OpKind = MCK_Reg2; break;
    case PPC::R31: OpKind = MCK_Reg2; break;
    case PPC::X0: OpKind = MCK_G8RC; break;
    case PPC::X1: OpKind = MCK_Reg5; break;
    case PPC::X2: OpKind = MCK_Reg5; break;
    case PPC::X3: OpKind = MCK_Reg5; break;
    case PPC::X4: OpKind = MCK_Reg5; break;
    case PPC::X5: OpKind = MCK_Reg5; break;
    case PPC::X6: OpKind = MCK_Reg5; break;
    case PPC::X7: OpKind = MCK_Reg5; break;
    case PPC::X8: OpKind = MCK_Reg5; break;
    case PPC::X9: OpKind = MCK_Reg5; break;
    case PPC::X10: OpKind = MCK_Reg5; break;
    case PPC::X11: OpKind = MCK_Reg5; break;
    case PPC::X12: OpKind = MCK_Reg5; break;
    case PPC::X13: OpKind = MCK_Reg5; break;
    case PPC::X14: OpKind = MCK_Reg5; break;
    case PPC::X15: OpKind = MCK_Reg5; break;
    case PPC::X16: OpKind = MCK_Reg5; break;
    case PPC::X17: OpKind = MCK_Reg5; break;
    case PPC::X18: OpKind = MCK_Reg5; break;
    case PPC::X19: OpKind = MCK_Reg5; break;
    case PPC::X20: OpKind = MCK_Reg5; break;
    case PPC::X21: OpKind = MCK_Reg5; break;
    case PPC::X22: OpKind = MCK_Reg5; break;
    case PPC::X23: OpKind = MCK_Reg5; break;
    case PPC::X24: OpKind = MCK_Reg5; break;
    case PPC::X25: OpKind = MCK_Reg5; break;
    case PPC::X26: OpKind = MCK_Reg5; break;
    case PPC::X27: OpKind = MCK_Reg5; break;
    case PPC::X28: OpKind = MCK_Reg5; break;
    case PPC::X29: OpKind = MCK_Reg5; break;
    case PPC::X30: OpKind = MCK_Reg5; break;
    case PPC::X31: OpKind = MCK_Reg5; break;
    case PPC::F0: OpKind = MCK_F4RC; break;
    case PPC::F1: OpKind = MCK_F4RC; break;
    case PPC::F2: OpKind = MCK_F4RC; break;
    case PPC::F3: OpKind = MCK_F4RC; break;
    case PPC::F4: OpKind = MCK_F4RC; break;
    case PPC::F5: OpKind = MCK_F4RC; break;
    case PPC::F6: OpKind = MCK_F4RC; break;
    case PPC::F7: OpKind = MCK_F4RC; break;
    case PPC::F8: OpKind = MCK_F4RC; break;
    case PPC::F9: OpKind = MCK_F4RC; break;
    case PPC::F10: OpKind = MCK_F4RC; break;
    case PPC::F11: OpKind = MCK_F4RC; break;
    case PPC::F12: OpKind = MCK_F4RC; break;
    case PPC::F13: OpKind = MCK_F4RC; break;
    case PPC::F14: OpKind = MCK_F4RC; break;
    case PPC::F15: OpKind = MCK_F4RC; break;
    case PPC::F16: OpKind = MCK_F4RC; break;
    case PPC::F17: OpKind = MCK_F4RC; break;
    case PPC::F18: OpKind = MCK_F4RC; break;
    case PPC::F19: OpKind = MCK_F4RC; break;
    case PPC::F20: OpKind = MCK_F4RC; break;
    case PPC::F21: OpKind = MCK_F4RC; break;
    case PPC::F22: OpKind = MCK_F4RC; break;
    case PPC::F23: OpKind = MCK_F4RC; break;
    case PPC::F24: OpKind = MCK_F4RC; break;
    case PPC::F25: OpKind = MCK_F4RC; break;
    case PPC::F26: OpKind = MCK_F4RC; break;
    case PPC::F27: OpKind = MCK_F4RC; break;
    case PPC::F28: OpKind = MCK_F4RC; break;
    case PPC::F29: OpKind = MCK_F4RC; break;
    case PPC::F30: OpKind = MCK_F4RC; break;
    case PPC::F31: OpKind = MCK_F4RC; break;
    case PPC::VF0: OpKind = MCK_VFRC; break;
    case PPC::VF1: OpKind = MCK_VFRC; break;
    case PPC::VF2: OpKind = MCK_VFRC; break;
    case PPC::VF3: OpKind = MCK_VFRC; break;
    case PPC::VF4: OpKind = MCK_VFRC; break;
    case PPC::VF5: OpKind = MCK_VFRC; break;
    case PPC::VF6: OpKind = MCK_VFRC; break;
    case PPC::VF7: OpKind = MCK_VFRC; break;
    case PPC::VF8: OpKind = MCK_VFRC; break;
    case PPC::VF9: OpKind = MCK_VFRC; break;
    case PPC::VF10: OpKind = MCK_VFRC; break;
    case PPC::VF11: OpKind = MCK_VFRC; break;
    case PPC::VF12: OpKind = MCK_VFRC; break;
    case PPC::VF13: OpKind = MCK_VFRC; break;
    case PPC::VF14: OpKind = MCK_VFRC; break;
    case PPC::VF15: OpKind = MCK_VFRC; break;
    case PPC::VF16: OpKind = MCK_VFRC; break;
    case PPC::VF17: OpKind = MCK_VFRC; break;
    case PPC::VF18: OpKind = MCK_VFRC; break;
    case PPC::VF19: OpKind = MCK_VFRC; break;
    case PPC::VF20: OpKind = MCK_VFRC; break;
    case PPC::VF21: OpKind = MCK_VFRC; break;
    case PPC::VF22: OpKind = MCK_VFRC; break;
    case PPC::VF23: OpKind = MCK_VFRC; break;
    case PPC::VF24: OpKind = MCK_VFRC; break;
    case PPC::VF25: OpKind = MCK_VFRC; break;
    case PPC::VF26: OpKind = MCK_VFRC; break;
    case PPC::VF27: OpKind = MCK_VFRC; break;
    case PPC::VF28: OpKind = MCK_VFRC; break;
    case PPC::VF29: OpKind = MCK_VFRC; break;
    case PPC::VF30: OpKind = MCK_VFRC; break;
    case PPC::VF31: OpKind = MCK_VFRC; break;
    case PPC::V0: OpKind = MCK_VRRC; break;
    case PPC::V1: OpKind = MCK_VRRC; break;
    case PPC::V2: OpKind = MCK_VRRC; break;
    case PPC::V3: OpKind = MCK_VRRC; break;
    case PPC::V4: OpKind = MCK_VRRC; break;
    case PPC::V5: OpKind = MCK_VRRC; break;
    case PPC::V6: OpKind = MCK_VRRC; break;
    case PPC::V7: OpKind = MCK_VRRC; break;
    case PPC::V8: OpKind = MCK_VRRC; break;
    case PPC::V9: OpKind = MCK_VRRC; break;
    case PPC::V10: OpKind = MCK_VRRC; break;
    case PPC::V11: OpKind = MCK_VRRC; break;
    case PPC::V12: OpKind = MCK_VRRC; break;
    case PPC::V13: OpKind = MCK_VRRC; break;
    case PPC::V14: OpKind = MCK_VRRC; break;
    case PPC::V15: OpKind = MCK_VRRC; break;
    case PPC::V16: OpKind = MCK_VRRC; break;
    case PPC::V17: OpKind = MCK_VRRC; break;
    case PPC::V18: OpKind = MCK_VRRC; break;
    case PPC::V19: OpKind = MCK_VRRC; break;
    case PPC::V20: OpKind = MCK_VRRC; break;
    case PPC::V21: OpKind = MCK_VRRC; break;
    case PPC::V22: OpKind = MCK_VRRC; break;
    case PPC::V23: OpKind = MCK_VRRC; break;
    case PPC::V24: OpKind = MCK_VRRC; break;
    case PPC::V25: OpKind = MCK_VRRC; break;
    case PPC::V26: OpKind = MCK_VRRC; break;
    case PPC::V27: OpKind = MCK_VRRC; break;
    case PPC::V28: OpKind = MCK_VRRC; break;
    case PPC::V29: OpKind = MCK_VRRC; break;
    case PPC::V30: OpKind = MCK_VRRC; break;
    case PPC::V31: OpKind = MCK_VRRC; break;
    case PPC::VSL0: OpKind = MCK_VSLRC; break;
    case PPC::VSL1: OpKind = MCK_VSLRC; break;
    case PPC::VSL2: OpKind = MCK_VSLRC; break;
    case PPC::VSL3: OpKind = MCK_VSLRC; break;
    case PPC::VSL4: OpKind = MCK_VSLRC; break;
    case PPC::VSL5: OpKind = MCK_VSLRC; break;
    case PPC::VSL6: OpKind = MCK_VSLRC; break;
    case PPC::VSL7: OpKind = MCK_VSLRC; break;
    case PPC::VSL8: OpKind = MCK_VSLRC; break;
    case PPC::VSL9: OpKind = MCK_VSLRC; break;
    case PPC::VSL10: OpKind = MCK_VSLRC; break;
    case PPC::VSL11: OpKind = MCK_VSLRC; break;
    case PPC::VSL12: OpKind = MCK_VSLRC; break;
    case PPC::VSL13: OpKind = MCK_VSLRC; break;
    case PPC::VSL14: OpKind = MCK_VSLRC; break;
    case PPC::VSL15: OpKind = MCK_VSLRC; break;
    case PPC::VSL16: OpKind = MCK_VSLRC; break;
    case PPC::VSL17: OpKind = MCK_VSLRC; break;
    case PPC::VSL18: OpKind = MCK_VSLRC; break;
    case PPC::VSL19: OpKind = MCK_VSLRC; break;
    case PPC::VSL20: OpKind = MCK_VSLRC; break;
    case PPC::VSL21: OpKind = MCK_VSLRC; break;
    case PPC::VSL22: OpKind = MCK_VSLRC; break;
    case PPC::VSL23: OpKind = MCK_VSLRC; break;
    case PPC::VSL24: OpKind = MCK_VSLRC; break;
    case PPC::VSL25: OpKind = MCK_VSLRC; break;
    case PPC::VSL26: OpKind = MCK_VSLRC; break;
    case PPC::VSL27: OpKind = MCK_VSLRC; break;
    case PPC::VSL28: OpKind = MCK_VSLRC; break;
    case PPC::VSL29: OpKind = MCK_VSLRC; break;
    case PPC::VSL30: OpKind = MCK_VSLRC; break;
    case PPC::VSL31: OpKind = MCK_VSLRC; break;
    case PPC::VSH0: OpKind = MCK_VSHRC; break;
    case PPC::VSH1: OpKind = MCK_VSHRC; break;
    case PPC::VSH2: OpKind = MCK_VSHRC; break;
    case PPC::VSH3: OpKind = MCK_VSHRC; break;
    case PPC::VSH4: OpKind = MCK_VSHRC; break;
    case PPC::VSH5: OpKind = MCK_VSHRC; break;
    case PPC::VSH6: OpKind = MCK_VSHRC; break;
    case PPC::VSH7: OpKind = MCK_VSHRC; break;
    case PPC::VSH8: OpKind = MCK_VSHRC; break;
    case PPC::VSH9: OpKind = MCK_VSHRC; break;
    case PPC::VSH10: OpKind = MCK_VSHRC; break;
    case PPC::VSH11: OpKind = MCK_VSHRC; break;
    case PPC::VSH12: OpKind = MCK_VSHRC; break;
    case PPC::VSH13: OpKind = MCK_VSHRC; break;
    case PPC::VSH14: OpKind = MCK_VSHRC; break;
    case PPC::VSH15: OpKind = MCK_VSHRC; break;
    case PPC::VSH16: OpKind = MCK_VSHRC; break;
    case PPC::VSH17: OpKind = MCK_VSHRC; break;
    case PPC::VSH18: OpKind = MCK_VSHRC; break;
    case PPC::VSH19: OpKind = MCK_VSHRC; break;
    case PPC::VSH20: OpKind = MCK_VSHRC; break;
    case PPC::VSH21: OpKind = MCK_VSHRC; break;
    case PPC::VSH22: OpKind = MCK_VSHRC; break;
    case PPC::VSH23: OpKind = MCK_VSHRC; break;
    case PPC::VSH24: OpKind = MCK_VSHRC; break;
    case PPC::VSH25: OpKind = MCK_VSHRC; break;
    case PPC::VSH26: OpKind = MCK_VSHRC; break;
    case PPC::VSH27: OpKind = MCK_VSHRC; break;
    case PPC::VSH28: OpKind = MCK_VSHRC; break;
    case PPC::VSH29: OpKind = MCK_VSHRC; break;
    case PPC::VSH30: OpKind = MCK_VSHRC; break;
    case PPC::VSH31: OpKind = MCK_VSHRC; break;
    case PPC::ZERO: OpKind = MCK_GPRC_NOR0; break;
    case PPC::ZERO8: OpKind = MCK_G8RC_NOX0; break;
    case PPC::FP: OpKind = MCK_Reg2; break;
    case PPC::FP8: OpKind = MCK_Reg5; break;
    case PPC::BP: OpKind = MCK_Reg2; break;
    case PPC::BP8: OpKind = MCK_Reg5; break;
    case PPC::CR0LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR0GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR0EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR0UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR1LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR1GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR1EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR1UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR2LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR2GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR2EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR2UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR3LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR3GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR3EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR3UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR4LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR4GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR4EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR4UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR5LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR5GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR5EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR5UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR6LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR6GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR6EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR6UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR7LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR7GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR7EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR7UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR0: OpKind = MCK_CRRC; break;
    case PPC::CR1: OpKind = MCK_CRRC; break;
    case PPC::CR2: OpKind = MCK_CRRC; break;
    case PPC::CR3: OpKind = MCK_CRRC; break;
    case PPC::CR4: OpKind = MCK_CRRC; break;
    case PPC::CR5: OpKind = MCK_CRRC; break;
    case PPC::CR6: OpKind = MCK_CRRC; break;
    case PPC::CR7: OpKind = MCK_CRRC; break;
    case PPC::CTR: OpKind = MCK_CTRRC; break;
    case PPC::CTR8: OpKind = MCK_CTRRC8; break;
    case PPC::VRSAVE: OpKind = MCK_VRSAVERC; break;
    case PPC::CARRY: OpKind = MCK_CARRYRC; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t PPCAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  uint64_t Features = 0;
  return Features;
}

static const char *const MnemonicTable =
    "\003add\004addc\004adde\004addi\005addic\005addis\005addme\005addze\003"
    "and\004andc\004andi\005andis\004attn\001b\002ba\002bc\003bca\005bcctr\006"
    "bcctrl\003bcl\004bcla\004bclr\005bclrl\004bctr\005bctrl\004bdnz\005bdnz"
    "+\005bdnz-\005bdnza\006bdnza+\006bdnza-\005bdnzf\006bdnzfa\006bdnzfl\007"
    "bdnzfla\007bdnzflr\010bdnzflrl\005bdnzl\006bdnzl+\006bdnzl-\006bdnzla\007"
    "bdnzla+\007bdnzla-\006bdnzlr\007bdnzlr+\007bdnzlr-\007bdnzlrl\010bdnzlr"
    "l+\010bdnzlrl-\005bdnzt\006bdnzta\006bdnztl\007bdnztla\007bdnztlr\010bd"
    "nztlrl\003bdz\004bdz+\004bdz-\004bdza\005bdza+\005bdza-\004bdzf\005bdzf"
    "a\005bdzfl\006bdzfla\006bdzflr\007bdzflrl\004bdzl\005bdzl+\005bdzl-\005"
    "bdzla\006bdzla+\006bdzla-\005bdzlr\006bdzlr+\006bdzlr-\006bdzlrl\007bdz"
    "lrl+\007bdzlrl-\004bdzt\005bdzta\005bdztl\006bdztla\006bdztlr\007bdztlr"
    "l\003beq\004beq+\004beq-\004beqa\005beqa+\005beqa-\006beqctr\007beqctr+"
    "\007beqctr-\007beqctrl\010beqctrl+\010beqctrl-\004beql\005beql+\005beql"
    "-\005beqla\006beqla+\006beqla-\005beqlr\006beqlr+\006beqlr-\006beqlrl\007"
    "beqlrl+\007beqlrl-\002bf\003bf+\003bf-\003bfa\004bfa+\004bfa-\005bfctr\006"
    "bfctr+\006bfctr-\006bfctrl\007bfctrl+\007bfctrl-\003bfl\004bfl+\004bfl-"
    "\004bfla\005bfla+\005bfla-\004bflr\005bflr+\005bflr-\005bflrl\006bflrl+"
    "\006bflrl-\003bge\004bge+\004bge-\004bgea\005bgea+\005bgea-\006bgectr\007"
    "bgectr+\007bgectr-\007bgectrl\010bgectrl+\010bgectrl-\004bgel\005bgel+\005"
    "bgel-\005bgela\006bgela+\006bgela-\005bgelr\006bgelr+\006bgelr-\006bgel"
    "rl\007bgelrl+\007bgelrl-\003bgt\004bgt+\004bgt-\004bgta\005bgta+\005bgt"
    "a-\006bgtctr\007bgtctr+\007bgtctr-\007bgtctrl\010bgtctrl+\010bgtctrl-\004"
    "bgtl\005bgtl+\005bgtl-\005bgtla\006bgtla+\006bgtla-\005bgtlr\006bgtlr+\006"
    "bgtlr-\006bgtlrl\007bgtlrl+\007bgtlrl-\002bl\003bla\003ble\004ble+\004b"
    "le-\004blea\005blea+\005blea-\006blectr\007blectr+\007blectr-\007blectr"
    "l\010blectrl+\010blectrl-\004blel\005blel+\005blel-\005blela\006blela+\006"
    "blela-\005blelr\006blelr+\006blelr-\006blelrl\007blelrl+\007blelrl-\003"
    "blr\004blrl\003blt\004blt+\004blt-\004blta\005blta+\005blta-\006bltctr\007"
    "bltctr+\007bltctr-\007bltctrl\010bltctrl+\010bltctrl-\004bltl\005bltl+\005"
    "bltl-\005bltla\006bltla+\006bltla-\005bltlr\006bltlr+\006bltlr-\006bltl"
    "rl\007bltlrl+\007bltlrl-\003bne\004bne+\004bne-\004bnea\005bnea+\005bne"
    "a-\006bnectr\007bnectr+\007bnectr-\007bnectrl\010bnectrl+\010bnectrl-\004"
    "bnel\005bnel+\005bnel-\005bnela\006bnela+\006bnela-\005bnelr\006bnelr+\006"
    "bnelr-\006bnelrl\007bnelrl+\007bnelrl-\003bng\004bng+\004bng-\004bnga\005"
    "bnga+\005bnga-\006bngctr\007bngctr+\007bngctr-\007bngctrl\010bngctrl+\010"
    "bngctrl-\004bngl\005bngl+\005bngl-\005bngla\006bngla+\006bngla-\005bngl"
    "r\006bnglr+\006bnglr-\006bnglrl\007bnglrl+\007bnglrl-\003bnl\004bnl+\004"
    "bnl-\004bnla\005bnla+\005bnla-\006bnlctr\007bnlctr+\007bnlctr-\007bnlct"
    "rl\010bnlctrl+\010bnlctrl-\004bnll\005bnll+\005bnll-\005bnlla\006bnlla+"
    "\006bnlla-\005bnllr\006bnllr+\006bnllr-\006bnllrl\007bnllrl+\007bnllrl-"
    "\003bns\004bns+\004bns-\004bnsa\005bnsa+\005bnsa-\006bnsctr\007bnsctr+\007"
    "bnsctr-\007bnsctrl\010bnsctrl+\010bnsctrl-\004bnsl\005bnsl+\005bnsl-\005"
    "bnsla\006bnsla+\006bnsla-\005bnslr\006bnslr+\006bnslr-\006bnslrl\007bns"
    "lrl+\007bnslrl-\003bnu\004bnu+\004bnu-\004bnua\005bnua+\005bnua-\006bnu"
    "ctr\007bnuctr+\007bnuctr-\007bnuctrl\010bnuctrl+\010bnuctrl-\004bnul\005"
    "bnul+\005bnul-\005bnula\006bnula+\006bnula-\005bnulr\006bnulr+\006bnulr"
    "-\006bnulrl\007bnulrl+\007bnulrl-\005brinc\003bso\004bso+\004bso-\004bs"
    "oa\005bsoa+\005bsoa-\006bsoctr\007bsoctr+\007bsoctr-\007bsoctrl\010bsoc"
    "trl+\010bsoctrl-\004bsol\005bsol+\005bsol-\005bsola\006bsola+\006bsola-"
    "\005bsolr\006bsolr+\006bsolr-\006bsolrl\007bsolrl+\007bsolrl-\002bt\003"
    "bt+\003bt-\003bta\004bta+\004bta-\005btctr\006btctr+\006btctr-\006btctr"
    "l\007btctrl+\007btctrl-\003btl\004btl+\004btl-\004btla\005btla+\005btla"
    "-\004btlr\005btlr+\005btlr-\005btlrl\006btlrl+\006btlrl-\003bun\004bun+"
    "\004bun-\004buna\005buna+\005buna-\006bunctr\007bunctr+\007bunctr-\007b"
    "unctrl\010bunctrl+\010bunctrl-\004bunl\005bunl+\005bunl-\005bunla\006bu"
    "nla+\006bunla-\005bunlr\006bunlr+\006bunlr-\006bunlrl\007bunlrl+\007bun"
    "lrl-\006clrldi\010clrlsldi\010clrlslwi\006clrlwi\006clrrdi\006clrrwi\003"
    "cmp\004cmpb\004cmpd\005cmpdi\004cmpi\004cmpl\005cmpld\006cmpldi\005cmpl"
    "i\005cmplw\006cmplwi\004cmpw\005cmpwi\005cntlz\006cntlzd\006cntlzw\005c"
    "rand\006crandc\005crclr\005creqv\006crmove\006crnand\005crnor\005crnot\004"
    "cror\005crorc\005crset\005crxor\004dcba\004dcbf\004dcbi\005dcbst\004dcb"
    "t\006dcbtst\004dcbz\005dcbzl\005dccci\003dci\004divd\005divdu\004divw\005"
    "divwu\003dss\006dssall\003dst\005dstst\006dststt\004dstt\005eieio\003eq"
    "v\005evabs\007evaddiw\013evaddsmiaaw\013evaddssiaaw\013evaddumiaaw\013e"
    "vaddusiaaw\006evaddw\005evand\006evandc\007evcmpeq\010evcmpgts\010evcmp"
    "gtu\010evcmplts\010evcmpltu\010evcntlsw\010evcntlzw\007evdivws\007evdiv"
    "wu\005eveqv\007evextsb\007evextsh\005evldd\006evlddx\005evldh\006evldhx"
    "\005evldw\006evldwx\013evlhhesplat\014evlhhesplatx\014evlhhossplat\015e"
    "vlhhossplatx\014evlhhousplat\015evlhhousplatx\006evlwhe\007evlwhex\007e"
    "vlwhos\010evlwhosx\007evlwhou\010evlwhoux\nevlwhsplat\013evlwhsplatx\ne"
    "vlwwsplat\013evlwwsplatx\tevmergehi\013evmergehilo\tevmergelo\013evmerg"
    "elohi\013evmhegsmfaa\013evmhegsmfan\013evmhegsmiaa\013evmhegsmian\013ev"
    "mhegumiaa\013evmhegumian\010evmhesmf\tevmhesmfa\013evmhesmfaaw\013evmhe"
    "smfanw\010evmhesmi\tevmhesmia\013evmhesmiaaw\013evmhesmianw\010evmhessf"
    "\tevmhessfa\013evmhessfaaw\013evmhessfanw\013evmhessiaaw\013evmhessianw"
    "\010evmheumi\tevmheumia\013evmheumiaaw\013evmheumianw\013evmheusiaaw\013"
    "evmheusianw\013evmhogsmfaa\013evmhogsmfan\013evmhogsmiaa\013evmhogsmian"
    "\013evmhogumiaa\013evmhogumian\010evmhosmf\tevmhosmfa\013evmhosmfaaw\013"
    "evmhosmfanw\010evmhosmi\tevmhosmia\013evmhosmiaaw\013evmhosmianw\010evm"
    "hossf\tevmhossfa\013evmhossfaaw\013evmhossfanw\013evmhossiaaw\013evmhos"
    "sianw\010evmhoumi\tevmhoumia\013evmhoumiaaw\013evmhoumianw\013evmhousia"
    "aw\013evmhousianw\005evmra\010evmwhsmf\tevmwhsmfa\010evmwhsmi\tevmwhsmi"
    "a\010evmwhssf\tevmwhssfa\010evmwhumi\tevmwhumia\013evmwlsmiaaw\013evmwl"
    "smianw\013evmwlssiaaw\013evmwlssianw\010evmwlumi\tevmwlumia\013evmwlumi"
    "aaw\013evmwlumianw\013evmwlusiaaw\013evmwlusianw\007evmwsmf\010evmwsmfa"
    "\tevmwsmfaa\tevmwsmfan\007evmwsmi\010evmwsmia\tevmwsmiaa\tevmwsmian\007"
    "evmwssf\010evmwssfa\tevmwssfaa\tevmwssfan\007evmwumi\010evmwumia\tevmwu"
    "miaa\tevmwumian\006evnand\005evneg\005evnor\004evor\005evorc\005evrlw\006"
    "evrlwi\006evrndw\005evslw\006evslwi\tevsplatfi\010evsplati\007evsrwis\007"
    "evsrwiu\006evsrws\006evsrwu\006evstdd\007evstddx\006evstdh\007evstdhx\006"
    "evstdw\007evstdwx\007evstwhe\010evstwhex\007evstwho\010evstwhox\007evst"
    "wwe\010evstwwex\007evstwwo\010evstwwox\014evsubfsmiaaw\014evsubfssiaaw\014"
    "evsubfumiaaw\014evsubfusiaaw\007evsubfw\010evsubifw\005evxor\006extldi\006"
    "extlwi\006extrdi\006extrwi\005extsb\005extsh\005extsw\004fabs\004fadd\005"
    "fadds\005fcfid\006fcfids\006fcfidu\007fcfidus\005fcmpu\006fcpsgn\005fct"
    "id\007fctiduz\006fctidz\005fctiw\007fctiwuz\006fctiwz\004fdiv\005fdivs\005"
    "fmadd\006fmadds\003fmr\005fmsub\006fmsubs\004fmul\005fmuls\005fnabs\004"
    "fneg\006fnmadd\007fnmadds\006fnmsub\007fnmsubs\003fre\004fres\004frim\004"
    "frin\004frip\004friz\004frsp\007frsqrte\010frsqrtes\004fsel\005fsqrt\006"
    "fsqrts\004fsub\005fsubs\004icbi\004icbt\005iccci\003ici\006inslwi\006in"
    "srdi\006insrwi\004isel\005isync\002la\003lbz\006lbzcix\004lbzu\005lbzux"
    "\004lbzx\002ld\005ldarx\005ldbrx\005ldcix\003ldu\004ldux\003ldx\003lfd\004"
    "lfdu\005lfdux\004lfdx\006lfiwax\006lfiwzx\003lfs\004lfsu\005lfsux\004lf"
    "sx\003lha\004lhau\005lhaux\004lhax\005lhbrx\003lhz\006lhzcix\004lhzu\005"
    "lhzux\004lhzx\002li\003lis\003lmw\004lswi\005lvebx\005lvehx\005lvewx\004"
    "lvsl\004lvsr\003lvx\004lvxl\003lwa\005lwarx\005lwaux\004lwax\005lwbrx\006"
    "lwsync\003lwz\006lwzcix\004lwzu\005lwzux\004lwzx\005lxsdx\006lxvd2x\006"
    "lxvdsx\006lxvw4x\004mbar\004mcrf\005mcrfs\005mfamr\005mfasr\005mfbr0\005"
    "mfbr1\005mfbr2\005mfbr3\005mfbr4\005mfbr5\005mfbr6\005mfbr7\006mfcfar\004"
    "mfcr\005mfctr\005mfdar\007mfdbatl\007mfdbatu\006mfdccr\005mfdcr\006mfde"
    "ar\005mfdec\006mfdscr\007mfdsisr\005mfesr\004mffs\007mfibatl\007mfibatu"
    "\006mficcr\004mflr\005mfmsr\006mfocrf\005mfpid\005mfpvr\006mfrtcl\006mf"
    "rtcu\006mfsdr1\tmfspefscr\005mfspr\006mfsprg\007mfsprg0\007mfsprg1\007m"
    "fsprg2\007mfsprg3\007mfsprg4\007mfsprg5\007mfsprg6\007mfsprg7\004mfsr\006"
    "mfsrin\006mfsrr0\006mfsrr1\006mfsrr2\006mfsrr3\004mftb\006mftbhi\005mft"
    "bl\006mftblo\005mftbu\005mftcr\006mfvscr\005mfxer\002mr\005msync\005mta"
    "mr\005mtasr\005mtbr0\005mtbr1\005mtbr2\005mtbr3\005mtbr4\005mtbr5\005mt"
    "br6\005mtbr7\006mtcfar\004mtcr\005mtcrf\005mtctr\005mtdar\007mtdbatl\007"
    "mtdbatu\006mtdccr\005mtdcr\006mtdear\005mtdec\006mtdscr\007mtdsisr\005m"
    "tesr\006mtfsb0\006mtfsb1\005mtfsf\006mtfsfi\007mtibatl\007mtibatu\006mt"
    "iccr\004mtlr\005mtmsr\006mtmsrd\006mtocrf\005mtpid\006mtsdr1\tmtspefscr"
    "\005mtspr\006mtsprg\007mtsprg0\007mtsprg1\007mtsprg2\007mtsprg3\007mtsp"
    "rg4\007mtsprg5\007mtsprg6\007mtsprg7\004mtsr\006mtsrin\006mtsrr0\006mts"
    "rr1\006mtsrr2\006mtsrr3\006mttbhi\005mttbl\006mttblo\005mttbu\005mttcr\006"
    "mtvscr\005mtxer\005mulhd\006mulhdu\005mulhw\006mulhwu\005mulld\005mulli"
    "\005mullw\004nand\003neg\003nop\003nor\003not\002or\003orc\003ori\004or"
    "is\007popcntd\007popcntw\007ptesync\004rfci\004rfdi\003rfi\004rfid\005r"
    "fmci\005rldcl\005rldcr\005rldic\006rldicl\006rldicr\006rldimi\006rlwimi"
    "\006rlwinm\005rlwnm\005rotld\006rotldi\005rotlw\006rotlwi\006rotrdi\006"
    "rotrwi\002sc\005slbia\005slbie\007slbmfee\006slbmte\003sld\004sldi\003s"
    "lw\004slwi\004srad\005sradi\004sraw\005srawi\003srd\004srdi\003srw\004s"
    "rwi\003stb\006stbcix\004stbu\005stbux\004stbx\003std\006stdbrx\006stdci"
    "x\005stdcx\004stdu\005stdux\004stdx\004stfd\005stfdu\006stfdux\005stfdx"
    "\006stfiwx\004stfs\005stfsu\006stfsux\005stfsx\003sth\006sthbrx\006sthc"
    "ix\004sthu\005sthux\004sthx\004stmw\005stswi\006stvebx\006stvehx\006stv"
    "ewx\004stvx\005stvxl\003stw\006stwbrx\006stwcix\005stwcx\004stwu\005stw"
    "ux\004stwx\006stxsdx\007stxvd2x\007stxvw4x\003sub\004subc\004subf\005su"
    "bfc\005subfe\006subfic\006subfme\006subfze\004subi\005subic\005subis\004"
    "sync\002td\004tdeq\005tdeqi\004tdge\005tdgei\004tdgt\005tdgti\003tdi\004"
    "tdle\005tdlei\005tdlge\006tdlgei\005tdlgt\006tdlgti\005tdlle\006tdllei\005"
    "tdllt\006tdllti\005tdlng\006tdlngi\005tdlnl\006tdlnli\004tdlt\005tdlti\004"
    "tdne\005tdnei\004tdng\005tdngi\004tdnl\005tdnli\003tdu\004tdui\005tlbia"
    "\005tlbie\006tlbiel\007tlbivax\005tlbld\005tlbli\005tlbre\007tlbrehi\007"
    "tlbrelo\005tlbsx\007tlbsync\005tlbwe\007tlbwehi\007tlbwelo\004trap\002t"
    "w\004tweq\005tweqi\004twge\005twgei\004twgt\005twgti\003twi\004twle\005"
    "twlei\005twlge\006twlgei\005twlgt\006twlgti\005twlle\006twllei\005twllt"
    "\006twllti\005twlng\006twlngi\005twlnl\006twlnli\004twlt\005twlti\004tw"
    "ne\005twnei\004twng\005twngi\004twnl\005twnli\003twu\004twui\007vaddcuw"
    "\006vaddfp\007vaddsbs\007vaddshs\007vaddsws\007vaddubm\007vaddubs\007va"
    "dduhm\007vadduhs\007vadduwm\007vadduws\004vand\005vandc\006vavgsb\006va"
    "vgsh\006vavgsw\006vavgub\006vavguh\006vavguw\005vcfsx\005vcfux\005vclzb"
    "\005vclzd\005vclzh\005vclzw\007vcmpbfp\010vcmpeqfp\010vcmpequb\010vcmpe"
    "quh\010vcmpequw\010vcmpgefp\010vcmpgtfp\010vcmpgtsb\010vcmpgtsh\010vcmp"
    "gtsw\010vcmpgtub\010vcmpgtuh\010vcmpgtuw\006vctsxs\006vctuxs\004veqv\010"
    "vexptefp\007vlogefp\007vmaddfp\006vmaxfp\006vmaxsb\006vmaxsh\006vmaxsw\006"
    "vmaxub\006vmaxuh\006vmaxuw\tvmhaddshs\nvmhraddshs\006vminfp\006vminsb\006"
    "vminsh\006vminsw\006vminub\006vminuh\006vminuw\tvmladduhm\006vmrghb\006"
    "vmrghh\006vmrghw\006vmrglb\006vmrglh\006vmrglw\010vmsummbm\010vmsumshm\010"
    "vmsumshs\010vmsumubm\010vmsumuhm\010vmsumuhs\007vmulesb\007vmulesh\007v"
    "muleub\007vmuleuh\007vmulosb\007vmulosh\007vmuloub\007vmulouh\005vnand\010"
    "vnmsubfp\004vnor\003vor\004vorc\005vperm\005vpkpx\007vpkshss\007vpkshus"
    "\007vpkswss\007vpkswus\007vpkuhum\007vpkuhus\007vpkuwum\007vpkuwus\010v"
    "popcntb\010vpopcntd\010vpopcnth\010vpopcntw\005vrefp\005vrfim\005vrfin\005"
    "vrfip\005vrfiz\004vrlb\004vrlh\004vrlw\tvrsqrtefp\004vsel\003vsl\004vsl"
    "b\006vsldoi\004vslh\004vslo\004vslw\006vspltb\006vsplth\010vspltisb\010"
    "vspltish\010vspltisw\006vspltw\003vsr\005vsrab\005vsrah\005vsraw\004vsr"
    "b\004vsrh\004vsro\004vsrw\007vsubcuw\006vsubfp\007vsubsbs\007vsubshs\007"
    "vsubsws\007vsububm\007vsububs\007vsubuhm\007vsubuhs\007vsubuwm\007vsubu"
    "ws\010vsum2sws\010vsum4sbs\010vsum4shs\010vsum4ubs\007vsumsws\007vupkhp"
    "x\007vupkhsb\007vupkhsh\007vupklpx\007vupklsb\007vupklsh\004vxor\004wai"
    "t\010waitimpl\007waitrsv\005wrtee\006wrteei\004xnop\003xor\004xori\005x"
    "oris\007xsabsdp\007xsadddp\010xscmpodp\010xscmpudp\txscpsgndp\010xscvdp"
    "sp\nxscvdpsxds\nxscvdpsxws\nxscvdpuxds\nxscvdpuxws\010xscvspdp\txscvsxd"
    "dp\txscvuxddp\007xsdivdp\txsmaddadp\txsmaddmdp\007xsmaxdp\007xsmindp\tx"
    "smsubadp\txsmsubmdp\007xsmuldp\010xsnabsdp\007xsnegdp\nxsnmaddadp\nxsnm"
    "addmdp\nxsnmsubadp\nxsnmsubmdp\006xsrdpi\007xsrdpic\007xsrdpim\007xsrdp"
    "ip\007xsrdpiz\006xsredp\nxsrsqrtedp\010xssqrtdp\007xssubdp\010xstdivdp\t"
    "xstsqrtdp\007xvabsdp\007xvabssp\007xvadddp\007xvaddsp\txvcmpeqdp\txvcmp"
    "eqsp\txvcmpgedp\txvcmpgesp\txvcmpgtdp\txvcmpgtsp\txvcpsgndp\txvcpsgnsp\010"
    "xvcvdpsp\nxvcvdpsxds\nxvcvdpsxws\nxvcvdpuxds\nxvcvdpuxws\010xvcvspdp\nx"
    "vcvspsxds\nxvcvspsxws\nxvcvspuxds\nxvcvspuxws\txvcvsxddp\txvcvsxdsp\txv"
    "cvsxwdp\txvcvsxwsp\txvcvuxddp\txvcvuxdsp\txvcvuxwdp\txvcvuxwsp\007xvdiv"
    "dp\007xvdivsp\txvmaddadp\txvmaddasp\txvmaddmdp\txvmaddmsp\007xvmaxdp\007"
    "xvmaxsp\007xvmindp\007xvminsp\007xvmovdp\007xvmovsp\txvmsubadp\txvmsuba"
    "sp\txvmsubmdp\txvmsubmsp\007xvmuldp\007xvmulsp\010xvnabsdp\010xvnabssp\007"
    "xvnegdp\007xvnegsp\nxvnmaddadp\nxvnmaddasp\nxvnmaddmdp\nxvnmaddmsp\nxvn"
    "msubadp\nxvnmsubasp\nxvnmsubmdp\nxvnmsubmsp\006xvrdpi\007xvrdpic\007xvr"
    "dpim\007xvrdpip\007xvrdpiz\006xvredp\006xvresp\006xvrspi\007xvrspic\007"
    "xvrspim\007xvrspip\007xvrspiz\nxvrsqrtedp\nxvrsqrtesp\010xvsqrtdp\010xv"
    "sqrtsp\007xvsubdp\007xvsubsp\010xvtdivdp\010xvtdivsp\txvtsqrtdp\txvtsqr"
    "tsp\006xxland\007xxlandc\006xxlnor\005xxlor\006xxlxor\007xxmrghd\007xxm"
    "rghw\007xxmrgld\007xxmrglw\010xxpermdi\005xxsel\007xxsldwi\007xxspltd\007"
    "xxspltw\007xxswapd";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeatures;
    uint8_t Classes[6];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable0[] = {
  { 0 /* add */, PPC::ADD8TLS_, Convert__RegG8RC1_0__RegG8RC1_1__TLSReg1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_TLSReg }, },
  { 0 /* add */, PPC::ADD4, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 0 /* add */, PPC::ADD4o, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4 /* addc */, PPC::ADDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4 /* addc */, PPC::ADDCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9 /* adde */, PPC::ADDE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 9 /* adde */, PPC::ADDEo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 14 /* addi */, PPC::ADDI, Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_S16Imm }, },
  { 19 /* addic */, PPC::ADDIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 19 /* addic */, PPC::ADDICo, Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 25 /* addis */, PPC::ADDIS, Convert__RegGPRC1_0__RegGPRCNoR01_1__S17Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_S17Imm }, },
  { 31 /* addme */, PPC::ADDME, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 31 /* addme */, PPC::ADDMEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 37 /* addze */, PPC::ADDZE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 37 /* addze */, PPC::ADDZEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 43 /* and */, PPC::AND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 43 /* and */, PPC::ANDo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 47 /* andc */, PPC::ANDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 47 /* andc */, PPC::ANDCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 52 /* andi */, PPC::ANDIo, Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 57 /* andis */, PPC::ANDISo, Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 63 /* attn */, PPC::ATTN, Convert_NoOperands, 0, {  }, },
  { 68 /* b */, PPC::B, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 70 /* ba */, PPC::BA, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 73 /* bc */, PPC::gBC, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 76 /* bca */, PPC::gBCA, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 80 /* bcctr */, PPC::gBCCTR, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 80 /* bcctr */, PPC::gBCCTR, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 86 /* bcctrl */, PPC::gBCCTRL, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 86 /* bcctrl */, PPC::gBCCTRL, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 93 /* bcl */, PPC::gBCL, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 97 /* bcla */, PPC::gBCLA, Convert__U5Imm1_0__RegCRBITRC1_1__CondBr1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_CondBr }, },
  { 102 /* bclr */, PPC::gBCLR, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 102 /* bclr */, PPC::gBCLR, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 107 /* bclrl */, PPC::gBCLRL, Convert__U5Imm1_0__RegCRBITRC1_1__imm_95_0, 0, { MCK_U5Imm, MCK_RegCRBITRC }, },
  { 107 /* bclrl */, PPC::gBCLRL, Convert__U5Imm1_0__RegCRBITRC1_1__Imm1_2, 0, { MCK_U5Imm, MCK_RegCRBITRC, MCK_Imm }, },
  { 113 /* bctr */, PPC::BCTR, Convert_NoOperands, 0, {  }, },
  { 118 /* bctrl */, PPC::BCTRL, Convert_NoOperands, 0, {  }, },
  { 124 /* bdnz */, PPC::BDNZ, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 129 /* bdnz+ */, PPC::BDNZp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 135 /* bdnz- */, PPC::BDNZm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 141 /* bdnza */, PPC::BDNZA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 147 /* bdnza+ */, PPC::BDNZAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 154 /* bdnza- */, PPC::BDNZAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 161 /* bdnzf */, PPC::gBC, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 167 /* bdnzfa */, PPC::gBCA, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 174 /* bdnzfl */, PPC::gBCL, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 181 /* bdnzfla */, PPC::gBCLA, Convert__imm_95_0__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 189 /* bdnzflr */, PPC::gBCLR, Convert__imm_95_0__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 197 /* bdnzflrl */, PPC::gBCLRL, Convert__imm_95_0__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 206 /* bdnzl */, PPC::BDNZL, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 212 /* bdnzl+ */, PPC::BDNZLp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 219 /* bdnzl- */, PPC::BDNZLm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 226 /* bdnzla */, PPC::BDNZLA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 233 /* bdnzla+ */, PPC::BDNZLAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 241 /* bdnzla- */, PPC::BDNZLAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 249 /* bdnzlr */, PPC::BDNZLR, Convert_NoOperands, 0, {  }, },
  { 256 /* bdnzlr+ */, PPC::BDNZLRp, Convert_NoOperands, 0, {  }, },
  { 264 /* bdnzlr- */, PPC::BDNZLRm, Convert_NoOperands, 0, {  }, },
  { 272 /* bdnzlrl */, PPC::BDNZLRL, Convert_NoOperands, 0, {  }, },
  { 280 /* bdnzlrl+ */, PPC::BDNZLRLp, Convert_NoOperands, 0, {  }, },
  { 289 /* bdnzlrl- */, PPC::BDNZLRLm, Convert_NoOperands, 0, {  }, },
  { 298 /* bdnzt */, PPC::gBC, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 304 /* bdnzta */, PPC::gBCA, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 311 /* bdnztl */, PPC::gBCL, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 318 /* bdnztla */, PPC::gBCLA, Convert__imm_95_8__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 326 /* bdnztlr */, PPC::gBCLR, Convert__imm_95_8__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 334 /* bdnztlrl */, PPC::gBCLRL, Convert__imm_95_8__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 343 /* bdz */, PPC::BDZ, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 347 /* bdz+ */, PPC::BDZp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 352 /* bdz- */, PPC::BDZm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 357 /* bdza */, PPC::BDZA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 362 /* bdza+ */, PPC::BDZAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 368 /* bdza- */, PPC::BDZAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 374 /* bdzf */, PPC::gBC, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 379 /* bdzfa */, PPC::gBCA, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 385 /* bdzfl */, PPC::gBCL, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 391 /* bdzfla */, PPC::gBCLA, Convert__imm_95_2__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 398 /* bdzflr */, PPC::gBCLR, Convert__imm_95_2__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 405 /* bdzflrl */, PPC::gBCLRL, Convert__imm_95_2__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 413 /* bdzl */, PPC::BDZL, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 418 /* bdzl+ */, PPC::BDZLp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 424 /* bdzl- */, PPC::BDZLm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 430 /* bdzla */, PPC::BDZLA, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 436 /* bdzla+ */, PPC::BDZLAp, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 443 /* bdzla- */, PPC::BDZLAm, Convert__CondBr1_0, 0, { MCK_CondBr }, },
  { 450 /* bdzlr */, PPC::BDZLR, Convert_NoOperands, 0, {  }, },
  { 456 /* bdzlr+ */, PPC::BDZLRp, Convert_NoOperands, 0, {  }, },
  { 463 /* bdzlr- */, PPC::BDZLRm, Convert_NoOperands, 0, {  }, },
  { 470 /* bdzlrl */, PPC::BDZLRL, Convert_NoOperands, 0, {  }, },
  { 477 /* bdzlrl+ */, PPC::BDZLRLp, Convert_NoOperands, 0, {  }, },
  { 485 /* bdzlrl- */, PPC::BDZLRLm, Convert_NoOperands, 0, {  }, },
  { 493 /* bdzt */, PPC::gBC, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 498 /* bdzta */, PPC::gBCA, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 504 /* bdztl */, PPC::gBCL, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 510 /* bdztla */, PPC::gBCLA, Convert__imm_95_10__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 517 /* bdztlr */, PPC::gBCLR, Convert__imm_95_10__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 524 /* bdztlrl */, PPC::gBCLRL, Convert__imm_95_10__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 532 /* beq */, PPC::BCC, Convert__imm_95_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 532 /* beq */, PPC::BCC, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 536 /* beq+ */, PPC::BCC, Convert__imm_95_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 536 /* beq+ */, PPC::BCC, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 541 /* beq- */, PPC::BCC, Convert__imm_95_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 541 /* beq- */, PPC::BCC, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 546 /* beqa */, PPC::BCCA, Convert__imm_95_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 546 /* beqa */, PPC::BCCA, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 551 /* beqa+ */, PPC::BCCA, Convert__imm_95_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 551 /* beqa+ */, PPC::BCCA, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 557 /* beqa- */, PPC::BCCA, Convert__imm_95_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 557 /* beqa- */, PPC::BCCA, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 563 /* beqctr */, PPC::BCCCTR, Convert__imm_95_76__regCR0, 0, {  }, },
  { 563 /* beqctr */, PPC::BCCCTR, Convert__imm_95_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 570 /* beqctr+ */, PPC::BCCCTR, Convert__imm_95_79__regCR0, 0, {  }, },
  { 570 /* beqctr+ */, PPC::BCCCTR, Convert__imm_95_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 578 /* beqctr- */, PPC::BCCCTR, Convert__imm_95_78__regCR0, 0, {  }, },
  { 578 /* beqctr- */, PPC::BCCCTR, Convert__imm_95_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 586 /* beqctrl */, PPC::BCCCTRL, Convert__imm_95_76__regCR0, 0, {  }, },
  { 586 /* beqctrl */, PPC::BCCCTRL, Convert__imm_95_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 594 /* beqctrl+ */, PPC::BCCCTRL, Convert__imm_95_79__regCR0, 0, {  }, },
  { 594 /* beqctrl+ */, PPC::BCCCTRL, Convert__imm_95_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 603 /* beqctrl- */, PPC::BCCCTRL, Convert__imm_95_78__regCR0, 0, {  }, },
  { 603 /* beqctrl- */, PPC::BCCCTRL, Convert__imm_95_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 612 /* beql */, PPC::BCCL, Convert__imm_95_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 612 /* beql */, PPC::BCCL, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 617 /* beql+ */, PPC::BCCL, Convert__imm_95_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 617 /* beql+ */, PPC::BCCL, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 623 /* beql- */, PPC::BCCL, Convert__imm_95_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 623 /* beql- */, PPC::BCCL, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 629 /* beqla */, PPC::BCCLA, Convert__imm_95_76__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 629 /* beqla */, PPC::BCCLA, Convert__imm_95_76__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 635 /* beqla+ */, PPC::BCCLA, Convert__imm_95_79__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 635 /* beqla+ */, PPC::BCCLA, Convert__imm_95_79__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 642 /* beqla- */, PPC::BCCLA, Convert__imm_95_78__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 642 /* beqla- */, PPC::BCCLA, Convert__imm_95_78__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 649 /* beqlr */, PPC::BCCLR, Convert__imm_95_76__regCR0, 0, {  }, },
  { 649 /* beqlr */, PPC::BCCLR, Convert__imm_95_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 655 /* beqlr+ */, PPC::BCCLR, Convert__imm_95_79__regCR0, 0, {  }, },
  { 655 /* beqlr+ */, PPC::BCCLR, Convert__imm_95_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 662 /* beqlr- */, PPC::BCCLR, Convert__imm_95_78__regCR0, 0, {  }, },
  { 662 /* beqlr- */, PPC::BCCLR, Convert__imm_95_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 669 /* beqlrl */, PPC::BCCLRL, Convert__imm_95_76__regCR0, 0, {  }, },
  { 669 /* beqlrl */, PPC::BCCLRL, Convert__imm_95_76__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 676 /* beqlrl+ */, PPC::BCCLRL, Convert__imm_95_79__regCR0, 0, {  }, },
  { 676 /* beqlrl+ */, PPC::BCCLRL, Convert__imm_95_79__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 684 /* beqlrl- */, PPC::BCCLRL, Convert__imm_95_78__regCR0, 0, {  }, },
  { 684 /* beqlrl- */, PPC::BCCLRL, Convert__imm_95_78__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 692 /* bf */, PPC::gBC, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 695 /* bf+ */, PPC::gBC, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 699 /* bf- */, PPC::gBC, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 703 /* bfa */, PPC::gBCA, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 707 /* bfa+ */, PPC::gBCA, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 712 /* bfa- */, PPC::gBCA, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 717 /* bfctr */, PPC::gBCCTR, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 723 /* bfctr+ */, PPC::gBCCTR, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 730 /* bfctr- */, PPC::gBCCTR, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 737 /* bfctrl */, PPC::gBCCTRL, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 744 /* bfctrl+ */, PPC::gBCCTRL, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 752 /* bfctrl- */, PPC::gBCCTRL, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 760 /* bfl */, PPC::gBCL, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 764 /* bfl+ */, PPC::gBCL, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 769 /* bfl- */, PPC::gBCL, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 774 /* bfla */, PPC::gBCLA, Convert__imm_95_4__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 779 /* bfla+ */, PPC::gBCLA, Convert__imm_95_7__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 785 /* bfla- */, PPC::gBCLA, Convert__imm_95_6__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 791 /* bflr */, PPC::gBCLR, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 796 /* bflr+ */, PPC::gBCLR, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 802 /* bflr- */, PPC::gBCLR, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 808 /* bflrl */, PPC::gBCLRL, Convert__imm_95_4__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 814 /* bflrl+ */, PPC::gBCLRL, Convert__imm_95_7__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 821 /* bflrl- */, PPC::gBCLRL, Convert__imm_95_6__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 828 /* bge */, PPC::BCC, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 828 /* bge */, PPC::BCC, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 832 /* bge+ */, PPC::BCC, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 832 /* bge+ */, PPC::BCC, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 837 /* bge- */, PPC::BCC, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 837 /* bge- */, PPC::BCC, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 842 /* bgea */, PPC::BCCA, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 842 /* bgea */, PPC::BCCA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 847 /* bgea+ */, PPC::BCCA, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 847 /* bgea+ */, PPC::BCCA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 853 /* bgea- */, PPC::BCCA, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 853 /* bgea- */, PPC::BCCA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 859 /* bgectr */, PPC::BCCCTR, Convert__imm_95_4__regCR0, 0, {  }, },
  { 859 /* bgectr */, PPC::BCCCTR, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 866 /* bgectr+ */, PPC::BCCCTR, Convert__imm_95_7__regCR0, 0, {  }, },
  { 866 /* bgectr+ */, PPC::BCCCTR, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 874 /* bgectr- */, PPC::BCCCTR, Convert__imm_95_6__regCR0, 0, {  }, },
  { 874 /* bgectr- */, PPC::BCCCTR, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 882 /* bgectrl */, PPC::BCCCTRL, Convert__imm_95_4__regCR0, 0, {  }, },
  { 882 /* bgectrl */, PPC::BCCCTRL, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 890 /* bgectrl+ */, PPC::BCCCTRL, Convert__imm_95_7__regCR0, 0, {  }, },
  { 890 /* bgectrl+ */, PPC::BCCCTRL, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 899 /* bgectrl- */, PPC::BCCCTRL, Convert__imm_95_6__regCR0, 0, {  }, },
  { 899 /* bgectrl- */, PPC::BCCCTRL, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 908 /* bgel */, PPC::BCCL, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 908 /* bgel */, PPC::BCCL, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 913 /* bgel+ */, PPC::BCCL, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 913 /* bgel+ */, PPC::BCCL, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 919 /* bgel- */, PPC::BCCL, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 919 /* bgel- */, PPC::BCCL, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 925 /* bgela */, PPC::BCCLA, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 925 /* bgela */, PPC::BCCLA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 931 /* bgela+ */, PPC::BCCLA, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 931 /* bgela+ */, PPC::BCCLA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 938 /* bgela- */, PPC::BCCLA, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 938 /* bgela- */, PPC::BCCLA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 945 /* bgelr */, PPC::BCCLR, Convert__imm_95_4__regCR0, 0, {  }, },
  { 945 /* bgelr */, PPC::BCCLR, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 951 /* bgelr+ */, PPC::BCCLR, Convert__imm_95_7__regCR0, 0, {  }, },
  { 951 /* bgelr+ */, PPC::BCCLR, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 958 /* bgelr- */, PPC::BCCLR, Convert__imm_95_6__regCR0, 0, {  }, },
  { 958 /* bgelr- */, PPC::BCCLR, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 965 /* bgelrl */, PPC::BCCLRL, Convert__imm_95_4__regCR0, 0, {  }, },
  { 965 /* bgelrl */, PPC::BCCLRL, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 972 /* bgelrl+ */, PPC::BCCLRL, Convert__imm_95_7__regCR0, 0, {  }, },
  { 972 /* bgelrl+ */, PPC::BCCLRL, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 980 /* bgelrl- */, PPC::BCCLRL, Convert__imm_95_6__regCR0, 0, {  }, },
  { 980 /* bgelrl- */, PPC::BCCLRL, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 988 /* bgt */, PPC::BCC, Convert__imm_95_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 988 /* bgt */, PPC::BCC, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 992 /* bgt+ */, PPC::BCC, Convert__imm_95_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 992 /* bgt+ */, PPC::BCC, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 997 /* bgt- */, PPC::BCC, Convert__imm_95_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 997 /* bgt- */, PPC::BCC, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1002 /* bgta */, PPC::BCCA, Convert__imm_95_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1002 /* bgta */, PPC::BCCA, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1007 /* bgta+ */, PPC::BCCA, Convert__imm_95_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1007 /* bgta+ */, PPC::BCCA, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1013 /* bgta- */, PPC::BCCA, Convert__imm_95_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1013 /* bgta- */, PPC::BCCA, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1019 /* bgtctr */, PPC::BCCCTR, Convert__imm_95_44__regCR0, 0, {  }, },
  { 1019 /* bgtctr */, PPC::BCCCTR, Convert__imm_95_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1026 /* bgtctr+ */, PPC::BCCCTR, Convert__imm_95_47__regCR0, 0, {  }, },
  { 1026 /* bgtctr+ */, PPC::BCCCTR, Convert__imm_95_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1034 /* bgtctr- */, PPC::BCCCTR, Convert__imm_95_46__regCR0, 0, {  }, },
  { 1034 /* bgtctr- */, PPC::BCCCTR, Convert__imm_95_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1042 /* bgtctrl */, PPC::BCCCTRL, Convert__imm_95_44__regCR0, 0, {  }, },
  { 1042 /* bgtctrl */, PPC::BCCCTRL, Convert__imm_95_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1050 /* bgtctrl+ */, PPC::BCCCTRL, Convert__imm_95_47__regCR0, 0, {  }, },
  { 1050 /* bgtctrl+ */, PPC::BCCCTRL, Convert__imm_95_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1059 /* bgtctrl- */, PPC::BCCCTRL, Convert__imm_95_46__regCR0, 0, {  }, },
  { 1059 /* bgtctrl- */, PPC::BCCCTRL, Convert__imm_95_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1068 /* bgtl */, PPC::BCCL, Convert__imm_95_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1068 /* bgtl */, PPC::BCCL, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1073 /* bgtl+ */, PPC::BCCL, Convert__imm_95_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1073 /* bgtl+ */, PPC::BCCL, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1079 /* bgtl- */, PPC::BCCL, Convert__imm_95_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1079 /* bgtl- */, PPC::BCCL, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1085 /* bgtla */, PPC::BCCLA, Convert__imm_95_44__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1085 /* bgtla */, PPC::BCCLA, Convert__imm_95_44__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1091 /* bgtla+ */, PPC::BCCLA, Convert__imm_95_47__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1091 /* bgtla+ */, PPC::BCCLA, Convert__imm_95_47__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1098 /* bgtla- */, PPC::BCCLA, Convert__imm_95_46__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1098 /* bgtla- */, PPC::BCCLA, Convert__imm_95_46__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1105 /* bgtlr */, PPC::BCCLR, Convert__imm_95_44__regCR0, 0, {  }, },
  { 1105 /* bgtlr */, PPC::BCCLR, Convert__imm_95_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1111 /* bgtlr+ */, PPC::BCCLR, Convert__imm_95_47__regCR0, 0, {  }, },
  { 1111 /* bgtlr+ */, PPC::BCCLR, Convert__imm_95_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1118 /* bgtlr- */, PPC::BCCLR, Convert__imm_95_46__regCR0, 0, {  }, },
  { 1118 /* bgtlr- */, PPC::BCCLR, Convert__imm_95_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1125 /* bgtlrl */, PPC::BCCLRL, Convert__imm_95_44__regCR0, 0, {  }, },
  { 1125 /* bgtlrl */, PPC::BCCLRL, Convert__imm_95_44__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1132 /* bgtlrl+ */, PPC::BCCLRL, Convert__imm_95_47__regCR0, 0, {  }, },
  { 1132 /* bgtlrl+ */, PPC::BCCLRL, Convert__imm_95_47__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1140 /* bgtlrl- */, PPC::BCCLRL, Convert__imm_95_46__regCR0, 0, {  }, },
  { 1140 /* bgtlrl- */, PPC::BCCLRL, Convert__imm_95_46__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1148 /* bl */, PPC::BL, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 1148 /* bl */, PPC::BL8_TLS_, Convert__DirectBr1_0__Imm1_1, 0, { MCK_DirectBr, MCK_Imm }, },
  { 1151 /* bla */, PPC::BLA, Convert__DirectBr1_0, 0, { MCK_DirectBr }, },
  { 1155 /* ble */, PPC::BCC, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1155 /* ble */, PPC::BCC, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1159 /* ble+ */, PPC::BCC, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1159 /* ble+ */, PPC::BCC, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1164 /* ble- */, PPC::BCC, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1164 /* ble- */, PPC::BCC, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1169 /* blea */, PPC::BCCA, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1169 /* blea */, PPC::BCCA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1174 /* blea+ */, PPC::BCCA, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1174 /* blea+ */, PPC::BCCA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1180 /* blea- */, PPC::BCCA, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1180 /* blea- */, PPC::BCCA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1186 /* blectr */, PPC::BCCCTR, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1186 /* blectr */, PPC::BCCCTR, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1193 /* blectr+ */, PPC::BCCCTR, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1193 /* blectr+ */, PPC::BCCCTR, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1201 /* blectr- */, PPC::BCCCTR, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1201 /* blectr- */, PPC::BCCCTR, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1209 /* blectrl */, PPC::BCCCTRL, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1209 /* blectrl */, PPC::BCCCTRL, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1217 /* blectrl+ */, PPC::BCCCTRL, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1217 /* blectrl+ */, PPC::BCCCTRL, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1226 /* blectrl- */, PPC::BCCCTRL, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1226 /* blectrl- */, PPC::BCCCTRL, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1235 /* blel */, PPC::BCCL, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1235 /* blel */, PPC::BCCL, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1240 /* blel+ */, PPC::BCCL, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1240 /* blel+ */, PPC::BCCL, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1246 /* blel- */, PPC::BCCL, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1246 /* blel- */, PPC::BCCL, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1252 /* blela */, PPC::BCCLA, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1252 /* blela */, PPC::BCCLA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1258 /* blela+ */, PPC::BCCLA, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1258 /* blela+ */, PPC::BCCLA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1265 /* blela- */, PPC::BCCLA, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1265 /* blela- */, PPC::BCCLA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1272 /* blelr */, PPC::BCCLR, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1272 /* blelr */, PPC::BCCLR, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1278 /* blelr+ */, PPC::BCCLR, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1278 /* blelr+ */, PPC::BCCLR, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1285 /* blelr- */, PPC::BCCLR, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1285 /* blelr- */, PPC::BCCLR, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1292 /* blelrl */, PPC::BCCLRL, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1292 /* blelrl */, PPC::BCCLRL, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1299 /* blelrl+ */, PPC::BCCLRL, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1299 /* blelrl+ */, PPC::BCCLRL, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1307 /* blelrl- */, PPC::BCCLRL, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1307 /* blelrl- */, PPC::BCCLRL, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1315 /* blr */, PPC::BLR, Convert_NoOperands, 0, {  }, },
  { 1319 /* blrl */, PPC::BLRL, Convert_NoOperands, 0, {  }, },
  { 1324 /* blt */, PPC::BCC, Convert__imm_95_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1324 /* blt */, PPC::BCC, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1328 /* blt+ */, PPC::BCC, Convert__imm_95_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1328 /* blt+ */, PPC::BCC, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1333 /* blt- */, PPC::BCC, Convert__imm_95_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1333 /* blt- */, PPC::BCC, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1338 /* blta */, PPC::BCCA, Convert__imm_95_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1338 /* blta */, PPC::BCCA, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1343 /* blta+ */, PPC::BCCA, Convert__imm_95_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1343 /* blta+ */, PPC::BCCA, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1349 /* blta- */, PPC::BCCA, Convert__imm_95_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1349 /* blta- */, PPC::BCCA, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1355 /* bltctr */, PPC::BCCCTR, Convert__imm_95_12__regCR0, 0, {  }, },
  { 1355 /* bltctr */, PPC::BCCCTR, Convert__imm_95_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1362 /* bltctr+ */, PPC::BCCCTR, Convert__imm_95_15__regCR0, 0, {  }, },
  { 1362 /* bltctr+ */, PPC::BCCCTR, Convert__imm_95_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1370 /* bltctr- */, PPC::BCCCTR, Convert__imm_95_14__regCR0, 0, {  }, },
  { 1370 /* bltctr- */, PPC::BCCCTR, Convert__imm_95_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1378 /* bltctrl */, PPC::BCCCTRL, Convert__imm_95_12__regCR0, 0, {  }, },
  { 1378 /* bltctrl */, PPC::BCCCTRL, Convert__imm_95_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1386 /* bltctrl+ */, PPC::BCCCTRL, Convert__imm_95_15__regCR0, 0, {  }, },
  { 1386 /* bltctrl+ */, PPC::BCCCTRL, Convert__imm_95_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1395 /* bltctrl- */, PPC::BCCCTRL, Convert__imm_95_14__regCR0, 0, {  }, },
  { 1395 /* bltctrl- */, PPC::BCCCTRL, Convert__imm_95_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1404 /* bltl */, PPC::BCCL, Convert__imm_95_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1404 /* bltl */, PPC::BCCL, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1409 /* bltl+ */, PPC::BCCL, Convert__imm_95_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1409 /* bltl+ */, PPC::BCCL, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1415 /* bltl- */, PPC::BCCL, Convert__imm_95_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1415 /* bltl- */, PPC::BCCL, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1421 /* bltla */, PPC::BCCLA, Convert__imm_95_12__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1421 /* bltla */, PPC::BCCLA, Convert__imm_95_12__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1427 /* bltla+ */, PPC::BCCLA, Convert__imm_95_15__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1427 /* bltla+ */, PPC::BCCLA, Convert__imm_95_15__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1434 /* bltla- */, PPC::BCCLA, Convert__imm_95_14__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1434 /* bltla- */, PPC::BCCLA, Convert__imm_95_14__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1441 /* bltlr */, PPC::BCCLR, Convert__imm_95_12__regCR0, 0, {  }, },
  { 1441 /* bltlr */, PPC::BCCLR, Convert__imm_95_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1447 /* bltlr+ */, PPC::BCCLR, Convert__imm_95_15__regCR0, 0, {  }, },
  { 1447 /* bltlr+ */, PPC::BCCLR, Convert__imm_95_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1454 /* bltlr- */, PPC::BCCLR, Convert__imm_95_14__regCR0, 0, {  }, },
  { 1454 /* bltlr- */, PPC::BCCLR, Convert__imm_95_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1461 /* bltlrl */, PPC::BCCLRL, Convert__imm_95_12__regCR0, 0, {  }, },
  { 1461 /* bltlrl */, PPC::BCCLRL, Convert__imm_95_12__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1468 /* bltlrl+ */, PPC::BCCLRL, Convert__imm_95_15__regCR0, 0, {  }, },
  { 1468 /* bltlrl+ */, PPC::BCCLRL, Convert__imm_95_15__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1476 /* bltlrl- */, PPC::BCCLRL, Convert__imm_95_14__regCR0, 0, {  }, },
  { 1476 /* bltlrl- */, PPC::BCCLRL, Convert__imm_95_14__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1484 /* bne */, PPC::BCC, Convert__imm_95_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1484 /* bne */, PPC::BCC, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1488 /* bne+ */, PPC::BCC, Convert__imm_95_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1488 /* bne+ */, PPC::BCC, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1493 /* bne- */, PPC::BCC, Convert__imm_95_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1493 /* bne- */, PPC::BCC, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1498 /* bnea */, PPC::BCCA, Convert__imm_95_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1498 /* bnea */, PPC::BCCA, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1503 /* bnea+ */, PPC::BCCA, Convert__imm_95_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1503 /* bnea+ */, PPC::BCCA, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1509 /* bnea- */, PPC::BCCA, Convert__imm_95_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1509 /* bnea- */, PPC::BCCA, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1515 /* bnectr */, PPC::BCCCTR, Convert__imm_95_68__regCR0, 0, {  }, },
  { 1515 /* bnectr */, PPC::BCCCTR, Convert__imm_95_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1522 /* bnectr+ */, PPC::BCCCTR, Convert__imm_95_71__regCR0, 0, {  }, },
  { 1522 /* bnectr+ */, PPC::BCCCTR, Convert__imm_95_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1530 /* bnectr- */, PPC::BCCCTR, Convert__imm_95_70__regCR0, 0, {  }, },
  { 1530 /* bnectr- */, PPC::BCCCTR, Convert__imm_95_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1538 /* bnectrl */, PPC::BCCCTRL, Convert__imm_95_68__regCR0, 0, {  }, },
  { 1538 /* bnectrl */, PPC::BCCCTRL, Convert__imm_95_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1546 /* bnectrl+ */, PPC::BCCCTRL, Convert__imm_95_71__regCR0, 0, {  }, },
  { 1546 /* bnectrl+ */, PPC::BCCCTRL, Convert__imm_95_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1555 /* bnectrl- */, PPC::BCCCTRL, Convert__imm_95_70__regCR0, 0, {  }, },
  { 1555 /* bnectrl- */, PPC::BCCCTRL, Convert__imm_95_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1564 /* bnel */, PPC::BCCL, Convert__imm_95_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1564 /* bnel */, PPC::BCCL, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1569 /* bnel+ */, PPC::BCCL, Convert__imm_95_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1569 /* bnel+ */, PPC::BCCL, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1575 /* bnel- */, PPC::BCCL, Convert__imm_95_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1575 /* bnel- */, PPC::BCCL, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1581 /* bnela */, PPC::BCCLA, Convert__imm_95_68__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1581 /* bnela */, PPC::BCCLA, Convert__imm_95_68__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1587 /* bnela+ */, PPC::BCCLA, Convert__imm_95_71__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1587 /* bnela+ */, PPC::BCCLA, Convert__imm_95_71__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1594 /* bnela- */, PPC::BCCLA, Convert__imm_95_70__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1594 /* bnela- */, PPC::BCCLA, Convert__imm_95_70__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1601 /* bnelr */, PPC::BCCLR, Convert__imm_95_68__regCR0, 0, {  }, },
  { 1601 /* bnelr */, PPC::BCCLR, Convert__imm_95_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1607 /* bnelr+ */, PPC::BCCLR, Convert__imm_95_71__regCR0, 0, {  }, },
  { 1607 /* bnelr+ */, PPC::BCCLR, Convert__imm_95_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1614 /* bnelr- */, PPC::BCCLR, Convert__imm_95_70__regCR0, 0, {  }, },
  { 1614 /* bnelr- */, PPC::BCCLR, Convert__imm_95_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1621 /* bnelrl */, PPC::BCCLRL, Convert__imm_95_68__regCR0, 0, {  }, },
  { 1621 /* bnelrl */, PPC::BCCLRL, Convert__imm_95_68__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1628 /* bnelrl+ */, PPC::BCCLRL, Convert__imm_95_71__regCR0, 0, {  }, },
  { 1628 /* bnelrl+ */, PPC::BCCLRL, Convert__imm_95_71__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1636 /* bnelrl- */, PPC::BCCLRL, Convert__imm_95_70__regCR0, 0, {  }, },
  { 1636 /* bnelrl- */, PPC::BCCLRL, Convert__imm_95_70__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1644 /* bng */, PPC::BCC, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1644 /* bng */, PPC::BCC, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1648 /* bng+ */, PPC::BCC, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1648 /* bng+ */, PPC::BCC, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1653 /* bng- */, PPC::BCC, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1653 /* bng- */, PPC::BCC, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1658 /* bnga */, PPC::BCCA, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1658 /* bnga */, PPC::BCCA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1663 /* bnga+ */, PPC::BCCA, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1663 /* bnga+ */, PPC::BCCA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1669 /* bnga- */, PPC::BCCA, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1669 /* bnga- */, PPC::BCCA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1675 /* bngctr */, PPC::BCCCTR, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1675 /* bngctr */, PPC::BCCCTR, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1682 /* bngctr+ */, PPC::BCCCTR, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1682 /* bngctr+ */, PPC::BCCCTR, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1690 /* bngctr- */, PPC::BCCCTR, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1690 /* bngctr- */, PPC::BCCCTR, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1698 /* bngctrl */, PPC::BCCCTRL, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1698 /* bngctrl */, PPC::BCCCTRL, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1706 /* bngctrl+ */, PPC::BCCCTRL, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1706 /* bngctrl+ */, PPC::BCCCTRL, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1715 /* bngctrl- */, PPC::BCCCTRL, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1715 /* bngctrl- */, PPC::BCCCTRL, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1724 /* bngl */, PPC::BCCL, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1724 /* bngl */, PPC::BCCL, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1729 /* bngl+ */, PPC::BCCL, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1729 /* bngl+ */, PPC::BCCL, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1735 /* bngl- */, PPC::BCCL, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1735 /* bngl- */, PPC::BCCL, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1741 /* bngla */, PPC::BCCLA, Convert__imm_95_36__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1741 /* bngla */, PPC::BCCLA, Convert__imm_95_36__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1747 /* bngla+ */, PPC::BCCLA, Convert__imm_95_39__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1747 /* bngla+ */, PPC::BCCLA, Convert__imm_95_39__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1754 /* bngla- */, PPC::BCCLA, Convert__imm_95_38__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1754 /* bngla- */, PPC::BCCLA, Convert__imm_95_38__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1761 /* bnglr */, PPC::BCCLR, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1761 /* bnglr */, PPC::BCCLR, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1767 /* bnglr+ */, PPC::BCCLR, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1767 /* bnglr+ */, PPC::BCCLR, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1774 /* bnglr- */, PPC::BCCLR, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1774 /* bnglr- */, PPC::BCCLR, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1781 /* bnglrl */, PPC::BCCLRL, Convert__imm_95_36__regCR0, 0, {  }, },
  { 1781 /* bnglrl */, PPC::BCCLRL, Convert__imm_95_36__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1788 /* bnglrl+ */, PPC::BCCLRL, Convert__imm_95_39__regCR0, 0, {  }, },
  { 1788 /* bnglrl+ */, PPC::BCCLRL, Convert__imm_95_39__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1796 /* bnglrl- */, PPC::BCCLRL, Convert__imm_95_38__regCR0, 0, {  }, },
  { 1796 /* bnglrl- */, PPC::BCCLRL, Convert__imm_95_38__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1804 /* bnl */, PPC::BCC, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1804 /* bnl */, PPC::BCC, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1808 /* bnl+ */, PPC::BCC, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1808 /* bnl+ */, PPC::BCC, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1813 /* bnl- */, PPC::BCC, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1813 /* bnl- */, PPC::BCC, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1818 /* bnla */, PPC::BCCA, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1818 /* bnla */, PPC::BCCA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1823 /* bnla+ */, PPC::BCCA, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1823 /* bnla+ */, PPC::BCCA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1829 /* bnla- */, PPC::BCCA, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1829 /* bnla- */, PPC::BCCA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1835 /* bnlctr */, PPC::BCCCTR, Convert__imm_95_4__regCR0, 0, {  }, },
  { 1835 /* bnlctr */, PPC::BCCCTR, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1842 /* bnlctr+ */, PPC::BCCCTR, Convert__imm_95_7__regCR0, 0, {  }, },
  { 1842 /* bnlctr+ */, PPC::BCCCTR, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1850 /* bnlctr- */, PPC::BCCCTR, Convert__imm_95_6__regCR0, 0, {  }, },
  { 1850 /* bnlctr- */, PPC::BCCCTR, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1858 /* bnlctrl */, PPC::BCCCTRL, Convert__imm_95_4__regCR0, 0, {  }, },
  { 1858 /* bnlctrl */, PPC::BCCCTRL, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1866 /* bnlctrl+ */, PPC::BCCCTRL, Convert__imm_95_7__regCR0, 0, {  }, },
  { 1866 /* bnlctrl+ */, PPC::BCCCTRL, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1875 /* bnlctrl- */, PPC::BCCCTRL, Convert__imm_95_6__regCR0, 0, {  }, },
  { 1875 /* bnlctrl- */, PPC::BCCCTRL, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1884 /* bnll */, PPC::BCCL, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1884 /* bnll */, PPC::BCCL, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1889 /* bnll+ */, PPC::BCCL, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1889 /* bnll+ */, PPC::BCCL, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1895 /* bnll- */, PPC::BCCL, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1895 /* bnll- */, PPC::BCCL, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1901 /* bnlla */, PPC::BCCLA, Convert__imm_95_4__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1901 /* bnlla */, PPC::BCCLA, Convert__imm_95_4__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1907 /* bnlla+ */, PPC::BCCLA, Convert__imm_95_7__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1907 /* bnlla+ */, PPC::BCCLA, Convert__imm_95_7__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1914 /* bnlla- */, PPC::BCCLA, Convert__imm_95_6__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1914 /* bnlla- */, PPC::BCCLA, Convert__imm_95_6__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1921 /* bnllr */, PPC::BCCLR, Convert__imm_95_4__regCR0, 0, {  }, },
  { 1921 /* bnllr */, PPC::BCCLR, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1927 /* bnllr+ */, PPC::BCCLR, Convert__imm_95_7__regCR0, 0, {  }, },
  { 1927 /* bnllr+ */, PPC::BCCLR, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1934 /* bnllr- */, PPC::BCCLR, Convert__imm_95_6__regCR0, 0, {  }, },
  { 1934 /* bnllr- */, PPC::BCCLR, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1941 /* bnllrl */, PPC::BCCLRL, Convert__imm_95_4__regCR0, 0, {  }, },
  { 1941 /* bnllrl */, PPC::BCCLRL, Convert__imm_95_4__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1948 /* bnllrl+ */, PPC::BCCLRL, Convert__imm_95_7__regCR0, 0, {  }, },
  { 1948 /* bnllrl+ */, PPC::BCCLRL, Convert__imm_95_7__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1956 /* bnllrl- */, PPC::BCCLRL, Convert__imm_95_6__regCR0, 0, {  }, },
  { 1956 /* bnllrl- */, PPC::BCCLRL, Convert__imm_95_6__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 1964 /* bns */, PPC::BCC, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1964 /* bns */, PPC::BCC, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1968 /* bns+ */, PPC::BCC, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1968 /* bns+ */, PPC::BCC, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1973 /* bns- */, PPC::BCC, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1973 /* bns- */, PPC::BCC, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1978 /* bnsa */, PPC::BCCA, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1978 /* bnsa */, PPC::BCCA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1983 /* bnsa+ */, PPC::BCCA, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1983 /* bnsa+ */, PPC::BCCA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1989 /* bnsa- */, PPC::BCCA, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 1989 /* bnsa- */, PPC::BCCA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 1995 /* bnsctr */, PPC::BCCCTR, Convert__imm_95_100__regCR0, 0, {  }, },
  { 1995 /* bnsctr */, PPC::BCCCTR, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2002 /* bnsctr+ */, PPC::BCCCTR, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2002 /* bnsctr+ */, PPC::BCCCTR, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2010 /* bnsctr- */, PPC::BCCCTR, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2010 /* bnsctr- */, PPC::BCCCTR, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2018 /* bnsctrl */, PPC::BCCCTRL, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2018 /* bnsctrl */, PPC::BCCCTRL, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2026 /* bnsctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2026 /* bnsctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2035 /* bnsctrl- */, PPC::BCCCTRL, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2035 /* bnsctrl- */, PPC::BCCCTRL, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2044 /* bnsl */, PPC::BCCL, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2044 /* bnsl */, PPC::BCCL, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2049 /* bnsl+ */, PPC::BCCL, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2049 /* bnsl+ */, PPC::BCCL, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2055 /* bnsl- */, PPC::BCCL, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2055 /* bnsl- */, PPC::BCCL, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2061 /* bnsla */, PPC::BCCLA, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2061 /* bnsla */, PPC::BCCLA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2067 /* bnsla+ */, PPC::BCCLA, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2067 /* bnsla+ */, PPC::BCCLA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2074 /* bnsla- */, PPC::BCCLA, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2074 /* bnsla- */, PPC::BCCLA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2081 /* bnslr */, PPC::BCCLR, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2081 /* bnslr */, PPC::BCCLR, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2087 /* bnslr+ */, PPC::BCCLR, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2087 /* bnslr+ */, PPC::BCCLR, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2094 /* bnslr- */, PPC::BCCLR, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2094 /* bnslr- */, PPC::BCCLR, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2101 /* bnslrl */, PPC::BCCLRL, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2101 /* bnslrl */, PPC::BCCLRL, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2108 /* bnslrl+ */, PPC::BCCLRL, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2108 /* bnslrl+ */, PPC::BCCLRL, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2116 /* bnslrl- */, PPC::BCCLRL, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2116 /* bnslrl- */, PPC::BCCLRL, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2124 /* bnu */, PPC::BCC, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2124 /* bnu */, PPC::BCC, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2128 /* bnu+ */, PPC::BCC, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2128 /* bnu+ */, PPC::BCC, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2133 /* bnu- */, PPC::BCC, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2133 /* bnu- */, PPC::BCC, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2138 /* bnua */, PPC::BCCA, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2138 /* bnua */, PPC::BCCA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2143 /* bnua+ */, PPC::BCCA, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2143 /* bnua+ */, PPC::BCCA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2149 /* bnua- */, PPC::BCCA, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2149 /* bnua- */, PPC::BCCA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2155 /* bnuctr */, PPC::BCCCTR, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2155 /* bnuctr */, PPC::BCCCTR, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2162 /* bnuctr+ */, PPC::BCCCTR, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2162 /* bnuctr+ */, PPC::BCCCTR, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2170 /* bnuctr- */, PPC::BCCCTR, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2170 /* bnuctr- */, PPC::BCCCTR, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2178 /* bnuctrl */, PPC::BCCCTRL, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2178 /* bnuctrl */, PPC::BCCCTRL, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2186 /* bnuctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2186 /* bnuctrl+ */, PPC::BCCCTRL, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2195 /* bnuctrl- */, PPC::BCCCTRL, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2195 /* bnuctrl- */, PPC::BCCCTRL, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2204 /* bnul */, PPC::BCCL, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2204 /* bnul */, PPC::BCCL, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2209 /* bnul+ */, PPC::BCCL, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2209 /* bnul+ */, PPC::BCCL, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2215 /* bnul- */, PPC::BCCL, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2215 /* bnul- */, PPC::BCCL, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2221 /* bnula */, PPC::BCCLA, Convert__imm_95_100__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2221 /* bnula */, PPC::BCCLA, Convert__imm_95_100__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2227 /* bnula+ */, PPC::BCCLA, Convert__imm_95_103__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2227 /* bnula+ */, PPC::BCCLA, Convert__imm_95_103__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2234 /* bnula- */, PPC::BCCLA, Convert__imm_95_102__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2234 /* bnula- */, PPC::BCCLA, Convert__imm_95_102__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2241 /* bnulr */, PPC::BCCLR, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2241 /* bnulr */, PPC::BCCLR, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2247 /* bnulr+ */, PPC::BCCLR, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2247 /* bnulr+ */, PPC::BCCLR, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2254 /* bnulr- */, PPC::BCCLR, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2254 /* bnulr- */, PPC::BCCLR, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2261 /* bnulrl */, PPC::BCCLRL, Convert__imm_95_100__regCR0, 0, {  }, },
  { 2261 /* bnulrl */, PPC::BCCLRL, Convert__imm_95_100__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2268 /* bnulrl+ */, PPC::BCCLRL, Convert__imm_95_103__regCR0, 0, {  }, },
  { 2268 /* bnulrl+ */, PPC::BCCLRL, Convert__imm_95_103__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2276 /* bnulrl- */, PPC::BCCLRL, Convert__imm_95_102__regCR0, 0, {  }, },
  { 2276 /* bnulrl- */, PPC::BCCLRL, Convert__imm_95_102__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2284 /* brinc */, PPC::BRINC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2290 /* bso */, PPC::BCC, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2290 /* bso */, PPC::BCC, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2294 /* bso+ */, PPC::BCC, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2294 /* bso+ */, PPC::BCC, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2299 /* bso- */, PPC::BCC, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2299 /* bso- */, PPC::BCC, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2304 /* bsoa */, PPC::BCCA, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2304 /* bsoa */, PPC::BCCA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2309 /* bsoa+ */, PPC::BCCA, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2309 /* bsoa+ */, PPC::BCCA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2315 /* bsoa- */, PPC::BCCA, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2315 /* bsoa- */, PPC::BCCA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2321 /* bsoctr */, PPC::BCCCTR, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2321 /* bsoctr */, PPC::BCCCTR, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2328 /* bsoctr+ */, PPC::BCCCTR, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2328 /* bsoctr+ */, PPC::BCCCTR, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2336 /* bsoctr- */, PPC::BCCCTR, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2336 /* bsoctr- */, PPC::BCCCTR, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2344 /* bsoctrl */, PPC::BCCCTRL, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2344 /* bsoctrl */, PPC::BCCCTRL, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2352 /* bsoctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2352 /* bsoctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2361 /* bsoctrl- */, PPC::BCCCTRL, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2361 /* bsoctrl- */, PPC::BCCCTRL, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2370 /* bsol */, PPC::BCCL, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2370 /* bsol */, PPC::BCCL, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2375 /* bsol+ */, PPC::BCCL, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2375 /* bsol+ */, PPC::BCCL, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2381 /* bsol- */, PPC::BCCL, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2381 /* bsol- */, PPC::BCCL, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2387 /* bsola */, PPC::BCCLA, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2387 /* bsola */, PPC::BCCLA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2393 /* bsola+ */, PPC::BCCLA, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2393 /* bsola+ */, PPC::BCCLA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2400 /* bsola- */, PPC::BCCLA, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2400 /* bsola- */, PPC::BCCLA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2407 /* bsolr */, PPC::BCCLR, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2407 /* bsolr */, PPC::BCCLR, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2413 /* bsolr+ */, PPC::BCCLR, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2413 /* bsolr+ */, PPC::BCCLR, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2420 /* bsolr- */, PPC::BCCLR, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2420 /* bsolr- */, PPC::BCCLR, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2427 /* bsolrl */, PPC::BCCLRL, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2427 /* bsolrl */, PPC::BCCLRL, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2434 /* bsolrl+ */, PPC::BCCLRL, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2434 /* bsolrl+ */, PPC::BCCLRL, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2442 /* bsolrl- */, PPC::BCCLRL, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2442 /* bsolrl- */, PPC::BCCLRL, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2450 /* bt */, PPC::gBC, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2453 /* bt+ */, PPC::gBC, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2457 /* bt- */, PPC::gBC, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2461 /* bta */, PPC::gBCA, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2465 /* bta+ */, PPC::gBCA, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2470 /* bta- */, PPC::gBCA, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2475 /* btctr */, PPC::gBCCTR, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2481 /* btctr+ */, PPC::gBCCTR, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2488 /* btctr- */, PPC::gBCCTR, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2495 /* btctrl */, PPC::gBCCTRL, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2502 /* btctrl+ */, PPC::gBCCTRL, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2510 /* btctrl- */, PPC::gBCCTRL, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2518 /* btl */, PPC::gBCL, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2522 /* btl+ */, PPC::gBCL, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2527 /* btl- */, PPC::gBCL, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2532 /* btla */, PPC::gBCLA, Convert__imm_95_12__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2537 /* btla+ */, PPC::gBCLA, Convert__imm_95_15__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2543 /* btla- */, PPC::gBCLA, Convert__imm_95_14__RegCRBITRC1_0__CondBr1_1, 0, { MCK_RegCRBITRC, MCK_CondBr }, },
  { 2549 /* btlr */, PPC::gBCLR, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2554 /* btlr+ */, PPC::gBCLR, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2560 /* btlr- */, PPC::gBCLR, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2566 /* btlrl */, PPC::gBCLRL, Convert__imm_95_12__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2572 /* btlrl+ */, PPC::gBCLRL, Convert__imm_95_15__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2579 /* btlrl- */, PPC::gBCLRL, Convert__imm_95_14__RegCRBITRC1_0__imm_95_0, 0, { MCK_RegCRBITRC }, },
  { 2586 /* bun */, PPC::BCC, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2586 /* bun */, PPC::BCC, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2590 /* bun+ */, PPC::BCC, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2590 /* bun+ */, PPC::BCC, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2595 /* bun- */, PPC::BCC, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2595 /* bun- */, PPC::BCC, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2600 /* buna */, PPC::BCCA, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2600 /* buna */, PPC::BCCA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2605 /* buna+ */, PPC::BCCA, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2605 /* buna+ */, PPC::BCCA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2611 /* buna- */, PPC::BCCA, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2611 /* buna- */, PPC::BCCA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2617 /* bunctr */, PPC::BCCCTR, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2617 /* bunctr */, PPC::BCCCTR, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2624 /* bunctr+ */, PPC::BCCCTR, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2624 /* bunctr+ */, PPC::BCCCTR, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2632 /* bunctr- */, PPC::BCCCTR, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2632 /* bunctr- */, PPC::BCCCTR, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2640 /* bunctrl */, PPC::BCCCTRL, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2640 /* bunctrl */, PPC::BCCCTRL, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2648 /* bunctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2648 /* bunctrl+ */, PPC::BCCCTRL, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2657 /* bunctrl- */, PPC::BCCCTRL, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2657 /* bunctrl- */, PPC::BCCCTRL, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2666 /* bunl */, PPC::BCCL, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2666 /* bunl */, PPC::BCCL, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2671 /* bunl+ */, PPC::BCCL, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2671 /* bunl+ */, PPC::BCCL, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2677 /* bunl- */, PPC::BCCL, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2677 /* bunl- */, PPC::BCCL, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2683 /* bunla */, PPC::BCCLA, Convert__imm_95_108__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2683 /* bunla */, PPC::BCCLA, Convert__imm_95_108__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2689 /* bunla+ */, PPC::BCCLA, Convert__imm_95_111__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2689 /* bunla+ */, PPC::BCCLA, Convert__imm_95_111__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2696 /* bunla- */, PPC::BCCLA, Convert__imm_95_110__regCR0__CondBr1_0, 0, { MCK_CondBr }, },
  { 2696 /* bunla- */, PPC::BCCLA, Convert__imm_95_110__RegCRRC1_0__CondBr1_1, 0, { MCK_RegCRRC, MCK_CondBr }, },
  { 2703 /* bunlr */, PPC::BCCLR, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2703 /* bunlr */, PPC::BCCLR, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2709 /* bunlr+ */, PPC::BCCLR, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2709 /* bunlr+ */, PPC::BCCLR, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2716 /* bunlr- */, PPC::BCCLR, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2716 /* bunlr- */, PPC::BCCLR, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2723 /* bunlrl */, PPC::BCCLRL, Convert__imm_95_108__regCR0, 0, {  }, },
  { 2723 /* bunlrl */, PPC::BCCLRL, Convert__imm_95_108__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2730 /* bunlrl+ */, PPC::BCCLRL, Convert__imm_95_111__regCR0, 0, {  }, },
  { 2730 /* bunlrl+ */, PPC::BCCLRL, Convert__imm_95_111__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2738 /* bunlrl- */, PPC::BCCLRL, Convert__imm_95_110__regCR0, 0, {  }, },
  { 2738 /* bunlrl- */, PPC::BCCLRL, Convert__imm_95_110__RegCRRC1_0, 0, { MCK_RegCRRC }, },
  { 2746 /* clrldi */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__imm_95_0__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2746 /* clrldi */, PPC::RLDICLo, Convert__RegG8RC1_1__RegG8RC1_2__imm_95_0__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2753 /* clrlsldi */, PPC::CLRLSLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 2753 /* clrlsldi */, PPC::CLRLSLDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 2762 /* clrlslwi */, PPC::CLRLSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 2762 /* clrlslwi */, PPC::CLRLSLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 2771 /* clrlwi */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0__U5Imm1_2__imm_95_31, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2771 /* clrlwi */, PPC::RLWINMo, Convert__RegGPRC1_1__RegGPRC1_2__imm_95_0__U5Imm1_3__imm_95_31, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2778 /* clrrdi */, PPC::CLRRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2778 /* clrrdi */, PPC::CLRRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 2785 /* clrrwi */, PPC::CLRRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2785 /* clrrwi */, PPC::CLRRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 2792 /* cmp */, PPC::CMPW, Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2792 /* cmp */, PPC::CMPD, Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2796 /* cmpb */, PPC::CMPB, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2801 /* cmpd */, PPC::CMPD, Convert__regCR0__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 2801 /* cmpd */, PPC::CMPD, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2806 /* cmpdi */, PPC::CMPDI, Convert__regCR0__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 2806 /* cmpdi */, PPC::CMPDI, Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_S16Imm }, },
  { 2812 /* cmpi */, PPC::CMPWI, Convert__RegCRRC1_0__RegGPRC1_2__S16Imm1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_S16Imm }, },
  { 2812 /* cmpi */, PPC::CMPDI, Convert__RegCRRC1_0__RegG8RC1_2__S16Imm1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_S16Imm }, },
  { 2817 /* cmpl */, PPC::CMPLW, Convert__RegCRRC1_0__RegGPRC1_2__RegGPRC1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2817 /* cmpl */, PPC::CMPLD, Convert__RegCRRC1_0__RegG8RC1_2__RegG8RC1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2822 /* cmpld */, PPC::CMPLD, Convert__regCR0__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 2822 /* cmpld */, PPC::CMPLD, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2828 /* cmpldi */, PPC::CMPLDI, Convert__regCR0__RegG8RC1_0__U16Imm1_1, 0, { MCK_RegG8RC, MCK_U16Imm }, },
  { 2828 /* cmpldi */, PPC::CMPLDI, Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_U16Imm }, },
  { 2835 /* cmpli */, PPC::CMPLWI, Convert__RegCRRC1_0__RegGPRC1_2__U16Imm1_3, 0, { MCK_RegCRRC, MCK_0, MCK_RegGPRC, MCK_U16Imm }, },
  { 2835 /* cmpli */, PPC::CMPLDI, Convert__RegCRRC1_0__RegG8RC1_2__U16Imm1_3, 0, { MCK_RegCRRC, MCK_1, MCK_RegG8RC, MCK_U16Imm }, },
  { 2841 /* cmplw */, PPC::CMPLW, Convert__regCR0__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2841 /* cmplw */, PPC::CMPLW, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2847 /* cmplwi */, PPC::CMPLWI, Convert__regCR0__RegGPRC1_0__U16Imm1_1, 0, { MCK_RegGPRC, MCK_U16Imm }, },
  { 2847 /* cmplwi */, PPC::CMPLWI, Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 2854 /* cmpw */, PPC::CMPW, Convert__regCR0__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2854 /* cmpw */, PPC::CMPW, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2859 /* cmpwi */, PPC::CMPWI, Convert__regCR0__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 2859 /* cmpwi */, PPC::CMPWI, Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 2865 /* cntlz */, PPC::CNTLZW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2865 /* cntlz */, PPC::CNTLZWo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2871 /* cntlzd */, PPC::CNTLZD, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 2871 /* cntlzd */, PPC::CNTLZDo, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 2878 /* cntlzw */, PPC::CNTLZW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 2878 /* cntlzw */, PPC::CNTLZWo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 2885 /* crand */, PPC::CRAND, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2891 /* crandc */, PPC::CRANDC, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2898 /* crclr */, PPC::CRXOR, Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0, 0, { MCK_RegCRBITRC }, },
  { 2904 /* creqv */, PPC::CREQV, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2910 /* crmove */, PPC::CROR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2917 /* crnand */, PPC::CRNAND, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2924 /* crnor */, PPC::CRNOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2930 /* crnot */, PPC::CRNOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_1, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2936 /* cror */, PPC::CROR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2941 /* crorc */, PPC::CRORC, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2947 /* crset */, PPC::CREQV, Convert__RegCRBITRC1_0__RegCRBITRC1_0__RegCRBITRC1_0, 0, { MCK_RegCRBITRC }, },
  { 2953 /* crxor */, PPC::CRXOR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, },
  { 2959 /* dcba */, PPC::DCBA, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2964 /* dcbf */, PPC::DCBF, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2969 /* dcbi */, PPC::DCBI, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2974 /* dcbst */, PPC::DCBST, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2980 /* dcbt */, PPC::DCBT, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2985 /* dcbtst */, PPC::DCBTST, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2992 /* dcbz */, PPC::DCBZ, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 2997 /* dcbzl */, PPC::DCBZL, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 3003 /* dccci */, PPC::DCCCI, Convert__regR0__regR0, 0, {  }, },
  { 3003 /* dccci */, PPC::DCCCI, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3009 /* dci */, PPC::DCCCI, Convert__regR0__regR0, 0, { MCK_0 }, },
  { 3013 /* divd */, PPC::DIVD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3013 /* divd */, PPC::DIVDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3018 /* divdu */, PPC::DIVDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3018 /* divdu */, PPC::DIVDUo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 3024 /* divw */, PPC::DIVW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3024 /* divw */, PPC::DIVWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3029 /* divwu */, PPC::DIVWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3029 /* divwu */, PPC::DIVWUo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3035 /* dss */, PPC::DSS, Convert__U5Imm1_0, 0, { MCK_U5Imm }, },
  { 3039 /* dssall */, PPC::DSSALL, Convert_NoOperands, 0, {  }, },
  { 3046 /* dst */, PPC::DST, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3050 /* dstst */, PPC::DSTST, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3056 /* dststt */, PPC::DSTSTT, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3063 /* dstt */, PPC::DSTT, Convert__U5Imm1_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 3068 /* eieio */, PPC::EnforceIEIO, Convert_NoOperands, 0, {  }, },
  { 3074 /* eqv */, PPC::EQV, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3074 /* eqv */, PPC::EQVo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3078 /* evabs */, PPC::EVABS, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3084 /* evaddiw */, PPC::EVADDIW, Convert__RegGPRC1_0__RegGPRC1_2__U5Imm1_1, 0, { MCK_RegGPRC, MCK_U5Imm, MCK_RegGPRC }, },
  { 3092 /* evaddsmiaaw */, PPC::EVADDSMIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3104 /* evaddssiaaw */, PPC::EVADDSSIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3116 /* evaddumiaaw */, PPC::EVADDUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3128 /* evaddusiaaw */, PPC::EVADDUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3140 /* evaddw */, PPC::EVADDW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3147 /* evand */, PPC::EVAND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3153 /* evandc */, PPC::EVANDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3160 /* evcmpeq */, PPC::EVCMPEQ, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3168 /* evcmpgts */, PPC::EVCMPGTS, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3177 /* evcmpgtu */, PPC::EVCMPGTU, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3186 /* evcmplts */, PPC::EVCMPLTS, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3195 /* evcmpltu */, PPC::EVCMPLTU, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3204 /* evcntlsw */, PPC::EVCNTLSW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3213 /* evcntlzw */, PPC::EVCNTLZW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3222 /* evdivws */, PPC::EVDIVWS, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3230 /* evdivwu */, PPC::EVDIVWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3238 /* eveqv */, PPC::EVEQV, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3244 /* evextsb */, PPC::EVEXTSB, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3252 /* evextsh */, PPC::EVEXTSH, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 3260 /* evldd */, PPC::EVLDD, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 3266 /* evlddx */, PPC::EVLDDX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3273 /* evldh */, PPC::EVLDH, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 3279 /* evldhx */, PPC::EVLDHX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3286 /* evldw */, PPC::EVLDW, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 3292 /* evldwx */, PPC::EVLDWX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3299 /* evlhhesplat */, PPC::EVLHHESPLAT, Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 3311 /* evlhhesplatx */, PPC::EVLHHESPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3324 /* evlhhossplat */, PPC::EVLHHOSSPLAT, Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 3337 /* evlhhossplatx */, PPC::EVLHHOSSPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3351 /* evlhhousplat */, PPC::EVLHHOUSPLAT, Convert__RegGPRC1_0__DispSPE21_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE2, MCK_RegGxRCNoR0 }, },
  { 3364 /* evlhhousplatx */, PPC::EVLHHOUSPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3378 /* evlwhe */, PPC::EVLWHE, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3385 /* evlwhex */, PPC::EVLWHEX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3393 /* evlwhos */, PPC::EVLWHOS, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3401 /* evlwhosx */, PPC::EVLWHOSX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3410 /* evlwhou */, PPC::EVLWHOU, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3418 /* evlwhoux */, PPC::EVLWHOUX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3427 /* evlwhsplat */, PPC::EVLWHSPLAT, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3438 /* evlwhsplatx */, PPC::EVLWHSPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3450 /* evlwwsplat */, PPC::EVLWWSPLAT, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 3461 /* evlwwsplatx */, PPC::EVLWWSPLATX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3473 /* evmergehi */, PPC::EVMERGEHI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3483 /* evmergehilo */, PPC::EVMERGEHILO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3495 /* evmergelo */, PPC::EVMERGELO, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3505 /* evmergelohi */, PPC::EVMERGELOHI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3517 /* evmhegsmfaa */, PPC::EVMHEGSMFAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3529 /* evmhegsmfan */, PPC::EVMHEGSMFAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3541 /* evmhegsmiaa */, PPC::EVMHEGSMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3553 /* evmhegsmian */, PPC::EVMHEGSMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3565 /* evmhegumiaa */, PPC::EVMHEGUMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3577 /* evmhegumian */, PPC::EVMHEGUMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3589 /* evmhesmf */, PPC::EVMHESMF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3598 /* evmhesmfa */, PPC::EVMHESMFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3608 /* evmhesmfaaw */, PPC::EVMHESMFAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3620 /* evmhesmfanw */, PPC::EVMHESMFANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3632 /* evmhesmi */, PPC::EVMHESMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3641 /* evmhesmia */, PPC::EVMHESMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3651 /* evmhesmiaaw */, PPC::EVMHESMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3663 /* evmhesmianw */, PPC::EVMHESMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3675 /* evmhessf */, PPC::EVMHESSF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3684 /* evmhessfa */, PPC::EVMHESSFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3694 /* evmhessfaaw */, PPC::EVMHESSFAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3706 /* evmhessfanw */, PPC::EVMHESSFANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3718 /* evmhessiaaw */, PPC::EVMHESSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3730 /* evmhessianw */, PPC::EVMHESSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3742 /* evmheumi */, PPC::EVMHEUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3751 /* evmheumia */, PPC::EVMHEUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3761 /* evmheumiaaw */, PPC::EVMHEUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3773 /* evmheumianw */, PPC::EVMHEUMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3785 /* evmheusiaaw */, PPC::EVMHEUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3797 /* evmheusianw */, PPC::EVMHEUSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3809 /* evmhogsmfaa */, PPC::EVMHOGSMFAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3821 /* evmhogsmfan */, PPC::EVMHOGSMFAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3833 /* evmhogsmiaa */, PPC::EVMHOGSMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3845 /* evmhogsmian */, PPC::EVMHOGSMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3857 /* evmhogumiaa */, PPC::EVMHOGUMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3869 /* evmhogumian */, PPC::EVMHOGUMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3881 /* evmhosmf */, PPC::EVMHOSMF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3890 /* evmhosmfa */, PPC::EVMHOSMFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3900 /* evmhosmfaaw */, PPC::EVMHOSMFAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3912 /* evmhosmfanw */, PPC::EVMHOSMFANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3924 /* evmhosmi */, PPC::EVMHOSMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3933 /* evmhosmia */, PPC::EVMHOSMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3943 /* evmhosmiaaw */, PPC::EVMHOSMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3955 /* evmhosmianw */, PPC::EVMHOSMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3967 /* evmhossf */, PPC::EVMHOSSF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3976 /* evmhossfa */, PPC::EVMHOSSFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3986 /* evmhossfaaw */, PPC::EVMHOSSFAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 3998 /* evmhossfanw */, PPC::EVMHOSSFANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4010 /* evmhossiaaw */, PPC::EVMHOSSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4022 /* evmhossianw */, PPC::EVMHOSSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4034 /* evmhoumi */, PPC::EVMHOUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4043 /* evmhoumia */, PPC::EVMHOUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4053 /* evmhoumiaaw */, PPC::EVMHOUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4065 /* evmhoumianw */, PPC::EVMHOUMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4077 /* evmhousiaaw */, PPC::EVMHOUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4089 /* evmhousianw */, PPC::EVMHOUSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4101 /* evmra */, PPC::EVMRA, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4107 /* evmwhsmf */, PPC::EVMWHSMF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4116 /* evmwhsmfa */, PPC::EVMWHSMFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4126 /* evmwhsmi */, PPC::EVMWHSMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4135 /* evmwhsmia */, PPC::EVMWHSMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4145 /* evmwhssf */, PPC::EVMWHSSF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4154 /* evmwhssfa */, PPC::EVMWHSSFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4164 /* evmwhumi */, PPC::EVMWHUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4173 /* evmwhumia */, PPC::EVMWHUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4183 /* evmwlsmiaaw */, PPC::EVMWLSMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4195 /* evmwlsmianw */, PPC::EVMWLSMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4207 /* evmwlssiaaw */, PPC::EVMWLSSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4219 /* evmwlssianw */, PPC::EVMWLSSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4231 /* evmwlumi */, PPC::EVMWLUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4240 /* evmwlumia */, PPC::EVMWLUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4250 /* evmwlumiaaw */, PPC::EVMWLUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4262 /* evmwlumianw */, PPC::EVMWLUMIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4274 /* evmwlusiaaw */, PPC::EVMWLUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4286 /* evmwlusianw */, PPC::EVMWLUSIANW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4298 /* evmwsmf */, PPC::EVMWSMF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4306 /* evmwsmfa */, PPC::EVMWSMFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4315 /* evmwsmfaa */, PPC::EVMWSMFAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4325 /* evmwsmfan */, PPC::EVMWSMFAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4335 /* evmwsmi */, PPC::EVMWSMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4343 /* evmwsmia */, PPC::EVMWSMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4352 /* evmwsmiaa */, PPC::EVMWSMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4362 /* evmwsmian */, PPC::EVMWSMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4372 /* evmwssf */, PPC::EVMWSSF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4380 /* evmwssfa */, PPC::EVMWSSFA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4389 /* evmwssfaa */, PPC::EVMWSSFAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4399 /* evmwssfan */, PPC::EVMWSSFAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4409 /* evmwumi */, PPC::EVMWUMI, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4417 /* evmwumia */, PPC::EVMWUMIA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4426 /* evmwumiaa */, PPC::EVMWUMIAA, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4436 /* evmwumian */, PPC::EVMWUMIAN, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4446 /* evnand */, PPC::EVNAND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4453 /* evneg */, PPC::EVNEG, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4459 /* evnor */, PPC::EVNOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4465 /* evor */, PPC::EVOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4470 /* evorc */, PPC::EVORC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4476 /* evrlw */, PPC::EVRLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4482 /* evrlwi */, PPC::EVRLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 4489 /* evrndw */, PPC::EVRNDW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4496 /* evslw */, PPC::EVSLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4502 /* evslwi */, PPC::EVSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 4509 /* evsplatfi */, PPC::EVSPLATFI, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 4519 /* evsplati */, PPC::EVSPLATI, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 4528 /* evsrwis */, PPC::EVSRWIS, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 4536 /* evsrwiu */, PPC::EVSRWIU, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 4544 /* evsrws */, PPC::EVSRWS, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4551 /* evsrwu */, PPC::EVSRWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4558 /* evstdd */, PPC::EVSTDD, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4565 /* evstddx */, PPC::EVSTDDX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4573 /* evstdh */, PPC::EVSTDH, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4580 /* evstdhx */, PPC::EVSTDHX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4588 /* evstdw */, PPC::EVSTDW, Convert__RegGPRC1_0__DispSPE81_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE8, MCK_RegGxRCNoR0 }, },
  { 4595 /* evstdwx */, PPC::EVSTDWX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4603 /* evstwhe */, PPC::EVSTWHE, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4611 /* evstwhex */, PPC::EVSTWHEX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4620 /* evstwho */, PPC::EVSTWHO, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4628 /* evstwhox */, PPC::EVSTWHOX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4637 /* evstwwe */, PPC::EVSTWWE, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4645 /* evstwwex */, PPC::EVSTWWEX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4654 /* evstwwo */, PPC::EVSTWWO, Convert__RegGPRC1_0__DispSPE41_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispSPE4, MCK_RegGxRCNoR0 }, },
  { 4662 /* evstwwox */, PPC::EVSTWWOX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4671 /* evsubfsmiaaw */, PPC::EVSUBFSMIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4684 /* evsubfssiaaw */, PPC::EVSUBFSSIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4697 /* evsubfumiaaw */, PPC::EVSUBFUMIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4710 /* evsubfusiaaw */, PPC::EVSUBFUSIAAW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4723 /* evsubfw */, PPC::EVSUBFW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4731 /* evsubifw */, PPC::EVSUBIFW, Convert__RegGPRC1_0__U5Imm1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_U5Imm, MCK_RegGPRC }, },
  { 4740 /* evxor */, PPC::EVXOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4746 /* extldi */, PPC::EXTLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 4746 /* extldi */, PPC::EXTLDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 4753 /* extlwi */, PPC::EXTLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 4753 /* extlwi */, PPC::EXTLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 4760 /* extrdi */, PPC::EXTRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 4760 /* extrdi */, PPC::EXTRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 4767 /* extrwi */, PPC::EXTRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 4767 /* extrwi */, PPC::EXTRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 4774 /* extsb */, PPC::EXTSB, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4774 /* extsb */, PPC::EXTSBo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4780 /* extsh */, PPC::EXTSH, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 4780 /* extsh */, PPC::EXTSHo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 4786 /* extsw */, PPC::EXTSW, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 4786 /* extsw */, PPC::EXTSWo, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 4792 /* fabs */, PPC::FABSS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4792 /* fabs */, PPC::FABSSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4797 /* fadd */, PPC::FADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4797 /* fadd */, PPC::FADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4802 /* fadds */, PPC::FADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4802 /* fadds */, PPC::FADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4808 /* fcfid */, PPC::FCFID, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4808 /* fcfid */, PPC::FCFIDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4814 /* fcfids */, PPC::FCFIDS, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 4814 /* fcfids */, PPC::FCFIDSo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 4821 /* fcfidu */, PPC::FCFIDU, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4821 /* fcfidu */, PPC::FCFIDUo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4828 /* fcfidus */, PPC::FCFIDUS, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 4828 /* fcfidus */, PPC::FCFIDUSo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 4836 /* fcmpu */, PPC::FCMPUS, Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegCRRC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4842 /* fcpsgn */, PPC::FCPSGNS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4842 /* fcpsgn */, PPC::FCPSGNSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4849 /* fctid */, PPC::FCTID, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4849 /* fctid */, PPC::FCTIDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4855 /* fctiduz */, PPC::FCTIDUZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4855 /* fctiduz */, PPC::FCTIDUZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4863 /* fctidz */, PPC::FCTIDZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4863 /* fctidz */, PPC::FCTIDZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4870 /* fctiw */, PPC::FCTIW, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4870 /* fctiw */, PPC::FCTIWo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4876 /* fctiwuz */, PPC::FCTIWUZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4876 /* fctiwuz */, PPC::FCTIWUZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4884 /* fctiwz */, PPC::FCTIWZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4884 /* fctiwz */, PPC::FCTIWZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4891 /* fdiv */, PPC::FDIV, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4891 /* fdiv */, PPC::FDIVo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4896 /* fdivs */, PPC::FDIVS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4896 /* fdivs */, PPC::FDIVSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4902 /* fmadd */, PPC::FMADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4902 /* fmadd */, PPC::FMADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4908 /* fmadds */, PPC::FMADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4908 /* fmadds */, PPC::FMADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4915 /* fmr */, PPC::FMR, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4915 /* fmr */, PPC::FMRo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4919 /* fmsub */, PPC::FMSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4919 /* fmsub */, PPC::FMSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4925 /* fmsubs */, PPC::FMSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4925 /* fmsubs */, PPC::FMSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4932 /* fmul */, PPC::FMUL, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4932 /* fmul */, PPC::FMULo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4937 /* fmuls */, PPC::FMULS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4937 /* fmuls */, PPC::FMULSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4943 /* fnabs */, PPC::FNABSS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4943 /* fnabs */, PPC::FNABSSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4949 /* fneg */, PPC::FNEGS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4949 /* fneg */, PPC::FNEGSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4954 /* fnmadd */, PPC::FNMADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4954 /* fnmadd */, PPC::FNMADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4961 /* fnmadds */, PPC::FNMADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4961 /* fnmadds */, PPC::FNMADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4969 /* fnmsub */, PPC::FNMSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4969 /* fnmsub */, PPC::FNMSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4976 /* fnmsubs */, PPC::FNMSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4976 /* fnmsubs */, PPC::FNMSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4984 /* fre */, PPC::FRE, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 4984 /* fre */, PPC::FREo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 4988 /* fres */, PPC::FRES, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4988 /* fres */, PPC::FRESo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4993 /* frim */, PPC::FRIMS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4993 /* frim */, PPC::FRIMSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 4998 /* frin */, PPC::FRINS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 4998 /* frin */, PPC::FRINSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5003 /* frip */, PPC::FRIPS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5003 /* frip */, PPC::FRIPSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5008 /* friz */, PPC::FRIZS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5008 /* friz */, PPC::FRIZSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5013 /* frsp */, PPC::FRSP, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, },
  { 5013 /* frsp */, PPC::FRSPo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, },
  { 5018 /* frsqrte */, PPC::FRSQRTE, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5018 /* frsqrte */, PPC::FRSQRTEo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5026 /* frsqrtes */, PPC::FRSQRTES, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5026 /* frsqrtes */, PPC::FRSQRTESo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5035 /* fsel */, PPC::FSELS, Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF8RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5035 /* fsel */, PPC::FSELSo, Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5040 /* fsqrt */, PPC::FSQRT, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, },
  { 5040 /* fsqrt */, PPC::FSQRTo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5046 /* fsqrts */, PPC::FSQRTS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, },
  { 5046 /* fsqrts */, PPC::FSQRTSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5053 /* fsub */, PPC::FSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5053 /* fsub */, PPC::FSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, },
  { 5058 /* fsubs */, PPC::FSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5058 /* fsubs */, PPC::FSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, },
  { 5064 /* icbi */, PPC::ICBI, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5069 /* icbt */, PPC::ICBT, Convert__U4Imm1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_U4Imm, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5074 /* iccci */, PPC::ICCCI, Convert__regR0__regR0, 0, {  }, },
  { 5074 /* iccci */, PPC::ICCCI, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 5080 /* ici */, PPC::ICCCI, Convert__regR0__regR0, 0, { MCK_0 }, },
  { 5084 /* inslwi */, PPC::INSLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5084 /* inslwi */, PPC::INSLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5091 /* insrdi */, PPC::INSRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5091 /* insrdi */, PPC::INSRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 5098 /* insrwi */, PPC::INSRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5098 /* insrwi */, PPC::INSRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 5105 /* isel */, PPC::ISEL, Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_RegGPRC, MCK_RegCRBITRC }, },
  { 5110 /* isync */, PPC::ISYNC, Convert_NoOperands, 0, {  }, },
  { 5116 /* la */, PPC::LAx, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5119 /* lbz */, PPC::LBZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5123 /* lbzcix */, PPC::LBZCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5130 /* lbzu */, PPC::LBZU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5135 /* lbzux */, PPC::LBZUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5141 /* lbzx */, PPC::LBZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5146 /* ld */, PPC::LD, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 5149 /* ldarx */, PPC::LDARX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5155 /* ldbrx */, PPC::LDBRX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5161 /* ldcix */, PPC::LDCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5167 /* ldu */, PPC::LDU, Convert__RegG8RC1_0__imm_95_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 5171 /* ldux */, PPC::LDUX, Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5176 /* ldx */, PPC::LDX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5180 /* lfd */, PPC::LFD, Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5184 /* lfdu */, PPC::LFDU, Convert__RegF8RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5189 /* lfdux */, PPC::LFDUX, Convert__RegF8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5195 /* lfdx */, PPC::LFDX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5200 /* lfiwax */, PPC::LFIWAX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5207 /* lfiwzx */, PPC::LFIWZX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5214 /* lfs */, PPC::LFS, Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5218 /* lfsu */, PPC::LFSU, Convert__RegF4RC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5223 /* lfsux */, PPC::LFSUX, Convert__RegF4RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5229 /* lfsx */, PPC::LFSX, Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5234 /* lha */, PPC::LHA, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5238 /* lhau */, PPC::LHAU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5243 /* lhaux */, PPC::LHAUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5249 /* lhax */, PPC::LHAX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5254 /* lhbrx */, PPC::LHBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5260 /* lhz */, PPC::LHZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5264 /* lhzcix */, PPC::LHZCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5271 /* lhzu */, PPC::LHZU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5276 /* lhzux */, PPC::LHZUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5282 /* lhzx */, PPC::LHZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5287 /* li */, PPC::LI, Convert__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 5290 /* lis */, PPC::LIS, Convert__RegGPRC1_0__S17Imm1_1, 0, { MCK_RegGPRC, MCK_S17Imm }, },
  { 5294 /* lmw */, PPC::LMW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5298 /* lswi */, PPC::LSWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 5303 /* lvebx */, PPC::LVEBX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5309 /* lvehx */, PPC::LVEHX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5315 /* lvewx */, PPC::LVEWX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5321 /* lvsl */, PPC::LVSL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5326 /* lvsr */, PPC::LVSR, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5331 /* lvx */, PPC::LVX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5335 /* lvxl */, PPC::LVXL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5340 /* lwa */, PPC::LWA, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 5344 /* lwarx */, PPC::LWARX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5350 /* lwaux */, PPC::LWAUX, Convert__RegG8RC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5356 /* lwax */, PPC::LWAX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5361 /* lwbrx */, PPC::LWBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5367 /* lwsync */, PPC::SYNC, Convert__imm_95_1, 0, {  }, },
  { 5374 /* lwz */, PPC::LWZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5378 /* lwzcix */, PPC::LWZCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 5385 /* lwzu */, PPC::LWZU, Convert__RegGPRC1_0__imm_95_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 5390 /* lwzux */, PPC::LWZUX, Convert__RegGPRC1_0__imm_95_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5396 /* lwzx */, PPC::LWZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5401 /* lxsdx */, PPC::LXSDX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5407 /* lxvd2x */, PPC::LXVD2X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5414 /* lxvdsx */, PPC::LXVDSX, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5421 /* lxvw4x */, PPC::LXVW4X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 5428 /* mbar */, PPC::MBAR, Convert__imm_95_0, 0, {  }, },
  { 5428 /* mbar */, PPC::MBAR, Convert__U5Imm1_0, 0, { MCK_U5Imm }, },
  { 5433 /* mcrf */, PPC::MCRF, Convert__RegCRRC1_0__RegCRRC1_1, 0, { MCK_RegCRRC, MCK_RegCRRC }, },
  { 5438 /* mcrfs */, PPC::MCRFS, Convert__RegCRRC1_0__RegCRRC1_1, 0, { MCK_RegCRRC, MCK_RegCRRC }, },
  { 5444 /* mfamr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_29, 0, { MCK_RegGPRC }, },
  { 5450 /* mfasr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_280, 0, { MCK_RegGPRC }, },
  { 5456 /* mfbr0 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_128, 0, { MCK_RegGPRC }, },
  { 5462 /* mfbr1 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_129, 0, { MCK_RegGPRC }, },
  { 5468 /* mfbr2 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_130, 0, { MCK_RegGPRC }, },
  { 5474 /* mfbr3 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_131, 0, { MCK_RegGPRC }, },
  { 5480 /* mfbr4 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_132, 0, { MCK_RegGPRC }, },
  { 5486 /* mfbr5 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_133, 0, { MCK_RegGPRC }, },
  { 5492 /* mfbr6 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_134, 0, { MCK_RegGPRC }, },
  { 5498 /* mfbr7 */, PPC::MFDCR, Convert__RegGPRC1_0__imm_95_135, 0, { MCK_RegGPRC }, },
  { 5504 /* mfcfar */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_28, 0, { MCK_RegGPRC }, },
  { 5511 /* mfcr */, PPC::MFCR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5516 /* mfctr */, PPC::MFCTR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5522 /* mfdar */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_19, 0, { MCK_RegGPRC }, },
  { 5528 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_537, 0, { MCK_RegGPRC, MCK_0 }, },
  { 5528 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_539, 0, { MCK_RegGPRC, MCK_1 }, },
  { 5528 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_541, 0, { MCK_RegGPRC, MCK_2 }, },
  { 5528 /* mfdbatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_543, 0, { MCK_RegGPRC, MCK_3 }, },
  { 5536 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_536, 0, { MCK_RegGPRC, MCK_0 }, },
  { 5536 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_538, 0, { MCK_RegGPRC, MCK_1 }, },
  { 5536 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_540, 0, { MCK_RegGPRC, MCK_2 }, },
  { 5536 /* mfdbatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_542, 0, { MCK_RegGPRC, MCK_3 }, },
  { 5544 /* mfdccr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_1018, 0, { MCK_RegGPRC }, },
  { 5551 /* mfdcr */, PPC::MFDCR, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 5557 /* mfdear */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_981, 0, { MCK_RegGPRC }, },
  { 5564 /* mfdec */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_22, 0, { MCK_RegGPRC }, },
  { 5564 /* mfdec */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_22, 0, { MCK_RegGPRC }, },
  { 5570 /* mfdscr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_17, 0, { MCK_RegGPRC }, },
  { 5577 /* mfdsisr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_18, 0, { MCK_RegGPRC }, },
  { 5585 /* mfesr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_980, 0, { MCK_RegGPRC }, },
  { 5591 /* mffs */, PPC::MFFS, Convert__RegF8RC1_0, 0, { MCK_RegF8RC }, },
  { 5591 /* mffs */, PPC::MFFSo, Convert__RegF8RC1_1, 0, { MCK__DOT_, MCK_RegF8RC }, },
  { 5596 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_529, 0, { MCK_RegGPRC, MCK_0 }, },
  { 5596 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_531, 0, { MCK_RegGPRC, MCK_1 }, },
  { 5596 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_533, 0, { MCK_RegGPRC, MCK_2 }, },
  { 5596 /* mfibatl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_535, 0, { MCK_RegGPRC, MCK_3 }, },
  { 5604 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_528, 0, { MCK_RegGPRC, MCK_0 }, },
  { 5604 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_530, 0, { MCK_RegGPRC, MCK_1 }, },
  { 5604 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_532, 0, { MCK_RegGPRC, MCK_2 }, },
  { 5604 /* mfibatu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_534, 0, { MCK_RegGPRC, MCK_3 }, },
  { 5612 /* mficcr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_1019, 0, { MCK_RegGPRC }, },
  { 5619 /* mflr */, PPC::MFLR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5624 /* mfmsr */, PPC::MFMSR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5630 /* mfocrf */, PPC::MFOCRF, Convert__RegGPRC1_0__CRBitMask1_1, 0, { MCK_RegGPRC, MCK_CRBitMask }, },
  { 5637 /* mfpid */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_48, 0, { MCK_RegGPRC }, },
  { 5643 /* mfpvr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_287, 0, { MCK_RegGPRC }, },
  { 5649 /* mfrtcl */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_5, 0, { MCK_RegGPRC }, },
  { 5656 /* mfrtcu */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_4, 0, { MCK_RegGPRC }, },
  { 5663 /* mfsdr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_25, 0, { MCK_RegGPRC }, },
  { 5663 /* mfsdr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_25, 0, { MCK_RegGPRC }, },
  { 5670 /* mfspefscr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_512, 0, { MCK_RegGPRC }, },
  { 5680 /* mfspr */, PPC::MFSPR, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 5686 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_272, 0, { MCK_RegGPRC, MCK_0 }, },
  { 5686 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_273, 0, { MCK_RegGPRC, MCK_1 }, },
  { 5686 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_274, 0, { MCK_RegGPRC, MCK_2 }, },
  { 5686 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_275, 0, { MCK_RegGPRC, MCK_3 }, },
  { 5686 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_260, 0, { MCK_RegGPRC, MCK_4 }, },
  { 5686 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_261, 0, { MCK_RegGPRC, MCK_5 }, },
  { 5686 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_262, 0, { MCK_RegGPRC, MCK_6 }, },
  { 5686 /* mfsprg */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_263, 0, { MCK_RegGPRC, MCK_7 }, },
  { 5693 /* mfsprg0 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_272, 0, { MCK_RegGPRC }, },
  { 5701 /* mfsprg1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_273, 0, { MCK_RegGPRC }, },
  { 5709 /* mfsprg2 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_274, 0, { MCK_RegGPRC }, },
  { 5717 /* mfsprg3 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_275, 0, { MCK_RegGPRC }, },
  { 5725 /* mfsprg4 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_260, 0, { MCK_RegGPRC }, },
  { 5733 /* mfsprg5 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_261, 0, { MCK_RegGPRC }, },
  { 5741 /* mfsprg6 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_262, 0, { MCK_RegGPRC }, },
  { 5749 /* mfsprg7 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_263, 0, { MCK_RegGPRC }, },
  { 5757 /* mfsr */, PPC::MFSR, Convert__RegGPRC1_0__U4Imm1_1, 0, { MCK_RegGPRC, MCK_U4Imm }, },
  { 5762 /* mfsrin */, PPC::MFSRIN, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 5769 /* mfsrr0 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_26, 0, { MCK_RegGPRC }, },
  { 5769 /* mfsrr0 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_26, 0, { MCK_RegGPRC }, },
  { 5776 /* mfsrr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_27, 0, { MCK_RegGPRC }, },
  { 5776 /* mfsrr1 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_27, 0, { MCK_RegGPRC }, },
  { 5783 /* mfsrr2 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_990, 0, { MCK_RegGPRC }, },
  { 5790 /* mfsrr3 */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_991, 0, { MCK_RegGPRC }, },
  { 5797 /* mftb */, PPC::MFTB, Convert__RegGPRC1_0__imm_95_268, 0, { MCK_RegGPRC }, },
  { 5797 /* mftb */, PPC::MFTB, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 5802 /* mftbhi */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_988, 0, { MCK_RegGPRC }, },
  { 5809 /* mftbl */, PPC::MFTB, Convert__RegGPRC1_0__imm_95_268, 0, { MCK_RegGPRC }, },
  { 5815 /* mftblo */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_989, 0, { MCK_RegGPRC }, },
  { 5822 /* mftbu */, PPC::MFTB, Convert__RegGPRC1_0__imm_95_269, 0, { MCK_RegGPRC }, },
  { 5828 /* mftcr */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_986, 0, { MCK_RegGPRC }, },
  { 5834 /* mfvscr */, PPC::MFVSCR, Convert__RegVRRC1_0, 0, { MCK_RegVRRC }, },
  { 5841 /* mfxer */, PPC::MFSPR, Convert__RegGPRC1_0__imm_95_1, 0, { MCK_RegGPRC }, },
  { 5847 /* mr */, PPC::OR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 5847 /* mr */, PPC::OR8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 5850 /* msync */, PPC::SYNC, Convert__imm_95_0, 0, {  }, },
  { 5856 /* mtamr */, PPC::MTSPR, Convert__imm_95_29__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5862 /* mtasr */, PPC::MTSPR, Convert__imm_95_280__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5862 /* mtasr */, PPC::MTSPR, Convert__imm_95_280__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5868 /* mtbr0 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_128, 0, { MCK_RegGPRC }, },
  { 5874 /* mtbr1 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_129, 0, { MCK_RegGPRC }, },
  { 5880 /* mtbr2 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_130, 0, { MCK_RegGPRC }, },
  { 5886 /* mtbr3 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_131, 0, { MCK_RegGPRC }, },
  { 5892 /* mtbr4 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_132, 0, { MCK_RegGPRC }, },
  { 5898 /* mtbr5 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_133, 0, { MCK_RegGPRC }, },
  { 5904 /* mtbr6 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_134, 0, { MCK_RegGPRC }, },
  { 5910 /* mtbr7 */, PPC::MTDCR, Convert__RegGPRC1_0__imm_95_135, 0, { MCK_RegGPRC }, },
  { 5916 /* mtcfar */, PPC::MTSPR, Convert__imm_95_28__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5923 /* mtcr */, PPC::MTCRF8, Convert__imm_95_255__RegG8RC1_0, 0, { MCK_RegG8RC }, },
  { 5928 /* mtcrf */, PPC::MTCRF, Convert__Imm1_0__RegGPRC1_1, 0, { MCK_Imm, MCK_RegGPRC }, },
  { 5934 /* mtctr */, PPC::MTCTR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5940 /* mtdar */, PPC::MTSPR, Convert__imm_95_19__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5946 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_537__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 5946 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_539__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 5946 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_541__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 5946 /* mtdbatl */, PPC::MTSPR, Convert__imm_95_543__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 5954 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_536__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 5954 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_538__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 5954 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_540__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 5954 /* mtdbatu */, PPC::MTSPR, Convert__imm_95_542__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 5962 /* mtdccr */, PPC::MTSPR, Convert__imm_95_1018__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5969 /* mtdcr */, PPC::MTDCR, Convert__RegGPRC1_1__Imm1_0, 0, { MCK_Imm, MCK_RegGPRC }, },
  { 5975 /* mtdear */, PPC::MTSPR, Convert__imm_95_981__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5982 /* mtdec */, PPC::MTSPR, Convert__imm_95_22__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5982 /* mtdec */, PPC::MTSPR, Convert__imm_95_22__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5988 /* mtdscr */, PPC::MTSPR, Convert__imm_95_17__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 5995 /* mtdsisr */, PPC::MTSPR, Convert__imm_95_18__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6003 /* mtesr */, PPC::MTSPR, Convert__imm_95_980__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6009 /* mtfsb0 */, PPC::MTFSB0, Convert__U5Imm1_0, 0, { MCK_U5Imm }, },
  { 6016 /* mtfsb1 */, PPC::MTFSB1, Convert__U5Imm1_0, 0, { MCK_U5Imm }, },
  { 6023 /* mtfsf */, PPC::MTFSF, Convert__Imm1_0__RegF8RC1_1__imm_95_0__imm_95_0, 0, { MCK_Imm, MCK_RegF8RC }, },
  { 6023 /* mtfsf */, PPC::MTFSFo, Convert__Imm1_1__RegF8RC1_2__imm_95_0__imm_95_0, 0, { MCK__DOT_, MCK_Imm, MCK_RegF8RC }, },
  { 6023 /* mtfsf */, PPC::MTFSF, Convert__Imm1_0__RegF8RC1_1__Imm1_2__Imm1_3, 0, { MCK_Imm, MCK_RegF8RC, MCK_Imm, MCK_Imm }, },
  { 6023 /* mtfsf */, PPC::MTFSFo, Convert__Imm1_1__RegF8RC1_2__Imm1_3__Imm1_4, 0, { MCK__DOT_, MCK_Imm, MCK_RegF8RC, MCK_Imm, MCK_Imm }, },
  { 6029 /* mtfsfi */, PPC::MTFSFI, Convert__RegCRRC1_0__Imm1_1__imm_95_0, 0, { MCK_RegCRRC, MCK_Imm }, },
  { 6029 /* mtfsfi */, PPC::MTFSFIo, Convert__RegCRRC1_1__Imm1_2__imm_95_0, 0, { MCK__DOT_, MCK_RegCRRC, MCK_Imm }, },
  { 6029 /* mtfsfi */, PPC::MTFSFI, Convert__RegCRRC1_0__Imm1_1__Imm1_2, 0, { MCK_RegCRRC, MCK_Imm, MCK_Imm }, },
  { 6029 /* mtfsfi */, PPC::MTFSFIo, Convert__RegCRRC1_1__Imm1_2__Imm1_3, 0, { MCK__DOT_, MCK_RegCRRC, MCK_Imm, MCK_Imm }, },
  { 6036 /* mtibatl */, PPC::MTSPR, Convert__imm_95_529__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 6036 /* mtibatl */, PPC::MTSPR, Convert__imm_95_531__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 6036 /* mtibatl */, PPC::MTSPR, Convert__imm_95_533__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 6036 /* mtibatl */, PPC::MTSPR, Convert__imm_95_535__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 6044 /* mtibatu */, PPC::MTSPR, Convert__imm_95_528__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 6044 /* mtibatu */, PPC::MTSPR, Convert__imm_95_530__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 6044 /* mtibatu */, PPC::MTSPR, Convert__imm_95_532__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 6044 /* mtibatu */, PPC::MTSPR, Convert__imm_95_534__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 6052 /* mticcr */, PPC::MTSPR, Convert__imm_95_1019__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6059 /* mtlr */, PPC::MTLR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6064 /* mtmsr */, PPC::MTMSR, Convert__RegGPRC1_0__imm_95_0, 0, { MCK_RegGPRC }, },
  { 6064 /* mtmsr */, PPC::MTMSR, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 6070 /* mtmsrd */, PPC::MTMSRD, Convert__RegGPRC1_0__imm_95_0, 0, { MCK_RegGPRC }, },
  { 6070 /* mtmsrd */, PPC::MTMSRD, Convert__RegGPRC1_0__Imm1_1, 0, { MCK_RegGPRC, MCK_Imm }, },
  { 6077 /* mtocrf */, PPC::MTOCRF, Convert__CRBitMask1_0__RegGPRC1_1, 0, { MCK_CRBitMask, MCK_RegGPRC }, },
  { 6084 /* mtpid */, PPC::MTSPR, Convert__imm_95_48__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6090 /* mtsdr1 */, PPC::MTSPR, Convert__imm_95_25__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6090 /* mtsdr1 */, PPC::MTSPR, Convert__imm_95_25__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6097 /* mtspefscr */, PPC::MTSPR, Convert__imm_95_512__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6107 /* mtspr */, PPC::MTSPR, Convert__Imm1_0__RegGPRC1_1, 0, { MCK_Imm, MCK_RegGPRC }, },
  { 6113 /* mtsprg */, PPC::MTSPR, Convert__imm_95_272__RegGPRC1_1, 0, { MCK_0, MCK_RegGPRC }, },
  { 6113 /* mtsprg */, PPC::MTSPR, Convert__imm_95_273__RegGPRC1_1, 0, { MCK_1, MCK_RegGPRC }, },
  { 6113 /* mtsprg */, PPC::MTSPR, Convert__imm_95_274__RegGPRC1_1, 0, { MCK_2, MCK_RegGPRC }, },
  { 6113 /* mtsprg */, PPC::MTSPR, Convert__imm_95_275__RegGPRC1_1, 0, { MCK_3, MCK_RegGPRC }, },
  { 6113 /* mtsprg */, PPC::MTSPR, Convert__imm_95_260__RegGPRC1_1, 0, { MCK_4, MCK_RegGPRC }, },
  { 6113 /* mtsprg */, PPC::MTSPR, Convert__imm_95_261__RegGPRC1_1, 0, { MCK_5, MCK_RegGPRC }, },
  { 6113 /* mtsprg */, PPC::MTSPR, Convert__imm_95_262__RegGPRC1_1, 0, { MCK_6, MCK_RegGPRC }, },
  { 6113 /* mtsprg */, PPC::MTSPR, Convert__imm_95_263__RegGPRC1_1, 0, { MCK_7, MCK_RegGPRC }, },
  { 6120 /* mtsprg0 */, PPC::MTSPR, Convert__imm_95_272__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6128 /* mtsprg1 */, PPC::MTSPR, Convert__imm_95_273__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6136 /* mtsprg2 */, PPC::MTSPR, Convert__imm_95_274__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6144 /* mtsprg3 */, PPC::MTSPR, Convert__imm_95_275__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6152 /* mtsprg4 */, PPC::MTSPR, Convert__imm_95_260__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6160 /* mtsprg5 */, PPC::MTSPR, Convert__imm_95_261__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6168 /* mtsprg6 */, PPC::MTSPR, Convert__imm_95_262__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6176 /* mtsprg7 */, PPC::MTSPR, Convert__imm_95_263__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6184 /* mtsr */, PPC::MTSR, Convert__RegGPRC1_1__U4Imm1_0, 0, { MCK_U4Imm, MCK_RegGPRC }, },
  { 6189 /* mtsrin */, PPC::MTSRIN, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6196 /* mtsrr0 */, PPC::MTSPR, Convert__imm_95_26__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6196 /* mtsrr0 */, PPC::MTSPR, Convert__imm_95_26__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6203 /* mtsrr1 */, PPC::MTSPR, Convert__imm_95_27__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6203 /* mtsrr1 */, PPC::MTSPR, Convert__imm_95_27__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6210 /* mtsrr2 */, PPC::MTSPR, Convert__imm_95_990__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6217 /* mtsrr3 */, PPC::MTSPR, Convert__imm_95_991__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6224 /* mttbhi */, PPC::MTSPR, Convert__imm_95_988__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6231 /* mttbl */, PPC::MTSPR, Convert__imm_95_284__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6237 /* mttblo */, PPC::MTSPR, Convert__imm_95_989__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6244 /* mttbu */, PPC::MTSPR, Convert__imm_95_285__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6250 /* mttcr */, PPC::MTSPR, Convert__imm_95_986__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6256 /* mtvscr */, PPC::MTVSCR, Convert__RegVRRC1_0, 0, { MCK_RegVRRC }, },
  { 6263 /* mtxer */, PPC::MTSPR, Convert__imm_95_1__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6269 /* mulhd */, PPC::MULHD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6269 /* mulhd */, PPC::MULHDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6275 /* mulhdu */, PPC::MULHDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6275 /* mulhdu */, PPC::MULHDUo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6282 /* mulhw */, PPC::MULHW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6282 /* mulhw */, PPC::MULHWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6288 /* mulhwu */, PPC::MULHWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6288 /* mulhwu */, PPC::MULHWUo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6295 /* mulld */, PPC::MULLD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6295 /* mulld */, PPC::MULLDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6301 /* mulli */, PPC::MULLI, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 6307 /* mullw */, PPC::MULLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6307 /* mullw */, PPC::MULLWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6313 /* nand */, PPC::NAND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6313 /* nand */, PPC::NANDo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6318 /* neg */, PPC::NEG, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6318 /* neg */, PPC::NEGo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6322 /* nop */, PPC::NOP, Convert_NoOperands, 0, {  }, },
  { 6326 /* nor */, PPC::NOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6326 /* nor */, PPC::NORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6330 /* not */, PPC::NOR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6330 /* not */, PPC::NOR8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6334 /* or */, PPC::OR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6334 /* or */, PPC::ORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6337 /* orc */, PPC::ORC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6337 /* orc */, PPC::ORCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6341 /* ori */, PPC::ORI, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 6345 /* oris */, PPC::ORIS, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 6350 /* popcntd */, PPC::POPCNTD, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6358 /* popcntw */, PPC::POPCNTW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6366 /* ptesync */, PPC::SYNC, Convert__imm_95_2, 0, {  }, },
  { 6374 /* rfci */, PPC::RFCI, Convert_NoOperands, 0, {  }, },
  { 6379 /* rfdi */, PPC::RFDI, Convert_NoOperands, 0, {  }, },
  { 6384 /* rfi */, PPC::RFI, Convert_NoOperands, 0, {  }, },
  { 6388 /* rfid */, PPC::RFID, Convert_NoOperands, 0, {  }, },
  { 6393 /* rfmci */, PPC::RFMCI, Convert_NoOperands, 0, {  }, },
  { 6399 /* rldcl */, PPC::RLDCL, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 6399 /* rldcl */, PPC::RLDCLo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 6405 /* rldcr */, PPC::RLDCR, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 6405 /* rldcr */, PPC::RLDCRo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, },
  { 6411 /* rldic */, PPC::RLDIC, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6411 /* rldic */, PPC::RLDICo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6417 /* rldicl */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6417 /* rldicl */, PPC::RLDICLo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6424 /* rldicr */, PPC::RLDICR, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6424 /* rldicr */, PPC::RLDICRo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6431 /* rldimi */, PPC::RLDIMI, Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6431 /* rldimi */, PPC::RLDIMIo, Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, },
  { 6438 /* rlwimi */, PPC::RLWIMI, Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 6438 /* rlwimi */, PPC::RLWIMIo, Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 6445 /* rlwinm */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 6445 /* rlwinm */, PPC::RLWINMo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, },
  { 6452 /* rlwnm */, PPC::RLWNM, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 6452 /* rlwnm */, PPC::RLWNMo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, },
  { 6458 /* rotld */, PPC::RLDCL, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__imm_95_0, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6458 /* rotld */, PPC::RLDCLo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__imm_95_0, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6464 /* rotldi */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__imm_95_0, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6464 /* rotldi */, PPC::RLDICLo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__imm_95_0, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6471 /* rotlw */, PPC::RLWNM, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__imm_95_0__imm_95_31, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6471 /* rotlw */, PPC::RLWNMo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__imm_95_0__imm_95_31, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6477 /* rotlwi */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__imm_95_0__imm_95_31, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6477 /* rotlwi */, PPC::RLWINMo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__imm_95_0__imm_95_31, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6484 /* rotrdi */, PPC::ROTRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6484 /* rotrdi */, PPC::ROTRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6491 /* rotrwi */, PPC::ROTRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6491 /* rotrwi */, PPC::ROTRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6498 /* sc */, PPC::SC, Convert__imm_95_0, 0, {  }, },
  { 6498 /* sc */, PPC::SC, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 6501 /* slbia */, PPC::SLBIA, Convert_NoOperands, 0, {  }, },
  { 6507 /* slbie */, PPC::SLBIE, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 6513 /* slbmfee */, PPC::SLBMFEE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6521 /* slbmte */, PPC::SLBMTE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6528 /* sld */, PPC::SLD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6528 /* sld */, PPC::SLDo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6532 /* sldi */, PPC::SLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6532 /* sldi */, PPC::SLDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6537 /* slw */, PPC::SLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6537 /* slw */, PPC::SLWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6541 /* slwi */, PPC::SLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6541 /* slwi */, PPC::SLWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6546 /* srad */, PPC::SRAD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6546 /* srad */, PPC::SRADo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6551 /* sradi */, PPC::SRADI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6551 /* sradi */, PPC::SRADIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6557 /* sraw */, PPC::SRAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6557 /* sraw */, PPC::SRAWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6562 /* srawi */, PPC::SRAWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6562 /* srawi */, PPC::SRAWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6568 /* srd */, PPC::SRD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6568 /* srd */, PPC::SRDo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, },
  { 6572 /* srdi */, PPC::SRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6572 /* srdi */, PPC::SRDIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, },
  { 6577 /* srw */, PPC::SRW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6577 /* srw */, PPC::SRWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6581 /* srwi */, PPC::SRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6581 /* srwi */, PPC::SRWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6586 /* stb */, PPC::STB, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6590 /* stbcix */, PPC::STBCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6597 /* stbu */, PPC::STBU, Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6602 /* stbux */, PPC::STBUX, Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6608 /* stbx */, PPC::STBX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6613 /* std */, PPC::STD, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 6617 /* stdbrx */, PPC::STDBRX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6624 /* stdcix */, PPC::STDCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6631 /* stdcx */, PPC::STDCX, Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6637 /* stdu */, PPC::STDU, Convert__imm_95_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, },
  { 6642 /* stdux */, PPC::STDUX, Convert__imm_95_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6648 /* stdx */, PPC::STDX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6653 /* stfd */, PPC::STFD, Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6658 /* stfdu */, PPC::STFDU, Convert__imm_95_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6664 /* stfdux */, PPC::STFDUX, Convert__imm_95_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6671 /* stfdx */, PPC::STFDX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6677 /* stfiwx */, PPC::STFIWX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6684 /* stfs */, PPC::STFS, Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6689 /* stfsu */, PPC::STFSU, Convert__imm_95_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6695 /* stfsux */, PPC::STFSUX, Convert__imm_95_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6702 /* stfsx */, PPC::STFSX, Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6708 /* sth */, PPC::STH, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6712 /* sthbrx */, PPC::STHBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6719 /* sthcix */, PPC::STHCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6726 /* sthu */, PPC::STHU, Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6731 /* sthux */, PPC::STHUX, Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6737 /* sthx */, PPC::STHX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6742 /* stmw */, PPC::STMW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6747 /* stswi */, PPC::STSWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, },
  { 6753 /* stvebx */, PPC::STVEBX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6760 /* stvehx */, PPC::STVEHX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6767 /* stvewx */, PPC::STVEWX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6774 /* stvx */, PPC::STVX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6779 /* stvxl */, PPC::STVXL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6785 /* stw */, PPC::STW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6789 /* stwbrx */, PPC::STWBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6796 /* stwcix */, PPC::STWCIX, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6803 /* stwcx */, PPC::STWCX, Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6809 /* stwu */, PPC::STWU, Convert__imm_95_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, },
  { 6814 /* stwux */, PPC::STWUX, Convert__imm_95_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6820 /* stwx */, PPC::STWX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6825 /* stxsdx */, PPC::STXSDX, Convert__RegVSFRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSFRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6832 /* stxvd2x */, PPC::STXVD2X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6840 /* stxvw4x */, PPC::STXVW4X, Convert__RegVSRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVSRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, },
  { 6848 /* sub */, PPC::SUBF8, Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6848 /* sub */, PPC::SUBF8o, Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6852 /* subc */, PPC::SUBFC8, Convert__RegG8RC1_0__RegG8RC1_2__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6852 /* subc */, PPC::SUBFC8o, Convert__RegG8RC1_1__RegG8RC1_3__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6857 /* subf */, PPC::SUBF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6857 /* subf */, PPC::SUBFo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6862 /* subfc */, PPC::SUBFC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6862 /* subfc */, PPC::SUBFCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6868 /* subfe */, PPC::SUBFE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6868 /* subfe */, PPC::SUBFEo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6874 /* subfic */, PPC::SUBFIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 6881 /* subfme */, PPC::SUBFME, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6881 /* subfme */, PPC::SUBFMEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6888 /* subfze */, PPC::SUBFZE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 6888 /* subfze */, PPC::SUBFZEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, },
  { 6895 /* subi */, PPC::SUBI, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 6900 /* subic */, PPC::SUBIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 6900 /* subic */, PPC::SUBICo, Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 6906 /* subis */, PPC::SUBIS, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, },
  { 6912 /* sync */, PPC::SYNC, Convert__imm_95_0, 0, {  }, },
  { 6912 /* sync */, PPC::SYNC, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 6917 /* td */, PPC::TD, Convert__U5Imm1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_U5Imm, MCK_RegG8RC, MCK_RegG8RC }, },
  { 6920 /* tdeq */, PPC::TD, Convert__imm_95_4__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6925 /* tdeqi */, PPC::TDI, Convert__imm_95_4__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6931 /* tdge */, PPC::TD, Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6936 /* tdgei */, PPC::TDI, Convert__imm_95_12__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6942 /* tdgt */, PPC::TD, Convert__imm_95_8__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6947 /* tdgti */, PPC::TDI, Convert__imm_95_8__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6953 /* tdi */, PPC::TDI, Convert__U5Imm1_0__RegG8RC1_1__S16Imm1_2, 0, { MCK_U5Imm, MCK_RegG8RC, MCK_S16Imm }, },
  { 6957 /* tdle */, PPC::TD, Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6962 /* tdlei */, PPC::TDI, Convert__imm_95_20__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6968 /* tdlge */, PPC::TD, Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6974 /* tdlgei */, PPC::TDI, Convert__imm_95_5__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6981 /* tdlgt */, PPC::TD, Convert__imm_95_1__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 6987 /* tdlgti */, PPC::TDI, Convert__imm_95_1__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 6994 /* tdlle */, PPC::TD, Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 7000 /* tdllei */, PPC::TDI, Convert__imm_95_6__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 7007 /* tdllt */, PPC::TD, Convert__imm_95_2__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 7013 /* tdllti */, PPC::TDI, Convert__imm_95_2__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 7020 /* tdlng */, PPC::TD, Convert__imm_95_6__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 7026 /* tdlngi */, PPC::TDI, Convert__imm_95_6__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 7033 /* tdlnl */, PPC::TD, Convert__imm_95_5__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 7039 /* tdlnli */, PPC::TDI, Convert__imm_95_5__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 7046 /* tdlt */, PPC::TD, Convert__imm_95_16__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 7051 /* tdlti */, PPC::TDI, Convert__imm_95_16__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 7057 /* tdne */, PPC::TD, Convert__imm_95_24__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 7062 /* tdnei */, PPC::TDI, Convert__imm_95_24__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 7068 /* tdng */, PPC::TD, Convert__imm_95_20__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 7073 /* tdngi */, PPC::TDI, Convert__imm_95_20__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 7079 /* tdnl */, PPC::TD, Convert__imm_95_12__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 7084 /* tdnli */, PPC::TDI, Convert__imm_95_12__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 7090 /* tdu */, PPC::TD, Convert__imm_95_31__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, },
  { 7094 /* tdui */, PPC::TDI, Convert__imm_95_31__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, },
  { 7099 /* tlbia */, PPC::TLBIA, Convert_NoOperands, 0, {  }, },
  { 7105 /* tlbie */, PPC::TLBIE, Convert__regR0__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 7105 /* tlbie */, PPC::TLBIE, Convert__RegGPRC1_1__RegGPRC1_0, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7111 /* tlbiel */, PPC::TLBIEL, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 7118 /* tlbivax */, PPC::TLBIVAX, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7126 /* tlbld */, PPC::TLBLD, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 7132 /* tlbli */, PPC::TLBLI, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 7138 /* tlbre */, PPC::TLBRE, Convert_NoOperands, 0, {  }, },
  { 7138 /* tlbre */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_Imm }, },
  { 7144 /* tlbrehi */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7152 /* tlbrelo */, PPC::TLBRE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7160 /* tlbsx */, PPC::TLBSX, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7160 /* tlbsx */, PPC::TLBSX2, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 7160 /* tlbsx */, PPC::TLBSX2D, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 7166 /* tlbsync */, PPC::TLBSYNC, Convert_NoOperands, 0, {  }, },
  { 7174 /* tlbwe */, PPC::TLBWE, Convert_NoOperands, 0, {  }, },
  { 7174 /* tlbwe */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_Imm }, },
  { 7180 /* tlbwehi */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_0, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7188 /* tlbwelo */, PPC::TLBWE2, Convert__RegGPRC1_0__RegGPRC1_1__imm_95_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7196 /* trap */, PPC::TRAP, Convert_NoOperands, 0, {  }, },
  { 7201 /* tw */, PPC::TW, Convert__U5Imm1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_U5Imm, MCK_RegGPRC, MCK_RegGPRC }, },
  { 7204 /* tweq */, PPC::TW, Convert__imm_95_4__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7209 /* tweqi */, PPC::TWI, Convert__imm_95_4__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7215 /* twge */, PPC::TW, Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7220 /* twgei */, PPC::TWI, Convert__imm_95_12__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7226 /* twgt */, PPC::TW, Convert__imm_95_8__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7231 /* twgti */, PPC::TWI, Convert__imm_95_8__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7237 /* twi */, PPC::TWI, Convert__U5Imm1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_U5Imm, MCK_RegGPRC, MCK_S16Imm }, },
  { 7241 /* twle */, PPC::TW, Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7246 /* twlei */, PPC::TWI, Convert__imm_95_20__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7252 /* twlge */, PPC::TW, Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7258 /* twlgei */, PPC::TWI, Convert__imm_95_5__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7265 /* twlgt */, PPC::TW, Convert__imm_95_1__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7271 /* twlgti */, PPC::TWI, Convert__imm_95_1__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7278 /* twlle */, PPC::TW, Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7284 /* twllei */, PPC::TWI, Convert__imm_95_6__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7291 /* twllt */, PPC::TW, Convert__imm_95_2__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7297 /* twllti */, PPC::TWI, Convert__imm_95_2__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7304 /* twlng */, PPC::TW, Convert__imm_95_6__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7310 /* twlngi */, PPC::TWI, Convert__imm_95_6__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7317 /* twlnl */, PPC::TW, Convert__imm_95_5__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7323 /* twlnli */, PPC::TWI, Convert__imm_95_5__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7330 /* twlt */, PPC::TW, Convert__imm_95_16__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7335 /* twlti */, PPC::TWI, Convert__imm_95_16__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7341 /* twne */, PPC::TW, Convert__imm_95_24__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7346 /* twnei */, PPC::TWI, Convert__imm_95_24__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7352 /* twng */, PPC::TW, Convert__imm_95_20__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7357 /* twngi */, PPC::TWI, Convert__imm_95_20__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7363 /* twnl */, PPC::TW, Convert__imm_95_12__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7368 /* twnli */, PPC::TWI, Convert__imm_95_12__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7374 /* twu */, PPC::TW, Convert__imm_95_31__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, },
  { 7378 /* twui */, PPC::TWI, Convert__imm_95_31__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, },
  { 7383 /* vaddcuw */, PPC::VADDCUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7391 /* vaddfp */, PPC::VADDFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7398 /* vaddsbs */, PPC::VADDSBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7406 /* vaddshs */, PPC::VADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7414 /* vaddsws */, PPC::VADDSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7422 /* vaddubm */, PPC::VADDUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7430 /* vaddubs */, PPC::VADDUBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7438 /* vadduhm */, PPC::VADDUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7446 /* vadduhs */, PPC::VADDUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7454 /* vadduwm */, PPC::VADDUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7462 /* vadduws */, PPC::VADDUWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7470 /* vand */, PPC::VAND, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7475 /* vandc */, PPC::VANDC, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7481 /* vavgsb */, PPC::VAVGSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7488 /* vavgsh */, PPC::VAVGSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7495 /* vavgsw */, PPC::VAVGSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7502 /* vavgub */, PPC::VAVGUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7509 /* vavguh */, PPC::VAVGUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7516 /* vavguw */, PPC::VAVGUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7523 /* vcfsx */, PPC::VCFSX, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 7529 /* vcfux */, PPC::VCFUX, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 7535 /* vclzb */, PPC::VCLZB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 7541 /* vclzd */, PPC::VCLZD, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 7547 /* vclzh */, PPC::VCLZH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 7553 /* vclzw */, PPC::VCLZW, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 7559 /* vcmpbfp */, PPC::VCMPBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7559 /* vcmpbfp */, PPC::VCMPBFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7567 /* vcmpeqfp */, PPC::VCMPEQFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7567 /* vcmpeqfp */, PPC::VCMPEQFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7576 /* vcmpequb */, PPC::VCMPEQUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7576 /* vcmpequb */, PPC::VCMPEQUBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7585 /* vcmpequh */, PPC::VCMPEQUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7585 /* vcmpequh */, PPC::VCMPEQUHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7594 /* vcmpequw */, PPC::VCMPEQUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7594 /* vcmpequw */, PPC::VCMPEQUWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7603 /* vcmpgefp */, PPC::VCMPGEFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7603 /* vcmpgefp */, PPC::VCMPGEFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7612 /* vcmpgtfp */, PPC::VCMPGTFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7612 /* vcmpgtfp */, PPC::VCMPGTFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7621 /* vcmpgtsb */, PPC::VCMPGTSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7621 /* vcmpgtsb */, PPC::VCMPGTSBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7630 /* vcmpgtsh */, PPC::VCMPGTSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7630 /* vcmpgtsh */, PPC::VCMPGTSHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7639 /* vcmpgtsw */, PPC::VCMPGTSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7639 /* vcmpgtsw */, PPC::VCMPGTSWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7648 /* vcmpgtub */, PPC::VCMPGTUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7648 /* vcmpgtub */, PPC::VCMPGTUBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7657 /* vcmpgtuh */, PPC::VCMPGTUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7657 /* vcmpgtuh */, PPC::VCMPGTUHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7666 /* vcmpgtuw */, PPC::VCMPGTUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7666 /* vcmpgtuw */, PPC::VCMPGTUWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7675 /* vctsxs */, PPC::VCTSXS, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 7682 /* vctuxs */, PPC::VCTUXS, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 7689 /* veqv */, PPC::VEQV, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7694 /* vexptefp */, PPC::VEXPTEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 7703 /* vlogefp */, PPC::VLOGEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 7711 /* vmaddfp */, PPC::VMADDFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7719 /* vmaxfp */, PPC::VMAXFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7726 /* vmaxsb */, PPC::VMAXSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7733 /* vmaxsh */, PPC::VMAXSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7740 /* vmaxsw */, PPC::VMAXSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7747 /* vmaxub */, PPC::VMAXUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7754 /* vmaxuh */, PPC::VMAXUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7761 /* vmaxuw */, PPC::VMAXUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7768 /* vmhaddshs */, PPC::VMHADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7778 /* vmhraddshs */, PPC::VMHRADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7789 /* vminfp */, PPC::VMINFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7796 /* vminsb */, PPC::VMINSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7803 /* vminsh */, PPC::VMINSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7810 /* vminsw */, PPC::VMINSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7817 /* vminub */, PPC::VMINUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7824 /* vminuh */, PPC::VMINUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7831 /* vminuw */, PPC::VMINUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7838 /* vmladduhm */, PPC::VMLADDUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7848 /* vmrghb */, PPC::VMRGHB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7855 /* vmrghh */, PPC::VMRGHH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7862 /* vmrghw */, PPC::VMRGHW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7869 /* vmrglb */, PPC::VMRGLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7876 /* vmrglh */, PPC::VMRGLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7883 /* vmrglw */, PPC::VMRGLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7890 /* vmsummbm */, PPC::VMSUMMBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7899 /* vmsumshm */, PPC::VMSUMSHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7908 /* vmsumshs */, PPC::VMSUMSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7917 /* vmsumubm */, PPC::VMSUMUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7926 /* vmsumuhm */, PPC::VMSUMUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7935 /* vmsumuhs */, PPC::VMSUMUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7944 /* vmulesb */, PPC::VMULESB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7952 /* vmulesh */, PPC::VMULESH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7960 /* vmuleub */, PPC::VMULEUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7968 /* vmuleuh */, PPC::VMULEUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7976 /* vmulosb */, PPC::VMULOSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7984 /* vmulosh */, PPC::VMULOSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 7992 /* vmuloub */, PPC::VMULOUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8000 /* vmulouh */, PPC::VMULOUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8008 /* vnand */, PPC::VNAND, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8014 /* vnmsubfp */, PPC::VNMSUBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8023 /* vnor */, PPC::VNOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8028 /* vor */, PPC::VOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8032 /* vorc */, PPC::VORC, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8037 /* vperm */, PPC::VPERM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8043 /* vpkpx */, PPC::VPKPX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8049 /* vpkshss */, PPC::VPKSHSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8057 /* vpkshus */, PPC::VPKSHUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8065 /* vpkswss */, PPC::VPKSWSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8073 /* vpkswus */, PPC::VPKSWUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8081 /* vpkuhum */, PPC::VPKUHUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8089 /* vpkuhus */, PPC::VPKUHUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8097 /* vpkuwum */, PPC::VPKUWUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8105 /* vpkuwus */, PPC::VPKUWUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8113 /* vpopcntb */, PPC::VPOPCNTB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8122 /* vpopcntd */, PPC::VPOPCNTD, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8131 /* vpopcnth */, PPC::VPOPCNTH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8140 /* vpopcntw */, PPC::VPOPCNTW, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8149 /* vrefp */, PPC::VREFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8155 /* vrfim */, PPC::VRFIM, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8161 /* vrfin */, PPC::VRFIN, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8167 /* vrfip */, PPC::VRFIP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8173 /* vrfiz */, PPC::VRFIZ, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8179 /* vrlb */, PPC::VRLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8184 /* vrlh */, PPC::VRLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8189 /* vrlw */, PPC::VRLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8194 /* vrsqrtefp */, PPC::VRSQRTEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8204 /* vsel */, PPC::VSEL, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8209 /* vsl */, PPC::VSL, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8213 /* vslb */, PPC::VSLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8218 /* vsldoi */, PPC::VSLDOI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 8225 /* vslh */, PPC::VSLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8230 /* vslo */, PPC::VSLO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8235 /* vslw */, PPC::VSLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8240 /* vspltb */, PPC::VSPLTB, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 8247 /* vsplth */, PPC::VSPLTH, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 8254 /* vspltisb */, PPC::VSPLTISB, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, },
  { 8263 /* vspltish */, PPC::VSPLTISH, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, },
  { 8272 /* vspltisw */, PPC::VSPLTISW, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, },
  { 8281 /* vspltw */, PPC::VSPLTW, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, },
  { 8288 /* vsr */, PPC::VSR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8292 /* vsrab */, PPC::VSRAB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8298 /* vsrah */, PPC::VSRAH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8304 /* vsraw */, PPC::VSRAW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8310 /* vsrb */, PPC::VSRB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8315 /* vsrh */, PPC::VSRH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8320 /* vsro */, PPC::VSRO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8325 /* vsrw */, PPC::VSRW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8330 /* vsubcuw */, PPC::VSUBCUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8338 /* vsubfp */, PPC::VSUBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8345 /* vsubsbs */, PPC::VSUBSBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8353 /* vsubshs */, PPC::VSUBSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8361 /* vsubsws */, PPC::VSUBSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8369 /* vsububm */, PPC::VSUBUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8377 /* vsububs */, PPC::VSUBUBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8385 /* vsubuhm */, PPC::VSUBUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8393 /* vsubuhs */, PPC::VSUBUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8401 /* vsubuwm */, PPC::VSUBUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8409 /* vsubuws */, PPC::VSUBUWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8417 /* vsum2sws */, PPC::VSUM2SWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8426 /* vsum4sbs */, PPC::VSUM4SBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8435 /* vsum4shs */, PPC::VSUM4SHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8444 /* vsum4ubs */, PPC::VSUM4UBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8453 /* vsumsws */, PPC::VSUMSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8461 /* vupkhpx */, PPC::VUPKHPX, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8469 /* vupkhsb */, PPC::VUPKHSB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8477 /* vupkhsh */, PPC::VUPKHSH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8485 /* vupklpx */, PPC::VUPKLPX, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8493 /* vupklsb */, PPC::VUPKLSB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8501 /* vupklsh */, PPC::VUPKLSH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, },
  { 8509 /* vxor */, PPC::VXOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, },
  { 8514 /* wait */, PPC::WAIT, Convert__imm_95_0, 0, {  }, },
  { 8514 /* wait */, PPC::WAIT, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 8519 /* waitimpl */, PPC::WAIT, Convert__imm_95_2, 0, {  }, },
  { 8528 /* waitrsv */, PPC::WAIT, Convert__imm_95_1, 0, {  }, },
  { 8536 /* wrtee */, PPC::WRTEE, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, },
  { 8542 /* wrteei */, PPC::WRTEEI, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 8549 /* xnop */, PPC::XORI, Convert__regR0__regR0__imm_95_0, 0, {  }, },
  { 8554 /* xor */, PPC::XOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8554 /* xor */, PPC::XORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, },
  { 8558 /* xori */, PPC::XORI, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 8563 /* xoris */, PPC::XORIS, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, },
  { 8569 /* xsabsdp */, PPC::XSABSDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8577 /* xsadddp */, PPC::XSADDDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8585 /* xscmpodp */, PPC::XSCMPODP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8594 /* xscmpudp */, PPC::XSCMPUDP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8603 /* xscpsgndp */, PPC::XSCPSGNDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8613 /* xscvdpsp */, PPC::XSCVDPSP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8622 /* xscvdpsxds */, PPC::XSCVDPSXDS, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8633 /* xscvdpsxws */, PPC::XSCVDPSXWS, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8644 /* xscvdpuxds */, PPC::XSCVDPUXDS, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8655 /* xscvdpuxws */, PPC::XSCVDPUXWS, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8666 /* xscvspdp */, PPC::XSCVSPDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8675 /* xscvsxddp */, PPC::XSCVSXDDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8685 /* xscvuxddp */, PPC::XSCVUXDDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8695 /* xsdivdp */, PPC::XSDIVDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8703 /* xsmaddadp */, PPC::XSMADDADP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8713 /* xsmaddmdp */, PPC::XSMADDMDP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8723 /* xsmaxdp */, PPC::XSMAXDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8731 /* xsmindp */, PPC::XSMINDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8739 /* xsmsubadp */, PPC::XSMSUBADP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8749 /* xsmsubmdp */, PPC::XSMSUBMDP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8759 /* xsmuldp */, PPC::XSMULDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8767 /* xsnabsdp */, PPC::XSNABSDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8776 /* xsnegdp */, PPC::XSNEGDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8784 /* xsnmaddadp */, PPC::XSNMADDADP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8795 /* xsnmaddmdp */, PPC::XSNMADDMDP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8806 /* xsnmsubadp */, PPC::XSNMSUBADP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8817 /* xsnmsubmdp */, PPC::XSNMSUBMDP, Convert__RegVSFRC1_0__Tie0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8828 /* xsrdpi */, PPC::XSRDPI, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8835 /* xsrdpic */, PPC::XSRDPIC, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8843 /* xsrdpim */, PPC::XSRDPIM, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8851 /* xsrdpip */, PPC::XSRDPIP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8859 /* xsrdpiz */, PPC::XSRDPIZ, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8867 /* xsredp */, PPC::XSREDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8874 /* xsrsqrtedp */, PPC::XSRSQRTEDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8885 /* xssqrtdp */, PPC::XSSQRTDP, Convert__RegVSFRC1_0__RegVSFRC1_1, 0, { MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8894 /* xssubdp */, PPC::XSSUBDP, Convert__RegVSFRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegVSFRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8902 /* xstdivdp */, PPC::XSTDIVDP, Convert__RegCRRC1_0__RegVSFRC1_1__RegVSFRC1_2, 0, { MCK_RegCRRC, MCK_RegVSFRC, MCK_RegVSFRC }, },
  { 8911 /* xstsqrtdp */, PPC::XSTSQRTDP, Convert__RegCRRC1_0__RegVSFRC1_1, 0, { MCK_RegCRRC, MCK_RegVSFRC }, },
  { 8921 /* xvabsdp */, PPC::XVABSDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8929 /* xvabssp */, PPC::XVABSSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 8937 /* xvadddp */, PPC::XVADDDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8945 /* xvaddsp */, PPC::XVADDSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8953 /* xvcmpeqdp */, PPC::XVCMPEQDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8953 /* xvcmpeqdp */, PPC::XVCMPEQDPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8963 /* xvcmpeqsp */, PPC::XVCMPEQSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8963 /* xvcmpeqsp */, PPC::XVCMPEQSPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8973 /* xvcmpgedp */, PPC::XVCMPGEDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8973 /* xvcmpgedp */, PPC::XVCMPGEDPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8983 /* xvcmpgesp */, PPC::XVCMPGESP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8983 /* xvcmpgesp */, PPC::XVCMPGESPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8993 /* xvcmpgtdp */, PPC::XVCMPGTDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 8993 /* xvcmpgtdp */, PPC::XVCMPGTDPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9003 /* xvcmpgtsp */, PPC::XVCMPGTSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9003 /* xvcmpgtsp */, PPC::XVCMPGTSPo, Convert__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK__DOT_, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9013 /* xvcpsgndp */, PPC::XVCPSGNDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9023 /* xvcpsgnsp */, PPC::XVCPSGNSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9033 /* xvcvdpsp */, PPC::XVCVDPSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9042 /* xvcvdpsxds */, PPC::XVCVDPSXDS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9053 /* xvcvdpsxws */, PPC::XVCVDPSXWS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9064 /* xvcvdpuxds */, PPC::XVCVDPUXDS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9075 /* xvcvdpuxws */, PPC::XVCVDPUXWS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9086 /* xvcvspdp */, PPC::XVCVSPDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9095 /* xvcvspsxds */, PPC::XVCVSPSXDS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9106 /* xvcvspsxws */, PPC::XVCVSPSXWS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9117 /* xvcvspuxds */, PPC::XVCVSPUXDS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9128 /* xvcvspuxws */, PPC::XVCVSPUXWS, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9139 /* xvcvsxddp */, PPC::XVCVSXDDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9149 /* xvcvsxdsp */, PPC::XVCVSXDSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9159 /* xvcvsxwdp */, PPC::XVCVSXWDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9169 /* xvcvsxwsp */, PPC::XVCVSXWSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9179 /* xvcvuxddp */, PPC::XVCVUXDDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9189 /* xvcvuxdsp */, PPC::XVCVUXDSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9199 /* xvcvuxwdp */, PPC::XVCVUXWDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9209 /* xvcvuxwsp */, PPC::XVCVUXWSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9219 /* xvdivdp */, PPC::XVDIVDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9227 /* xvdivsp */, PPC::XVDIVSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9235 /* xvmaddadp */, PPC::XVMADDADP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9245 /* xvmaddasp */, PPC::XVMADDASP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9255 /* xvmaddmdp */, PPC::XVMADDMDP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9265 /* xvmaddmsp */, PPC::XVMADDMSP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9275 /* xvmaxdp */, PPC::XVMAXDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9283 /* xvmaxsp */, PPC::XVMAXSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9291 /* xvmindp */, PPC::XVMINDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9299 /* xvminsp */, PPC::XVMINSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9307 /* xvmovdp */, PPC::XVCPSGNDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9315 /* xvmovsp */, PPC::XVCPSGNSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9323 /* xvmsubadp */, PPC::XVMSUBADP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9333 /* xvmsubasp */, PPC::XVMSUBASP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9343 /* xvmsubmdp */, PPC::XVMSUBMDP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9353 /* xvmsubmsp */, PPC::XVMSUBMSP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9363 /* xvmuldp */, PPC::XVMULDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9371 /* xvmulsp */, PPC::XVMULSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9379 /* xvnabsdp */, PPC::XVNABSDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9388 /* xvnabssp */, PPC::XVNABSSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9397 /* xvnegdp */, PPC::XVNEGDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9405 /* xvnegsp */, PPC::XVNEGSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9413 /* xvnmaddadp */, PPC::XVNMADDADP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9424 /* xvnmaddasp */, PPC::XVNMADDASP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9435 /* xvnmaddmdp */, PPC::XVNMADDMDP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9446 /* xvnmaddmsp */, PPC::XVNMADDMSP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9457 /* xvnmsubadp */, PPC::XVNMSUBADP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9468 /* xvnmsubasp */, PPC::XVNMSUBASP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9479 /* xvnmsubmdp */, PPC::XVNMSUBMDP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9490 /* xvnmsubmsp */, PPC::XVNMSUBMSP, Convert__RegVSRC1_0__Tie0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9501 /* xvrdpi */, PPC::XVRDPI, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9508 /* xvrdpic */, PPC::XVRDPIC, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9516 /* xvrdpim */, PPC::XVRDPIM, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9524 /* xvrdpip */, PPC::XVRDPIP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9532 /* xvrdpiz */, PPC::XVRDPIZ, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9540 /* xvredp */, PPC::XVREDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9547 /* xvresp */, PPC::XVRESP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9554 /* xvrspi */, PPC::XVRSPI, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9561 /* xvrspic */, PPC::XVRSPIC, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9569 /* xvrspim */, PPC::XVRSPIM, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9577 /* xvrspip */, PPC::XVRSPIP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9585 /* xvrspiz */, PPC::XVRSPIZ, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9593 /* xvrsqrtedp */, PPC::XVRSQRTEDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9604 /* xvrsqrtesp */, PPC::XVRSQRTESP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9615 /* xvsqrtdp */, PPC::XVSQRTDP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9624 /* xvsqrtsp */, PPC::XVSQRTSP, Convert__RegVSRC1_0__RegVSRC1_1, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
  { 9633 /* xvsubdp */, PPC::XVSUBDP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9641 /* xvsubsp */, PPC::XVSUBSP, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9649 /* xvtdivdp */, PPC::XVTDIVDP, Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegCRRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9658 /* xvtdivsp */, PPC::XVTDIVSP, Convert__RegCRRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegCRRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9667 /* xvtsqrtdp */, PPC::XVTSQRTDP, Convert__RegCRRC1_0__RegVSRC1_1, 0, { MCK_RegCRRC, MCK_RegVSRC }, },
  { 9677 /* xvtsqrtsp */, PPC::XVTSQRTSP, Convert__RegCRRC1_0__RegVSRC1_1, 0, { MCK_RegCRRC, MCK_RegVSRC }, },
  { 9687 /* xxland */, PPC::XXLAND, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9694 /* xxlandc */, PPC::XXLANDC, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9702 /* xxlnor */, PPC::XXLNOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9709 /* xxlor */, PPC::XXLOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9715 /* xxlxor */, PPC::XXLXOR, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9722 /* xxmrghd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_0, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9730 /* xxmrghw */, PPC::XXMRGHW, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9738 /* xxmrgld */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__imm_95_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9746 /* xxmrglw */, PPC::XXMRGLW, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9754 /* xxpermdi */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 9763 /* xxsel */, PPC::XXSEL, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__RegVSRC1_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC }, },
  { 9769 /* xxsldwi */, PPC::XXSLDWI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_2__U2Imm1_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 9777 /* xxspltd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_0, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_0 }, },
  { 9777 /* xxspltd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_3, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_1 }, },
  { 9785 /* xxspltw */, PPC::XXSPLTW, Convert__RegVSRC1_0__RegVSRC1_1__U2Imm1_2, 0, { MCK_RegVSRC, MCK_RegVSRC, MCK_U2Imm }, },
  { 9793 /* xxswapd */, PPC::XXPERMDI, Convert__RegVSRC1_0__RegVSRC1_1__RegVSRC1_1__imm_95_2, 0, { MCK_RegVSRC, MCK_RegVSRC }, },
};

bool PPCAsmParser::
mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) {
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(Start, End, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned PPCAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst, uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 7) {
    ErrorInfo = 7;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((PPCOperand&)*Operands[0]).getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  uint64_t MissingFeatures = ~0ULL;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0U;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(Start, End, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned i = 0; i != 6; ++i) {
      if (i + 1 >= Operands.size()) {
        OperandsValid = (it->Classes[i] == InvalidMatchClass);
        if (!OperandsValid) ErrorInfo = i + 1;
        break;
      }
      unsigned Diag = validateOperandClass(*Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
      if (Diag == Match_Success)
        continue;
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag == Match_InvalidOperand) {
        Diag = validateTargetOperandClass(*Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
        if (Diag == Match_Success)
          continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= i+1)) {
        ErrorInfo = i+1;
        // InvalidOperand is the default. Prefer specificity.
        if (Diag != Match_InvalidOperand)
          RetCode = Diag;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) continue;
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      uint64_t NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      if (countPopulation(NewMissingFeatures) <=
          countPopulation(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    if (matchingInlineAsm) {
      Inst.setOpcode(it->Opcode);
      convertToMapAndConstraints(it->ConvertFn, Operands);
      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    unsigned MatchResult;
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    std::string Info;
    if (MII.get(Inst.getOpcode()).getDeprecatedInfo(Inst, STI, Info)) {
      SMLoc Loc = ((PPCOperand&)*Operands[0]).getStartLoc();
      getParser().Warning(Loc, Info, None);
    }
    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

#endif // GET_MATCHER_IMPLEMENTATION

