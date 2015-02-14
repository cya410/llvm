/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Subtarget Enumeration Source Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM
namespace llvm {
namespace PPC {
  const uint64_t DeprecatedDST = 1ULL << 0;
  const uint64_t DeprecatedMFTB = 1ULL << 1;
  const uint64_t Directive32 = 1ULL << 2;
  const uint64_t Directive64 = 1ULL << 3;
  const uint64_t Directive440 = 1ULL << 4;
  const uint64_t Directive601 = 1ULL << 5;
  const uint64_t Directive602 = 1ULL << 6;
  const uint64_t Directive603 = 1ULL << 7;
  const uint64_t Directive604 = 1ULL << 8;
  const uint64_t Directive620 = 1ULL << 9;
  const uint64_t Directive750 = 1ULL << 10;
  const uint64_t Directive970 = 1ULL << 11;
  const uint64_t Directive7400 = 1ULL << 12;
  const uint64_t DirectiveA2 = 1ULL << 13;
  const uint64_t DirectiveE500mc = 1ULL << 14;
  const uint64_t DirectiveE5500 = 1ULL << 15;
  const uint64_t DirectivePwr3 = 1ULL << 16;
  const uint64_t DirectivePwr4 = 1ULL << 17;
  const uint64_t DirectivePwr5 = 1ULL << 18;
  const uint64_t DirectivePwr5x = 1ULL << 19;
  const uint64_t DirectivePwr6 = 1ULL << 20;
  const uint64_t DirectivePwr6x = 1ULL << 21;
  const uint64_t DirectivePwr7 = 1ULL << 22;
  const uint64_t DirectivePwr8 = 1ULL << 23;
  const uint64_t Feature64Bit = 1ULL << 24;
  const uint64_t Feature64BitRegs = 1ULL << 25;
  const uint64_t FeatureAltivec = 1ULL << 26;
  const uint64_t FeatureBookE = 1ULL << 27;
  const uint64_t FeatureCMPB = 1ULL << 28;
  const uint64_t FeatureCRBits = 1ULL << 29;
  const uint64_t FeatureE500 = 1ULL << 30;
  const uint64_t FeatureELFv1 = 1ULL << 31;
  const uint64_t FeatureELFv2 = 1ULL << 32;
  const uint64_t FeatureFCPSGN = 1ULL << 33;
  const uint64_t FeatureFPCVT = 1ULL << 34;
  const uint64_t FeatureFPRND = 1ULL << 35;
  const uint64_t FeatureFRE = 1ULL << 36;
  const uint64_t FeatureFRES = 1ULL << 37;
  const uint64_t FeatureFRSQRTE = 1ULL << 38;
  const uint64_t FeatureFRSQRTES = 1ULL << 39;
  const uint64_t FeatureFSqrt = 1ULL << 40;
  const uint64_t FeatureICBT = 1ULL << 41;
  const uint64_t FeatureISEL = 1ULL << 42;
  const uint64_t FeatureInvariantFunctionDescriptors = 1ULL << 43;
  const uint64_t FeatureLDBRX = 1ULL << 44;
  const uint64_t FeatureLFIWAX = 1ULL << 45;
  const uint64_t FeatureMFOCRF = 1ULL << 46;
  const uint64_t FeatureMSYNC = 1ULL << 47;
  const uint64_t FeatureP8Altivec = 1ULL << 48;
  const uint64_t FeatureP8Vector = 1ULL << 49;
  const uint64_t FeaturePOPCNTD = 1ULL << 50;
  const uint64_t FeaturePPC4xx = 1ULL << 51;
  const uint64_t FeaturePPC6xx = 1ULL << 52;
  const uint64_t FeatureQPX = 1ULL << 53;
  const uint64_t FeatureRecipPrec = 1ULL << 54;
  const uint64_t FeatureSPE = 1ULL << 55;
  const uint64_t FeatureSTFIWX = 1ULL << 56;
  const uint64_t FeatureVSX = 1ULL << 57;
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV PPCFeatureKV[] = {
  { "64bit", "Enable 64-bit instructions", PPC::Feature64Bit, 0ULL },
  { "64bitregs", "Enable 64-bit registers usage for ppc32 [beta]", PPC::Feature64BitRegs, 0ULL },
  { "altivec", "Enable Altivec instructions", PPC::FeatureAltivec, 0ULL },
  { "booke", "Enable Book E instructions", PPC::FeatureBookE, PPC::FeatureICBT },
  { "cmpb", "Enable the cmpb instruction", PPC::FeatureCMPB, 0ULL },
  { "crbits", "Use condition-register bits individually", PPC::FeatureCRBits, 0ULL },
  { "e500", "Enable E500/E500mc instructions", PPC::FeatureE500, 0ULL },
  { "elfv1", "Use the ELFv1 ABI", PPC::FeatureELFv1, 0ULL },
  { "elfv2", "Use the ELFv2 ABI", PPC::FeatureELFv2, 0ULL },
  { "fcpsgn", "Enable the fcpsgn instruction", PPC::FeatureFCPSGN, 0ULL },
  { "fpcvt", "Enable fc[ft]* (unsigned and single-precision) and lfiwzx instructions", PPC::FeatureFPCVT, 0ULL },
  { "fprnd", "Enable the fri[mnpz] instructions", PPC::FeatureFPRND, 0ULL },
  { "fre", "Enable the fre instruction", PPC::FeatureFRE, 0ULL },
  { "fres", "Enable the fres instruction", PPC::FeatureFRES, 0ULL },
  { "frsqrte", "Enable the frsqrte instruction", PPC::FeatureFRSQRTE, 0ULL },
  { "frsqrtes", "Enable the frsqrtes instruction", PPC::FeatureFRSQRTES, 0ULL },
  { "fsqrt", "Enable the fsqrt instruction", PPC::FeatureFSqrt, 0ULL },
  { "icbt", "Enable icbt instruction", PPC::FeatureICBT, 0ULL },
  { "invariant-function-descriptors", "Assume function descriptors are invariant", PPC::FeatureInvariantFunctionDescriptors, 0ULL },
  { "isel", "Enable the isel instruction", PPC::FeatureISEL, 0ULL },
  { "ldbrx", "Enable the ldbrx instruction", PPC::FeatureLDBRX, 0ULL },
  { "lfiwax", "Enable the lfiwax instruction", PPC::FeatureLFIWAX, 0ULL },
  { "mfocrf", "Enable the MFOCRF instruction", PPC::FeatureMFOCRF, 0ULL },
  { "msync", "Has only the msync instruction instead of sync", PPC::FeatureMSYNC, PPC::FeatureBookE },
  { "popcntd", "Enable the popcnt[dw] instructions", PPC::FeaturePOPCNTD, 0ULL },
  { "power8-altivec", "Enable POWER8 Altivec instructions", PPC::FeatureP8Altivec, PPC::FeatureAltivec },
  { "power8-vector", "Enable POWER8 vector instructions", PPC::FeatureP8Vector, PPC::FeatureVSX | PPC::FeatureP8Altivec },
  { "ppc4xx", "Enable PPC 4xx instructions", PPC::FeaturePPC4xx, 0ULL },
  { "ppc6xx", "Enable PPC 6xx instructions", PPC::FeaturePPC6xx, 0ULL },
  { "qpx", "Enable QPX instructions", PPC::FeatureQPX, 0ULL },
  { "recipprec", "Assume higher precision reciprocal estimates", PPC::FeatureRecipPrec, 0ULL },
  { "spe", "Enable SPE instructions", PPC::FeatureSPE, 0ULL },
  { "stfiwx", "Enable the stfiwx instruction", PPC::FeatureSTFIWX, 0ULL },
  { "vsx", "Enable VSX instructions", PPC::FeatureVSX, PPC::FeatureAltivec }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[] = {
  { "440", "Select the 440 processor", PPC::Directive440 | PPC::FeatureISEL | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureICBT | PPC::FeatureBookE | PPC::FeatureMSYNC | PPC::DeprecatedMFTB, 0ULL },
  { "450", "Select the 450 processor", PPC::Directive440 | PPC::FeatureISEL | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureICBT | PPC::FeatureBookE | PPC::FeatureMSYNC | PPC::DeprecatedMFTB, 0ULL },
  { "601", "Select the 601 processor", PPC::Directive601, 0ULL },
  { "602", "Select the 602 processor", PPC::Directive602, 0ULL },
  { "603", "Select the 603 processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "603e", "Select the 603e processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "603ev", "Select the 603ev processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "604", "Select the 604 processor", PPC::Directive604 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "604e", "Select the 604e processor", PPC::Directive604 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "620", "Select the 620 processor", PPC::Directive620 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "7400", "Select the 7400 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "7450", "Select the 7450 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "750", "Select the 750 processor", PPC::Directive750 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "970", "Select the 970 processor", PPC::Directive970 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "a2", "Select the a2 processor", PPC::DirectiveA2 | PPC::FeatureICBT | PPC::FeatureBookE | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureCMPB | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::DeprecatedMFTB, 0ULL },
  { "a2q", "Select the a2q processor", PPC::DirectiveA2 | PPC::FeatureICBT | PPC::FeatureBookE | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureCMPB | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::FeatureQPX | PPC::DeprecatedMFTB, 0ULL },
  { "e500mc", "Select the e500mc processor", PPC::DirectiveE500mc | PPC::FeatureMFOCRF | PPC::FeatureSTFIWX | PPC::FeatureICBT | PPC::FeatureBookE | PPC::FeatureISEL | PPC::DeprecatedMFTB, 0ULL },
  { "e5500", "Select the e5500 processor", PPC::DirectiveE5500 | PPC::FeatureMFOCRF | PPC::Feature64Bit | PPC::FeatureSTFIWX | PPC::FeatureICBT | PPC::FeatureBookE | PPC::FeatureISEL | PPC::DeprecatedMFTB, 0ULL },
  { "g3", "Select the g3 processor", PPC::Directive750 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g4", "Select the g4 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g4+", "Select the g4+ processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g5", "Select the g5 processor", PPC::Directive970 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureSTFIWX | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "generic", "Select the generic processor", PPC::Directive32, 0ULL },
  { "ppc", "Select the ppc processor", PPC::Directive32, 0ULL },
  { "ppc64", "Select the ppc64 processor", PPC::Directive64 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "ppc64le", "Select the ppc64le processor", PPC::DirectivePwr8 | PPC::FeatureAltivec | PPC::FeatureP8Altivec | PPC::FeatureVSX | PPC::FeatureP8Vector | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureCMPB | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::FeatureICBT | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr3", "Select the pwr3 processor", PPC::DirectivePwr3 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureMFOCRF | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr4", "Select the pwr4 processor", PPC::DirectivePwr4 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr5", "Select the pwr5 processor", PPC::DirectivePwr5 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureSTFIWX | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr5x", "Select the pwr5x processor", PPC::DirectivePwr5x | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureSTFIWX | PPC::FeatureFPRND | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr6", "Select the pwr6 processor", PPC::DirectivePwr6 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureCMPB | PPC::FeatureFPRND | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr6x", "Select the pwr6x processor", PPC::DirectivePwr5x | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureCMPB | PPC::FeatureFPRND | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr7", "Select the pwr7 processor", PPC::DirectivePwr7 | PPC::FeatureAltivec | PPC::FeatureVSX | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureCMPB | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr8", "Select the pwr8 processor", PPC::DirectivePwr8 | PPC::FeatureAltivec | PPC::FeatureP8Altivec | PPC::FeatureVSX | PPC::FeatureP8Vector | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureCMPB | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::FeatureICBT | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "PPC440Itineraries"
namespace PPC440ItinerariesFU {
  const unsigned P440_DISS1 = 1 << 0;
  const unsigned P440_DISS2 = 1 << 1;
  const unsigned P440_FRACC = 1 << 2;
  const unsigned P440_IRACC = 1 << 3;
  const unsigned P440_IEXE1 = 1 << 4;
  const unsigned P440_IEXE2 = 1 << 5;
  const unsigned P440_IWB = 1 << 6;
  const unsigned P440_LRACC = 1 << 7;
  const unsigned P440_JEXE1 = 1 << 8;
  const unsigned P440_JEXE2 = 1 << 9;
  const unsigned P440_JWB = 1 << 10;
  const unsigned P440_AGEN = 1 << 11;
  const unsigned P440_CRD = 1 << 12;
  const unsigned P440_LWB = 1 << 13;
  const unsigned P440_FEXE1 = 1 << 14;
  const unsigned P440_FEXE2 = 1 << 15;
  const unsigned P440_FEXE3 = 1 << 16;
  const unsigned P440_FEXE4 = 1 << 17;
  const unsigned P440_FEXE5 = 1 << 18;
  const unsigned P440_FEXE6 = 1 << 19;
  const unsigned P440_FWB = 1 << 20;
  const unsigned P440_LWARX_Hold = 1 << 21;
}

// Pipeline forwarding pathes for itineraries "PPC440Itineraries"
namespace PPC440ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned P440_GPR_Bypass = 1 << 0;
  const unsigned P440_FPR_Bypass = 1 << 1;
}

// Functional units for "G3Itineraries"
namespace G3ItinerariesFU {
  const unsigned G3_IU1 = 1 << 0;
  const unsigned G3_IU2 = 1 << 1;
  const unsigned G3_FPU1 = 1 << 2;
  const unsigned G3_BPU = 1 << 3;
  const unsigned G3_SRU = 1 << 4;
  const unsigned G3_SLU = 1 << 5;
}

// Functional units for "G4Itineraries"
namespace G4ItinerariesFU {
  const unsigned G4_IU1 = 1 << 0;
  const unsigned G4_IU2 = 1 << 1;
  const unsigned G4_SLU = 1 << 2;
  const unsigned G4_SRU = 1 << 3;
  const unsigned G4_BPU = 1 << 4;
  const unsigned G4_FPU1 = 1 << 5;
  const unsigned G4_VIU1 = 1 << 6;
  const unsigned G4_VIU2 = 1 << 7;
  const unsigned G4_VPU = 1 << 8;
  const unsigned G4_VFPU = 1 << 9;
}

// Functional units for "G4PlusItineraries"
namespace G4PlusItinerariesFU {
  const unsigned G4P_IU1 = 1 << 0;
  const unsigned G4P_IU2 = 1 << 1;
  const unsigned G4P_IU3 = 1 << 2;
  const unsigned G4P_IU4 = 1 << 3;
  const unsigned G4P_BPU = 1 << 4;
  const unsigned G4P_SLU = 1 << 5;
  const unsigned G4P_FPU1 = 1 << 6;
  const unsigned G4P_VFPU = 1 << 7;
  const unsigned G4P_VIU1 = 1 << 8;
  const unsigned G4P_VIU2 = 1 << 9;
  const unsigned G4P_VPU = 1 << 10;
}

// Functional units for "G5Itineraries"
namespace G5ItinerariesFU {
  const unsigned G5_IU1 = 1 << 0;
  const unsigned G5_IU2 = 1 << 1;
  const unsigned G5_SLU = 1 << 2;
  const unsigned G5_BPU = 1 << 3;
  const unsigned G5_FPU1 = 1 << 4;
  const unsigned G5_FPU2 = 1 << 5;
  const unsigned G5_VFPU = 1 << 6;
  const unsigned G5_VIU1 = 1 << 7;
  const unsigned G5_VIU2 = 1 << 8;
  const unsigned G5_VPU = 1 << 9;
}

// Functional units for "PPCA2Itineraries"
namespace PPCA2ItinerariesFU {
  const unsigned A2_XU = 1 << 0;
  const unsigned A2_FU = 1 << 1;
}

// Functional units for "PPCE500mcItineraries"
namespace PPCE500mcItinerariesFU {
  const unsigned E500_DIS0 = 1 << 0;
  const unsigned E500_DIS1 = 1 << 1;
  const unsigned E500_SFX0 = 1 << 2;
  const unsigned E500_SFX1 = 1 << 3;
  const unsigned E500_BU = 1 << 4;
  const unsigned E500_CFX_DivBypass = 1 << 5;
  const unsigned E500_CFX_0 = 1 << 6;
  const unsigned E500_LSU_0 = 1 << 7;
  const unsigned E500_FPU_0 = 1 << 8;
}

// Pipeline forwarding pathes for itineraries "PPCE500mcItineraries"
namespace PPCE500mcItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned E500_CR_Bypass = 1 << 0;
  const unsigned E500_GPR_Bypass = 1 << 1;
  const unsigned E500_FPR_Bypass = 1 << 2;
}

// Functional units for "PPCE5500Itineraries"
namespace PPCE5500ItinerariesFU {
  const unsigned E5500_DIS0 = 1 << 0;
  const unsigned E5500_DIS1 = 1 << 1;
  const unsigned E5500_SFX0 = 1 << 2;
  const unsigned E5500_SFX1 = 1 << 3;
  const unsigned E5500_BU = 1 << 4;
  const unsigned E5500_CFX_DivBypass = 1 << 5;
  const unsigned E5500_CFX_0 = 1 << 6;
  const unsigned E5500_CFX_1 = 1 << 7;
  const unsigned E5500_LSU_0 = 1 << 8;
  const unsigned E5500_FPU_0 = 1 << 9;
}

// Pipeline forwarding pathes for itineraries "PPCE5500Itineraries"
namespace PPCE5500ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned E5500_CR_Bypass = 1 << 0;
  const unsigned E5500_GPR_Bypass = 1 << 1;
  const unsigned E5500_FPR_Bypass = 1 << 2;
}

// Functional units for "P8Itineraries"
namespace P8ItinerariesFU {
  const unsigned P8_DU1 = 1 << 0;
  const unsigned P8_DU2 = 1 << 1;
  const unsigned P8_DU3 = 1 << 2;
  const unsigned P8_DU4 = 1 << 3;
  const unsigned P8_DU5 = 1 << 4;
  const unsigned P8_DU6 = 1 << 5;
  const unsigned P8_DU7 = 1 << 6;
  const unsigned P8_DU8 = 1 << 7;
  const unsigned P8_LU1 = 1 << 8;
  const unsigned P8_LU2 = 1 << 9;
  const unsigned P8_LSU1 = 1 << 10;
  const unsigned P8_LSU2 = 1 << 11;
  const unsigned P8_FXU1 = 1 << 12;
  const unsigned P8_FXU2 = 1 << 13;
  const unsigned P8_FPU1 = 1 << 14;
  const unsigned P8_FPU2 = 1 << 15;
  const unsigned P8_CRU = 1 << 16;
  const unsigned P8_BRU = 1 << 17;
}

// Functional units for "P7Itineraries"
namespace P7ItinerariesFU {
  const unsigned P7_DU1 = 1 << 0;
  const unsigned P7_DU2 = 1 << 1;
  const unsigned P7_DU3 = 1 << 2;
  const unsigned P7_DU4 = 1 << 3;
  const unsigned P7_DU5 = 1 << 4;
  const unsigned P7_DU6 = 1 << 5;
  const unsigned P7_LS1 = 1 << 6;
  const unsigned P7_LS2 = 1 << 7;
  const unsigned P7_FX1 = 1 << 8;
  const unsigned P7_FX2 = 1 << 9;
  const unsigned P7_VS1 = 1 << 10;
  const unsigned P7_VS2 = 1 << 11;
  const unsigned P7_CRU = 1 << 12;
  const unsigned P7_BRU = 1 << 13;
}

extern const llvm::InstrStage PPCStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC | PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1 | PPC440ItinerariesFU::P440_JEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2 | PPC440ItinerariesFU::P440_JEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IWB | PPC440ItinerariesFU::P440_JWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1-5
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6-10
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11-15
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16-20
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 33, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 21-25
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26-34
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 25, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35-43
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 13, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44-52
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_JEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_JEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_FEXE3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_LWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_JWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 53-68
  { 1, PPC440ItinerariesFU::P440_DISS1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPC440ItinerariesFU::P440_LWARX_Hold, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 69-75
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76-80
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::P440_AGEN, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::P440_CRD, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81-85
  { 1, G3ItinerariesFU::G3_IU1 | G3ItinerariesFU::G3_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 86
  { 1, G3ItinerariesFU::G3_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87
  { 1, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 3, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 2, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 19, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91
  { 1, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 31, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93
  { 17, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94
  { 2, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 95
  { 2, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 96
  { 34, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 97
  { 3, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98
  { 3, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 99
  { 5, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 100
  { 6, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 101
  { 3, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 102
  { 8, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103
  { 2, G3ItinerariesFU::G3_IU1 | G3ItinerariesFU::G3_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 104
  { 1, G4ItinerariesFU::G4_IU1 | G4ItinerariesFU::G4_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 105
  { 1, G4ItinerariesFU::G4_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 106
  { 4, G4ItinerariesFU::G4_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 107
  { 1, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 108
  { 2, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 109
  { 19, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 110
  { 1, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 111
  { 31, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 112
  { 17, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 113
  { 2, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 114
  { 34, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115
  { 3, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 116
  { 3, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117
  { 3, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 118
  { 8, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 119
  { 5, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 120
  { 6, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 121
  { 3, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 122
  { 5, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 123
  { 8, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 124
  { 2, G4ItinerariesFU::G4_IU1 | G4ItinerariesFU::G4_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125
  { 1, G4ItinerariesFU::G4_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 126
  { 1, G4ItinerariesFU::G4_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127
  { 1, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 128
  { 1, G4PlusItinerariesFU::G4P_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 129
  { 4, G4PlusItinerariesFU::G4P_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 130
  { 2, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 131
  { 3, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 132
  { 23, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133
  { 5, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 134
  { 35, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135
  { 21, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 136
  { 3, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137
  { 0, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 138
  { 4, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 139
  { 37, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140
  { 4, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 141
  { 5, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 142
  { 35, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143
  { 2, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 144
  { 1, G4PlusItinerariesFU::G4P_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145
  { 2, G4PlusItinerariesFU::G4P_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 146
  { 2, G4PlusItinerariesFU::G4P_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 147
  { 2, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 148
  { 1, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 149
  { 8, G5ItinerariesFU::G5_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150
  { 3, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 151
  { 4, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152
  { 3, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 153
  { 68, G5ItinerariesFU::G5_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 154
  { 36, G5ItinerariesFU::G5_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155
  { 6, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 156
  { 8, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157
  { 33, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158
  { 40, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159
  { 40, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160
  { 11, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 161
  { 5, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 162
  { 64, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163
  { 2, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 164
  { 2, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 165
  { 3, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 166
  { 6, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 167
  { 10, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 168
  { 35, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 169
  { 3, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 170
  { 8, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 171
  { 5, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 172
  { 7, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 173
  { 4, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 174
  { 1, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 175
  { 4, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176
  { 1, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 177
  { 2, G5ItinerariesFU::G5_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 178
  { 2, G5ItinerariesFU::G5_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 179
  { 3, G5ItinerariesFU::G5_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 180
  { 1, PPCA2ItinerariesFU::A2_XU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 181
  { 1, PPCA2ItinerariesFU::A2_FU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 182
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 183-184
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 185-186
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 187-188
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 14, PPCE500mcItinerariesFU::E500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 189-191
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 192-193
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 194-195
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 196-197
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 38, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 198-199
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 200-202
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 203-204
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 205-206
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 207-208
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 209-210
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 211-212
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 213-214
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 215-216
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 217-218
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 219-220
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 221-222
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 223-224
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 225-226
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 26, PPCE5500ItinerariesFU::E5500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 227-229
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::E5500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 230-232
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 233-234
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 31, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 235-236
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 237-238
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 239-241
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 242-243
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 244-245
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 246-247
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 248-249
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 250-251
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 252-253
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 254-255
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 256-257
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 258-260
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 261-263
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 264-265
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 266-267
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 268-269
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 270-271
  { 1, P8ItinerariesFU::P8_DU7 | P8ItinerariesFU::P8_DU8, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 272-273
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 274-275
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 276-277
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_CRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 278-279
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 280-281
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 23, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 282-283
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 15, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 284-285
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 286-287
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 288-290
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 291-294
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 295-301
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 302-303
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 304-307
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 308-311
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 312-316
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 317-325
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 326-329
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 330-334
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_CRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 335-336
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 337-339
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 340-341
  { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 342-344
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 345-352
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 353-356
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 357-365
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 366-368
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 369-373
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU2 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 374-375
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2 | P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 376-377
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 378-379
  { 1, P7ItinerariesFU::P7_DU5 | P7ItinerariesFU::P7_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 380-381
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 382-383
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_CRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 384-385
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 386-387
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 388-390
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 36, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 391-393
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 394-395
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 396-398
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 399-402
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 403-409
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 410-414
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 415-418
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 419-423
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 424-431
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 432-434
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_CRU, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 435-440
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 441-442
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 443-449
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 450-452
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 453-457
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 458-459
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 460-461
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned PPCOperandCycles[] = {
  0, // No itinerary
  2,   0,   0, // 1-3
  2,   0,   0, // 4-6
  4,   0, // 7-8
  2,   0,   0, // 9-11
  4,   0,   0, // 12-14
  1,   1, // 15-16
  5,   1,   1, // 17-19
  36,   0,   0, // 20-22
  6,   0,   0, // 23-25
  6,   0,   0, // 26-28
  6,   0,   0, // 29-31
  31,   0,   0, // 32-34
  19,   0,   0, // 35-37
  6,   0,   0,   0, // 38-41
  4,   1,   1, // 42-44
  2,   0,   0,   0, // 45-48
  5,   2,   1,   1, // 49-52
  5,   2,   1,   1, // 53-56
  5,   1,   1, // 57-59
  5,   2,   1,   1, // 60-63
  5,   2,   1,   1, // 64-67
  4,   1,   1, // 68-70
  4,   1,   1, // 71-73
  4,   1,   1, // 74-76
  4,   1,   1, // 77-79
  4,   1,   1, // 80-82
  4,   0,   0, // 83-85
  4,   0, // 86-87
  6,   0, // 88-89
  3,   0,   0, // 90-92
  3,   0, // 93-94
  2,   0, // 95-96
  6,   0, // 97-98
  1,   1,   1, // 99-101
  4,   0,   0, // 102-104
  6,   0, // 105-106
  3,   0,   0, // 107-109
  2,   0, // 110-111
  5,   0, // 112-113
  4,   0,   0, // 114-116
  4,   0,   0, // 117-119
  4,   0,   0, // 120-122
  4,   0, // 123-124
  2,   0,   0, // 125-127
  2,   0,   0, // 128-130
  2,   1,   1,   1, // 131-134
  4,   1,   1, // 135-137
  4,   1,   1, // 138-140
  2,   1,   1,   1, // 141-144
  2,   1,   1,   1, // 145-148
  1,   1,   1, // 149-151
  2,   1,   1,   1, // 152-155
  4,   1,   1, // 156-158
  2,   0, // 159-160
  1,   0,   0, // 161-163
  2,   0,   0, // 164-166
  6,   0,   0, // 167-169
  2,   0,   0, // 170-172
  1,   0,   0, // 173-175
  1,   0,   0, // 176-178
  6,   0,   0, // 179-181
  71,   0,   0, // 182-184
  39,   0,   0, // 185-187
  6,   0,   0, // 188-190
  6,   0,   0, // 191-193
  5,   0,   0, // 194-196
  72,   0,   0, // 197-199
  59,   0,   0, // 200-202
  6,   0,   0,   0, // 203-206
  69,   0,   0, // 207-209
  65,   0,   0, // 210-212
  16,   0,   0, // 213-215
  2,   0,   0,   0, // 216-219
  16, // 220
  6,   8,   0,   0, // 221-224
  6,   8,   0,   0, // 225-228
  6,   0,   0, // 229-231
  6,   0,   0, // 232-234
  7,   0,   0, // 235-237
  7,   9,   0,   0, // 238-241
  7,   9,   0,   0, // 242-245
  6,   0,   0, // 246-248
  6,   8,   0,   0, // 249-252
  6,   8,   0,   0, // 253-256
  82,   0,   0, // 257-259
  5,   0,   0, // 260-262
  6,   0, // 263-264
  6,   0, // 265-266
  4,   0, // 267-268
  1,   0, // 269-270
  4,   0, // 271-272
  0,   0,   0, // 273-275
  6, // 276
  1,   0,   0, // 277-279
  6,   0, // 280-281
  16,   0, // 282-283
  5,   0,   0, // 284-286
  5,   0,   0, // 287-289
  6,   0,   0, // 290-292
  16, // 293
  2,   0,   0, // 294-296
  2,   0,   0, // 297-299
  2,   0,   0, // 300-302
  2,   0,   0, // 303-305
  2,   0,   0,   0, // 306-309
  0,   0,   0, // 310-312
  82,   0,   0, // 313-315
  2,   0,   0,   0, // 316-319
  2,   0,   0,   0, // 320-323
  0,   0,   0, // 324-326
  2,   0,   0,   0, // 327-330
  82,   0,   0, // 331-333
  2,   0, // 334-335
  2,   0, // 336-337
  4,   1,   1, // 338-340
  4,   1,   1, // 341-343
  4,   1, // 344-345
  5,   1,   1, // 346-348
  4,   1,   1, // 349-351
  6,   1, // 352-353
  6,   1, // 354-355
  17,   1,   1, // 356-358
  11,   1,   1, // 359-361
  13,   1,   1, // 362-364
  11,   1,   1, // 365-367
  71,   1,   1, // 368-370
  41,   1,   1, // 371-373
  13,   1,   1,   1, // 374-377
  6,   1, // 378-379
  4,   1,   1,   1, // 380-383
  6,   1, // 384-385
  6,   1, // 386-387
  7,   1,   1, // 388-390
  7,   1,   1, // 391-393
  7,   1,   1, // 394-396
  6,   1, // 397-398
  6,   1, // 399-400
  6,   1, // 401-402
  7,   1, // 403-404
  6,   1,   1, // 405-407
  4,   1, // 408-409
  8,   1, // 410-411
  4,   1, // 412-413
  11, // 414
  7,   1, // 415-416
  8,   1, // 417-418
  7,   1, // 419-420
  7,   1, // 421-422
  6,   1, // 423-424
  4,   1,   1, // 425-427
  4,   1, // 428-429
  11,   1,   1, // 430-432
  5,   1, // 433-434
  5,   1, // 435-436
  7,   1,   1, // 437-439
  7,   1,   1, // 440-442
  7,   1,   1, // 443-445
  4,   1,   1, // 446-448
  4,   1,   1, // 449-451
  6,   1, // 452-453
  6,   1,   1, // 454-456
  6,   1,   1, // 457-459
  6,   1, // 460-461
  5,   1, // 462-463
  5,   2,   2, // 464-466
  5,   2,   2, // 467-469
  5,   2, // 470-471
  6,   2,   2, // 472-474
  5,   2,   2, // 475-477
  7,   2, // 478-479
  7,   2, // 480-481
  30,   2,   2, // 482-484
  20,   2,   2, // 485-487
  11,   2,   2, // 488-490
  11,   2,   2, // 491-493
  11,   2,   2, // 494-496
  39,   2,   2, // 497-499
  24,   2,   2, // 500-502
  11,   2,   2,   2, // 503-506
  7,   2, // 507-508
  5,   2,   2,   2, // 509-512
  7,   2, // 513-514
  7,   2, // 515-516
  7,   2, // 517-518
  7,   2, // 519-520
  7,   2, // 521-522
  7,   2, // 523-524
  8,   2,   2, // 525-527
  8,   2,   2, // 528-530
  8,   2,   2, // 531-533
  7,   2, // 534-535
  7,   2, // 536-537
  7,   2, // 538-539
  8,   2, // 540-541
  7,   2,   2, // 542-544
  5,   2, // 545-546
  9,   2, // 547-548
  5, // 549
  11, // 550
  8,   2, // 551-552
  9,   2, // 553-554
  8,   2, // 555-556
  7,   2, // 557-558
  5,   2,   2, // 559-561
  5, // 562
  11,   2,   2, // 563-565
  6,   2, // 566-567
  8,   2,   2, // 568-570
  8,   2,   2, // 571-573
  9,   2,   2, // 574-576
  8,   2,   2, // 577-579
  6,   2,   2, // 580-582
  5,   2,   2, // 583-585
  5,   2,   2, // 586-588
  6,   2,   2, // 589-591
  7,   2, // 592-593
  7,   2, // 594-595
  7,   2, // 596-597
  7,   2, // 598-599
  7,   2, // 600-601
  7,   2,   2, // 602-604
  7,   2,   2, // 605-607
  7,   2, // 608-609
  6,   2, // 610-611
  1,   1,   1, // 612-614
  1,   1,   1, // 615-617
  3,   1,   1, // 618-620
  6,   1,   1, // 621-623
  1,   1,   1, // 624-626
  3,   1,   1, // 627-629
  2,   1,   1, // 630-632
  23,   1,   1, // 633-635
  15,   1,   1, // 636-638
  5,   1,   1, // 639-641
  8,   1,   1, // 642-644
  33,   1,   1, // 645-647
  27,   1,   1, // 648-650
  5,   1,   1,   1, // 651-654
  44,   1,   1, // 655-657
  32,   1,   1, // 658-660
  1,   1,   1,   1, // 661-664
  2,   2,   1,   1, // 665-668
  3,   3,   1,   1, // 669-672
  2,   1,   1, // 673-675
  3,   1,   1, // 676-678
  2,   2,   1,   1, // 679-682
  3,   3,   1,   1, // 683-686
  3,   1,   1, // 687-689
  3,   3,   1,   1, // 690-693
  3,   3,   1,   1, // 694-697
  3,   1,   1, // 698-700
  4,   4,   1,   1, // 701-704
  4,   4,   1,   1, // 705-708
  2,   1,   1, // 709-711
  3,   1,   1, // 712-714
  3,   1,   1, // 715-717
  3,   1,   1, // 718-720
  6,   1, // 721-722
  3,   1, // 723-724
  1,   1,   1, // 725-727
  3,   1, // 728-729
  4,   1, // 730-731
  4,   1,   1, // 732-734
  4,   1,   1, // 735-737
  4,   1,   1, // 738-740
  1,   1,   1, // 741-743
  1,   1,   1, // 744-746
  1,   1,   1, // 747-749
  1,   1,   1, // 750-752
  2,   1,   1,   1, // 753-756
  2,   1,   1,   1, // 757-760
  1,   1,   1, // 761-763
  2,   1,   1,   1, // 764-767
  1,   1,   1, // 768-770
  1,   1, // 771-772
  1,   1, // 773-774
  2,   1,   1, // 775-777
  6,   1,   1, // 778-780
  3,   1,   1, // 781-783
  1,   1,   1, // 784-786
  1,   1,   1, // 787-789
  3,   1,   1, // 790-792
  6,   1,   1, // 793-795
  1,   1,   1, // 796-798
  3,   1,   1, // 799-801
  2,   1,   1, // 802-804
  68,   1,   1, // 805-807
  36,   1,   1, // 808-810
  5,   1,   1, // 811-813
  8,   1,   1, // 814-816
  33,   1,   1, // 817-819
  27,   1,   1, // 820-822
  5,   1,   1,   1, // 823-826
  44,   1,   1, // 827-829
  32,   1,   1, // 830-832
  1,   1,   1,   1, // 833-836
  2,   2,   1,   1, // 837-840
  3,   3,   1,   1, // 841-844
  2,   1,   1, // 845-847
  3,   1,   1, // 848-850
  2,   2,   1,   1, // 851-854
  3,   3,   1,   1, // 855-858
  3,   1,   1, // 859-861
  3,   3,   1,   1, // 862-865
  3,   3,   1,   1, // 866-869
  3,   1,   1, // 870-872
  4,   4,   1,   1, // 873-876
  4,   4,   1,   1, // 877-880
  2,   1,   1, // 881-883
  3,   1,   1, // 884-886
  3,   1,   1, // 887-889
  3,   1,   1, // 890-892
  6,   1, // 893-894
  3,   1, // 895-896
  1,   1,   1, // 897-899
  3,   1, // 900-901
  4,   1, // 902-903
  4,   1,   1, // 904-906
  4,   1,   1, // 907-909
  4,   1,   1, // 910-912
  1,   1,   1, // 913-915
  1,   1,   1, // 916-918
  1,   1,   1, // 919-921
  1,   1,   1, // 922-924
  1,   1,   1, // 925-927
  2,   1,   1,   1, // 928-931
  2,   1,   1,   1, // 932-935
  1,   1,   1, // 936-938
  2,   1,   1,   1, // 939-942
  1,   1,   1, // 943-945
  1,   1, // 946-947
  1,   1, // 948-949
  2,   1,   1, // 950-952
  6,   1,   1, // 953-955
  3,   1,   1, // 956-958
  0 // End operand cycles
};
extern const unsigned PPCForwardingPaths[] = {
 0, // No itinerary
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 1-3
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 4-6
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 7-8
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 9-11
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 12-14
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 15-16
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 17-19
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 20-22
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 23-25
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 26-28
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 29-31
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 32-34
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 35-37
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 38-41
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 42-44
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::NoBypass, // 45-48
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 49-52
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 53-56
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 57-59
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 60-63
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 64-67
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 68-70
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 71-73
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 74-76
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 77-79
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 80-82
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 83-85
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 86-87
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 88-89
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 90-92
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 93-94
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 95-96
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 97-98
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 99-101
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 102-104
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 105-106
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 107-109
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 110-111
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 112-113
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 114-116
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 117-119
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 120-122
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 123-124
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 125-127
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 128-130
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 131-134
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 135-137
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 138-140
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 141-144
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 145-148
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 149-151
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 152-155
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 156-158
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 159-160
 0,  0,  0, // 161-163
 0,  0,  0, // 164-166
 0,  0,  0, // 167-169
 0,  0,  0, // 170-172
 0,  0,  0, // 173-175
 0,  0,  0, // 176-178
 0,  0,  0, // 179-181
 0,  0,  0, // 182-184
 0,  0,  0, // 185-187
 0,  0,  0, // 188-190
 0,  0,  0, // 191-193
 0,  0,  0, // 194-196
 0,  0,  0, // 197-199
 0,  0,  0, // 200-202
 0,  0,  0,  0, // 203-206
 0,  0,  0, // 207-209
 0,  0,  0, // 210-212
 0,  0,  0, // 213-215
 0,  0,  0,  0, // 216-219
 0, // 220
 0,  0,  0,  0, // 221-224
 0,  0,  0,  0, // 225-228
 0,  0,  0, // 229-231
 0,  0,  0, // 232-234
 0,  0,  0, // 235-237
 0,  0,  0,  0, // 238-241
 0,  0,  0,  0, // 242-245
 0,  0,  0, // 246-248
 0,  0,  0,  0, // 249-252
 0,  0,  0,  0, // 253-256
 0,  0,  0, // 257-259
 0,  0,  0, // 260-262
 0,  0, // 263-264
 0,  0, // 265-266
 0,  0, // 267-268
 0,  0, // 269-270
 0,  0, // 271-272
 0,  0,  0, // 273-275
 0, // 276
 0,  0,  0, // 277-279
 0,  0, // 280-281
 0,  0, // 282-283
 0,  0,  0, // 284-286
 0,  0,  0, // 287-289
 0,  0,  0, // 290-292
 0, // 293
 0,  0,  0, // 294-296
 0,  0,  0, // 297-299
 0,  0,  0, // 300-302
 0,  0,  0, // 303-305
 0,  0,  0,  0, // 306-309
 0,  0,  0, // 310-312
 0,  0,  0, // 313-315
 0,  0,  0,  0, // 316-319
 0,  0,  0,  0, // 320-323
 0,  0,  0, // 324-326
 0,  0,  0,  0, // 327-330
 0,  0,  0, // 331-333
 0,  0, // 334-335
 0,  0, // 336-337
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 338-340
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 341-343
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 344-345
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 346-348
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 349-351
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 352-353
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 354-355
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 356-358
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 359-361
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 362-364
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 365-367
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 368-370
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 371-373
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 374-377
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 378-379
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 380-383
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 384-385
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 386-387
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 388-390
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 391-393
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 394-396
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 397-398
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 399-400
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 401-402
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 403-404
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 405-407
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 408-409
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 410-411
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 412-413
PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 414
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 415-416
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 417-418
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 419-420
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 421-422
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 423-424
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass,  0, // 425-427
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 428-429
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, // 430-432
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 433-434
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 435-436
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 437-439
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 440-442
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 443-445
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 446-448
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 449-451
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 452-453
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 454-456
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 457-459
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 460-461
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 462-463
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 464-466
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 467-469
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 470-471
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 472-474
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 475-477
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 478-479
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 480-481
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 482-484
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 485-487
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 488-490
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 491-493
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 494-496
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 497-499
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 500-502
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 503-506
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 507-508
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 509-512
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 513-514
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 515-516
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 517-518
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 519-520
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 521-522
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 523-524
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 525-527
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 528-530
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 531-533
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 534-535
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 536-537
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 538-539
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 540-541
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 542-544
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 545-546
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 547-548
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 549
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 550
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 551-552
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 553-554
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 555-556
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 557-558
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass,  0, // 559-561
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 562
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, // 563-565
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 566-567
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 568-570
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 571-573
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 574-576
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 577-579
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 580-582
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 583-585
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 586-588
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 589-591
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 592-593
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 594-595
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 596-597
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 598-599
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 600-601
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 602-604
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 605-607
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 608-609
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 610-611
 0,  0,  0, // 612-614
 0,  0,  0, // 615-617
 0,  0,  0, // 618-620
 0,  0,  0, // 621-623
 0,  0,  0, // 624-626
 0,  0,  0, // 627-629
 0,  0,  0, // 630-632
 0,  0,  0, // 633-635
 0,  0,  0, // 636-638
 0,  0,  0, // 639-641
 0,  0,  0, // 642-644
 0,  0,  0, // 645-647
 0,  0,  0, // 648-650
 0,  0,  0,  0, // 651-654
 0,  0,  0, // 655-657
 0,  0,  0, // 658-660
 0,  0,  0,  0, // 661-664
 0,  0,  0,  0, // 665-668
 0,  0,  0,  0, // 669-672
 0,  0,  0, // 673-675
 0,  0,  0, // 676-678
 0,  0,  0,  0, // 679-682
 0,  0,  0,  0, // 683-686
 0,  0,  0, // 687-689
 0,  0,  0,  0, // 690-693
 0,  0,  0,  0, // 694-697
 0,  0,  0, // 698-700
 0,  0,  0,  0, // 701-704
 0,  0,  0,  0, // 705-708
 0,  0,  0, // 709-711
 0,  0,  0, // 712-714
 0,  0,  0, // 715-717
 0,  0,  0, // 718-720
 0,  0, // 721-722
 0,  0, // 723-724
 0,  0,  0, // 725-727
 0,  0, // 728-729
 0,  0, // 730-731
 0,  0,  0, // 732-734
 0,  0,  0, // 735-737
 0,  0,  0, // 738-740
 0,  0,  0, // 741-743
 0,  0,  0, // 744-746
 0,  0,  0, // 747-749
 0,  0,  0, // 750-752
 0,  0,  0,  0, // 753-756
 0,  0,  0,  0, // 757-760
 0,  0,  0, // 761-763
 0,  0,  0,  0, // 764-767
 0,  0,  0, // 768-770
 0,  0, // 771-772
 0,  0, // 773-774
 0,  0,  0, // 775-777
 0,  0,  0, // 778-780
 0,  0,  0, // 781-783
 0,  0,  0, // 784-786
 0,  0,  0, // 787-789
 0,  0,  0, // 790-792
 0,  0,  0, // 793-795
 0,  0,  0, // 796-798
 0,  0,  0, // 799-801
 0,  0,  0, // 802-804
 0,  0,  0, // 805-807
 0,  0,  0, // 808-810
 0,  0,  0, // 811-813
 0,  0,  0, // 814-816
 0,  0,  0, // 817-819
 0,  0,  0, // 820-822
 0,  0,  0,  0, // 823-826
 0,  0,  0, // 827-829
 0,  0,  0, // 830-832
 0,  0,  0,  0, // 833-836
 0,  0,  0,  0, // 837-840
 0,  0,  0,  0, // 841-844
 0,  0,  0, // 845-847
 0,  0,  0, // 848-850
 0,  0,  0,  0, // 851-854
 0,  0,  0,  0, // 855-858
 0,  0,  0, // 859-861
 0,  0,  0,  0, // 862-865
 0,  0,  0,  0, // 866-869
 0,  0,  0, // 870-872
 0,  0,  0,  0, // 873-876
 0,  0,  0,  0, // 877-880
 0,  0,  0, // 881-883
 0,  0,  0, // 884-886
 0,  0,  0, // 887-889
 0,  0,  0, // 890-892
 0,  0, // 893-894
 0,  0, // 895-896
 0,  0,  0, // 897-899
 0,  0, // 900-901
 0,  0, // 902-903
 0,  0,  0, // 904-906
 0,  0,  0, // 907-909
 0,  0,  0, // 910-912
 0,  0,  0, // 913-915
 0,  0,  0, // 916-918
 0,  0,  0, // 919-921
 0,  0,  0, // 922-924
 0,  0,  0, // 925-927
 0,  0,  0,  0, // 928-931
 0,  0,  0,  0, // 932-935
 0,  0,  0, // 936-938
 0,  0,  0,  0, // 939-942
 0,  0,  0, // 943-945
 0,  0, // 946-947
 0,  0, // 948-949
 0,  0,  0, // 950-952
 0,  0,  0, // 953-955
 0,  0,  0, // 956-958
 0 // End bypass tables
};

static const llvm::InstrItinerary PPC440Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 6, 1, 4 }, // 1 IIC_IntSimple
  { 1, 1, 6, 4, 7 }, // 2 IIC_IntGeneral
  { 1, 6, 11, 7, 9 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 1, 6, 9, 12 }, // 5 IIC_IntCompare
  { 1, 6, 11, 12, 15 }, // 6 IIC_BrCR
  { 1, 11, 16, 15, 17 }, // 7 IIC_LdStDCBF
  { 1, 16, 21, 17, 20 }, // 8 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 9 IIC_IntDivD
  { 1, 21, 26, 20, 23 }, // 10 IIC_IntDivW
  { 1, 26, 35, 23, 26 }, // 11 IIC_FPGeneral
  { 1, 26, 35, 26, 29 }, // 12 IIC_FPAddSub
  { 1, 26, 35, 29, 32 }, // 13 IIC_FPCompare
  { 1, 35, 44, 32, 35 }, // 14 IIC_FPDivD
  { 1, 44, 53, 35, 38 }, // 15 IIC_FPDivS
  { 1, 26, 35, 38, 42 }, // 16 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 18 IIC_FPSqrtS
  { 1, 11, 16, 42, 45 }, // 19 IIC_LdStICBI
  { 1, 1, 6, 45, 49 }, // 20 IIC_IntISEL
  { 1, 53, 69, 0, 0 }, // 21 IIC_SprISYNC
  { 1, 16, 21, 49, 53 }, // 22 IIC_LdStLoadUpd
  { 1, 16, 21, 53, 57 }, // 23 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 26 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 27 IIC_LdStLDUX
  { 1, 16, 21, 57, 60 }, // 28 IIC_LdStLFD
  { 1, 11, 16, 60, 64 }, // 29 IIC_LdStLFDU
  { 1, 11, 16, 64, 68 }, // 30 IIC_LdStLFDUX
  { 1, 11, 16, 68, 71 }, // 31 IIC_LdStLHA
  { 1, 11, 16, 71, 74 }, // 32 IIC_LdStLHAU
  { 1, 11, 16, 74, 77 }, // 33 IIC_LdStLHAUX
  { 1, 11, 16, 77, 80 }, // 34 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 35 IIC_LdStLWA
  { 1, 69, 76, 80, 83 }, // 36 IIC_LdStLWARX
  { 1, 6, 11, 83, 86 }, // 37 IIC_BrMCR
  { 1, 6, 11, 86, 88 }, // 38 IIC_SprMFCR
  { 1, 76, 81, 88, 90 }, // 39 IIC_SprMFSPR
  { 1, 6, 11, 90, 93 }, // 40 IIC_IntMFFS
  { 1, 6, 11, 93, 95 }, // 41 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 42 IIC_SprMFCRF
  { 1, 6, 11, 95, 97 }, // 43 IIC_SprMFSR
  { 1, 76, 81, 97, 99 }, // 44 IIC_SprMFTB
  { 1, 16, 21, 99, 102 }, // 45 IIC_LdStStore
  { 1, 81, 86, 0, 0 }, // 46 IIC_LdStSync
  { 1, 6, 11, 102, 105 }, // 47 IIC_BrMCRX
  { 1, 76, 81, 105, 107 }, // 48 IIC_SprMTSPR
  { 1, 6, 11, 107, 110 }, // 49 IIC_IntMTFSB0
  { 1, 6, 11, 110, 112 }, // 50 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMTMSRD
  { 1, 76, 81, 112, 114 }, // 52 IIC_SprMTSR
  { 1, 6, 11, 114, 117 }, // 53 IIC_IntMulHW
  { 1, 6, 11, 117, 120 }, // 54 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 55 IIC_IntMulHD
  { 1, 6, 11, 120, 123 }, // 56 IIC_IntMulLI
  { 1, 6, 11, 123, 125 }, // 57 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 58 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 59 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 60 IIC_IntRotateDI
  { 1, 1, 6, 125, 128 }, // 61 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 65 IIC_SprSLBMTE
  { 1, 1, 6, 128, 131 }, // 66 IIC_IntShift
  { 1, 16, 21, 131, 135 }, // 67 IIC_LdStStoreUpd
  { 1, 16, 21, 135, 138 }, // 68 IIC_LdStSTD
  { 1, 69, 76, 138, 141 }, // 69 IIC_LdStSTDCX
  { 1, 16, 21, 141, 145 }, // 70 IIC_LdStSTDU
  { 1, 16, 21, 145, 149 }, // 71 IIC_LdStSTDUX
  { 1, 11, 16, 149, 152 }, // 72 IIC_LdStSTFD
  { 1, 11, 16, 152, 156 }, // 73 IIC_LdStSTFDU
  { 1, 69, 76, 156, 159 }, // 74 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 75 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprTLBIEL
  { 1, 6, 11, 0, 0 }, // 79 IIC_SprTLBSYNC
  { 1, 6, 11, 159, 161 }, // 80 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 81 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 82 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 83 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G3Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 86, 87, 0, 0 }, // 1 IIC_IntSimple
  { 1, 86, 87, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 87, 88, 0, 0 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 86, 87, 0, 0 }, // 5 IIC_IntCompare
  { 1, 88, 89, 0, 0 }, // 6 IIC_BrCR
  { 1, 89, 90, 0, 0 }, // 7 IIC_LdStDCBF
  { 1, 90, 91, 0, 0 }, // 8 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 9 IIC_IntDivD
  { 1, 91, 92, 0, 0 }, // 10 IIC_IntDivW
  { 1, 92, 93, 0, 0 }, // 11 IIC_FPGeneral
  { 1, 92, 93, 0, 0 }, // 12 IIC_FPAddSub
  { 1, 92, 93, 0, 0 }, // 13 IIC_FPCompare
  { 1, 93, 94, 0, 0 }, // 14 IIC_FPDivD
  { 1, 94, 95, 0, 0 }, // 15 IIC_FPDivS
  { 1, 95, 96, 0, 0 }, // 16 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 18 IIC_FPSqrtS
  { 1, 89, 90, 0, 0 }, // 19 IIC_LdStICBI
  { 0, 0, 0, 0, 0 }, // 20 IIC_IntISEL
  { 1, 96, 97, 0, 0 }, // 21 IIC_SprISYNC
  { 1, 90, 91, 0, 0 }, // 22 IIC_LdStLoadUpd
  { 1, 90, 91, 0, 0 }, // 23 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 26 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 27 IIC_LdStLDUX
  { 1, 90, 91, 0, 0 }, // 28 IIC_LdStLFD
  { 1, 90, 91, 0, 0 }, // 29 IIC_LdStLFDU
  { 1, 90, 91, 0, 0 }, // 30 IIC_LdStLFDUX
  { 1, 90, 91, 0, 0 }, // 31 IIC_LdStLHA
  { 1, 90, 91, 0, 0 }, // 32 IIC_LdStLHAU
  { 1, 90, 91, 0, 0 }, // 33 IIC_LdStLHAUX
  { 1, 97, 98, 0, 0 }, // 34 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 35 IIC_LdStLWA
  { 1, 89, 90, 0, 0 }, // 36 IIC_LdStLWARX
  { 1, 88, 89, 0, 0 }, // 37 IIC_BrMCR
  { 1, 88, 89, 0, 0 }, // 38 IIC_SprMFCR
  { 1, 98, 99, 0, 0 }, // 39 IIC_SprMFSPR
  { 1, 92, 93, 0, 0 }, // 40 IIC_IntMFFS
  { 1, 88, 89, 0, 0 }, // 41 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 42 IIC_SprMFCRF
  { 1, 98, 99, 0, 0 }, // 43 IIC_SprMFSR
  { 1, 98, 99, 0, 0 }, // 44 IIC_SprMFTB
  { 1, 90, 91, 0, 0 }, // 45 IIC_LdStStore
  { 1, 89, 90, 0, 0 }, // 46 IIC_LdStSync
  { 1, 88, 89, 0, 0 }, // 47 IIC_BrMCRX
  { 1, 96, 97, 0, 0 }, // 48 IIC_SprMTSPR
  { 1, 99, 100, 0, 0 }, // 49 IIC_IntMTFSB0
  { 1, 88, 89, 0, 0 }, // 50 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMTMSRD
  { 1, 96, 97, 0, 0 }, // 52 IIC_SprMTSR
  { 1, 100, 101, 0, 0 }, // 53 IIC_IntMulHW
  { 1, 101, 102, 0, 0 }, // 54 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 55 IIC_IntMulHD
  { 1, 102, 103, 0, 0 }, // 56 IIC_IntMulLI
  { 1, 96, 97, 0, 0 }, // 57 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 58 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 59 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 60 IIC_IntRotateDI
  { 1, 86, 87, 0, 0 }, // 61 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 65 IIC_SprSLBMTE
  { 1, 86, 87, 0, 0 }, // 66 IIC_IntShift
  { 1, 90, 91, 0, 0 }, // 67 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 68 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 69 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 70 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 71 IIC_LdStSTDUX
  { 1, 90, 91, 0, 0 }, // 72 IIC_LdStSTFD
  { 1, 90, 91, 0, 0 }, // 73 IIC_LdStSTFDU
  { 1, 103, 104, 0, 0 }, // 74 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 75 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprTLBIEL
  { 1, 98, 99, 0, 0 }, // 79 IIC_SprTLBSYNC
  { 1, 104, 105, 0, 0 }, // 80 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 81 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 82 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 83 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 105, 106, 0, 0 }, // 1 IIC_IntSimple
  { 1, 105, 106, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 106, 107, 0, 0 }, // 3 IIC_BrB
  { 1, 107, 108, 0, 0 }, // 4 IIC_VecFP
  { 1, 105, 106, 0, 0 }, // 5 IIC_IntCompare
  { 1, 108, 109, 0, 0 }, // 6 IIC_BrCR
  { 1, 109, 110, 0, 0 }, // 7 IIC_LdStDCBF
  { 1, 109, 110, 0, 0 }, // 8 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 9 IIC_IntDivD
  { 1, 110, 111, 0, 0 }, // 10 IIC_IntDivW
  { 1, 111, 112, 0, 0 }, // 11 IIC_FPGeneral
  { 1, 111, 112, 0, 0 }, // 12 IIC_FPAddSub
  { 1, 111, 112, 0, 0 }, // 13 IIC_FPCompare
  { 1, 112, 113, 0, 0 }, // 14 IIC_FPDivD
  { 1, 113, 114, 0, 0 }, // 15 IIC_FPDivS
  { 1, 111, 112, 0, 0 }, // 16 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 18 IIC_FPSqrtS
  { 1, 109, 110, 0, 0 }, // 19 IIC_LdStICBI
  { 0, 0, 0, 0, 0 }, // 20 IIC_IntISEL
  { 1, 114, 115, 0, 0 }, // 21 IIC_SprISYNC
  { 1, 109, 110, 0, 0 }, // 22 IIC_LdStLoadUpd
  { 1, 109, 110, 0, 0 }, // 23 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 26 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 27 IIC_LdStLDUX
  { 1, 109, 110, 0, 0 }, // 28 IIC_LdStLFD
  { 1, 109, 110, 0, 0 }, // 29 IIC_LdStLFDU
  { 1, 109, 110, 0, 0 }, // 30 IIC_LdStLFDUX
  { 1, 109, 110, 0, 0 }, // 31 IIC_LdStLHA
  { 1, 109, 110, 0, 0 }, // 32 IIC_LdStLHAU
  { 1, 109, 110, 0, 0 }, // 33 IIC_LdStLHAUX
  { 1, 115, 116, 0, 0 }, // 34 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 35 IIC_LdStLWA
  { 1, 116, 117, 0, 0 }, // 36 IIC_LdStLWARX
  { 1, 108, 109, 0, 0 }, // 37 IIC_BrMCR
  { 1, 108, 109, 0, 0 }, // 38 IIC_SprMFCR
  { 1, 117, 118, 0, 0 }, // 39 IIC_SprMFSPR
  { 1, 118, 119, 0, 0 }, // 40 IIC_IntMFFS
  { 1, 108, 109, 0, 0 }, // 41 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 42 IIC_SprMFCRF
  { 1, 117, 118, 0, 0 }, // 43 IIC_SprMFSR
  { 1, 108, 109, 0, 0 }, // 44 IIC_SprMFTB
  { 1, 109, 110, 0, 0 }, // 45 IIC_LdStStore
  { 1, 119, 120, 0, 0 }, // 46 IIC_LdStSync
  { 1, 108, 109, 0, 0 }, // 47 IIC_BrMCRX
  { 1, 114, 115, 0, 0 }, // 48 IIC_SprMTSPR
  { 1, 118, 119, 0, 0 }, // 49 IIC_IntMTFSB0
  { 1, 108, 109, 0, 0 }, // 50 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMTMSRD
  { 1, 114, 115, 0, 0 }, // 52 IIC_SprMTSR
  { 1, 120, 121, 0, 0 }, // 53 IIC_IntMulHW
  { 1, 121, 122, 0, 0 }, // 54 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 55 IIC_IntMulHD
  { 1, 122, 123, 0, 0 }, // 56 IIC_IntMulLI
  { 1, 114, 115, 0, 0 }, // 57 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 58 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 59 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 60 IIC_IntRotateDI
  { 1, 105, 106, 0, 0 }, // 61 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 65 IIC_SprSLBMTE
  { 1, 105, 106, 0, 0 }, // 66 IIC_IntShift
  { 1, 109, 110, 0, 0 }, // 67 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 68 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 69 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 70 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 71 IIC_LdStSTDUX
  { 1, 109, 110, 0, 0 }, // 72 IIC_LdStSTFD
  { 1, 109, 110, 0, 0 }, // 73 IIC_LdStSTFDU
  { 1, 123, 124, 0, 0 }, // 74 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 75 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprTLBIEL
  { 1, 124, 125, 0, 0 }, // 79 IIC_SprTLBSYNC
  { 1, 125, 126, 0, 0 }, // 80 IIC_IntTrapW
  { 1, 126, 127, 0, 0 }, // 81 IIC_VecGeneral
  { 1, 126, 127, 0, 0 }, // 82 IIC_VecFPCompare
  { 1, 127, 128, 0, 0 }, // 83 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4PlusItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 128, 129, 0, 0 }, // 1 IIC_IntSimple
  { 1, 128, 129, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 129, 130, 0, 0 }, // 3 IIC_BrB
  { 1, 130, 131, 0, 0 }, // 4 IIC_VecFP
  { 1, 128, 129, 0, 0 }, // 5 IIC_IntCompare
  { 1, 131, 132, 0, 0 }, // 6 IIC_BrCR
  { 1, 132, 133, 0, 0 }, // 7 IIC_LdStDCBF
  { 1, 132, 133, 0, 0 }, // 8 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 9 IIC_IntDivD
  { 1, 133, 134, 0, 0 }, // 10 IIC_IntDivW
  { 1, 134, 135, 0, 0 }, // 11 IIC_FPGeneral
  { 1, 134, 135, 0, 0 }, // 12 IIC_FPAddSub
  { 1, 134, 135, 0, 0 }, // 13 IIC_FPCompare
  { 1, 135, 136, 0, 0 }, // 14 IIC_FPDivD
  { 1, 136, 137, 0, 0 }, // 15 IIC_FPDivS
  { 1, 134, 135, 0, 0 }, // 16 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 18 IIC_FPSqrtS
  { 1, 137, 138, 0, 0 }, // 19 IIC_LdStICBI
  { 0, 0, 0, 0, 0 }, // 20 IIC_IntISEL
  { 1, 138, 139, 0, 0 }, // 21 IIC_SprISYNC
  { 1, 132, 133, 0, 0 }, // 22 IIC_LdStLoadUpd
  { 1, 132, 133, 0, 0 }, // 23 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 26 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 27 IIC_LdStLDUX
  { 1, 139, 140, 0, 0 }, // 28 IIC_LdStLFD
  { 1, 139, 140, 0, 0 }, // 29 IIC_LdStLFDU
  { 1, 139, 140, 0, 0 }, // 30 IIC_LdStLFDUX
  { 1, 132, 133, 0, 0 }, // 31 IIC_LdStLHA
  { 1, 132, 133, 0, 0 }, // 32 IIC_LdStLHAU
  { 1, 132, 133, 0, 0 }, // 33 IIC_LdStLHAUX
  { 1, 140, 141, 0, 0 }, // 34 IIC_LdStLMW
  { 1, 132, 133, 0, 0 }, // 35 IIC_LdStLWA
  { 1, 132, 133, 0, 0 }, // 36 IIC_LdStLWARX
  { 1, 131, 132, 0, 0 }, // 37 IIC_BrMCR
  { 1, 131, 132, 0, 0 }, // 38 IIC_SprMFCR
  { 1, 141, 142, 0, 0 }, // 39 IIC_SprMFSPR
  { 1, 134, 135, 0, 0 }, // 40 IIC_IntMFFS
  { 1, 137, 138, 0, 0 }, // 41 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 42 IIC_SprMFCRF
  { 1, 141, 142, 0, 0 }, // 43 IIC_SprMFSR
  { 1, 142, 143, 0, 0 }, // 44 IIC_SprMFTB
  { 1, 132, 133, 0, 0 }, // 45 IIC_LdStStore
  { 1, 143, 144, 0, 0 }, // 46 IIC_LdStSync
  { 1, 131, 132, 0, 0 }, // 47 IIC_BrMCRX
  { 1, 131, 132, 0, 0 }, // 48 IIC_SprMTSPR
  { 1, 134, 135, 0, 0 }, // 49 IIC_IntMTFSB0
  { 1, 131, 132, 0, 0 }, // 50 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMTMSRD
  { 1, 131, 132, 0, 0 }, // 52 IIC_SprMTSR
  { 1, 141, 142, 0, 0 }, // 53 IIC_IntMulHW
  { 1, 141, 142, 0, 0 }, // 54 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 55 IIC_IntMulHD
  { 1, 137, 138, 0, 0 }, // 56 IIC_IntMulLI
  { 1, 128, 129, 0, 0 }, // 57 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 58 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 59 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 60 IIC_IntRotateDI
  { 1, 128, 129, 0, 0 }, // 61 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 65 IIC_SprSLBMTE
  { 1, 144, 145, 0, 0 }, // 66 IIC_IntShift
  { 1, 132, 133, 0, 0 }, // 67 IIC_LdStStoreUpd
  { 1, 132, 133, 0, 0 }, // 68 IIC_LdStSTD
  { 1, 132, 133, 0, 0 }, // 69 IIC_LdStSTDCX
  { 1, 132, 133, 0, 0 }, // 70 IIC_LdStSTDU
  { 1, 132, 133, 0, 0 }, // 71 IIC_LdStSTDUX
  { 1, 132, 133, 0, 0 }, // 72 IIC_LdStSTFD
  { 1, 132, 133, 0, 0 }, // 73 IIC_LdStSTFDU
  { 1, 132, 133, 0, 0 }, // 74 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 75 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprTLBIEL
  { 1, 132, 133, 0, 0 }, // 79 IIC_SprTLBSYNC
  { 1, 144, 145, 0, 0 }, // 80 IIC_IntTrapW
  { 1, 145, 146, 0, 0 }, // 81 IIC_VecGeneral
  { 1, 146, 147, 0, 0 }, // 82 IIC_VecFPCompare
  { 1, 147, 148, 0, 0 }, // 83 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G5Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 148, 149, 0, 0 }, // 1 IIC_IntSimple
  { 1, 148, 149, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 149, 150, 0, 0 }, // 3 IIC_BrB
  { 1, 150, 151, 0, 0 }, // 4 IIC_VecFP
  { 1, 151, 152, 0, 0 }, // 5 IIC_IntCompare
  { 1, 152, 153, 0, 0 }, // 6 IIC_BrCR
  { 1, 153, 154, 0, 0 }, // 7 IIC_LdStDCBF
  { 1, 153, 154, 0, 0 }, // 8 IIC_LdStLoad
  { 1, 154, 155, 0, 0 }, // 9 IIC_IntDivD
  { 1, 155, 156, 0, 0 }, // 10 IIC_IntDivW
  { 1, 156, 157, 0, 0 }, // 11 IIC_FPGeneral
  { 1, 156, 157, 0, 0 }, // 12 IIC_FPAddSub
  { 1, 157, 158, 0, 0 }, // 13 IIC_FPCompare
  { 1, 158, 159, 0, 0 }, // 14 IIC_FPDivD
  { 1, 158, 159, 0, 0 }, // 15 IIC_FPDivS
  { 1, 156, 157, 0, 0 }, // 16 IIC_FPFused
  { 1, 159, 160, 0, 0 }, // 17 IIC_FPSqrtD
  { 1, 159, 160, 0, 0 }, // 18 IIC_FPSqrtS
  { 1, 160, 161, 0, 0 }, // 19 IIC_LdStICBI
  { 0, 0, 0, 0, 0 }, // 20 IIC_IntISEL
  { 1, 160, 161, 0, 0 }, // 21 IIC_SprISYNC
  { 1, 153, 154, 0, 0 }, // 22 IIC_LdStLoadUpd
  { 1, 153, 154, 0, 0 }, // 23 IIC_LdStLoadUpdX
  { 1, 153, 154, 0, 0 }, // 24 IIC_LdStLD
  { 1, 161, 162, 0, 0 }, // 25 IIC_LdStLDARX
  { 1, 153, 154, 0, 0 }, // 26 IIC_LdStLDU
  { 1, 153, 154, 0, 0 }, // 27 IIC_LdStLDUX
  { 1, 153, 154, 0, 0 }, // 28 IIC_LdStLFD
  { 1, 162, 163, 0, 0 }, // 29 IIC_LdStLFDU
  { 1, 162, 163, 0, 0 }, // 30 IIC_LdStLFDUX
  { 1, 162, 163, 0, 0 }, // 31 IIC_LdStLHA
  { 1, 162, 163, 0, 0 }, // 32 IIC_LdStLHAU
  { 1, 162, 163, 0, 0 }, // 33 IIC_LdStLHAUX
  { 1, 163, 164, 0, 0 }, // 34 IIC_LdStLMW
  { 1, 162, 163, 0, 0 }, // 35 IIC_LdStLWA
  { 1, 161, 162, 0, 0 }, // 36 IIC_LdStLWARX
  { 1, 164, 165, 0, 0 }, // 37 IIC_BrMCR
  { 1, 165, 166, 0, 0 }, // 38 IIC_SprMFCR
  { 1, 166, 167, 0, 0 }, // 39 IIC_SprMFSPR
  { 1, 167, 168, 0, 0 }, // 40 IIC_IntMFFS
  { 1, 166, 167, 0, 0 }, // 41 IIC_SprMFMSR
  { 1, 165, 166, 0, 0 }, // 42 IIC_SprMFCRF
  { 1, 153, 154, 0, 0 }, // 43 IIC_SprMFSR
  { 1, 168, 169, 0, 0 }, // 44 IIC_SprMFTB
  { 1, 153, 154, 0, 0 }, // 45 IIC_LdStStore
  { 1, 169, 170, 0, 0 }, // 46 IIC_LdStSync
  { 1, 170, 171, 0, 0 }, // 47 IIC_BrMCRX
  { 1, 171, 172, 0, 0 }, // 48 IIC_SprMTSPR
  { 1, 156, 157, 0, 0 }, // 49 IIC_IntMTFSB0
  { 1, 153, 154, 0, 0 }, // 50 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMTMSRD
  { 1, 153, 154, 0, 0 }, // 52 IIC_SprMTSR
  { 1, 172, 173, 0, 0 }, // 53 IIC_IntMulHW
  { 1, 172, 173, 0, 0 }, // 54 IIC_IntMulHWU
  { 1, 173, 174, 0, 0 }, // 55 IIC_IntMulHD
  { 1, 174, 175, 0, 0 }, // 56 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprRFI
  { 1, 175, 176, 0, 0 }, // 58 IIC_IntRFID
  { 1, 148, 149, 0, 0 }, // 59 IIC_IntRotateD
  { 1, 148, 149, 0, 0 }, // 60 IIC_IntRotateDI
  { 1, 174, 175, 0, 0 }, // 61 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 65 IIC_SprSLBMTE
  { 1, 148, 149, 0, 0 }, // 66 IIC_IntShift
  { 1, 153, 154, 0, 0 }, // 67 IIC_LdStStoreUpd
  { 1, 153, 154, 0, 0 }, // 68 IIC_LdStSTD
  { 1, 161, 162, 0, 0 }, // 69 IIC_LdStSTDCX
  { 1, 153, 154, 0, 0 }, // 70 IIC_LdStSTDU
  { 1, 153, 154, 0, 0 }, // 71 IIC_LdStSTDUX
  { 1, 176, 177, 0, 0 }, // 72 IIC_LdStSTFD
  { 1, 176, 177, 0, 0 }, // 73 IIC_LdStSTFDU
  { 1, 161, 162, 0, 0 }, // 74 IIC_LdStSTWCX
  { 1, 177, 178, 0, 0 }, // 75 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprTLBIEL
  { 1, 153, 154, 0, 0 }, // 79 IIC_SprTLBSYNC
  { 1, 177, 178, 0, 0 }, // 80 IIC_IntTrapW
  { 1, 178, 179, 0, 0 }, // 81 IIC_VecGeneral
  { 1, 179, 180, 0, 0 }, // 82 IIC_VecFPCompare
  { 1, 180, 181, 0, 0 }, // 83 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCA2Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 181, 182, 161, 164 }, // 1 IIC_IntSimple
  { 1, 181, 182, 164, 167 }, // 2 IIC_IntGeneral
  { 1, 181, 182, 167, 170 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 181, 182, 170, 173 }, // 5 IIC_IntCompare
  { 1, 181, 182, 173, 176 }, // 6 IIC_BrCR
  { 1, 181, 182, 176, 179 }, // 7 IIC_LdStDCBF
  { 1, 181, 182, 179, 182 }, // 8 IIC_LdStLoad
  { 1, 181, 182, 182, 185 }, // 9 IIC_IntDivD
  { 1, 181, 182, 185, 188 }, // 10 IIC_IntDivW
  { 1, 182, 183, 188, 191 }, // 11 IIC_FPGeneral
  { 1, 182, 183, 191, 194 }, // 12 IIC_FPAddSub
  { 1, 182, 183, 194, 197 }, // 13 IIC_FPCompare
  { 1, 182, 183, 197, 200 }, // 14 IIC_FPDivD
  { 1, 182, 183, 200, 203 }, // 15 IIC_FPDivS
  { 1, 182, 183, 203, 207 }, // 16 IIC_FPFused
  { 1, 182, 183, 207, 210 }, // 17 IIC_FPSqrtD
  { 1, 182, 183, 210, 213 }, // 18 IIC_FPSqrtS
  { 1, 181, 182, 213, 216 }, // 19 IIC_LdStICBI
  { 1, 181, 182, 216, 220 }, // 20 IIC_IntISEL
  { 1, 181, 182, 220, 221 }, // 21 IIC_SprISYNC
  { 1, 181, 182, 221, 225 }, // 22 IIC_LdStLoadUpd
  { 1, 181, 182, 225, 229 }, // 23 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDARX
  { 1, 181, 182, 229, 232 }, // 26 IIC_LdStLDU
  { 1, 181, 182, 232, 235 }, // 27 IIC_LdStLDUX
  { 1, 181, 182, 235, 238 }, // 28 IIC_LdStLFD
  { 1, 181, 182, 238, 242 }, // 29 IIC_LdStLFDU
  { 1, 181, 182, 242, 246 }, // 30 IIC_LdStLFDUX
  { 1, 181, 182, 246, 249 }, // 31 IIC_LdStLHA
  { 1, 181, 182, 249, 253 }, // 32 IIC_LdStLHAU
  { 1, 181, 182, 253, 257 }, // 33 IIC_LdStLHAUX
  { 0, 0, 0, 0, 0 }, // 34 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 35 IIC_LdStLWA
  { 1, 181, 182, 257, 260 }, // 36 IIC_LdStLWARX
  { 1, 181, 182, 260, 263 }, // 37 IIC_BrMCR
  { 1, 181, 182, 263, 265 }, // 38 IIC_SprMFCR
  { 1, 181, 182, 265, 267 }, // 39 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 40 IIC_IntMFFS
  { 1, 181, 182, 267, 269 }, // 41 IIC_SprMFMSR
  { 1, 181, 182, 269, 271 }, // 42 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 43 IIC_SprMFSR
  { 1, 181, 182, 271, 273 }, // 44 IIC_SprMFTB
  { 1, 181, 182, 273, 276 }, // 45 IIC_LdStStore
  { 1, 181, 182, 276, 277 }, // 46 IIC_LdStSync
  { 1, 181, 182, 277, 280 }, // 47 IIC_BrMCRX
  { 1, 181, 182, 280, 282 }, // 48 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 49 IIC_IntMTFSB0
  { 1, 181, 182, 282, 284 }, // 50 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMTSR
  { 1, 181, 182, 284, 287 }, // 53 IIC_IntMulHW
  { 1, 181, 182, 287, 290 }, // 54 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 55 IIC_IntMulHD
  { 1, 181, 182, 290, 293 }, // 56 IIC_IntMulLI
  { 1, 181, 182, 293, 294 }, // 57 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 58 IIC_IntRFID
  { 1, 181, 182, 294, 297 }, // 59 IIC_IntRotateD
  { 1, 181, 182, 297, 300 }, // 60 IIC_IntRotateDI
  { 1, 181, 182, 300, 303 }, // 61 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 65 IIC_SprSLBMTE
  { 1, 181, 182, 303, 306 }, // 66 IIC_IntShift
  { 1, 181, 182, 306, 310 }, // 67 IIC_LdStStoreUpd
  { 1, 181, 182, 310, 313 }, // 68 IIC_LdStSTD
  { 1, 181, 182, 313, 316 }, // 69 IIC_LdStSTDCX
  { 1, 181, 182, 316, 320 }, // 70 IIC_LdStSTDU
  { 1, 181, 182, 320, 324 }, // 71 IIC_LdStSTDUX
  { 1, 181, 182, 324, 327 }, // 72 IIC_LdStSTFD
  { 1, 181, 182, 327, 331 }, // 73 IIC_LdStSTFDU
  { 1, 181, 182, 331, 334 }, // 74 IIC_LdStSTWCX
  { 1, 181, 182, 334, 336 }, // 75 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 79 IIC_SprTLBSYNC
  { 1, 181, 182, 336, 338 }, // 80 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 81 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 82 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 83 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE500mcItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 183, 185, 338, 341 }, // 1 IIC_IntSimple
  { 1, 183, 185, 341, 344 }, // 2 IIC_IntGeneral
  { 1, 185, 187, 344, 346 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 183, 185, 346, 349 }, // 5 IIC_IntCompare
  { 1, 185, 187, 349, 352 }, // 6 IIC_BrCR
  { 1, 187, 189, 352, 354 }, // 7 IIC_LdStDCBF
  { 1, 187, 189, 354, 356 }, // 8 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 9 IIC_IntDivD
  { 1, 189, 192, 356, 359 }, // 10 IIC_IntDivW
  { 1, 192, 194, 359, 362 }, // 11 IIC_FPGeneral
  { 1, 194, 196, 362, 365 }, // 12 IIC_FPAddSub
  { 1, 192, 194, 365, 368 }, // 13 IIC_FPCompare
  { 1, 196, 198, 368, 371 }, // 14 IIC_FPDivD
  { 1, 198, 200, 371, 374 }, // 15 IIC_FPDivS
  { 1, 194, 196, 374, 378 }, // 16 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 18 IIC_FPSqrtS
  { 1, 187, 189, 378, 380 }, // 19 IIC_LdStICBI
  { 1, 183, 185, 380, 384 }, // 20 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 21 IIC_SprISYNC
  { 2, 200, 203, 384, 386 }, // 22 IIC_LdStLoadUpd
  { 2, 200, 203, 386, 388 }, // 23 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 26 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 27 IIC_LdStLDUX
  { 1, 187, 189, 388, 391 }, // 28 IIC_LdStLFD
  { 2, 200, 203, 391, 394 }, // 29 IIC_LdStLFDU
  { 2, 200, 203, 394, 397 }, // 30 IIC_LdStLFDUX
  { 1, 187, 189, 397, 399 }, // 31 IIC_LdStLHA
  { 1, 200, 203, 399, 401 }, // 32 IIC_LdStLHAU
  { 1, 200, 203, 401, 403 }, // 33 IIC_LdStLHAUX
  { 1, 187, 189, 403, 405 }, // 34 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 35 IIC_LdStLWA
  { 1, 203, 205, 405, 408 }, // 36 IIC_LdStLWARX
  { 1, 185, 187, 408, 410 }, // 37 IIC_BrMCR
  { 1, 205, 207, 410, 412 }, // 38 IIC_SprMFCR
  { 1, 183, 185, 412, 414 }, // 39 IIC_SprMFSPR
  { 1, 207, 209, 414, 415 }, // 40 IIC_IntMFFS
  { 1, 209, 211, 415, 417 }, // 41 IIC_SprMFMSR
  { 1, 205, 207, 417, 419 }, // 42 IIC_SprMFCRF
  { 1, 209, 211, 419, 421 }, // 43 IIC_SprMFSR
  { 1, 209, 211, 421, 423 }, // 44 IIC_SprMFTB
  { 1, 187, 189, 423, 425 }, // 45 IIC_LdStStore
  { 1, 187, 189, 0, 0 }, // 46 IIC_LdStSync
  { 1, 183, 185, 425, 428 }, // 47 IIC_BrMCRX
  { 1, 183, 185, 428, 430 }, // 48 IIC_SprMTSPR
  { 1, 207, 209, 430, 433 }, // 49 IIC_IntMTFSB0
  { 1, 211, 213, 433, 435 }, // 50 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMTMSRD
  { 1, 213, 215, 435, 437 }, // 52 IIC_SprMTSR
  { 1, 215, 217, 437, 440 }, // 53 IIC_IntMulHW
  { 1, 215, 217, 440, 443 }, // 54 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 55 IIC_IntMulHD
  { 1, 215, 217, 443, 446 }, // 56 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 58 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 59 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 60 IIC_IntRotateDI
  { 1, 183, 185, 446, 449 }, // 61 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 65 IIC_SprSLBMTE
  { 1, 183, 185, 449, 452 }, // 66 IIC_IntShift
  { 2, 200, 203, 452, 454 }, // 67 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 68 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 69 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 70 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 71 IIC_LdStSTDUX
  { 1, 187, 189, 454, 457 }, // 72 IIC_LdStSTFD
  { 2, 200, 203, 457, 460 }, // 73 IIC_LdStSTFDU
  { 1, 187, 189, 460, 462 }, // 74 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 75 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprTLBIEL
  { 1, 217, 219, 0, 0 }, // 79 IIC_SprTLBSYNC
  { 1, 219, 221, 462, 464 }, // 80 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 81 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 82 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 83 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE5500Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 221, 223, 464, 467 }, // 1 IIC_IntSimple
  { 1, 221, 223, 467, 470 }, // 2 IIC_IntGeneral
  { 1, 223, 225, 470, 472 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 221, 223, 472, 475 }, // 5 IIC_IntCompare
  { 1, 223, 225, 475, 478 }, // 6 IIC_BrCR
  { 1, 225, 227, 478, 480 }, // 7 IIC_LdStDCBF
  { 1, 225, 227, 480, 482 }, // 8 IIC_LdStLoad
  { 1, 227, 230, 482, 485 }, // 9 IIC_IntDivD
  { 1, 230, 233, 485, 488 }, // 10 IIC_IntDivW
  { 1, 233, 235, 488, 491 }, // 11 IIC_FPGeneral
  { 1, 233, 235, 491, 494 }, // 12 IIC_FPAddSub
  { 1, 233, 235, 494, 497 }, // 13 IIC_FPCompare
  { 1, 235, 237, 497, 500 }, // 14 IIC_FPDivD
  { 1, 237, 239, 500, 503 }, // 15 IIC_FPDivS
  { 1, 233, 235, 503, 507 }, // 16 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 18 IIC_FPSqrtS
  { 1, 225, 227, 507, 509 }, // 19 IIC_LdStICBI
  { 1, 221, 223, 509, 513 }, // 20 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 21 IIC_SprISYNC
  { 2, 239, 242, 513, 515 }, // 22 IIC_LdStLoadUpd
  { 2, 239, 242, 515, 517 }, // 23 IIC_LdStLoadUpdX
  { 1, 225, 227, 517, 519 }, // 24 IIC_LdStLD
  { 1, 242, 244, 519, 521 }, // 25 IIC_LdStLDARX
  { 2, 239, 242, 521, 523 }, // 26 IIC_LdStLDU
  { 2, 239, 242, 523, 525 }, // 27 IIC_LdStLDUX
  { 2, 225, 227, 525, 528 }, // 28 IIC_LdStLFD
  { 2, 239, 242, 528, 531 }, // 29 IIC_LdStLFDU
  { 2, 239, 242, 531, 534 }, // 30 IIC_LdStLFDUX
  { 1, 225, 227, 534, 536 }, // 31 IIC_LdStLHA
  { 2, 239, 242, 536, 538 }, // 32 IIC_LdStLHAU
  { 2, 239, 242, 538, 540 }, // 33 IIC_LdStLHAUX
  { 1, 244, 246, 540, 542 }, // 34 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 35 IIC_LdStLWA
  { 1, 242, 244, 542, 545 }, // 36 IIC_LdStLWARX
  { 1, 223, 225, 545, 547 }, // 37 IIC_BrMCR
  { 1, 246, 248, 547, 549 }, // 38 IIC_SprMFCR
  { 1, 248, 250, 549, 550 }, // 39 IIC_SprMFSPR
  { 1, 233, 235, 550, 551 }, // 40 IIC_IntMFFS
  { 1, 250, 252, 551, 553 }, // 41 IIC_SprMFMSR
  { 1, 246, 248, 553, 555 }, // 42 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 43 IIC_SprMFSR
  { 1, 252, 254, 555, 557 }, // 44 IIC_SprMFTB
  { 1, 225, 227, 557, 559 }, // 45 IIC_LdStStore
  { 1, 225, 227, 0, 0 }, // 46 IIC_LdStSync
  { 1, 248, 250, 559, 562 }, // 47 IIC_BrMCRX
  { 1, 221, 223, 562, 563 }, // 48 IIC_SprMTSPR
  { 1, 254, 256, 563, 566 }, // 49 IIC_IntMTFSB0
  { 1, 256, 258, 566, 568 }, // 50 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMTSR
  { 1, 258, 261, 568, 571 }, // 53 IIC_IntMulHW
  { 1, 258, 261, 571, 574 }, // 54 IIC_IntMulHWU
  { 1, 261, 264, 574, 577 }, // 55 IIC_IntMulHD
  { 1, 261, 264, 577, 580 }, // 56 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 58 IIC_IntRFID
  { 1, 264, 266, 580, 583 }, // 59 IIC_IntRotateD
  { 1, 221, 223, 583, 586 }, // 60 IIC_IntRotateDI
  { 1, 221, 223, 586, 589 }, // 61 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 65 IIC_SprSLBMTE
  { 1, 264, 266, 589, 592 }, // 66 IIC_IntShift
  { 2, 239, 242, 592, 594 }, // 67 IIC_LdStStoreUpd
  { 1, 225, 227, 594, 596 }, // 68 IIC_LdStSTD
  { 1, 225, 227, 596, 598 }, // 69 IIC_LdStSTDCX
  { 2, 239, 242, 598, 600 }, // 70 IIC_LdStSTDU
  { 2, 239, 242, 600, 602 }, // 71 IIC_LdStSTDUX
  { 1, 225, 227, 602, 605 }, // 72 IIC_LdStSTFD
  { 2, 239, 242, 605, 608 }, // 73 IIC_LdStSTFDU
  { 1, 225, 227, 608, 610 }, // 74 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 75 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprTLBIEL
  { 1, 266, 268, 0, 0 }, // 79 IIC_SprTLBSYNC
  { 1, 268, 270, 610, 612 }, // 80 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 81 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 82 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 83 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary P8Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 270, 272, 612, 615 }, // 1 IIC_IntSimple
  { 1, 270, 272, 615, 618 }, // 2 IIC_IntGeneral
  { 1, 272, 274, 618, 621 }, // 3 IIC_BrB
  { 1, 274, 276, 621, 624 }, // 4 IIC_VecFP
  { 1, 276, 278, 624, 627 }, // 5 IIC_IntCompare
  { 1, 278, 280, 627, 630 }, // 6 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 7 IIC_LdStDCBF
  { 1, 280, 282, 630, 633 }, // 8 IIC_LdStLoad
  { 1, 282, 284, 633, 636 }, // 9 IIC_IntDivD
  { 1, 284, 286, 636, 639 }, // 10 IIC_IntDivW
  { 1, 286, 288, 639, 642 }, // 11 IIC_FPGeneral
  { 0, 0, 0, 0, 0 }, // 12 IIC_FPAddSub
  { 1, 286, 288, 642, 645 }, // 13 IIC_FPCompare
  { 1, 286, 288, 645, 648 }, // 14 IIC_FPDivD
  { 1, 286, 288, 648, 651 }, // 15 IIC_FPDivS
  { 1, 286, 288, 651, 655 }, // 16 IIC_FPFused
  { 1, 286, 288, 655, 658 }, // 17 IIC_FPSqrtD
  { 1, 286, 288, 658, 661 }, // 18 IIC_FPSqrtS
  { 0, 0, 0, 0, 0 }, // 19 IIC_LdStICBI
  { 1, 288, 291, 661, 665 }, // 20 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 21 IIC_SprISYNC
  { 1, 291, 295, 665, 669 }, // 22 IIC_LdStLoadUpd
  { 1, 291, 295, 669, 673 }, // 23 IIC_LdStLoadUpdX
  { 1, 280, 282, 673, 676 }, // 24 IIC_LdStLD
  { 1, 295, 302, 676, 679 }, // 25 IIC_LdStLDARX
  { 1, 291, 295, 679, 683 }, // 26 IIC_LdStLDU
  { 1, 291, 295, 683, 687 }, // 27 IIC_LdStLDUX
  { 1, 302, 304, 687, 690 }, // 28 IIC_LdStLFD
  { 1, 304, 308, 690, 694 }, // 29 IIC_LdStLFDU
  { 1, 304, 308, 694, 698 }, // 30 IIC_LdStLFDUX
  { 1, 308, 312, 698, 701 }, // 31 IIC_LdStLHA
  { 1, 312, 317, 701, 705 }, // 32 IIC_LdStLHAU
  { 1, 317, 326, 705, 709 }, // 33 IIC_LdStLHAUX
  { 1, 280, 282, 709, 712 }, // 34 IIC_LdStLMW
  { 1, 326, 330, 712, 715 }, // 35 IIC_LdStLWA
  { 1, 330, 335, 715, 718 }, // 36 IIC_LdStLWARX
  { 1, 335, 337, 718, 721 }, // 37 IIC_BrMCR
  { 1, 278, 280, 721, 723 }, // 38 IIC_SprMFCR
  { 0, 0, 0, 0, 0 }, // 39 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 40 IIC_IntMFFS
  { 0, 0, 0, 0, 0 }, // 41 IIC_SprMFMSR
  { 1, 278, 280, 723, 725 }, // 42 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 43 IIC_SprMFSR
  { 0, 0, 0, 0, 0 }, // 44 IIC_SprMFTB
  { 1, 337, 340, 725, 728 }, // 45 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 46 IIC_LdStSync
  { 1, 340, 342, 728, 730 }, // 47 IIC_BrMCRX
  { 1, 340, 342, 730, 732 }, // 48 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 49 IIC_IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMTSR
  { 1, 276, 278, 732, 735 }, // 53 IIC_IntMulHW
  { 1, 276, 278, 735, 738 }, // 54 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 55 IIC_IntMulHD
  { 1, 276, 278, 738, 741 }, // 56 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 58 IIC_IntRFID
  { 1, 276, 278, 741, 744 }, // 59 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 60 IIC_IntRotateDI
  { 1, 276, 278, 744, 747 }, // 61 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 65 IIC_SprSLBMTE
  { 1, 276, 278, 747, 750 }, // 66 IIC_IntShift
  { 0, 0, 0, 0, 0 }, // 67 IIC_LdStStoreUpd
  { 1, 342, 345, 0, 0 }, // 68 IIC_LdStSTD
  { 1, 345, 353, 750, 753 }, // 69 IIC_LdStSTDCX
  { 1, 353, 357, 753, 757 }, // 70 IIC_LdStSTDU
  { 1, 357, 366, 757, 761 }, // 71 IIC_LdStSTDUX
  { 1, 366, 369, 761, 764 }, // 72 IIC_LdStSTFD
  { 1, 369, 374, 764, 768 }, // 73 IIC_LdStSTFDU
  { 1, 345, 353, 768, 771 }, // 74 IIC_LdStSTWCX
  { 1, 276, 278, 771, 773 }, // 75 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 79 IIC_SprTLBSYNC
  { 1, 276, 278, 773, 775 }, // 80 IIC_IntTrapW
  { 1, 274, 276, 775, 778 }, // 81 IIC_VecGeneral
  { 1, 274, 276, 778, 781 }, // 82 IIC_VecFPCompare
  { 1, 374, 376, 781, 784 }, // 83 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary P7Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 376, 378, 784, 787 }, // 1 IIC_IntSimple
  { 1, 378, 380, 787, 790 }, // 2 IIC_IntGeneral
  { 1, 380, 382, 790, 793 }, // 3 IIC_BrB
  { 1, 382, 384, 793, 796 }, // 4 IIC_VecFP
  { 1, 378, 380, 796, 799 }, // 5 IIC_IntCompare
  { 1, 384, 386, 799, 802 }, // 6 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 7 IIC_LdStDCBF
  { 1, 386, 388, 802, 805 }, // 8 IIC_LdStLoad
  { 1, 388, 391, 805, 808 }, // 9 IIC_IntDivD
  { 1, 391, 394, 808, 811 }, // 10 IIC_IntDivW
  { 1, 394, 396, 811, 814 }, // 11 IIC_FPGeneral
  { 0, 0, 0, 0, 0 }, // 12 IIC_FPAddSub
  { 1, 394, 396, 814, 817 }, // 13 IIC_FPCompare
  { 1, 394, 396, 817, 820 }, // 14 IIC_FPDivD
  { 1, 394, 396, 820, 823 }, // 15 IIC_FPDivS
  { 1, 394, 396, 823, 827 }, // 16 IIC_FPFused
  { 1, 394, 396, 827, 830 }, // 17 IIC_FPSqrtD
  { 1, 394, 396, 830, 833 }, // 18 IIC_FPSqrtS
  { 0, 0, 0, 0, 0 }, // 19 IIC_LdStICBI
  { 1, 396, 399, 833, 837 }, // 20 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 21 IIC_SprISYNC
  { 1, 399, 403, 837, 841 }, // 22 IIC_LdStLoadUpd
  { 1, 403, 410, 841, 845 }, // 23 IIC_LdStLoadUpdX
  { 1, 386, 388, 845, 848 }, // 24 IIC_LdStLD
  { 1, 410, 415, 848, 851 }, // 25 IIC_LdStLDARX
  { 1, 399, 403, 851, 855 }, // 26 IIC_LdStLDU
  { 1, 403, 410, 855, 859 }, // 27 IIC_LdStLDUX
  { 1, 386, 388, 859, 862 }, // 28 IIC_LdStLFD
  { 1, 399, 403, 862, 866 }, // 29 IIC_LdStLFDU
  { 1, 399, 403, 866, 870 }, // 30 IIC_LdStLFDUX
  { 1, 415, 419, 870, 873 }, // 31 IIC_LdStLHA
  { 1, 419, 424, 873, 877 }, // 32 IIC_LdStLHAU
  { 1, 424, 432, 877, 881 }, // 33 IIC_LdStLHAUX
  { 1, 386, 388, 881, 884 }, // 34 IIC_LdStLMW
  { 1, 415, 419, 884, 887 }, // 35 IIC_LdStLWA
  { 1, 410, 415, 887, 890 }, // 36 IIC_LdStLWARX
  { 1, 380, 382, 890, 893 }, // 37 IIC_BrMCR
  { 1, 384, 386, 893, 895 }, // 38 IIC_SprMFCR
  { 0, 0, 0, 0, 0 }, // 39 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 40 IIC_IntMFFS
  { 0, 0, 0, 0, 0 }, // 41 IIC_SprMFMSR
  { 1, 384, 386, 895, 897 }, // 42 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 43 IIC_SprMFSR
  { 0, 0, 0, 0, 0 }, // 44 IIC_SprMFTB
  { 1, 432, 435, 897, 900 }, // 45 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 46 IIC_LdStSync
  { 1, 435, 441, 900, 902 }, // 47 IIC_BrMCRX
  { 1, 441, 443, 902, 904 }, // 48 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 49 IIC_IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMTSR
  { 1, 378, 380, 904, 907 }, // 53 IIC_IntMulHW
  { 1, 378, 380, 907, 910 }, // 54 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 55 IIC_IntMulHD
  { 1, 378, 380, 910, 913 }, // 56 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 58 IIC_IntRFID
  { 1, 378, 380, 913, 916 }, // 59 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 60 IIC_IntRotateDI
  { 1, 378, 380, 916, 919 }, // 61 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 65 IIC_SprSLBMTE
  { 1, 378, 380, 919, 922 }, // 66 IIC_IntShift
  { 0, 0, 0, 0, 0 }, // 67 IIC_LdStStoreUpd
  { 1, 432, 435, 922, 925 }, // 68 IIC_LdStSTD
  { 1, 410, 415, 925, 928 }, // 69 IIC_LdStSTDCX
  { 1, 419, 424, 928, 932 }, // 70 IIC_LdStSTDU
  { 1, 443, 450, 932, 936 }, // 71 IIC_LdStSTDUX
  { 1, 450, 453, 936, 939 }, // 72 IIC_LdStSTFD
  { 1, 453, 458, 939, 943 }, // 73 IIC_LdStSTFDU
  { 1, 410, 415, 943, 946 }, // 74 IIC_LdStSTWCX
  { 1, 378, 380, 946, 948 }, // 75 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 79 IIC_SprTLBSYNC
  { 1, 378, 380, 948, 950 }, // 80 IIC_IntTrapW
  { 1, 458, 460, 950, 953 }, // 81 IIC_VecGeneral
  { 1, 382, 384, 953, 956 }, // 82 IIC_VecFPCompare
  { 1, 460, 462, 956, 959 }, // 83 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // PPCWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // PPCWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // PPCReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  nullptr}; // No Itinerary

static const llvm::MCSchedModel PPC440Model = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPC440Itineraries};

static const llvm::MCSchedModel G3ItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  2, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G3Itineraries};

static const llvm::MCSchedModel G4ItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  3, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G4Itineraries};

static const llvm::MCSchedModel G4PlusItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  4, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G4PlusItineraries};

static const llvm::MCSchedModel G5Model = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  0, // PostRAScheduler
  1, // CompleteModel
  5, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G5Itineraries};

static const llvm::MCSchedModel PPCA2Model = {
  1, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  13, // MispredictPenalty
  0, // PostRAScheduler
  1, // CompleteModel
  6, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCA2Itineraries};

static const llvm::MCSchedModel PPCE500mcModel = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  7, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCE500mcItineraries};

static const llvm::MCSchedModel PPCE5500Model = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  8, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCE5500Itineraries};

static const llvm::MCSchedModel P8Model = {
  8, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  60, // LoopMicroOpBufferSize
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  0, // PostRAScheduler
  1, // CompleteModel
  9, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  P8Itineraries};

static const llvm::MCSchedModel P7Model = {
  6, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  40, // LoopMicroOpBufferSize
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  0, // PostRAScheduler
  1, // CompleteModel
  10, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  P7Itineraries};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV PPCProcSchedKV[] = {
  { "440", (const void *)&PPC440Model },
  { "450", (const void *)&PPC440Model },
  { "601", (const void *)&G3ItinerariesModel },
  { "602", (const void *)&G3ItinerariesModel },
  { "603", (const void *)&G3ItinerariesModel },
  { "603e", (const void *)&G3ItinerariesModel },
  { "603ev", (const void *)&G3ItinerariesModel },
  { "604", (const void *)&G3ItinerariesModel },
  { "604e", (const void *)&G3ItinerariesModel },
  { "620", (const void *)&G3ItinerariesModel },
  { "7400", (const void *)&G4ItinerariesModel },
  { "7450", (const void *)&G4PlusItinerariesModel },
  { "750", (const void *)&G4ItinerariesModel },
  { "970", (const void *)&G5Model },
  { "a2", (const void *)&PPCA2Model },
  { "a2q", (const void *)&PPCA2Model },
  { "e500mc", (const void *)&PPCE500mcModel },
  { "e5500", (const void *)&PPCE5500Model },
  { "g3", (const void *)&G3ItinerariesModel },
  { "g4", (const void *)&G4ItinerariesModel },
  { "g4+", (const void *)&G4PlusItinerariesModel },
  { "g5", (const void *)&G5Model },
  { "generic", (const void *)&G3ItinerariesModel },
  { "ppc", (const void *)&G3ItinerariesModel },
  { "ppc64", (const void *)&G5Model },
  { "ppc64le", (const void *)&P8Model },
  { "pwr3", (const void *)&G5Model },
  { "pwr4", (const void *)&G5Model },
  { "pwr5", (const void *)&G5Model },
  { "pwr5x", (const void *)&G5Model },
  { "pwr6", (const void *)&G5Model },
  { "pwr6x", (const void *)&G5Model },
  { "pwr7", (const void *)&P7Model },
  { "pwr8", (const void *)&P8Model }
};
#undef DBGFIELD
static inline void InitPPCMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, PPCFeatureKV, PPCSubTypeKV, 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::PPCSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & PPC::DeprecatedDST) != 0) DeprecatedDST = true;
  if ((Bits & PPC::DeprecatedMFTB) != 0) DeprecatedMFTB = true;
  if ((Bits & PPC::Directive32) != 0 && DarwinDirective < PPC::DIR_32) DarwinDirective = PPC::DIR_32;
  if ((Bits & PPC::Directive64) != 0 && DarwinDirective < PPC::DIR_64) DarwinDirective = PPC::DIR_64;
  if ((Bits & PPC::Directive440) != 0 && DarwinDirective < PPC::DIR_440) DarwinDirective = PPC::DIR_440;
  if ((Bits & PPC::Directive601) != 0 && DarwinDirective < PPC::DIR_601) DarwinDirective = PPC::DIR_601;
  if ((Bits & PPC::Directive602) != 0 && DarwinDirective < PPC::DIR_602) DarwinDirective = PPC::DIR_602;
  if ((Bits & PPC::Directive603) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive604) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive620) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive750) != 0 && DarwinDirective < PPC::DIR_750) DarwinDirective = PPC::DIR_750;
  if ((Bits & PPC::Directive970) != 0 && DarwinDirective < PPC::DIR_970) DarwinDirective = PPC::DIR_970;
  if ((Bits & PPC::Directive7400) != 0 && DarwinDirective < PPC::DIR_7400) DarwinDirective = PPC::DIR_7400;
  if ((Bits & PPC::DirectiveA2) != 0 && DarwinDirective < PPC::DIR_A2) DarwinDirective = PPC::DIR_A2;
  if ((Bits & PPC::DirectiveE500mc) != 0 && DarwinDirective < PPC::DIR_E500mc) DarwinDirective = PPC::DIR_E500mc;
  if ((Bits & PPC::DirectiveE5500) != 0 && DarwinDirective < PPC::DIR_E5500) DarwinDirective = PPC::DIR_E5500;
  if ((Bits & PPC::DirectivePwr3) != 0 && DarwinDirective < PPC::DIR_PWR3) DarwinDirective = PPC::DIR_PWR3;
  if ((Bits & PPC::DirectivePwr4) != 0 && DarwinDirective < PPC::DIR_PWR4) DarwinDirective = PPC::DIR_PWR4;
  if ((Bits & PPC::DirectivePwr5) != 0 && DarwinDirective < PPC::DIR_PWR5) DarwinDirective = PPC::DIR_PWR5;
  if ((Bits & PPC::DirectivePwr5x) != 0 && DarwinDirective < PPC::DIR_PWR5X) DarwinDirective = PPC::DIR_PWR5X;
  if ((Bits & PPC::DirectivePwr6) != 0 && DarwinDirective < PPC::DIR_PWR6) DarwinDirective = PPC::DIR_PWR6;
  if ((Bits & PPC::DirectivePwr6x) != 0 && DarwinDirective < PPC::DIR_PWR6X) DarwinDirective = PPC::DIR_PWR6X;
  if ((Bits & PPC::DirectivePwr7) != 0 && DarwinDirective < PPC::DIR_PWR7) DarwinDirective = PPC::DIR_PWR7;
  if ((Bits & PPC::DirectivePwr8) != 0 && DarwinDirective < PPC::DIR_PWR8) DarwinDirective = PPC::DIR_PWR8;
  if ((Bits & PPC::Feature64Bit) != 0) Has64BitSupport = true;
  if ((Bits & PPC::Feature64BitRegs) != 0) Use64BitRegs = true;
  if ((Bits & PPC::FeatureAltivec) != 0) HasAltivec = true;
  if ((Bits & PPC::FeatureBookE) != 0) IsBookE = true;
  if ((Bits & PPC::FeatureCMPB) != 0) HasCMPB = true;
  if ((Bits & PPC::FeatureCRBits) != 0) UseCRBits = true;
  if ((Bits & PPC::FeatureE500) != 0) IsE500 = true;
  if ((Bits & PPC::FeatureELFv1) != 0 && TargetABI < PPC_ABI_ELFv1) TargetABI = PPC_ABI_ELFv1;
  if ((Bits & PPC::FeatureELFv2) != 0 && TargetABI < PPC_ABI_ELFv2) TargetABI = PPC_ABI_ELFv2;
  if ((Bits & PPC::FeatureFCPSGN) != 0) HasFCPSGN = true;
  if ((Bits & PPC::FeatureFPCVT) != 0) HasFPCVT = true;
  if ((Bits & PPC::FeatureFPRND) != 0) HasFPRND = true;
  if ((Bits & PPC::FeatureFRE) != 0) HasFRE = true;
  if ((Bits & PPC::FeatureFRES) != 0) HasFRES = true;
  if ((Bits & PPC::FeatureFRSQRTE) != 0) HasFRSQRTE = true;
  if ((Bits & PPC::FeatureFRSQRTES) != 0) HasFRSQRTES = true;
  if ((Bits & PPC::FeatureFSqrt) != 0) HasFSQRT = true;
  if ((Bits & PPC::FeatureICBT) != 0) HasICBT = true;
  if ((Bits & PPC::FeatureISEL) != 0) HasISEL = true;
  if ((Bits & PPC::FeatureInvariantFunctionDescriptors) != 0) HasInvariantFunctionDescriptors = true;
  if ((Bits & PPC::FeatureLDBRX) != 0) HasLDBRX = true;
  if ((Bits & PPC::FeatureLFIWAX) != 0) HasLFIWAX = true;
  if ((Bits & PPC::FeatureMFOCRF) != 0) HasMFOCRF = true;
  if ((Bits & PPC::FeatureMSYNC) != 0) HasOnlyMSYNC = true;
  if ((Bits & PPC::FeatureP8Altivec) != 0) HasP8Altivec = true;
  if ((Bits & PPC::FeatureP8Vector) != 0) HasP8Vector = true;
  if ((Bits & PPC::FeaturePOPCNTD) != 0) HasPOPCNTD = true;
  if ((Bits & PPC::FeaturePPC4xx) != 0) IsPPC4xx = true;
  if ((Bits & PPC::FeaturePPC6xx) != 0) IsPPC6xx = true;
  if ((Bits & PPC::FeatureQPX) != 0) HasQPX = true;
  if ((Bits & PPC::FeatureRecipPrec) != 0) HasRecipPrec = true;
  if ((Bits & PPC::FeatureSPE) != 0) HasSPE = true;
  if ((Bits & PPC::FeatureSTFIWX) != 0) HasSTFIWX = true;
  if ((Bits & PPC::FeatureVSX) != 0) HasVSX = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct PPCGenSubtargetInfo : public TargetSubtargetInfo {
  explicit PPCGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass, const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR
#include "llvm/CodeGen/TargetSchedule.h"
namespace llvm {
extern const llvm::SubtargetFeatureKV PPCFeatureKV[];
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[];
extern const llvm::SubtargetInfoKV PPCProcSchedKV[];
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[];
extern const llvm::InstrStage PPCStages[];
extern const unsigned PPCOperandCycles[];
extern const unsigned PPCForwardingPaths[];
PPCGenSubtargetInfo::PPCGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, makeArrayRef(PPCFeatureKV, 34), makeArrayRef(PPCSubTypeKV, 34), 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths);
}

unsigned PPCGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // PPCGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

