/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace Mips {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    STACKMAP	= 17,
    PATCHPOINT	= 18,
    LOAD_STACK_GUARD	= 19,
    STATEPOINT	= 20,
    FRAME_ALLOC	= 21,
    ABSQ_S_PH	= 22,
    ABSQ_S_QB	= 23,
    ABSQ_S_W	= 24,
    ADD	= 25,
    ADDIUPC	= 26,
    ADDIUPC_MM	= 27,
    ADDIUR1SP_MM	= 28,
    ADDIUR2_MM	= 29,
    ADDIUS5_MM	= 30,
    ADDIUSP_MM	= 31,
    ADDQH_PH	= 32,
    ADDQH_R_PH	= 33,
    ADDQH_R_W	= 34,
    ADDQH_W	= 35,
    ADDQ_PH	= 36,
    ADDQ_S_PH	= 37,
    ADDQ_S_W	= 38,
    ADDSC	= 39,
    ADDS_A_B	= 40,
    ADDS_A_D	= 41,
    ADDS_A_H	= 42,
    ADDS_A_W	= 43,
    ADDS_S_B	= 44,
    ADDS_S_D	= 45,
    ADDS_S_H	= 46,
    ADDS_S_W	= 47,
    ADDS_U_B	= 48,
    ADDS_U_D	= 49,
    ADDS_U_H	= 50,
    ADDS_U_W	= 51,
    ADDU16_MM	= 52,
    ADDUH_QB	= 53,
    ADDUH_R_QB	= 54,
    ADDU_PH	= 55,
    ADDU_QB	= 56,
    ADDU_S_PH	= 57,
    ADDU_S_QB	= 58,
    ADDVI_B	= 59,
    ADDVI_D	= 60,
    ADDVI_H	= 61,
    ADDVI_W	= 62,
    ADDV_B	= 63,
    ADDV_D	= 64,
    ADDV_H	= 65,
    ADDV_W	= 66,
    ADDWC	= 67,
    ADD_A_B	= 68,
    ADD_A_D	= 69,
    ADD_A_H	= 70,
    ADD_A_W	= 71,
    ADD_MM	= 72,
    ADDi	= 73,
    ADDi_MM	= 74,
    ADDiu	= 75,
    ADDiu_MM	= 76,
    ADDu	= 77,
    ADDu_MM	= 78,
    ADJCALLSTACKDOWN	= 79,
    ADJCALLSTACKUP	= 80,
    ALIGN	= 81,
    ALUIPC	= 82,
    AND	= 83,
    AND16_MM	= 84,
    AND64	= 85,
    ANDI16_MM	= 86,
    ANDI_B	= 87,
    AND_MM	= 88,
    AND_V	= 89,
    AND_V_D_PSEUDO	= 90,
    AND_V_H_PSEUDO	= 91,
    AND_V_W_PSEUDO	= 92,
    ANDi	= 93,
    ANDi64	= 94,
    ANDi_MM	= 95,
    APPEND	= 96,
    ASUB_S_B	= 97,
    ASUB_S_D	= 98,
    ASUB_S_H	= 99,
    ASUB_S_W	= 100,
    ASUB_U_B	= 101,
    ASUB_U_D	= 102,
    ASUB_U_H	= 103,
    ASUB_U_W	= 104,
    ATOMIC_CMP_SWAP_I16	= 105,
    ATOMIC_CMP_SWAP_I32	= 106,
    ATOMIC_CMP_SWAP_I64	= 107,
    ATOMIC_CMP_SWAP_I8	= 108,
    ATOMIC_LOAD_ADD_I16	= 109,
    ATOMIC_LOAD_ADD_I32	= 110,
    ATOMIC_LOAD_ADD_I64	= 111,
    ATOMIC_LOAD_ADD_I8	= 112,
    ATOMIC_LOAD_AND_I16	= 113,
    ATOMIC_LOAD_AND_I32	= 114,
    ATOMIC_LOAD_AND_I64	= 115,
    ATOMIC_LOAD_AND_I8	= 116,
    ATOMIC_LOAD_NAND_I16	= 117,
    ATOMIC_LOAD_NAND_I32	= 118,
    ATOMIC_LOAD_NAND_I64	= 119,
    ATOMIC_LOAD_NAND_I8	= 120,
    ATOMIC_LOAD_OR_I16	= 121,
    ATOMIC_LOAD_OR_I32	= 122,
    ATOMIC_LOAD_OR_I64	= 123,
    ATOMIC_LOAD_OR_I8	= 124,
    ATOMIC_LOAD_SUB_I16	= 125,
    ATOMIC_LOAD_SUB_I32	= 126,
    ATOMIC_LOAD_SUB_I64	= 127,
    ATOMIC_LOAD_SUB_I8	= 128,
    ATOMIC_LOAD_XOR_I16	= 129,
    ATOMIC_LOAD_XOR_I32	= 130,
    ATOMIC_LOAD_XOR_I64	= 131,
    ATOMIC_LOAD_XOR_I8	= 132,
    ATOMIC_SWAP_I16	= 133,
    ATOMIC_SWAP_I32	= 134,
    ATOMIC_SWAP_I64	= 135,
    ATOMIC_SWAP_I8	= 136,
    AUI	= 137,
    AUIPC	= 138,
    AVER_S_B	= 139,
    AVER_S_D	= 140,
    AVER_S_H	= 141,
    AVER_S_W	= 142,
    AVER_U_B	= 143,
    AVER_U_D	= 144,
    AVER_U_H	= 145,
    AVER_U_W	= 146,
    AVE_S_B	= 147,
    AVE_S_D	= 148,
    AVE_S_H	= 149,
    AVE_S_W	= 150,
    AVE_U_B	= 151,
    AVE_U_D	= 152,
    AVE_U_H	= 153,
    AVE_U_W	= 154,
    AddiuRxImmX16	= 155,
    AddiuRxPcImmX16	= 156,
    AddiuRxRxImm16	= 157,
    AddiuRxRxImmX16	= 158,
    AddiuRxRyOffMemX16	= 159,
    AddiuSpImm16	= 160,
    AddiuSpImmX16	= 161,
    AdduRxRyRz16	= 162,
    AndRxRxRy16	= 163,
    B	= 164,
    B16_MM	= 165,
    BADDu	= 166,
    BAL	= 167,
    BALC	= 168,
    BALIGN	= 169,
    BAL_BR	= 170,
    BBIT0	= 171,
    BBIT032	= 172,
    BBIT1	= 173,
    BBIT132	= 174,
    BC	= 175,
    BC1EQZ	= 176,
    BC1F	= 177,
    BC1FL	= 178,
    BC1F_MM	= 179,
    BC1NEZ	= 180,
    BC1T	= 181,
    BC1TL	= 182,
    BC1T_MM	= 183,
    BC2EQZ	= 184,
    BC2NEZ	= 185,
    BCLRI_B	= 186,
    BCLRI_D	= 187,
    BCLRI_H	= 188,
    BCLRI_W	= 189,
    BCLR_B	= 190,
    BCLR_D	= 191,
    BCLR_H	= 192,
    BCLR_W	= 193,
    BEQ	= 194,
    BEQ64	= 195,
    BEQC	= 196,
    BEQL	= 197,
    BEQZ16_MM	= 198,
    BEQZALC	= 199,
    BEQZC	= 200,
    BEQZC_MM	= 201,
    BEQ_MM	= 202,
    BGEC	= 203,
    BGEUC	= 204,
    BGEZ	= 205,
    BGEZ64	= 206,
    BGEZAL	= 207,
    BGEZALC	= 208,
    BGEZALL	= 209,
    BGEZALS_MM	= 210,
    BGEZAL_MM	= 211,
    BGEZC	= 212,
    BGEZL	= 213,
    BGEZ_MM	= 214,
    BGTZ	= 215,
    BGTZ64	= 216,
    BGTZALC	= 217,
    BGTZC	= 218,
    BGTZL	= 219,
    BGTZ_MM	= 220,
    BINSLI_B	= 221,
    BINSLI_D	= 222,
    BINSLI_H	= 223,
    BINSLI_W	= 224,
    BINSL_B	= 225,
    BINSL_D	= 226,
    BINSL_H	= 227,
    BINSL_W	= 228,
    BINSRI_B	= 229,
    BINSRI_D	= 230,
    BINSRI_H	= 231,
    BINSRI_W	= 232,
    BINSR_B	= 233,
    BINSR_D	= 234,
    BINSR_H	= 235,
    BINSR_W	= 236,
    BITREV	= 237,
    BITSWAP	= 238,
    BLEZ	= 239,
    BLEZ64	= 240,
    BLEZALC	= 241,
    BLEZC	= 242,
    BLEZL	= 243,
    BLEZ_MM	= 244,
    BLTC	= 245,
    BLTUC	= 246,
    BLTZ	= 247,
    BLTZ64	= 248,
    BLTZAL	= 249,
    BLTZALC	= 250,
    BLTZALL	= 251,
    BLTZALS_MM	= 252,
    BLTZAL_MM	= 253,
    BLTZC	= 254,
    BLTZL	= 255,
    BLTZ_MM	= 256,
    BMNZI_B	= 257,
    BMNZ_V	= 258,
    BMZI_B	= 259,
    BMZ_V	= 260,
    BNE	= 261,
    BNE64	= 262,
    BNEC	= 263,
    BNEGI_B	= 264,
    BNEGI_D	= 265,
    BNEGI_H	= 266,
    BNEGI_W	= 267,
    BNEG_B	= 268,
    BNEG_D	= 269,
    BNEG_H	= 270,
    BNEG_W	= 271,
    BNEL	= 272,
    BNEZ16_MM	= 273,
    BNEZALC	= 274,
    BNEZC	= 275,
    BNEZC_MM	= 276,
    BNE_MM	= 277,
    BNVC	= 278,
    BNZ_B	= 279,
    BNZ_D	= 280,
    BNZ_H	= 281,
    BNZ_V	= 282,
    BNZ_W	= 283,
    BOVC	= 284,
    BPOSGE32	= 285,
    BPOSGE32_PSEUDO	= 286,
    BREAK	= 287,
    BREAK16_MM	= 288,
    BREAK_MM	= 289,
    BSELI_B	= 290,
    BSEL_D_PSEUDO	= 291,
    BSEL_FD_PSEUDO	= 292,
    BSEL_FW_PSEUDO	= 293,
    BSEL_H_PSEUDO	= 294,
    BSEL_V	= 295,
    BSEL_W_PSEUDO	= 296,
    BSETI_B	= 297,
    BSETI_D	= 298,
    BSETI_H	= 299,
    BSETI_W	= 300,
    BSET_B	= 301,
    BSET_D	= 302,
    BSET_H	= 303,
    BSET_W	= 304,
    BZ_B	= 305,
    BZ_D	= 306,
    BZ_H	= 307,
    BZ_V	= 308,
    BZ_W	= 309,
    B_MM_Pseudo	= 310,
    BeqzRxImm16	= 311,
    BeqzRxImmX16	= 312,
    Bimm16	= 313,
    BimmX16	= 314,
    BnezRxImm16	= 315,
    BnezRxImmX16	= 316,
    Break16	= 317,
    Bteqz16	= 318,
    BteqzT8CmpX16	= 319,
    BteqzT8CmpiX16	= 320,
    BteqzT8SltX16	= 321,
    BteqzT8SltiX16	= 322,
    BteqzT8SltiuX16	= 323,
    BteqzT8SltuX16	= 324,
    BteqzX16	= 325,
    Btnez16	= 326,
    BtnezT8CmpX16	= 327,
    BtnezT8CmpiX16	= 328,
    BtnezT8SltX16	= 329,
    BtnezT8SltiX16	= 330,
    BtnezT8SltiuX16	= 331,
    BtnezT8SltuX16	= 332,
    BtnezX16	= 333,
    BuildPairF64	= 334,
    BuildPairF64_64	= 335,
    CACHE	= 336,
    CACHE_MM	= 337,
    CACHE_R6	= 338,
    CEIL_L_D64	= 339,
    CEIL_L_S	= 340,
    CEIL_W_D32	= 341,
    CEIL_W_D64	= 342,
    CEIL_W_MM	= 343,
    CEIL_W_S	= 344,
    CEIL_W_S_MM	= 345,
    CEQI_B	= 346,
    CEQI_D	= 347,
    CEQI_H	= 348,
    CEQI_W	= 349,
    CEQ_B	= 350,
    CEQ_D	= 351,
    CEQ_H	= 352,
    CEQ_W	= 353,
    CFC1	= 354,
    CFC1_MM	= 355,
    CFCMSA	= 356,
    CINS	= 357,
    CINS32	= 358,
    CLASS_D	= 359,
    CLASS_S	= 360,
    CLEI_S_B	= 361,
    CLEI_S_D	= 362,
    CLEI_S_H	= 363,
    CLEI_S_W	= 364,
    CLEI_U_B	= 365,
    CLEI_U_D	= 366,
    CLEI_U_H	= 367,
    CLEI_U_W	= 368,
    CLE_S_B	= 369,
    CLE_S_D	= 370,
    CLE_S_H	= 371,
    CLE_S_W	= 372,
    CLE_U_B	= 373,
    CLE_U_D	= 374,
    CLE_U_H	= 375,
    CLE_U_W	= 376,
    CLO	= 377,
    CLO_MM	= 378,
    CLO_R6	= 379,
    CLTI_S_B	= 380,
    CLTI_S_D	= 381,
    CLTI_S_H	= 382,
    CLTI_S_W	= 383,
    CLTI_U_B	= 384,
    CLTI_U_D	= 385,
    CLTI_U_H	= 386,
    CLTI_U_W	= 387,
    CLT_S_B	= 388,
    CLT_S_D	= 389,
    CLT_S_H	= 390,
    CLT_S_W	= 391,
    CLT_U_B	= 392,
    CLT_U_D	= 393,
    CLT_U_H	= 394,
    CLT_U_W	= 395,
    CLZ	= 396,
    CLZ_MM	= 397,
    CLZ_R6	= 398,
    CMPGDU_EQ_QB	= 399,
    CMPGDU_LE_QB	= 400,
    CMPGDU_LT_QB	= 401,
    CMPGU_EQ_QB	= 402,
    CMPGU_LE_QB	= 403,
    CMPGU_LT_QB	= 404,
    CMPU_EQ_QB	= 405,
    CMPU_LE_QB	= 406,
    CMPU_LT_QB	= 407,
    CMP_EQ_D	= 408,
    CMP_EQ_PH	= 409,
    CMP_EQ_S	= 410,
    CMP_F_D	= 411,
    CMP_F_S	= 412,
    CMP_LE_D	= 413,
    CMP_LE_PH	= 414,
    CMP_LE_S	= 415,
    CMP_LT_D	= 416,
    CMP_LT_PH	= 417,
    CMP_LT_S	= 418,
    CMP_SAF_D	= 419,
    CMP_SAF_S	= 420,
    CMP_SEQ_D	= 421,
    CMP_SEQ_S	= 422,
    CMP_SLE_D	= 423,
    CMP_SLE_S	= 424,
    CMP_SLT_D	= 425,
    CMP_SLT_S	= 426,
    CMP_SUEQ_D	= 427,
    CMP_SUEQ_S	= 428,
    CMP_SULE_D	= 429,
    CMP_SULE_S	= 430,
    CMP_SULT_D	= 431,
    CMP_SULT_S	= 432,
    CMP_SUN_D	= 433,
    CMP_SUN_S	= 434,
    CMP_UEQ_D	= 435,
    CMP_UEQ_S	= 436,
    CMP_ULE_D	= 437,
    CMP_ULE_S	= 438,
    CMP_ULT_D	= 439,
    CMP_ULT_S	= 440,
    CMP_UN_D	= 441,
    CMP_UN_S	= 442,
    CONSTPOOL_ENTRY	= 443,
    COPY_FD_PSEUDO	= 444,
    COPY_FW_PSEUDO	= 445,
    COPY_S_B	= 446,
    COPY_S_D	= 447,
    COPY_S_H	= 448,
    COPY_S_W	= 449,
    COPY_U_B	= 450,
    COPY_U_D	= 451,
    COPY_U_H	= 452,
    COPY_U_W	= 453,
    CTC1	= 454,
    CTC1_MM	= 455,
    CTCMSA	= 456,
    CVT_D32_S	= 457,
    CVT_D32_W	= 458,
    CVT_D32_W_MM	= 459,
    CVT_D64_L	= 460,
    CVT_D64_S	= 461,
    CVT_D64_W	= 462,
    CVT_D_S_MM	= 463,
    CVT_L_D64	= 464,
    CVT_L_D64_MM	= 465,
    CVT_L_S	= 466,
    CVT_L_S_MM	= 467,
    CVT_S_D32	= 468,
    CVT_S_D32_MM	= 469,
    CVT_S_D64	= 470,
    CVT_S_L	= 471,
    CVT_S_W	= 472,
    CVT_S_W_MM	= 473,
    CVT_W_D32	= 474,
    CVT_W_D64	= 475,
    CVT_W_MM	= 476,
    CVT_W_S	= 477,
    CVT_W_S_MM	= 478,
    C_EQ_D32	= 479,
    C_EQ_D64	= 480,
    C_EQ_S	= 481,
    C_F_D32	= 482,
    C_F_D64	= 483,
    C_F_S	= 484,
    C_LE_D32	= 485,
    C_LE_D64	= 486,
    C_LE_S	= 487,
    C_LT_D32	= 488,
    C_LT_D64	= 489,
    C_LT_S	= 490,
    C_NGE_D32	= 491,
    C_NGE_D64	= 492,
    C_NGE_S	= 493,
    C_NGLE_D32	= 494,
    C_NGLE_D64	= 495,
    C_NGLE_S	= 496,
    C_NGL_D32	= 497,
    C_NGL_D64	= 498,
    C_NGL_S	= 499,
    C_NGT_D32	= 500,
    C_NGT_D64	= 501,
    C_NGT_S	= 502,
    C_OLE_D32	= 503,
    C_OLE_D64	= 504,
    C_OLE_S	= 505,
    C_OLT_D32	= 506,
    C_OLT_D64	= 507,
    C_OLT_S	= 508,
    C_SEQ_D32	= 509,
    C_SEQ_D64	= 510,
    C_SEQ_S	= 511,
    C_SF_D32	= 512,
    C_SF_D64	= 513,
    C_SF_S	= 514,
    C_UEQ_D32	= 515,
    C_UEQ_D64	= 516,
    C_UEQ_S	= 517,
    C_ULE_D32	= 518,
    C_ULE_D64	= 519,
    C_ULE_S	= 520,
    C_ULT_D32	= 521,
    C_ULT_D64	= 522,
    C_ULT_S	= 523,
    C_UN_D32	= 524,
    C_UN_D64	= 525,
    C_UN_S	= 526,
    CmpRxRy16	= 527,
    CmpiRxImm16	= 528,
    CmpiRxImmX16	= 529,
    Constant32	= 530,
    DADD	= 531,
    DADDi	= 532,
    DADDiu	= 533,
    DADDu	= 534,
    DAHI	= 535,
    DALIGN	= 536,
    DATI	= 537,
    DAUI	= 538,
    DBITSWAP	= 539,
    DCLO	= 540,
    DCLO_R6	= 541,
    DCLZ	= 542,
    DCLZ_R6	= 543,
    DDIV	= 544,
    DDIVU	= 545,
    DERET	= 546,
    DERET_MM	= 547,
    DEXT	= 548,
    DEXTM	= 549,
    DEXTU	= 550,
    DI	= 551,
    DINS	= 552,
    DINSM	= 553,
    DINSU	= 554,
    DIV	= 555,
    DIVU	= 556,
    DIV_S_B	= 557,
    DIV_S_D	= 558,
    DIV_S_H	= 559,
    DIV_S_W	= 560,
    DIV_U_B	= 561,
    DIV_U_D	= 562,
    DIV_U_H	= 563,
    DIV_U_W	= 564,
    DI_MM	= 565,
    DLSA	= 566,
    DLSA_R6	= 567,
    DMFC0	= 568,
    DMFC1	= 569,
    DMFC2	= 570,
    DMOD	= 571,
    DMODU	= 572,
    DMTC0	= 573,
    DMTC1	= 574,
    DMTC2	= 575,
    DMUH	= 576,
    DMUHU	= 577,
    DMUL	= 578,
    DMULT	= 579,
    DMULTu	= 580,
    DMULU	= 581,
    DMUL_R6	= 582,
    DOTP_S_D	= 583,
    DOTP_S_H	= 584,
    DOTP_S_W	= 585,
    DOTP_U_D	= 586,
    DOTP_U_H	= 587,
    DOTP_U_W	= 588,
    DPADD_S_D	= 589,
    DPADD_S_H	= 590,
    DPADD_S_W	= 591,
    DPADD_U_D	= 592,
    DPADD_U_H	= 593,
    DPADD_U_W	= 594,
    DPAQX_SA_W_PH	= 595,
    DPAQX_S_W_PH	= 596,
    DPAQ_SA_L_W	= 597,
    DPAQ_S_W_PH	= 598,
    DPAU_H_QBL	= 599,
    DPAU_H_QBR	= 600,
    DPAX_W_PH	= 601,
    DPA_W_PH	= 602,
    DPOP	= 603,
    DPSQX_SA_W_PH	= 604,
    DPSQX_S_W_PH	= 605,
    DPSQ_SA_L_W	= 606,
    DPSQ_S_W_PH	= 607,
    DPSUB_S_D	= 608,
    DPSUB_S_H	= 609,
    DPSUB_S_W	= 610,
    DPSUB_U_D	= 611,
    DPSUB_U_H	= 612,
    DPSUB_U_W	= 613,
    DPSU_H_QBL	= 614,
    DPSU_H_QBR	= 615,
    DPSX_W_PH	= 616,
    DPS_W_PH	= 617,
    DROTR	= 618,
    DROTR32	= 619,
    DROTRV	= 620,
    DSBH	= 621,
    DSDIV	= 622,
    DSHD	= 623,
    DSLL	= 624,
    DSLL32	= 625,
    DSLL64_32	= 626,
    DSLLV	= 627,
    DSRA	= 628,
    DSRA32	= 629,
    DSRAV	= 630,
    DSRL	= 631,
    DSRL32	= 632,
    DSRLV	= 633,
    DSUB	= 634,
    DSUBu	= 635,
    DUDIV	= 636,
    DivRxRy16	= 637,
    DivuRxRy16	= 638,
    EHB	= 639,
    EHB_MM	= 640,
    EI	= 641,
    EI_MM	= 642,
    ERET	= 643,
    ERET_MM	= 644,
    EXT	= 645,
    EXTP	= 646,
    EXTPDP	= 647,
    EXTPDPV	= 648,
    EXTPV	= 649,
    EXTRV_RS_W	= 650,
    EXTRV_R_W	= 651,
    EXTRV_S_H	= 652,
    EXTRV_W	= 653,
    EXTR_RS_W	= 654,
    EXTR_R_W	= 655,
    EXTR_S_H	= 656,
    EXTR_W	= 657,
    EXTS	= 658,
    EXTS32	= 659,
    EXT_MM	= 660,
    ExtractElementF64	= 661,
    ExtractElementF64_64	= 662,
    FABS_D	= 663,
    FABS_D32	= 664,
    FABS_D64	= 665,
    FABS_MM	= 666,
    FABS_S	= 667,
    FABS_S_MM	= 668,
    FABS_W	= 669,
    FADD_D	= 670,
    FADD_D32	= 671,
    FADD_D64	= 672,
    FADD_MM	= 673,
    FADD_S	= 674,
    FADD_S_MM	= 675,
    FADD_W	= 676,
    FCAF_D	= 677,
    FCAF_W	= 678,
    FCEQ_D	= 679,
    FCEQ_W	= 680,
    FCLASS_D	= 681,
    FCLASS_W	= 682,
    FCLE_D	= 683,
    FCLE_W	= 684,
    FCLT_D	= 685,
    FCLT_W	= 686,
    FCMP_D32	= 687,
    FCMP_D32_MM	= 688,
    FCMP_D64	= 689,
    FCMP_S32	= 690,
    FCMP_S32_MM	= 691,
    FCNE_D	= 692,
    FCNE_W	= 693,
    FCOR_D	= 694,
    FCOR_W	= 695,
    FCUEQ_D	= 696,
    FCUEQ_W	= 697,
    FCULE_D	= 698,
    FCULE_W	= 699,
    FCULT_D	= 700,
    FCULT_W	= 701,
    FCUNE_D	= 702,
    FCUNE_W	= 703,
    FCUN_D	= 704,
    FCUN_W	= 705,
    FDIV_D	= 706,
    FDIV_D32	= 707,
    FDIV_D64	= 708,
    FDIV_MM	= 709,
    FDIV_S	= 710,
    FDIV_S_MM	= 711,
    FDIV_W	= 712,
    FEXDO_H	= 713,
    FEXDO_W	= 714,
    FEXP2_D	= 715,
    FEXP2_D_1_PSEUDO	= 716,
    FEXP2_W	= 717,
    FEXP2_W_1_PSEUDO	= 718,
    FEXUPL_D	= 719,
    FEXUPL_W	= 720,
    FEXUPR_D	= 721,
    FEXUPR_W	= 722,
    FFINT_S_D	= 723,
    FFINT_S_W	= 724,
    FFINT_U_D	= 725,
    FFINT_U_W	= 726,
    FFQL_D	= 727,
    FFQL_W	= 728,
    FFQR_D	= 729,
    FFQR_W	= 730,
    FILL_B	= 731,
    FILL_D	= 732,
    FILL_FD_PSEUDO	= 733,
    FILL_FW_PSEUDO	= 734,
    FILL_H	= 735,
    FILL_W	= 736,
    FLOG2_D	= 737,
    FLOG2_W	= 738,
    FLOOR_L_D64	= 739,
    FLOOR_L_S	= 740,
    FLOOR_W_D32	= 741,
    FLOOR_W_D64	= 742,
    FLOOR_W_MM	= 743,
    FLOOR_W_S	= 744,
    FLOOR_W_S_MM	= 745,
    FMADD_D	= 746,
    FMADD_W	= 747,
    FMAX_A_D	= 748,
    FMAX_A_W	= 749,
    FMAX_D	= 750,
    FMAX_W	= 751,
    FMIN_A_D	= 752,
    FMIN_A_W	= 753,
    FMIN_D	= 754,
    FMIN_W	= 755,
    FMOV_D32	= 756,
    FMOV_D32_MM	= 757,
    FMOV_D64	= 758,
    FMOV_S	= 759,
    FMOV_S_MM	= 760,
    FMSUB_D	= 761,
    FMSUB_W	= 762,
    FMUL_D	= 763,
    FMUL_D32	= 764,
    FMUL_D64	= 765,
    FMUL_MM	= 766,
    FMUL_S	= 767,
    FMUL_S_MM	= 768,
    FMUL_W	= 769,
    FNEG_D32	= 770,
    FNEG_D64	= 771,
    FNEG_MM	= 772,
    FNEG_S	= 773,
    FNEG_S_MM	= 774,
    FRCP_D	= 775,
    FRCP_W	= 776,
    FRINT_D	= 777,
    FRINT_W	= 778,
    FRSQRT_D	= 779,
    FRSQRT_W	= 780,
    FSAF_D	= 781,
    FSAF_W	= 782,
    FSEQ_D	= 783,
    FSEQ_W	= 784,
    FSLE_D	= 785,
    FSLE_W	= 786,
    FSLT_D	= 787,
    FSLT_W	= 788,
    FSNE_D	= 789,
    FSNE_W	= 790,
    FSOR_D	= 791,
    FSOR_W	= 792,
    FSQRT_D	= 793,
    FSQRT_D32	= 794,
    FSQRT_D64	= 795,
    FSQRT_MM	= 796,
    FSQRT_S	= 797,
    FSQRT_S_MM	= 798,
    FSQRT_W	= 799,
    FSUB_D	= 800,
    FSUB_D32	= 801,
    FSUB_D64	= 802,
    FSUB_MM	= 803,
    FSUB_S	= 804,
    FSUB_S_MM	= 805,
    FSUB_W	= 806,
    FSUEQ_D	= 807,
    FSUEQ_W	= 808,
    FSULE_D	= 809,
    FSULE_W	= 810,
    FSULT_D	= 811,
    FSULT_W	= 812,
    FSUNE_D	= 813,
    FSUNE_W	= 814,
    FSUN_D	= 815,
    FSUN_W	= 816,
    FTINT_S_D	= 817,
    FTINT_S_W	= 818,
    FTINT_U_D	= 819,
    FTINT_U_W	= 820,
    FTQ_H	= 821,
    FTQ_W	= 822,
    FTRUNC_S_D	= 823,
    FTRUNC_S_W	= 824,
    FTRUNC_U_D	= 825,
    FTRUNC_U_W	= 826,
    GotPrologue16	= 827,
    HADD_S_D	= 828,
    HADD_S_H	= 829,
    HADD_S_W	= 830,
    HADD_U_D	= 831,
    HADD_U_H	= 832,
    HADD_U_W	= 833,
    HSUB_S_D	= 834,
    HSUB_S_H	= 835,
    HSUB_S_W	= 836,
    HSUB_U_D	= 837,
    HSUB_U_H	= 838,
    HSUB_U_W	= 839,
    ILVEV_B	= 840,
    ILVEV_D	= 841,
    ILVEV_H	= 842,
    ILVEV_W	= 843,
    ILVL_B	= 844,
    ILVL_D	= 845,
    ILVL_H	= 846,
    ILVL_W	= 847,
    ILVOD_B	= 848,
    ILVOD_D	= 849,
    ILVOD_H	= 850,
    ILVOD_W	= 851,
    ILVR_B	= 852,
    ILVR_D	= 853,
    ILVR_H	= 854,
    ILVR_W	= 855,
    INS	= 856,
    INSERT_B	= 857,
    INSERT_B_VIDX_PSEUDO	= 858,
    INSERT_D	= 859,
    INSERT_D_VIDX_PSEUDO	= 860,
    INSERT_FD_PSEUDO	= 861,
    INSERT_FD_VIDX_PSEUDO	= 862,
    INSERT_FW_PSEUDO	= 863,
    INSERT_FW_VIDX_PSEUDO	= 864,
    INSERT_H	= 865,
    INSERT_H_VIDX_PSEUDO	= 866,
    INSERT_W	= 867,
    INSERT_W_VIDX_PSEUDO	= 868,
    INSV	= 869,
    INSVE_B	= 870,
    INSVE_D	= 871,
    INSVE_H	= 872,
    INSVE_W	= 873,
    INS_MM	= 874,
    J	= 875,
    JAL	= 876,
    JALR	= 877,
    JALR16_MM	= 878,
    JALR64	= 879,
    JALR64Pseudo	= 880,
    JALRPseudo	= 881,
    JALRS16_MM	= 882,
    JALRS_MM	= 883,
    JALR_HB	= 884,
    JALR_MM	= 885,
    JALS_MM	= 886,
    JALX	= 887,
    JAL_MM	= 888,
    JIALC	= 889,
    JIC	= 890,
    JR	= 891,
    JR16_MM	= 892,
    JR64	= 893,
    JRADDIUSP	= 894,
    JRC16_MM	= 895,
    JR_HB	= 896,
    JR_HB_R6	= 897,
    JR_MM	= 898,
    J_MM	= 899,
    Jal16	= 900,
    JalB16	= 901,
    JalOneReg	= 902,
    JalTwoReg	= 903,
    JrRa16	= 904,
    JrcRa16	= 905,
    JrcRx16	= 906,
    JumpLinkReg16	= 907,
    LB	= 908,
    LB64	= 909,
    LBU16_MM	= 910,
    LBUX	= 911,
    LB_MM	= 912,
    LBu	= 913,
    LBu64	= 914,
    LBu_MM	= 915,
    LD	= 916,
    LDC1	= 917,
    LDC164	= 918,
    LDC1_MM	= 919,
    LDC2	= 920,
    LDC2_R6	= 921,
    LDC3	= 922,
    LDI_B	= 923,
    LDI_D	= 924,
    LDI_H	= 925,
    LDI_W	= 926,
    LDL	= 927,
    LDPC	= 928,
    LDR	= 929,
    LDXC1	= 930,
    LDXC164	= 931,
    LD_B	= 932,
    LD_D	= 933,
    LD_H	= 934,
    LD_W	= 935,
    LEA_ADDiu	= 936,
    LEA_ADDiu64	= 937,
    LEA_ADDiu_MM	= 938,
    LH	= 939,
    LH64	= 940,
    LHU16_MM	= 941,
    LHX	= 942,
    LH_MM	= 943,
    LHu	= 944,
    LHu64	= 945,
    LHu_MM	= 946,
    LI16_MM	= 947,
    LL	= 948,
    LLD	= 949,
    LLD_R6	= 950,
    LL_MM	= 951,
    LL_R6	= 952,
    LOAD_ACC128	= 953,
    LOAD_ACC64	= 954,
    LOAD_ACC64DSP	= 955,
    LOAD_CCOND_DSP	= 956,
    LONG_BRANCH_ADDiu	= 957,
    LONG_BRANCH_DADDiu	= 958,
    LONG_BRANCH_LUi	= 959,
    LSA	= 960,
    LSA_R6	= 961,
    LUXC1	= 962,
    LUXC164	= 963,
    LUXC1_MM	= 964,
    LUi	= 965,
    LUi64	= 966,
    LUi_MM	= 967,
    LW	= 968,
    LW16_MM	= 969,
    LW64	= 970,
    LWC1	= 971,
    LWC1_MM	= 972,
    LWC2	= 973,
    LWC2_R6	= 974,
    LWC3	= 975,
    LWGP_MM	= 976,
    LWL	= 977,
    LWL64	= 978,
    LWL_MM	= 979,
    LWM16_MM	= 980,
    LWM32_MM	= 981,
    LWM_MM	= 982,
    LWPC	= 983,
    LWP_MM	= 984,
    LWR	= 985,
    LWR64	= 986,
    LWR_MM	= 987,
    LWSP_MM	= 988,
    LWUPC	= 989,
    LWU_MM	= 990,
    LWX	= 991,
    LWXC1	= 992,
    LWXC1_MM	= 993,
    LWXS_MM	= 994,
    LW_MM	= 995,
    LWu	= 996,
    LbRxRyOffMemX16	= 997,
    LbuRxRyOffMemX16	= 998,
    LhRxRyOffMemX16	= 999,
    LhuRxRyOffMemX16	= 1000,
    LiRxImm16	= 1001,
    LiRxImmAlignX16	= 1002,
    LiRxImmX16	= 1003,
    LoadAddr32Imm	= 1004,
    LoadAddr32Reg	= 1005,
    LoadImm32Reg	= 1006,
    LoadImm64Reg	= 1007,
    LwConstant32	= 1008,
    LwRxPcTcp16	= 1009,
    LwRxPcTcpX16	= 1010,
    LwRxRyOffMemX16	= 1011,
    LwRxSpImmX16	= 1012,
    MADD	= 1013,
    MADDF_D	= 1014,
    MADDF_S	= 1015,
    MADDR_Q_H	= 1016,
    MADDR_Q_W	= 1017,
    MADDU	= 1018,
    MADDU_DSP	= 1019,
    MADDU_MM	= 1020,
    MADDV_B	= 1021,
    MADDV_D	= 1022,
    MADDV_H	= 1023,
    MADDV_W	= 1024,
    MADD_D32	= 1025,
    MADD_D32_MM	= 1026,
    MADD_D64	= 1027,
    MADD_DSP	= 1028,
    MADD_MM	= 1029,
    MADD_Q_H	= 1030,
    MADD_Q_W	= 1031,
    MADD_S	= 1032,
    MADD_S_MM	= 1033,
    MAQ_SA_W_PHL	= 1034,
    MAQ_SA_W_PHR	= 1035,
    MAQ_S_W_PHL	= 1036,
    MAQ_S_W_PHR	= 1037,
    MAXA_D	= 1038,
    MAXA_S	= 1039,
    MAXI_S_B	= 1040,
    MAXI_S_D	= 1041,
    MAXI_S_H	= 1042,
    MAXI_S_W	= 1043,
    MAXI_U_B	= 1044,
    MAXI_U_D	= 1045,
    MAXI_U_H	= 1046,
    MAXI_U_W	= 1047,
    MAX_A_B	= 1048,
    MAX_A_D	= 1049,
    MAX_A_H	= 1050,
    MAX_A_W	= 1051,
    MAX_D	= 1052,
    MAX_S	= 1053,
    MAX_S_B	= 1054,
    MAX_S_D	= 1055,
    MAX_S_H	= 1056,
    MAX_S_W	= 1057,
    MAX_U_B	= 1058,
    MAX_U_D	= 1059,
    MAX_U_H	= 1060,
    MAX_U_W	= 1061,
    MFC0	= 1062,
    MFC1	= 1063,
    MFC1_MM	= 1064,
    MFC2	= 1065,
    MFHC1_D32	= 1066,
    MFHC1_D64	= 1067,
    MFHC1_MM	= 1068,
    MFHI	= 1069,
    MFHI16_MM	= 1070,
    MFHI64	= 1071,
    MFHI_DSP	= 1072,
    MFHI_MM	= 1073,
    MFLO	= 1074,
    MFLO16_MM	= 1075,
    MFLO64	= 1076,
    MFLO_DSP	= 1077,
    MFLO_MM	= 1078,
    MINA_D	= 1079,
    MINA_S	= 1080,
    MINI_S_B	= 1081,
    MINI_S_D	= 1082,
    MINI_S_H	= 1083,
    MINI_S_W	= 1084,
    MINI_U_B	= 1085,
    MINI_U_D	= 1086,
    MINI_U_H	= 1087,
    MINI_U_W	= 1088,
    MIN_A_B	= 1089,
    MIN_A_D	= 1090,
    MIN_A_H	= 1091,
    MIN_A_W	= 1092,
    MIN_D	= 1093,
    MIN_S	= 1094,
    MIN_S_B	= 1095,
    MIN_S_D	= 1096,
    MIN_S_H	= 1097,
    MIN_S_W	= 1098,
    MIN_U_B	= 1099,
    MIN_U_D	= 1100,
    MIN_U_H	= 1101,
    MIN_U_W	= 1102,
    MIPSeh_return32	= 1103,
    MIPSeh_return64	= 1104,
    MOD	= 1105,
    MODSUB	= 1106,
    MODU	= 1107,
    MOD_S_B	= 1108,
    MOD_S_D	= 1109,
    MOD_S_H	= 1110,
    MOD_S_W	= 1111,
    MOD_U_B	= 1112,
    MOD_U_D	= 1113,
    MOD_U_H	= 1114,
    MOD_U_W	= 1115,
    MOVE16_MM	= 1116,
    MOVEP_MM	= 1117,
    MOVE_V	= 1118,
    MOVF_D32	= 1119,
    MOVF_D32_MM	= 1120,
    MOVF_D64	= 1121,
    MOVF_I	= 1122,
    MOVF_I64	= 1123,
    MOVF_I_MM	= 1124,
    MOVF_S	= 1125,
    MOVF_S_MM	= 1126,
    MOVN_I64_D64	= 1127,
    MOVN_I64_I	= 1128,
    MOVN_I64_I64	= 1129,
    MOVN_I64_S	= 1130,
    MOVN_I_D32	= 1131,
    MOVN_I_D32_MM	= 1132,
    MOVN_I_D64	= 1133,
    MOVN_I_I	= 1134,
    MOVN_I_I64	= 1135,
    MOVN_I_MM	= 1136,
    MOVN_I_S	= 1137,
    MOVN_I_S_MM	= 1138,
    MOVT_D32	= 1139,
    MOVT_D32_MM	= 1140,
    MOVT_D64	= 1141,
    MOVT_I	= 1142,
    MOVT_I64	= 1143,
    MOVT_I_MM	= 1144,
    MOVT_S	= 1145,
    MOVT_S_MM	= 1146,
    MOVZ_I64_D64	= 1147,
    MOVZ_I64_I	= 1148,
    MOVZ_I64_I64	= 1149,
    MOVZ_I64_S	= 1150,
    MOVZ_I_D32	= 1151,
    MOVZ_I_D32_MM	= 1152,
    MOVZ_I_D64	= 1153,
    MOVZ_I_I	= 1154,
    MOVZ_I_I64	= 1155,
    MOVZ_I_MM	= 1156,
    MOVZ_I_S	= 1157,
    MOVZ_I_S_MM	= 1158,
    MSUB	= 1159,
    MSUBF_D	= 1160,
    MSUBF_S	= 1161,
    MSUBR_Q_H	= 1162,
    MSUBR_Q_W	= 1163,
    MSUBU	= 1164,
    MSUBU_DSP	= 1165,
    MSUBU_MM	= 1166,
    MSUBV_B	= 1167,
    MSUBV_D	= 1168,
    MSUBV_H	= 1169,
    MSUBV_W	= 1170,
    MSUB_D32	= 1171,
    MSUB_D32_MM	= 1172,
    MSUB_D64	= 1173,
    MSUB_DSP	= 1174,
    MSUB_MM	= 1175,
    MSUB_Q_H	= 1176,
    MSUB_Q_W	= 1177,
    MSUB_S	= 1178,
    MSUB_S_MM	= 1179,
    MTC0	= 1180,
    MTC1	= 1181,
    MTC1_MM	= 1182,
    MTC2	= 1183,
    MTHC1_D32	= 1184,
    MTHC1_D64	= 1185,
    MTHC1_MM	= 1186,
    MTHI	= 1187,
    MTHI64	= 1188,
    MTHI_DSP	= 1189,
    MTHI_MM	= 1190,
    MTHLIP	= 1191,
    MTLO	= 1192,
    MTLO64	= 1193,
    MTLO_DSP	= 1194,
    MTLO_MM	= 1195,
    MTM0	= 1196,
    MTM1	= 1197,
    MTM2	= 1198,
    MTP0	= 1199,
    MTP1	= 1200,
    MTP2	= 1201,
    MUH	= 1202,
    MUHU	= 1203,
    MUL	= 1204,
    MULEQ_S_W_PHL	= 1205,
    MULEQ_S_W_PHR	= 1206,
    MULEU_S_PH_QBL	= 1207,
    MULEU_S_PH_QBR	= 1208,
    MULQ_RS_PH	= 1209,
    MULQ_RS_W	= 1210,
    MULQ_S_PH	= 1211,
    MULQ_S_W	= 1212,
    MULR_Q_H	= 1213,
    MULR_Q_W	= 1214,
    MULSAQ_S_W_PH	= 1215,
    MULSA_W_PH	= 1216,
    MULT	= 1217,
    MULTU_DSP	= 1218,
    MULT_DSP	= 1219,
    MULT_MM	= 1220,
    MULTu	= 1221,
    MULTu_MM	= 1222,
    MULU	= 1223,
    MULV_B	= 1224,
    MULV_D	= 1225,
    MULV_H	= 1226,
    MULV_W	= 1227,
    MUL_MM	= 1228,
    MUL_PH	= 1229,
    MUL_Q_H	= 1230,
    MUL_Q_W	= 1231,
    MUL_R6	= 1232,
    MUL_S_PH	= 1233,
    Mfhi16	= 1234,
    Mflo16	= 1235,
    Move32R16	= 1236,
    MoveR3216	= 1237,
    MultRxRy16	= 1238,
    MultRxRyRz16	= 1239,
    MultuRxRy16	= 1240,
    MultuRxRyRz16	= 1241,
    NLOC_B	= 1242,
    NLOC_D	= 1243,
    NLOC_H	= 1244,
    NLOC_W	= 1245,
    NLZC_B	= 1246,
    NLZC_D	= 1247,
    NLZC_H	= 1248,
    NLZC_W	= 1249,
    NMADD_D32	= 1250,
    NMADD_D32_MM	= 1251,
    NMADD_D64	= 1252,
    NMADD_S	= 1253,
    NMADD_S_MM	= 1254,
    NMSUB_D32	= 1255,
    NMSUB_D32_MM	= 1256,
    NMSUB_D64	= 1257,
    NMSUB_S	= 1258,
    NMSUB_S_MM	= 1259,
    NOP	= 1260,
    NOR	= 1261,
    NOR64	= 1262,
    NORI_B	= 1263,
    NOR_MM	= 1264,
    NOR_V	= 1265,
    NOR_V_D_PSEUDO	= 1266,
    NOR_V_H_PSEUDO	= 1267,
    NOR_V_W_PSEUDO	= 1268,
    NOT16_MM	= 1269,
    NegRxRy16	= 1270,
    NotRxRy16	= 1271,
    OR	= 1272,
    OR16_MM	= 1273,
    OR64	= 1274,
    ORI_B	= 1275,
    OR_MM	= 1276,
    OR_V	= 1277,
    OR_V_D_PSEUDO	= 1278,
    OR_V_H_PSEUDO	= 1279,
    OR_V_W_PSEUDO	= 1280,
    ORi	= 1281,
    ORi64	= 1282,
    ORi_MM	= 1283,
    OrRxRxRy16	= 1284,
    PACKRL_PH	= 1285,
    PAUSE	= 1286,
    PAUSE_MM	= 1287,
    PCKEV_B	= 1288,
    PCKEV_D	= 1289,
    PCKEV_H	= 1290,
    PCKEV_W	= 1291,
    PCKOD_B	= 1292,
    PCKOD_D	= 1293,
    PCKOD_H	= 1294,
    PCKOD_W	= 1295,
    PCNT_B	= 1296,
    PCNT_D	= 1297,
    PCNT_H	= 1298,
    PCNT_W	= 1299,
    PICK_PH	= 1300,
    PICK_QB	= 1301,
    POP	= 1302,
    PRECEQU_PH_QBL	= 1303,
    PRECEQU_PH_QBLA	= 1304,
    PRECEQU_PH_QBR	= 1305,
    PRECEQU_PH_QBRA	= 1306,
    PRECEQ_W_PHL	= 1307,
    PRECEQ_W_PHR	= 1308,
    PRECEU_PH_QBL	= 1309,
    PRECEU_PH_QBLA	= 1310,
    PRECEU_PH_QBR	= 1311,
    PRECEU_PH_QBRA	= 1312,
    PRECRQU_S_QB_PH	= 1313,
    PRECRQ_PH_W	= 1314,
    PRECRQ_QB_PH	= 1315,
    PRECRQ_RS_PH_W	= 1316,
    PRECR_QB_PH	= 1317,
    PRECR_SRA_PH_W	= 1318,
    PRECR_SRA_R_PH_W	= 1319,
    PREF	= 1320,
    PREF_MM	= 1321,
    PREF_R6	= 1322,
    PREPEND	= 1323,
    PseudoCMPU_EQ_QB	= 1324,
    PseudoCMPU_LE_QB	= 1325,
    PseudoCMPU_LT_QB	= 1326,
    PseudoCMP_EQ_PH	= 1327,
    PseudoCMP_LE_PH	= 1328,
    PseudoCMP_LT_PH	= 1329,
    PseudoCVT_D32_W	= 1330,
    PseudoCVT_D64_L	= 1331,
    PseudoCVT_D64_W	= 1332,
    PseudoCVT_S_L	= 1333,
    PseudoCVT_S_W	= 1334,
    PseudoDMULT	= 1335,
    PseudoDMULTu	= 1336,
    PseudoDSDIV	= 1337,
    PseudoDUDIV	= 1338,
    PseudoIndirectBranch	= 1339,
    PseudoIndirectBranch64	= 1340,
    PseudoMADD	= 1341,
    PseudoMADDU	= 1342,
    PseudoMFHI	= 1343,
    PseudoMFHI64	= 1344,
    PseudoMFLO	= 1345,
    PseudoMFLO64	= 1346,
    PseudoMSUB	= 1347,
    PseudoMSUBU	= 1348,
    PseudoMTLOHI	= 1349,
    PseudoMTLOHI64	= 1350,
    PseudoMTLOHI_DSP	= 1351,
    PseudoMULT	= 1352,
    PseudoMULTu	= 1353,
    PseudoPICK_PH	= 1354,
    PseudoPICK_QB	= 1355,
    PseudoReturn	= 1356,
    PseudoReturn64	= 1357,
    PseudoSDIV	= 1358,
    PseudoSELECTFP_F_D32	= 1359,
    PseudoSELECTFP_F_D64	= 1360,
    PseudoSELECTFP_F_I	= 1361,
    PseudoSELECTFP_F_I64	= 1362,
    PseudoSELECTFP_F_S	= 1363,
    PseudoSELECTFP_T_D32	= 1364,
    PseudoSELECTFP_T_D64	= 1365,
    PseudoSELECTFP_T_I	= 1366,
    PseudoSELECTFP_T_I64	= 1367,
    PseudoSELECTFP_T_S	= 1368,
    PseudoSELECT_D32	= 1369,
    PseudoSELECT_D64	= 1370,
    PseudoSELECT_I	= 1371,
    PseudoSELECT_I64	= 1372,
    PseudoSELECT_S	= 1373,
    PseudoUDIV	= 1374,
    RADDU_W_QB	= 1375,
    RDDSP	= 1376,
    RDHWR	= 1377,
    RDHWR64	= 1378,
    RDHWR_MM	= 1379,
    REPLV_PH	= 1380,
    REPLV_QB	= 1381,
    REPL_PH	= 1382,
    REPL_QB	= 1383,
    RINT_D	= 1384,
    RINT_S	= 1385,
    ROTR	= 1386,
    ROTRV	= 1387,
    ROTRV_MM	= 1388,
    ROTR_MM	= 1389,
    ROUND_L_D64	= 1390,
    ROUND_L_S	= 1391,
    ROUND_W_D32	= 1392,
    ROUND_W_D64	= 1393,
    ROUND_W_MM	= 1394,
    ROUND_W_S	= 1395,
    ROUND_W_S_MM	= 1396,
    Restore16	= 1397,
    RestoreX16	= 1398,
    RetRA	= 1399,
    RetRA16	= 1400,
    SAT_S_B	= 1401,
    SAT_S_D	= 1402,
    SAT_S_H	= 1403,
    SAT_S_W	= 1404,
    SAT_U_B	= 1405,
    SAT_U_D	= 1406,
    SAT_U_H	= 1407,
    SAT_U_W	= 1408,
    SB	= 1409,
    SB16_MM	= 1410,
    SB64	= 1411,
    SB_MM	= 1412,
    SC	= 1413,
    SCD	= 1414,
    SCD_R6	= 1415,
    SC_MM	= 1416,
    SC_R6	= 1417,
    SD	= 1418,
    SDBBP	= 1419,
    SDBBP16_MM	= 1420,
    SDBBP_MM	= 1421,
    SDBBP_R6	= 1422,
    SDC1	= 1423,
    SDC164	= 1424,
    SDC1_MM	= 1425,
    SDC2	= 1426,
    SDC2_R6	= 1427,
    SDC3	= 1428,
    SDIV	= 1429,
    SDIV_MM	= 1430,
    SDL	= 1431,
    SDR	= 1432,
    SDXC1	= 1433,
    SDXC164	= 1434,
    SEB	= 1435,
    SEB64	= 1436,
    SEB_MM	= 1437,
    SEH	= 1438,
    SEH64	= 1439,
    SEH_MM	= 1440,
    SELEQZ	= 1441,
    SELEQZ64	= 1442,
    SELEQZ_D	= 1443,
    SELEQZ_S	= 1444,
    SELNEZ	= 1445,
    SELNEZ64	= 1446,
    SELNEZ_D	= 1447,
    SELNEZ_S	= 1448,
    SEL_D	= 1449,
    SEL_S	= 1450,
    SEQ	= 1451,
    SEQi	= 1452,
    SH	= 1453,
    SH16_MM	= 1454,
    SH64	= 1455,
    SHF_B	= 1456,
    SHF_H	= 1457,
    SHF_W	= 1458,
    SHILO	= 1459,
    SHILOV	= 1460,
    SHLLV_PH	= 1461,
    SHLLV_QB	= 1462,
    SHLLV_S_PH	= 1463,
    SHLLV_S_W	= 1464,
    SHLL_PH	= 1465,
    SHLL_QB	= 1466,
    SHLL_S_PH	= 1467,
    SHLL_S_W	= 1468,
    SHRAV_PH	= 1469,
    SHRAV_QB	= 1470,
    SHRAV_R_PH	= 1471,
    SHRAV_R_QB	= 1472,
    SHRAV_R_W	= 1473,
    SHRA_PH	= 1474,
    SHRA_QB	= 1475,
    SHRA_R_PH	= 1476,
    SHRA_R_QB	= 1477,
    SHRA_R_W	= 1478,
    SHRLV_PH	= 1479,
    SHRLV_QB	= 1480,
    SHRL_PH	= 1481,
    SHRL_QB	= 1482,
    SH_MM	= 1483,
    SLDI_B	= 1484,
    SLDI_D	= 1485,
    SLDI_H	= 1486,
    SLDI_W	= 1487,
    SLD_B	= 1488,
    SLD_D	= 1489,
    SLD_H	= 1490,
    SLD_W	= 1491,
    SLL	= 1492,
    SLL16_MM	= 1493,
    SLL64_32	= 1494,
    SLL64_64	= 1495,
    SLLI_B	= 1496,
    SLLI_D	= 1497,
    SLLI_H	= 1498,
    SLLI_W	= 1499,
    SLLV	= 1500,
    SLLV_MM	= 1501,
    SLL_B	= 1502,
    SLL_D	= 1503,
    SLL_H	= 1504,
    SLL_MM	= 1505,
    SLL_W	= 1506,
    SLT	= 1507,
    SLT64	= 1508,
    SLT_MM	= 1509,
    SLTi	= 1510,
    SLTi64	= 1511,
    SLTi_MM	= 1512,
    SLTiu	= 1513,
    SLTiu64	= 1514,
    SLTiu_MM	= 1515,
    SLTu	= 1516,
    SLTu64	= 1517,
    SLTu_MM	= 1518,
    SNE	= 1519,
    SNEi	= 1520,
    SNZ_B_PSEUDO	= 1521,
    SNZ_D_PSEUDO	= 1522,
    SNZ_H_PSEUDO	= 1523,
    SNZ_V_PSEUDO	= 1524,
    SNZ_W_PSEUDO	= 1525,
    SPLATI_B	= 1526,
    SPLATI_D	= 1527,
    SPLATI_H	= 1528,
    SPLATI_W	= 1529,
    SPLAT_B	= 1530,
    SPLAT_D	= 1531,
    SPLAT_H	= 1532,
    SPLAT_W	= 1533,
    SRA	= 1534,
    SRAI_B	= 1535,
    SRAI_D	= 1536,
    SRAI_H	= 1537,
    SRAI_W	= 1538,
    SRARI_B	= 1539,
    SRARI_D	= 1540,
    SRARI_H	= 1541,
    SRARI_W	= 1542,
    SRAR_B	= 1543,
    SRAR_D	= 1544,
    SRAR_H	= 1545,
    SRAR_W	= 1546,
    SRAV	= 1547,
    SRAV_MM	= 1548,
    SRA_B	= 1549,
    SRA_D	= 1550,
    SRA_H	= 1551,
    SRA_MM	= 1552,
    SRA_W	= 1553,
    SRL	= 1554,
    SRL16_MM	= 1555,
    SRLI_B	= 1556,
    SRLI_D	= 1557,
    SRLI_H	= 1558,
    SRLI_W	= 1559,
    SRLRI_B	= 1560,
    SRLRI_D	= 1561,
    SRLRI_H	= 1562,
    SRLRI_W	= 1563,
    SRLR_B	= 1564,
    SRLR_D	= 1565,
    SRLR_H	= 1566,
    SRLR_W	= 1567,
    SRLV	= 1568,
    SRLV_MM	= 1569,
    SRL_B	= 1570,
    SRL_D	= 1571,
    SRL_H	= 1572,
    SRL_MM	= 1573,
    SRL_W	= 1574,
    SSNOP	= 1575,
    SSNOP_MM	= 1576,
    STORE_ACC128	= 1577,
    STORE_ACC64	= 1578,
    STORE_ACC64DSP	= 1579,
    STORE_CCOND_DSP	= 1580,
    ST_B	= 1581,
    ST_D	= 1582,
    ST_H	= 1583,
    ST_W	= 1584,
    SUB	= 1585,
    SUBQH_PH	= 1586,
    SUBQH_R_PH	= 1587,
    SUBQH_R_W	= 1588,
    SUBQH_W	= 1589,
    SUBQ_PH	= 1590,
    SUBQ_S_PH	= 1591,
    SUBQ_S_W	= 1592,
    SUBSUS_U_B	= 1593,
    SUBSUS_U_D	= 1594,
    SUBSUS_U_H	= 1595,
    SUBSUS_U_W	= 1596,
    SUBSUU_S_B	= 1597,
    SUBSUU_S_D	= 1598,
    SUBSUU_S_H	= 1599,
    SUBSUU_S_W	= 1600,
    SUBS_S_B	= 1601,
    SUBS_S_D	= 1602,
    SUBS_S_H	= 1603,
    SUBS_S_W	= 1604,
    SUBS_U_B	= 1605,
    SUBS_U_D	= 1606,
    SUBS_U_H	= 1607,
    SUBS_U_W	= 1608,
    SUBU16_MM	= 1609,
    SUBUH_QB	= 1610,
    SUBUH_R_QB	= 1611,
    SUBU_PH	= 1612,
    SUBU_QB	= 1613,
    SUBU_S_PH	= 1614,
    SUBU_S_QB	= 1615,
    SUBVI_B	= 1616,
    SUBVI_D	= 1617,
    SUBVI_H	= 1618,
    SUBVI_W	= 1619,
    SUBV_B	= 1620,
    SUBV_D	= 1621,
    SUBV_H	= 1622,
    SUBV_W	= 1623,
    SUB_MM	= 1624,
    SUBu	= 1625,
    SUBu_MM	= 1626,
    SUXC1	= 1627,
    SUXC164	= 1628,
    SUXC1_MM	= 1629,
    SW	= 1630,
    SW16_MM	= 1631,
    SW64	= 1632,
    SWC1	= 1633,
    SWC1_MM	= 1634,
    SWC2	= 1635,
    SWC2_R6	= 1636,
    SWC3	= 1637,
    SWL	= 1638,
    SWL64	= 1639,
    SWL_MM	= 1640,
    SWM16_MM	= 1641,
    SWM32_MM	= 1642,
    SWM_MM	= 1643,
    SWP_MM	= 1644,
    SWR	= 1645,
    SWR64	= 1646,
    SWR_MM	= 1647,
    SWSP_MM	= 1648,
    SWXC1	= 1649,
    SWXC1_MM	= 1650,
    SW_MM	= 1651,
    SYNC	= 1652,
    SYNCI	= 1653,
    SYNC_MM	= 1654,
    SYSCALL	= 1655,
    SYSCALL_MM	= 1656,
    SZ_B_PSEUDO	= 1657,
    SZ_D_PSEUDO	= 1658,
    SZ_H_PSEUDO	= 1659,
    SZ_V_PSEUDO	= 1660,
    SZ_W_PSEUDO	= 1661,
    Save16	= 1662,
    SaveX16	= 1663,
    SbRxRyOffMemX16	= 1664,
    SebRx16	= 1665,
    SehRx16	= 1666,
    SelBeqZ	= 1667,
    SelBneZ	= 1668,
    SelTBteqZCmp	= 1669,
    SelTBteqZCmpi	= 1670,
    SelTBteqZSlt	= 1671,
    SelTBteqZSlti	= 1672,
    SelTBteqZSltiu	= 1673,
    SelTBteqZSltu	= 1674,
    SelTBtneZCmp	= 1675,
    SelTBtneZCmpi	= 1676,
    SelTBtneZSlt	= 1677,
    SelTBtneZSlti	= 1678,
    SelTBtneZSltiu	= 1679,
    SelTBtneZSltu	= 1680,
    ShRxRyOffMemX16	= 1681,
    SllX16	= 1682,
    SllvRxRy16	= 1683,
    SltCCRxRy16	= 1684,
    SltRxRy16	= 1685,
    SltiCCRxImmX16	= 1686,
    SltiRxImm16	= 1687,
    SltiRxImmX16	= 1688,
    SltiuCCRxImmX16	= 1689,
    SltiuRxImm16	= 1690,
    SltiuRxImmX16	= 1691,
    SltuCCRxRy16	= 1692,
    SltuRxRy16	= 1693,
    SltuRxRyRz16	= 1694,
    SraX16	= 1695,
    SravRxRy16	= 1696,
    SrlX16	= 1697,
    SrlvRxRy16	= 1698,
    SubuRxRyRz16	= 1699,
    SwRxRyOffMemX16	= 1700,
    SwRxSpImmX16	= 1701,
    TAILCALL	= 1702,
    TAILCALL64_R	= 1703,
    TAILCALL_R	= 1704,
    TEQ	= 1705,
    TEQI	= 1706,
    TEQI_MM	= 1707,
    TEQ_MM	= 1708,
    TGE	= 1709,
    TGEI	= 1710,
    TGEIU	= 1711,
    TGEIU_MM	= 1712,
    TGEI_MM	= 1713,
    TGEU	= 1714,
    TGEU_MM	= 1715,
    TGE_MM	= 1716,
    TLBP	= 1717,
    TLBP_MM	= 1718,
    TLBR	= 1719,
    TLBR_MM	= 1720,
    TLBWI	= 1721,
    TLBWI_MM	= 1722,
    TLBWR	= 1723,
    TLBWR_MM	= 1724,
    TLT	= 1725,
    TLTI	= 1726,
    TLTIU_MM	= 1727,
    TLTI_MM	= 1728,
    TLTU	= 1729,
    TLTU_MM	= 1730,
    TLT_MM	= 1731,
    TNE	= 1732,
    TNEI	= 1733,
    TNEI_MM	= 1734,
    TNE_MM	= 1735,
    TRAP	= 1736,
    TRUNC_L_D64	= 1737,
    TRUNC_L_S	= 1738,
    TRUNC_W_D32	= 1739,
    TRUNC_W_D64	= 1740,
    TRUNC_W_MM	= 1741,
    TRUNC_W_S	= 1742,
    TRUNC_W_S_MM	= 1743,
    TTLTIU	= 1744,
    UDIV	= 1745,
    UDIV_MM	= 1746,
    V3MULU	= 1747,
    VMM0	= 1748,
    VMULU	= 1749,
    VSHF_B	= 1750,
    VSHF_D	= 1751,
    VSHF_H	= 1752,
    VSHF_W	= 1753,
    WAIT	= 1754,
    WAIT_MM	= 1755,
    WRDSP	= 1756,
    WSBH	= 1757,
    WSBH_MM	= 1758,
    XOR	= 1759,
    XOR16_MM	= 1760,
    XOR64	= 1761,
    XORI_B	= 1762,
    XOR_MM	= 1763,
    XOR_V	= 1764,
    XOR_V_D_PSEUDO	= 1765,
    XOR_V_H_PSEUDO	= 1766,
    XOR_V_W_PSEUDO	= 1767,
    XORi	= 1768,
    XORi64	= 1769,
    XORi_MM	= 1770,
    XorRxRxRy16	= 1771,
    INSTRUCTION_LIST_END = 1772
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    II_ADDU	= 1,
    II_ADDIU	= 2,
    IIPseudo	= 3,
    II_AND	= 4,
    II_ANDI	= 5,
    IIAlu	= 6,
    IIBranch	= 7,
    II_BADDU	= 8,
    II_CEIL	= 9,
    II_CFC1	= 10,
    II_CLO	= 11,
    II_CLZ	= 12,
    II_CTC1	= 13,
    II_CVT	= 14,
    II_C_CC_D	= 15,
    II_C_CC_S	= 16,
    II_DADD	= 17,
    II_DADDIU	= 18,
    II_DADDU	= 19,
    II_DMFC1	= 20,
    II_DMTC1	= 21,
    II_DMUL	= 22,
    II_DMULT	= 23,
    II_DMULTU	= 24,
    II_POP	= 25,
    II_DROTR	= 26,
    II_DROTR32	= 27,
    II_DROTRV	= 28,
    II_DDIV	= 29,
    II_DSLL	= 30,
    II_DSLL32	= 31,
    II_DSLLV	= 32,
    II_DSRA	= 33,
    II_DSRA32	= 34,
    II_DSRAV	= 35,
    II_DSRL	= 36,
    II_DSRL32	= 37,
    II_DSRLV	= 38,
    II_DSUB	= 39,
    II_DSUBU	= 40,
    II_DDIVU	= 41,
    II_ABS	= 42,
    II_ADD_D	= 43,
    II_ADD_S	= 44,
    II_DIV_D	= 45,
    II_DIV_S	= 46,
    II_FLOOR	= 47,
    II_MOV_D	= 48,
    II_MOV_S	= 49,
    II_MUL_D	= 50,
    II_MUL_S	= 51,
    II_NEG	= 52,
    II_SQRT_D	= 53,
    II_SQRT_S	= 54,
    II_SUB_D	= 55,
    II_SUB_S	= 56,
    II_LB	= 57,
    II_LBU	= 58,
    II_LD	= 59,
    II_LDC1	= 60,
    II_LDL	= 61,
    II_LDR	= 62,
    II_LDXC1	= 63,
    II_LH	= 64,
    II_LHU	= 65,
    II_LUXC1	= 66,
    II_LUI	= 67,
    II_LW	= 68,
    II_LWC1	= 69,
    II_LWL	= 70,
    II_LWR	= 71,
    II_LWU	= 72,
    II_LWXC1	= 73,
    II_MADD	= 74,
    II_MADDU	= 75,
    II_MADD_D	= 76,
    II_MADD_S	= 77,
    II_MFC1	= 78,
    II_MFHC1	= 79,
    II_MFHI_MFLO	= 80,
    II_MOVF_D	= 81,
    II_MOVF	= 82,
    II_MOVF_S	= 83,
    II_MOVN_D	= 84,
    II_MOVN	= 85,
    II_MOVN_S	= 86,
    II_MOVT_D	= 87,
    II_MOVT	= 88,
    II_MOVT_S	= 89,
    II_MOVZ_D	= 90,
    II_MOVZ	= 91,
    II_MOVZ_S	= 92,
    II_MSUB	= 93,
    II_MSUBU	= 94,
    II_MSUB_D	= 95,
    II_MSUB_S	= 96,
    II_MTC1	= 97,
    II_MTHC1	= 98,
    II_MTHI_MTLO	= 99,
    II_MUL	= 100,
    II_MULT	= 101,
    II_MULTU	= 102,
    II_NMADD_D	= 103,
    II_NMADD_S	= 104,
    II_NMSUB_D	= 105,
    II_NMSUB_S	= 106,
    II_NOR	= 107,
    II_OR	= 108,
    II_ORI	= 109,
    II_DIV	= 110,
    II_DIVU	= 111,
    II_RDHWR	= 112,
    II_ROTR	= 113,
    II_ROTRV	= 114,
    II_ROUND	= 115,
    II_RESTORE	= 116,
    II_SB	= 117,
    II_SD	= 118,
    II_SDC1	= 119,
    II_SDL	= 120,
    II_SDR	= 121,
    II_SDXC1	= 122,
    II_SEB	= 123,
    II_SEH	= 124,
    II_SEQ_SNE	= 125,
    II_SEQI_SNEI	= 126,
    II_SH	= 127,
    II_SLL	= 128,
    II_SLLV	= 129,
    II_SLT_SLTU	= 130,
    II_SLTI_SLTIU	= 131,
    II_SRA	= 132,
    II_SRAV	= 133,
    II_SRL	= 134,
    II_SRLV	= 135,
    II_SUBU	= 136,
    II_SUXC1	= 137,
    II_SW	= 138,
    II_SWC1	= 139,
    II_SWL	= 140,
    II_SWR	= 141,
    II_SWXC1	= 142,
    II_SAVE	= 143,
    II_TRUNC	= 144,
    II_XOR	= 145,
    II_XORI	= 146,
    SCHED_LIST_END = 147
  };
} // End Sched namespace
} // End Mips namespace
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Descriptors                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { Mips::DSPOutFlag20, 0 };
static const uint16_t ImplicitList2[] = { Mips::DSPCarry, 0 };
static const uint16_t ImplicitList3[] = { Mips::SP, 0 };
static const uint16_t ImplicitList4[] = { Mips::AT, 0 };
static const uint16_t ImplicitList5[] = { Mips::RA, 0 };
static const uint16_t ImplicitList6[] = { Mips::DSPPos, 0 };
static const uint16_t ImplicitList7[] = { Mips::T8, 0 };
static const uint16_t ImplicitList8[] = { Mips::DSPCCond, 0 };
static const uint16_t ImplicitList9[] = { Mips::HI0, Mips::LO0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList10[] = { Mips::HI0_64, Mips::LO0_64, 0 };
static const uint16_t ImplicitList11[] = { Mips::DSPOutFlag16_19, 0 };
static const uint16_t ImplicitList12[] = { Mips::HI0, Mips::LO0, 0 };
static const uint16_t ImplicitList13[] = { Mips::DSPEFI, 0 };
static const uint16_t ImplicitList14[] = { Mips::DSPPos, Mips::DSPEFI, 0 };
static const uint16_t ImplicitList15[] = { Mips::DSPOutFlag23, 0 };
static const uint16_t ImplicitList16[] = { Mips::FCC0, 0 };
static const uint16_t ImplicitList17[] = { Mips::DSPPos, Mips::DSPSCount, 0 };
static const uint16_t ImplicitList18[] = { Mips::AC0, 0 };
static const uint16_t ImplicitList19[] = { Mips::AC0_64, 0 };
static const uint16_t ImplicitList20[] = { Mips::V0, Mips::V1, 0 };
static const uint16_t ImplicitList21[] = { Mips::HI0, 0 };
static const uint16_t ImplicitList22[] = { Mips::HI0_64, 0 };
static const uint16_t ImplicitList23[] = { Mips::LO0, 0 };
static const uint16_t ImplicitList24[] = { Mips::LO0_64, 0 };
static const uint16_t ImplicitList25[] = { Mips::MPL0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList26[] = { Mips::MPL1, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList27[] = { Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList28[] = { Mips::P0, 0 };
static const uint16_t ImplicitList29[] = { Mips::P1, 0 };
static const uint16_t ImplicitList30[] = { Mips::P2, 0 };
static const uint16_t ImplicitList31[] = { Mips::DSPOutFlag21, 0 };
static const uint16_t ImplicitList32[] = { Mips::DSPOutFlag22, 0 };
static const uint16_t ImplicitList33[] = { Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList34[] = { Mips::MPL1, Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo32[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo35[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo100[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo109[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo136[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { Mips::COP3RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo165[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo168[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo170[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo171[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo172[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo173[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo174[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo175[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo176[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo177[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo178[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo179[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo180[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo181[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo182[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo183[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo184[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo185[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo186[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo187[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo188[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo189[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo190[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo191[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo192[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPUSPRegRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo193[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo194[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo195[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo196[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo197[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo198[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo199[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo200[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo201[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo202[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPRMM16MovePRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16MovePRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo203[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo204[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo205[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo206[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo207[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo208[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo209[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo210[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo211[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo212[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo213[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo214[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo215[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo216[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo217[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo218[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo219[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo220[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo221[] = { { Mips::HI32DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo222[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo223[] = { { Mips::LO32DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo224[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo225[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo226[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo227[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo228[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo229[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo230[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo231[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo232[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo233[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo234[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo235[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo236[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo237[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo238[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo239[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo240[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo241[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo242[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo243[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo244[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo245[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo246[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo247[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo248[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo249[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo250[] = { { Mips::GPRMM16ZeroRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo251[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo252[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo253[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo254[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo255[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo256[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo257[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo258[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo259[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo260[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo261[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo262[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo263[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo264[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo265[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo266[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo267[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo268[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo269[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo270[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo271[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo272[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo273[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo274[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo275[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo276[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo277[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo278[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc MipsInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4,0,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6,0,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8,0,nullptr },  // Inst #17 = STACKMAP
  { 18,	6,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9,0,nullptr },  // Inst #18 = PATCHPOINT
  { 19,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #19 = LOAD_STACK_GUARD
  { 20,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #20 = STATEPOINT
  { 21,	2,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #21 = FRAME_ALLOC
  { 22,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #22 = ABSQ_S_PH
  { 23,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #23 = ABSQ_S_QB
  { 24,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #24 = ABSQ_S_W
  { 25,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #25 = ADD
  { 26,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #26 = ADDIUPC
  { 27,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #27 = ADDIUPC_MM
  { 28,	2,	1,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #28 = ADDIUR1SP_MM
  { 29,	3,	1,	0,	2,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #29 = ADDIUR2_MM
  { 30,	3,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #30 = ADDIUS5_MM
  { 31,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #31 = ADDIUSP_MM
  { 32,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #32 = ADDQH_PH
  { 33,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #33 = ADDQH_R_PH
  { 34,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #34 = ADDQH_R_W
  { 35,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #35 = ADDQH_W
  { 36,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #36 = ADDQ_PH
  { 37,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #37 = ADDQ_S_PH
  { 38,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #38 = ADDQ_S_W
  { 39,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo14,0,nullptr },  // Inst #39 = ADDSC
  { 40,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #40 = ADDS_A_B
  { 41,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #41 = ADDS_A_D
  { 42,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #42 = ADDS_A_H
  { 43,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #43 = ADDS_A_W
  { 44,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #44 = ADDS_S_B
  { 45,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #45 = ADDS_S_D
  { 46,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #46 = ADDS_S_H
  { 47,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #47 = ADDS_S_W
  { 48,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #48 = ADDS_U_B
  { 49,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #49 = ADDS_U_D
  { 50,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #50 = ADDS_U_H
  { 51,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #51 = ADDS_U_W
  { 52,	3,	1,	1,	2,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #52 = ADDU16_MM
  { 53,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #53 = ADDUH_QB
  { 54,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #54 = ADDUH_R_QB
  { 55,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #55 = ADDU_PH
  { 56,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #56 = ADDU_QB
  { 57,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #57 = ADDU_S_PH
  { 58,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #58 = ADDU_S_QB
  { 59,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #59 = ADDVI_B
  { 60,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #60 = ADDVI_D
  { 61,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #61 = ADDVI_H
  { 62,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #62 = ADDVI_W
  { 63,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #63 = ADDV_B
  { 64,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #64 = ADDV_D
  { 65,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #65 = ADDV_H
  { 66,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #66 = ADDV_W
  { 67,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList2, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #67 = ADDWC
  { 68,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #68 = ADD_A_B
  { 69,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #69 = ADD_A_D
  { 70,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #70 = ADD_A_H
  { 71,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #71 = ADD_A_W
  { 72,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #72 = ADD_MM
  { 73,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #73 = ADDi
  { 74,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #74 = ADDi_MM
  { 75,	3,	1,	2,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #75 = ADDiu
  { 76,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #76 = ADDiu_MM
  { 77,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #77 = ADDu
  { 78,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #78 = ADDu_MM
  { 79,	1,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo2,0,nullptr },  // Inst #79 = ADJCALLSTACKDOWN
  { 80,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo8,0,nullptr },  // Inst #80 = ADJCALLSTACKUP
  { 81,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #81 = ALIGN
  { 82,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #82 = ALUIPC
  { 83,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #83 = AND
  { 84,	3,	1,	4,	2,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #84 = AND16_MM
  { 85,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #85 = AND64
  { 86,	3,	1,	4,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #86 = ANDI16_MM
  { 87,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #87 = ANDI_B
  { 88,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #88 = AND_MM
  { 89,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #89 = AND_V
  { 90,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #90 = AND_V_D_PSEUDO
  { 91,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #91 = AND_V_H_PSEUDO
  { 92,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #92 = AND_V_W_PSEUDO
  { 93,	3,	1,	5,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #93 = ANDi
  { 94,	3,	1,	4,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #94 = ANDi64
  { 95,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #95 = ANDi_MM
  { 96,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #96 = APPEND
  { 97,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #97 = ASUB_S_B
  { 98,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #98 = ASUB_S_D
  { 99,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #99 = ASUB_S_H
  { 100,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #100 = ASUB_S_W
  { 101,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #101 = ASUB_U_B
  { 102,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #102 = ASUB_U_D
  { 103,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #103 = ASUB_U_H
  { 104,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #104 = ASUB_U_W
  { 105,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #105 = ATOMIC_CMP_SWAP_I16
  { 106,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #106 = ATOMIC_CMP_SWAP_I32
  { 107,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #107 = ATOMIC_CMP_SWAP_I64
  { 108,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #108 = ATOMIC_CMP_SWAP_I8
  { 109,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #109 = ATOMIC_LOAD_ADD_I16
  { 110,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #110 = ATOMIC_LOAD_ADD_I32
  { 111,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #111 = ATOMIC_LOAD_ADD_I64
  { 112,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #112 = ATOMIC_LOAD_ADD_I8
  { 113,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #113 = ATOMIC_LOAD_AND_I16
  { 114,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #114 = ATOMIC_LOAD_AND_I32
  { 115,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #115 = ATOMIC_LOAD_AND_I64
  { 116,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #116 = ATOMIC_LOAD_AND_I8
  { 117,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #117 = ATOMIC_LOAD_NAND_I16
  { 118,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #118 = ATOMIC_LOAD_NAND_I32
  { 119,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #119 = ATOMIC_LOAD_NAND_I64
  { 120,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #120 = ATOMIC_LOAD_NAND_I8
  { 121,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #121 = ATOMIC_LOAD_OR_I16
  { 122,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #122 = ATOMIC_LOAD_OR_I32
  { 123,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #123 = ATOMIC_LOAD_OR_I64
  { 124,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #124 = ATOMIC_LOAD_OR_I8
  { 125,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #125 = ATOMIC_LOAD_SUB_I16
  { 126,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #126 = ATOMIC_LOAD_SUB_I32
  { 127,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #127 = ATOMIC_LOAD_SUB_I64
  { 128,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #128 = ATOMIC_LOAD_SUB_I8
  { 129,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #129 = ATOMIC_LOAD_XOR_I16
  { 130,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #130 = ATOMIC_LOAD_XOR_I32
  { 131,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #131 = ATOMIC_LOAD_XOR_I64
  { 132,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #132 = ATOMIC_LOAD_XOR_I8
  { 133,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #133 = ATOMIC_SWAP_I16
  { 134,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #134 = ATOMIC_SWAP_I32
  { 135,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #135 = ATOMIC_SWAP_I64
  { 136,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #136 = ATOMIC_SWAP_I8
  { 137,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #137 = AUI
  { 138,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #138 = AUIPC
  { 139,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #139 = AVER_S_B
  { 140,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #140 = AVER_S_D
  { 141,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #141 = AVER_S_H
  { 142,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #142 = AVER_S_W
  { 143,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #143 = AVER_U_B
  { 144,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #144 = AVER_U_D
  { 145,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #145 = AVER_U_H
  { 146,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #146 = AVER_U_W
  { 147,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #147 = AVE_S_B
  { 148,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #148 = AVE_S_D
  { 149,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #149 = AVE_S_H
  { 150,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #150 = AVE_S_W
  { 151,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #151 = AVE_U_B
  { 152,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #152 = AVE_U_D
  { 153,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #153 = AVE_U_H
  { 154,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #154 = AVE_U_W
  { 155,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #155 = AddiuRxImmX16
  { 156,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #156 = AddiuRxPcImmX16
  { 157,	3,	1,	6,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #157 = AddiuRxRxImm16
  { 158,	3,	1,	6,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo40,0,nullptr },  // Inst #158 = AddiuRxRxImmX16
  { 159,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo41,0,nullptr },  // Inst #159 = AddiuRxRyOffMemX16
  { 160,	1,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #160 = AddiuSpImm16
  { 161,	1,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #161 = AddiuSpImmX16
  { 162,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #162 = AdduRxRyRz16
  { 163,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #163 = AndRxRxRy16
  { 164,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #164 = B
  { 165,	1,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #165 = B16_MM
  { 166,	3,	1,	8,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #166 = BADDu
  { 167,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #167 = BAL
  { 168,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #168 = BALC
  { 169,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #169 = BALIGN
  { 170,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #170 = BAL_BR
  { 171,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #171 = BBIT0
  { 172,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #172 = BBIT032
  { 173,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #173 = BBIT1
  { 174,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #174 = BBIT132
  { 175,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo44,0,nullptr },  // Inst #175 = BC
  { 176,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #176 = BC1EQZ
  { 177,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #177 = BC1F
  { 178,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #178 = BC1FL
  { 179,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #179 = BC1F_MM
  { 180,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #180 = BC1NEZ
  { 181,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #181 = BC1T
  { 182,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #182 = BC1TL
  { 183,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo47,0,nullptr },  // Inst #183 = BC1T_MM
  { 184,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #184 = BC2EQZ
  { 185,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #185 = BC2NEZ
  { 186,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #186 = BCLRI_B
  { 187,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #187 = BCLRI_D
  { 188,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #188 = BCLRI_H
  { 189,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #189 = BCLRI_W
  { 190,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #190 = BCLR_B
  { 191,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #191 = BCLR_D
  { 192,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #192 = BCLR_H
  { 193,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #193 = BCLR_W
  { 194,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #194 = BEQ
  { 195,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo50,0,nullptr },  // Inst #195 = BEQ64
  { 196,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #196 = BEQC
  { 197,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #197 = BEQL
  { 198,	2,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51,0,nullptr },  // Inst #198 = BEQZ16_MM
  { 199,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #199 = BEQZALC
  { 200,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #200 = BEQZC
  { 201,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #201 = BEQZC_MM
  { 202,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #202 = BEQ_MM
  { 203,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #203 = BGEC
  { 204,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #204 = BGEUC
  { 205,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #205 = BGEZ
  { 206,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53,0,nullptr },  // Inst #206 = BGEZ64
  { 207,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #207 = BGEZAL
  { 208,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #208 = BGEZALC
  { 209,	2,	0,	7,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #209 = BGEZALL
  { 210,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #210 = BGEZALS_MM
  { 211,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #211 = BGEZAL_MM
  { 212,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #212 = BGEZC
  { 213,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #213 = BGEZL
  { 214,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #214 = BGEZ_MM
  { 215,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #215 = BGTZ
  { 216,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53,0,nullptr },  // Inst #216 = BGTZ64
  { 217,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #217 = BGTZALC
  { 218,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #218 = BGTZC
  { 219,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #219 = BGTZL
  { 220,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #220 = BGTZ_MM
  { 221,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #221 = BINSLI_B
  { 222,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #222 = BINSLI_D
  { 223,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #223 = BINSLI_H
  { 224,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #224 = BINSLI_W
  { 225,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #225 = BINSL_B
  { 226,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #226 = BINSL_D
  { 227,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #227 = BINSL_H
  { 228,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #228 = BINSL_W
  { 229,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #229 = BINSRI_B
  { 230,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #230 = BINSRI_D
  { 231,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #231 = BINSRI_H
  { 232,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #232 = BINSRI_W
  { 233,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #233 = BINSR_B
  { 234,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #234 = BINSR_D
  { 235,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #235 = BINSR_H
  { 236,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #236 = BINSR_W
  { 237,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #237 = BITREV
  { 238,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #238 = BITSWAP
  { 239,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #239 = BLEZ
  { 240,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53,0,nullptr },  // Inst #240 = BLEZ64
  { 241,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #241 = BLEZALC
  { 242,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #242 = BLEZC
  { 243,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #243 = BLEZL
  { 244,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #244 = BLEZ_MM
  { 245,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #245 = BLTC
  { 246,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #246 = BLTUC
  { 247,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #247 = BLTZ
  { 248,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53,0,nullptr },  // Inst #248 = BLTZ64
  { 249,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #249 = BLTZAL
  { 250,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #250 = BLTZALC
  { 251,	2,	0,	7,	4,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #251 = BLTZALL
  { 252,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #252 = BLTZALS_MM
  { 253,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #253 = BLTZAL_MM
  { 254,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #254 = BLTZC
  { 255,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #255 = BLTZL
  { 256,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #256 = BLTZ_MM
  { 257,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #257 = BMNZI_B
  { 258,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #258 = BMNZ_V
  { 259,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #259 = BMZI_B
  { 260,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #260 = BMZ_V
  { 261,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #261 = BNE
  { 262,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo50,0,nullptr },  // Inst #262 = BNE64
  { 263,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #263 = BNEC
  { 264,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #264 = BNEGI_B
  { 265,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #265 = BNEGI_D
  { 266,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #266 = BNEGI_H
  { 267,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #267 = BNEGI_W
  { 268,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #268 = BNEG_B
  { 269,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #269 = BNEG_D
  { 270,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #270 = BNEG_H
  { 271,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #271 = BNEG_W
  { 272,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #272 = BNEL
  { 273,	2,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51,0,nullptr },  // Inst #273 = BNEZ16_MM
  { 274,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52,0,nullptr },  // Inst #274 = BNEZALC
  { 275,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #275 = BNEZC
  { 276,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52,0,nullptr },  // Inst #276 = BNEZC_MM
  { 277,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #277 = BNE_MM
  { 278,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #278 = BNVC
  { 279,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62,0,nullptr },  // Inst #279 = BNZ_B
  { 280,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo63,0,nullptr },  // Inst #280 = BNZ_D
  { 281,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo64,0,nullptr },  // Inst #281 = BNZ_H
  { 282,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62,0,nullptr },  // Inst #282 = BNZ_V
  { 283,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo65,0,nullptr },  // Inst #283 = BNZ_W
  { 284,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49,0,nullptr },  // Inst #284 = BOVC
  { 285,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo44,0,nullptr },  // Inst #285 = BPOSGE32
  { 286,	1,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList6, nullptr, OperandInfo66,0,nullptr },  // Inst #286 = BPOSGE32_PSEUDO
  { 287,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #287 = BREAK
  { 288,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #288 = BREAK16_MM
  { 289,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #289 = BREAK_MM
  { 290,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #290 = BSELI_B
  { 291,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #291 = BSEL_D_PSEUDO
  { 292,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #292 = BSEL_FD_PSEUDO
  { 293,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #293 = BSEL_FW_PSEUDO
  { 294,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #294 = BSEL_H_PSEUDO
  { 295,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #295 = BSEL_V
  { 296,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #296 = BSEL_W_PSEUDO
  { 297,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #297 = BSETI_B
  { 298,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #298 = BSETI_D
  { 299,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #299 = BSETI_H
  { 300,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #300 = BSETI_W
  { 301,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #301 = BSET_B
  { 302,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #302 = BSET_D
  { 303,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #303 = BSET_H
  { 304,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #304 = BSET_W
  { 305,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62,0,nullptr },  // Inst #305 = BZ_B
  { 306,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo63,0,nullptr },  // Inst #306 = BZ_D
  { 307,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo64,0,nullptr },  // Inst #307 = BZ_H
  { 308,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62,0,nullptr },  // Inst #308 = BZ_V
  { 309,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo65,0,nullptr },  // Inst #309 = BZ_W
  { 310,	1,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44,0,nullptr },  // Inst #310 = B_MM_Pseudo
  { 311,	2,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #311 = BeqzRxImm16
  { 312,	2,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #312 = BeqzRxImmX16
  { 313,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo44,0,nullptr },  // Inst #313 = Bimm16
  { 314,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44,0,nullptr },  // Inst #314 = BimmX16
  { 315,	2,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #315 = BnezRxImm16
  { 316,	2,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #316 = BnezRxImmX16
  { 317,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #317 = Break16
  { 318,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #318 = Bteqz16
  { 319,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #319 = BteqzT8CmpX16
  { 320,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #320 = BteqzT8CmpiX16
  { 321,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #321 = BteqzT8SltX16
  { 322,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #322 = BteqzT8SltiX16
  { 323,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #323 = BteqzT8SltiuX16
  { 324,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #324 = BteqzT8SltuX16
  { 325,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #325 = BteqzX16
  { 326,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #326 = Btnez16
  { 327,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #327 = BtnezT8CmpX16
  { 328,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #328 = BtnezT8CmpiX16
  { 329,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #329 = BtnezT8SltX16
  { 330,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #330 = BtnezT8SltiX16
  { 331,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #331 = BtnezT8SltiuX16
  { 332,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #332 = BtnezT8SltuX16
  { 333,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #333 = BtnezX16
  { 334,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #334 = BuildPairF64
  { 335,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #335 = BuildPairF64_64
  { 336,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #336 = CACHE
  { 337,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #337 = CACHE_MM
  { 338,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #338 = CACHE_R6
  { 339,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #339 = CEIL_L_D64
  { 340,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #340 = CEIL_L_S
  { 341,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #341 = CEIL_W_D32
  { 342,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #342 = CEIL_W_D64
  { 343,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #343 = CEIL_W_MM
  { 344,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #344 = CEIL_W_S
  { 345,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #345 = CEIL_W_S_MM
  { 346,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #346 = CEQI_B
  { 347,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #347 = CEQI_D
  { 348,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #348 = CEQI_H
  { 349,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #349 = CEQI_W
  { 350,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #350 = CEQ_B
  { 351,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #351 = CEQ_D
  { 352,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #352 = CEQ_H
  { 353,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #353 = CEQ_W
  { 354,	2,	1,	10,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #354 = CFC1
  { 355,	2,	1,	10,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #355 = CFC1_MM
  { 356,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #356 = CFCMSA
  { 357,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #357 = CINS
  { 358,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #358 = CINS32
  { 359,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #359 = CLASS_D
  { 360,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #360 = CLASS_S
  { 361,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #361 = CLEI_S_B
  { 362,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #362 = CLEI_S_D
  { 363,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #363 = CLEI_S_H
  { 364,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #364 = CLEI_S_W
  { 365,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #365 = CLEI_U_B
  { 366,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #366 = CLEI_U_D
  { 367,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #367 = CLEI_U_H
  { 368,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #368 = CLEI_U_W
  { 369,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #369 = CLE_S_B
  { 370,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #370 = CLE_S_D
  { 371,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #371 = CLE_S_H
  { 372,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #372 = CLE_S_W
  { 373,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #373 = CLE_U_B
  { 374,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #374 = CLE_U_D
  { 375,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #375 = CLE_U_H
  { 376,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #376 = CLE_U_W
  { 377,	2,	1,	11,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #377 = CLO
  { 378,	2,	1,	11,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #378 = CLO_MM
  { 379,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #379 = CLO_R6
  { 380,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #380 = CLTI_S_B
  { 381,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #381 = CLTI_S_D
  { 382,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #382 = CLTI_S_H
  { 383,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #383 = CLTI_S_W
  { 384,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #384 = CLTI_U_B
  { 385,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #385 = CLTI_U_D
  { 386,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #386 = CLTI_U_H
  { 387,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #387 = CLTI_U_W
  { 388,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #388 = CLT_S_B
  { 389,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #389 = CLT_S_D
  { 390,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #390 = CLT_S_H
  { 391,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #391 = CLT_S_W
  { 392,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #392 = CLT_U_B
  { 393,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #393 = CLT_U_D
  { 394,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #394 = CLT_U_H
  { 395,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #395 = CLT_U_W
  { 396,	2,	1,	12,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #396 = CLZ
  { 397,	2,	1,	12,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #397 = CLZ_MM
  { 398,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #398 = CLZ_R6
  { 399,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo82,0,nullptr },  // Inst #399 = CMPGDU_EQ_QB
  { 400,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo82,0,nullptr },  // Inst #400 = CMPGDU_LE_QB
  { 401,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo82,0,nullptr },  // Inst #401 = CMPGDU_LT_QB
  { 402,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo82,0,nullptr },  // Inst #402 = CMPGU_EQ_QB
  { 403,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo82,0,nullptr },  // Inst #403 = CMPGU_LE_QB
  { 404,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo82,0,nullptr },  // Inst #404 = CMPGU_LT_QB
  { 405,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12,0,nullptr },  // Inst #405 = CMPU_EQ_QB
  { 406,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12,0,nullptr },  // Inst #406 = CMPU_LE_QB
  { 407,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12,0,nullptr },  // Inst #407 = CMPU_LT_QB
  { 408,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #408 = CMP_EQ_D
  { 409,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12,0,nullptr },  // Inst #409 = CMP_EQ_PH
  { 410,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #410 = CMP_EQ_S
  { 411,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #411 = CMP_F_D
  { 412,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #412 = CMP_F_S
  { 413,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #413 = CMP_LE_D
  { 414,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12,0,nullptr },  // Inst #414 = CMP_LE_PH
  { 415,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #415 = CMP_LE_S
  { 416,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #416 = CMP_LT_D
  { 417,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12,0,nullptr },  // Inst #417 = CMP_LT_PH
  { 418,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #418 = CMP_LT_S
  { 419,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #419 = CMP_SAF_D
  { 420,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #420 = CMP_SAF_S
  { 421,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #421 = CMP_SEQ_D
  { 422,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #422 = CMP_SEQ_S
  { 423,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #423 = CMP_SLE_D
  { 424,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #424 = CMP_SLE_S
  { 425,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #425 = CMP_SLT_D
  { 426,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #426 = CMP_SLT_S
  { 427,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #427 = CMP_SUEQ_D
  { 428,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #428 = CMP_SUEQ_S
  { 429,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #429 = CMP_SULE_D
  { 430,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #430 = CMP_SULE_S
  { 431,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #431 = CMP_SULT_D
  { 432,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #432 = CMP_SULT_S
  { 433,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #433 = CMP_SUN_D
  { 434,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #434 = CMP_SUN_S
  { 435,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #435 = CMP_UEQ_D
  { 436,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #436 = CMP_UEQ_S
  { 437,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #437 = CMP_ULE_D
  { 438,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #438 = CMP_ULE_S
  { 439,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #439 = CMP_ULT_D
  { 440,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #440 = CMP_ULT_S
  { 441,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #441 = CMP_UN_D
  { 442,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #442 = CMP_UN_S
  { 443,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #443 = CONSTPOOL_ENTRY
  { 444,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #444 = COPY_FD_PSEUDO
  { 445,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo86,0,nullptr },  // Inst #445 = COPY_FW_PSEUDO
  { 446,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #446 = COPY_S_B
  { 447,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #447 = COPY_S_D
  { 448,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #448 = COPY_S_H
  { 449,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #449 = COPY_S_W
  { 450,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #450 = COPY_U_B
  { 451,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #451 = COPY_U_D
  { 452,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #452 = COPY_U_H
  { 453,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #453 = COPY_U_W
  { 454,	2,	1,	13,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo91,0,nullptr },  // Inst #454 = CTC1
  { 455,	2,	1,	13,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo91,0,nullptr },  // Inst #455 = CTC1_MM
  { 456,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #456 = CTCMSA
  { 457,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #457 = CVT_D32_S
  { 458,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #458 = CVT_D32_W
  { 459,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #459 = CVT_D32_W_MM
  { 460,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #460 = CVT_D64_L
  { 461,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #461 = CVT_D64_S
  { 462,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #462 = CVT_D64_W
  { 463,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #463 = CVT_D_S_MM
  { 464,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #464 = CVT_L_D64
  { 465,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #465 = CVT_L_D64_MM
  { 466,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #466 = CVT_L_S
  { 467,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #467 = CVT_L_S_MM
  { 468,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #468 = CVT_S_D32
  { 469,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #469 = CVT_S_D32_MM
  { 470,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #470 = CVT_S_D64
  { 471,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #471 = CVT_S_L
  { 472,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #472 = CVT_S_W
  { 473,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #473 = CVT_S_W_MM
  { 474,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #474 = CVT_W_D32
  { 475,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #475 = CVT_W_D64
  { 476,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #476 = CVT_W_MM
  { 477,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #477 = CVT_W_S
  { 478,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #478 = CVT_W_S_MM
  { 479,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #479 = C_EQ_D32
  { 480,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #480 = C_EQ_D64
  { 481,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #481 = C_EQ_S
  { 482,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #482 = C_F_D32
  { 483,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #483 = C_F_D64
  { 484,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #484 = C_F_S
  { 485,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #485 = C_LE_D32
  { 486,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #486 = C_LE_D64
  { 487,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #487 = C_LE_S
  { 488,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #488 = C_LT_D32
  { 489,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #489 = C_LT_D64
  { 490,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #490 = C_LT_S
  { 491,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #491 = C_NGE_D32
  { 492,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #492 = C_NGE_D64
  { 493,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #493 = C_NGE_S
  { 494,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #494 = C_NGLE_D32
  { 495,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #495 = C_NGLE_D64
  { 496,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #496 = C_NGLE_S
  { 497,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #497 = C_NGL_D32
  { 498,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #498 = C_NGL_D64
  { 499,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #499 = C_NGL_S
  { 500,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #500 = C_NGT_D32
  { 501,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #501 = C_NGT_D64
  { 502,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #502 = C_NGT_S
  { 503,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #503 = C_OLE_D32
  { 504,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #504 = C_OLE_D64
  { 505,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #505 = C_OLE_S
  { 506,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #506 = C_OLT_D32
  { 507,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #507 = C_OLT_D64
  { 508,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #508 = C_OLT_S
  { 509,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #509 = C_SEQ_D32
  { 510,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #510 = C_SEQ_D64
  { 511,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #511 = C_SEQ_S
  { 512,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #512 = C_SF_D32
  { 513,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #513 = C_SF_D64
  { 514,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #514 = C_SF_S
  { 515,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #515 = C_UEQ_D32
  { 516,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #516 = C_UEQ_D64
  { 517,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #517 = C_UEQ_S
  { 518,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #518 = C_ULE_D32
  { 519,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #519 = C_ULE_D64
  { 520,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #520 = C_ULE_S
  { 521,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #521 = C_ULT_D32
  { 522,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #522 = C_ULT_D64
  { 523,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #523 = C_ULT_S
  { 524,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #524 = C_UN_D32
  { 525,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #525 = C_UN_D64
  { 526,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #526 = C_UN_S
  { 527,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo95,0,nullptr },  // Inst #527 = CmpRxRy16
  { 528,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39,0,nullptr },  // Inst #528 = CmpiRxImm16
  { 529,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39,0,nullptr },  // Inst #529 = CmpiRxImmX16
  { 530,	1,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #530 = Constant32
  { 531,	3,	1,	17,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #531 = DADD
  { 532,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #532 = DADDi
  { 533,	3,	1,	18,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #533 = DADDiu
  { 534,	3,	1,	19,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #534 = DADDu
  { 535,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #535 = DAHI
  { 536,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #536 = DALIGN
  { 537,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #537 = DATI
  { 538,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #538 = DAUI
  { 539,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #539 = DBITSWAP
  { 540,	2,	1,	11,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #540 = DCLO
  { 541,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #541 = DCLO_R6
  { 542,	2,	1,	12,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #542 = DCLZ
  { 543,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #543 = DCLZ_R6
  { 544,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #544 = DDIV
  { 545,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #545 = DDIVU
  { 546,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #546 = DERET
  { 547,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #547 = DERET_MM
  { 548,	4,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #548 = DEXT
  { 549,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #549 = DEXTM
  { 550,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #550 = DEXTU
  { 551,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #551 = DI
  { 552,	5,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #552 = DINS
  { 553,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #553 = DINSM
  { 554,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #554 = DINSU
  { 555,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #555 = DIV
  { 556,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #556 = DIVU
  { 557,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #557 = DIV_S_B
  { 558,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #558 = DIV_S_D
  { 559,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #559 = DIV_S_H
  { 560,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #560 = DIV_S_W
  { 561,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #561 = DIV_U_B
  { 562,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #562 = DIV_U_D
  { 563,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #563 = DIV_U_H
  { 564,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #564 = DIV_U_W
  { 565,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #565 = DI_MM
  { 566,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #566 = DLSA
  { 567,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #567 = DLSA_R6
  { 568,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #568 = DMFC0
  { 569,	2,	1,	20,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #569 = DMFC1
  { 570,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #570 = DMFC2
  { 571,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #571 = DMOD
  { 572,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #572 = DMODU
  { 573,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #573 = DMTC0
  { 574,	2,	1,	21,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #574 = DMTC1
  { 575,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #575 = DMTC2
  { 576,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #576 = DMUH
  { 577,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #577 = DMUHU
  { 578,	3,	1,	22,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList9, OperandInfo32,0,nullptr },  // Inst #578 = DMUL
  { 579,	2,	0,	23,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo98,0,nullptr },  // Inst #579 = DMULT
  { 580,	2,	0,	24,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo98,0,nullptr },  // Inst #580 = DMULTu
  { 581,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #581 = DMULU
  { 582,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #582 = DMUL_R6
  { 583,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #583 = DOTP_S_D
  { 584,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #584 = DOTP_S_H
  { 585,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #585 = DOTP_S_W
  { 586,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #586 = DOTP_U_D
  { 587,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #587 = DOTP_U_H
  { 588,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #588 = DOTP_U_W
  { 589,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #589 = DPADD_S_D
  { 590,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #590 = DPADD_S_H
  { 591,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #591 = DPADD_S_W
  { 592,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #592 = DPADD_U_D
  { 593,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #593 = DPADD_U_H
  { 594,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #594 = DPADD_U_W
  { 595,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #595 = DPAQX_SA_W_PH
  { 596,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #596 = DPAQX_S_W_PH
  { 597,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #597 = DPAQ_SA_L_W
  { 598,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #598 = DPAQ_S_W_PH
  { 599,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #599 = DPAU_H_QBL
  { 600,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #600 = DPAU_H_QBR
  { 601,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #601 = DPAX_W_PH
  { 602,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #602 = DPA_W_PH
  { 603,	2,	1,	25,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #603 = DPOP
  { 604,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #604 = DPSQX_SA_W_PH
  { 605,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #605 = DPSQX_S_W_PH
  { 606,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #606 = DPSQ_SA_L_W
  { 607,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #607 = DPSQ_S_W_PH
  { 608,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #608 = DPSUB_S_D
  { 609,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #609 = DPSUB_S_H
  { 610,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #610 = DPSUB_S_W
  { 611,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #611 = DPSUB_U_D
  { 612,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #612 = DPSUB_U_H
  { 613,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #613 = DPSUB_U_W
  { 614,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #614 = DPSU_H_QBL
  { 615,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #615 = DPSU_H_QBR
  { 616,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #616 = DPSX_W_PH
  { 617,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #617 = DPS_W_PH
  { 618,	3,	1,	26,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #618 = DROTR
  { 619,	3,	1,	27,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #619 = DROTR32
  { 620,	3,	1,	28,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #620 = DROTRV
  { 621,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #621 = DSBH
  { 622,	2,	0,	29,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo98,0,nullptr },  // Inst #622 = DSDIV
  { 623,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #623 = DSHD
  { 624,	3,	1,	30,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #624 = DSLL
  { 625,	3,	1,	31,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #625 = DSLL32
  { 626,	2,	1,	30,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #626 = DSLL64_32
  { 627,	3,	1,	32,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #627 = DSLLV
  { 628,	3,	1,	33,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #628 = DSRA
  { 629,	3,	1,	34,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #629 = DSRA32
  { 630,	3,	1,	35,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #630 = DSRAV
  { 631,	3,	1,	36,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #631 = DSRL
  { 632,	3,	1,	37,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #632 = DSRL32
  { 633,	3,	1,	38,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #633 = DSRLV
  { 634,	3,	1,	39,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #634 = DSUB
  { 635,	3,	1,	40,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #635 = DSUBu
  { 636,	2,	0,	41,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo98,0,nullptr },  // Inst #636 = DUDIV
  { 637,	2,	0,	6,	2,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo95,0,nullptr },  // Inst #637 = DivRxRy16
  { 638,	2,	0,	6,	2,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo95,0,nullptr },  // Inst #638 = DivuRxRy16
  { 639,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #639 = EHB
  { 640,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #640 = EHB_MM
  { 641,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #641 = EI
  { 642,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #642 = EI_MM
  { 643,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #643 = ERET
  { 644,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #644 = ERET_MM
  { 645,	4,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #645 = EXT
  { 646,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo112,0,nullptr },  // Inst #646 = EXTP
  { 647,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo112,0,nullptr },  // Inst #647 = EXTPDP
  { 648,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo113,0,nullptr },  // Inst #648 = EXTPDPV
  { 649,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo113,0,nullptr },  // Inst #649 = EXTPV
  { 650,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo113,0,nullptr },  // Inst #650 = EXTRV_RS_W
  { 651,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo113,0,nullptr },  // Inst #651 = EXTRV_R_W
  { 652,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo113,0,nullptr },  // Inst #652 = EXTRV_S_H
  { 653,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo113,0,nullptr },  // Inst #653 = EXTRV_W
  { 654,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo112,0,nullptr },  // Inst #654 = EXTR_RS_W
  { 655,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo112,0,nullptr },  // Inst #655 = EXTR_R_W
  { 656,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo112,0,nullptr },  // Inst #656 = EXTR_S_H
  { 657,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo112,0,nullptr },  // Inst #657 = EXTR_W
  { 658,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #658 = EXTS
  { 659,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #659 = EXTS32
  { 660,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #660 = EXT_MM
  { 661,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo114,0,nullptr },  // Inst #661 = ExtractElementF64
  { 662,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #662 = ExtractElementF64_64
  { 663,	2,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #663 = FABS_D
  { 664,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #664 = FABS_D32
  { 665,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #665 = FABS_D64
  { 666,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #666 = FABS_MM
  { 667,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #667 = FABS_S
  { 668,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #668 = FABS_S_MM
  { 669,	2,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #669 = FABS_W
  { 670,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #670 = FADD_D
  { 671,	3,	1,	43,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #671 = FADD_D32
  { 672,	3,	1,	43,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #672 = FADD_D64
  { 673,	3,	1,	43,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #673 = FADD_MM
  { 674,	3,	1,	44,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #674 = FADD_S
  { 675,	3,	1,	44,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #675 = FADD_S_MM
  { 676,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #676 = FADD_W
  { 677,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #677 = FCAF_D
  { 678,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #678 = FCAF_W
  { 679,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #679 = FCEQ_D
  { 680,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #680 = FCEQ_W
  { 681,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #681 = FCLASS_D
  { 682,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #682 = FCLASS_W
  { 683,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #683 = FCLE_D
  { 684,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #684 = FCLE_W
  { 685,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #685 = FCLT_D
  { 686,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #686 = FCLT_W
  { 687,	3,	0,	15,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo121,0,nullptr },  // Inst #687 = FCMP_D32
  { 688,	3,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo121,0,nullptr },  // Inst #688 = FCMP_D32_MM
  { 689,	3,	0,	15,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo122,0,nullptr },  // Inst #689 = FCMP_D64
  { 690,	3,	0,	16,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo123,0,nullptr },  // Inst #690 = FCMP_S32
  { 691,	3,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo123,0,nullptr },  // Inst #691 = FCMP_S32_MM
  { 692,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #692 = FCNE_D
  { 693,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #693 = FCNE_W
  { 694,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #694 = FCOR_D
  { 695,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #695 = FCOR_W
  { 696,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #696 = FCUEQ_D
  { 697,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #697 = FCUEQ_W
  { 698,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #698 = FCULE_D
  { 699,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #699 = FCULE_W
  { 700,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #700 = FCULT_D
  { 701,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #701 = FCULT_W
  { 702,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #702 = FCUNE_D
  { 703,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #703 = FCUNE_W
  { 704,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #704 = FCUN_D
  { 705,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #705 = FCUN_W
  { 706,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #706 = FDIV_D
  { 707,	3,	1,	45,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #707 = FDIV_D32
  { 708,	3,	1,	45,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #708 = FDIV_D64
  { 709,	3,	1,	45,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #709 = FDIV_MM
  { 710,	3,	1,	46,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #710 = FDIV_S
  { 711,	3,	1,	46,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #711 = FDIV_S_MM
  { 712,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #712 = FDIV_W
  { 713,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo124,0,nullptr },  // Inst #713 = FEXDO_H
  { 714,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo125,0,nullptr },  // Inst #714 = FEXDO_W
  { 715,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #715 = FEXP2_D
  { 716,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #716 = FEXP2_D_1_PSEUDO
  { 717,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #717 = FEXP2_W
  { 718,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #718 = FEXP2_W_1_PSEUDO
  { 719,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo126,0,nullptr },  // Inst #719 = FEXUPL_D
  { 720,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo127,0,nullptr },  // Inst #720 = FEXUPL_W
  { 721,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo126,0,nullptr },  // Inst #721 = FEXUPR_D
  { 722,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo127,0,nullptr },  // Inst #722 = FEXUPR_W
  { 723,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #723 = FFINT_S_D
  { 724,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #724 = FFINT_S_W
  { 725,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #725 = FFINT_U_D
  { 726,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #726 = FFINT_U_W
  { 727,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo126,0,nullptr },  // Inst #727 = FFQL_D
  { 728,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo127,0,nullptr },  // Inst #728 = FFQL_W
  { 729,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo126,0,nullptr },  // Inst #729 = FFQR_D
  { 730,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo127,0,nullptr },  // Inst #730 = FFQR_W
  { 731,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo128,0,nullptr },  // Inst #731 = FILL_B
  { 732,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo129,0,nullptr },  // Inst #732 = FILL_D
  { 733,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo130,0,nullptr },  // Inst #733 = FILL_FD_PSEUDO
  { 734,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo131,0,nullptr },  // Inst #734 = FILL_FW_PSEUDO
  { 735,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo132,0,nullptr },  // Inst #735 = FILL_H
  { 736,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo133,0,nullptr },  // Inst #736 = FILL_W
  { 737,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #737 = FLOG2_D
  { 738,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #738 = FLOG2_W
  { 739,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #739 = FLOOR_L_D64
  { 740,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #740 = FLOOR_L_S
  { 741,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #741 = FLOOR_W_D32
  { 742,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #742 = FLOOR_W_D64
  { 743,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #743 = FLOOR_W_MM
  { 744,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #744 = FLOOR_W_S
  { 745,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #745 = FLOOR_W_S_MM
  { 746,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #746 = FMADD_D
  { 747,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #747 = FMADD_W
  { 748,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #748 = FMAX_A_D
  { 749,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #749 = FMAX_A_W
  { 750,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #750 = FMAX_D
  { 751,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #751 = FMAX_W
  { 752,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #752 = FMIN_A_D
  { 753,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #753 = FMIN_A_W
  { 754,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #754 = FMIN_D
  { 755,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #755 = FMIN_W
  { 756,	2,	1,	48,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #756 = FMOV_D32
  { 757,	2,	1,	48,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #757 = FMOV_D32_MM
  { 758,	2,	1,	48,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #758 = FMOV_D64
  { 759,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #759 = FMOV_S
  { 760,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #760 = FMOV_S_MM
  { 761,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #761 = FMSUB_D
  { 762,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #762 = FMSUB_W
  { 763,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #763 = FMUL_D
  { 764,	3,	1,	50,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #764 = FMUL_D32
  { 765,	3,	1,	50,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #765 = FMUL_D64
  { 766,	3,	1,	50,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #766 = FMUL_MM
  { 767,	3,	1,	51,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #767 = FMUL_S
  { 768,	3,	1,	51,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #768 = FMUL_S_MM
  { 769,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #769 = FMUL_W
  { 770,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #770 = FNEG_D32
  { 771,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #771 = FNEG_D64
  { 772,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #772 = FNEG_MM
  { 773,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #773 = FNEG_S
  { 774,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #774 = FNEG_S_MM
  { 775,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #775 = FRCP_D
  { 776,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #776 = FRCP_W
  { 777,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #777 = FRINT_D
  { 778,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #778 = FRINT_W
  { 779,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #779 = FRSQRT_D
  { 780,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #780 = FRSQRT_W
  { 781,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #781 = FSAF_D
  { 782,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #782 = FSAF_W
  { 783,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #783 = FSEQ_D
  { 784,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #784 = FSEQ_W
  { 785,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #785 = FSLE_D
  { 786,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #786 = FSLE_W
  { 787,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #787 = FSLT_D
  { 788,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #788 = FSLT_W
  { 789,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #789 = FSNE_D
  { 790,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #790 = FSNE_W
  { 791,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #791 = FSOR_D
  { 792,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #792 = FSOR_W
  { 793,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #793 = FSQRT_D
  { 794,	2,	1,	53,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #794 = FSQRT_D32
  { 795,	2,	1,	53,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #795 = FSQRT_D64
  { 796,	2,	1,	53,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #796 = FSQRT_MM
  { 797,	2,	1,	54,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #797 = FSQRT_S
  { 798,	2,	1,	54,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #798 = FSQRT_S_MM
  { 799,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #799 = FSQRT_W
  { 800,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #800 = FSUB_D
  { 801,	3,	1,	55,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #801 = FSUB_D32
  { 802,	3,	1,	55,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #802 = FSUB_D64
  { 803,	3,	1,	55,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #803 = FSUB_MM
  { 804,	3,	1,	56,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #804 = FSUB_S
  { 805,	3,	1,	56,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #805 = FSUB_S_MM
  { 806,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #806 = FSUB_W
  { 807,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #807 = FSUEQ_D
  { 808,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #808 = FSUEQ_W
  { 809,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #809 = FSULE_D
  { 810,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #810 = FSULE_W
  { 811,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #811 = FSULT_D
  { 812,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #812 = FSULT_W
  { 813,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #813 = FSUNE_D
  { 814,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #814 = FSUNE_W
  { 815,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #815 = FSUN_D
  { 816,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #816 = FSUN_W
  { 817,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #817 = FTINT_S_D
  { 818,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #818 = FTINT_S_W
  { 819,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #819 = FTINT_U_D
  { 820,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #820 = FTINT_U_W
  { 821,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo124,0,nullptr },  // Inst #821 = FTQ_H
  { 822,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo125,0,nullptr },  // Inst #822 = FTQ_W
  { 823,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #823 = FTRUNC_S_D
  { 824,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #824 = FTRUNC_S_W
  { 825,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #825 = FTRUNC_U_D
  { 826,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #826 = FTRUNC_U_W
  { 827,	4,	2,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #827 = GotPrologue16
  { 828,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #828 = HADD_S_D
  { 829,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #829 = HADD_S_H
  { 830,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #830 = HADD_S_W
  { 831,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #831 = HADD_U_D
  { 832,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #832 = HADD_U_H
  { 833,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #833 = HADD_U_W
  { 834,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #834 = HSUB_S_D
  { 835,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #835 = HSUB_S_H
  { 836,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #836 = HSUB_S_W
  { 837,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #837 = HSUB_U_D
  { 838,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo103,0,nullptr },  // Inst #838 = HSUB_U_H
  { 839,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo104,0,nullptr },  // Inst #839 = HSUB_U_W
  { 840,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #840 = ILVEV_B
  { 841,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #841 = ILVEV_D
  { 842,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #842 = ILVEV_H
  { 843,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #843 = ILVEV_W
  { 844,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #844 = ILVL_B
  { 845,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #845 = ILVL_D
  { 846,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #846 = ILVL_H
  { 847,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #847 = ILVL_W
  { 848,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #848 = ILVOD_B
  { 849,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #849 = ILVOD_D
  { 850,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #850 = ILVOD_H
  { 851,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #851 = ILVOD_W
  { 852,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #852 = ILVR_B
  { 853,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #853 = ILVR_D
  { 854,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #854 = ILVR_H
  { 855,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #855 = ILVR_W
  { 856,	5,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #856 = INS
  { 857,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #857 = INSERT_B
  { 858,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #858 = INSERT_B_VIDX_PSEUDO
  { 859,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo138,0,nullptr },  // Inst #859 = INSERT_D
  { 860,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo139,0,nullptr },  // Inst #860 = INSERT_D_VIDX_PSEUDO
  { 861,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo140,0,nullptr },  // Inst #861 = INSERT_FD_PSEUDO
  { 862,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo141,0,nullptr },  // Inst #862 = INSERT_FD_VIDX_PSEUDO
  { 863,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo142,0,nullptr },  // Inst #863 = INSERT_FW_PSEUDO
  { 864,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo143,0,nullptr },  // Inst #864 = INSERT_FW_VIDX_PSEUDO
  { 865,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo144,0,nullptr },  // Inst #865 = INSERT_H
  { 866,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo145,0,nullptr },  // Inst #866 = INSERT_H_VIDX_PSEUDO
  { 867,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #867 = INSERT_W
  { 868,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #868 = INSERT_W_VIDX_PSEUDO
  { 869,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList17, nullptr, OperandInfo148,0,nullptr },  // Inst #869 = INSV
  { 870,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #870 = INSVE_B
  { 871,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo150,0,nullptr },  // Inst #871 = INSVE_D
  { 872,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo151,0,nullptr },  // Inst #872 = INSVE_H
  { 873,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #873 = INSVE_W
  { 874,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #874 = INS_MM
  { 875,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x3ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #875 = J
  { 876,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #876 = JAL
  { 877,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13,0,nullptr },  // Inst #877 = JALR
  { 878,	1,	0,	7,	2,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo66,0,nullptr },  // Inst #878 = JALR16_MM
  { 879,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo98,0,nullptr },  // Inst #879 = JALR64
  { 880,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo153,0,nullptr },  // Inst #880 = JALR64Pseudo
  { 881,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo66,0,nullptr },  // Inst #881 = JALRPseudo
  { 882,	1,	0,	7,	2,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo66,0,nullptr },  // Inst #882 = JALRS16_MM
  { 883,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13,0,nullptr },  // Inst #883 = JALRS_MM
  { 884,	2,	1,	0,	4,	0|(1<<MCID::IndirectBranch)|(1<<MCID::DelaySlot)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #884 = JALR_HB
  { 885,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13,0,nullptr },  // Inst #885 = JALR_MM
  { 886,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #886 = JALS_MM
  { 887,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #887 = JALX
  { 888,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #888 = JAL_MM
  { 889,	2,	0,	0,	4,	0|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo15,0,nullptr },  // Inst #889 = JIALC
  { 890,	2,	0,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo15,0,nullptr },  // Inst #890 = JIC
  { 891,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #891 = JR
  { 892,	1,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::DelaySlot)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #892 = JR16_MM
  { 893,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #893 = JR64
  { 894,	1,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #894 = JRADDIUSP
  { 895,	1,	0,	7,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #895 = JRC16_MM
  { 896,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #896 = JR_HB
  { 897,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #897 = JR_HB_R6
  { 898,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #898 = JR_MM
  { 899,	1,	0,	7,	4,	0|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #899 = J_MM
  { 900,	1,	0,	6,	6,	0|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #900 = Jal16
  { 901,	1,	0,	6,	6,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #901 = JalB16
  { 902,	1,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #902 = JalOneReg
  { 903,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #903 = JalTwoReg
  { 904,	0,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #904 = JrRa16
  { 905,	0,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #905 = JrcRa16
  { 906,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #906 = JrcRx16
  { 907,	1,	0,	7,	2,	0|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo154,0,nullptr },  // Inst #907 = JumpLinkReg16
  { 908,	3,	1,	57,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #908 = LB
  { 909,	3,	1,	57,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #909 = LB64
  { 910,	3,	1,	58,	2,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #910 = LBU16_MM
  { 911,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #911 = LBUX
  { 912,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #912 = LB_MM
  { 913,	3,	1,	58,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #913 = LBu
  { 914,	3,	1,	58,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #914 = LBu64
  { 915,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #915 = LBu_MM
  { 916,	3,	1,	59,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #916 = LD
  { 917,	3,	1,	60,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #917 = LDC1
  { 918,	3,	1,	60,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo160,0,nullptr },  // Inst #918 = LDC164
  { 919,	3,	1,	60,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #919 = LDC1_MM
  { 920,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #920 = LDC2
  { 921,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #921 = LDC2_R6
  { 922,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #922 = LDC3
  { 923,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo163,0,nullptr },  // Inst #923 = LDI_B
  { 924,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo164,0,nullptr },  // Inst #924 = LDI_D
  { 925,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo165,0,nullptr },  // Inst #925 = LDI_H
  { 926,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #926 = LDI_W
  { 927,	4,	1,	61,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #927 = LDL
  { 928,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #928 = LDPC
  { 929,	4,	1,	62,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #929 = LDR
  { 930,	3,	1,	63,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #930 = LDXC1
  { 931,	3,	1,	63,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #931 = LDXC164
  { 932,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo171,0,nullptr },  // Inst #932 = LD_B
  { 933,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo172,0,nullptr },  // Inst #933 = LD_D
  { 934,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo173,0,nullptr },  // Inst #934 = LD_H
  { 935,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo174,0,nullptr },  // Inst #935 = LD_W
  { 936,	3,	1,	0,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #936 = LEA_ADDiu
  { 937,	3,	1,	0,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #937 = LEA_ADDiu64
  { 938,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #938 = LEA_ADDiu_MM
  { 939,	3,	1,	64,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #939 = LH
  { 940,	3,	1,	64,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #940 = LH64
  { 941,	3,	1,	65,	2,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #941 = LHU16_MM
  { 942,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #942 = LHX
  { 943,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #943 = LH_MM
  { 944,	3,	1,	65,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #944 = LHu
  { 945,	3,	1,	65,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #945 = LHu64
  { 946,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #946 = LHu_MM
  { 947,	2,	1,	0,	2,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #947 = LI16_MM
  { 948,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #948 = LL
  { 949,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #949 = LLD
  { 950,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #950 = LLD_R6
  { 951,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #951 = LL_MM
  { 952,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #952 = LL_R6
  { 953,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo176,0,nullptr },  // Inst #953 = LOAD_ACC128
  { 954,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo177,0,nullptr },  // Inst #954 = LOAD_ACC64
  { 955,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #955 = LOAD_ACC64DSP
  { 956,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo179,0,nullptr },  // Inst #956 = LOAD_CCOND_DSP
  { 957,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo180,0,nullptr },  // Inst #957 = LONG_BRANCH_ADDiu
  { 958,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo181,0,nullptr },  // Inst #958 = LONG_BRANCH_DADDiu
  { 959,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo182,0,nullptr },  // Inst #959 = LONG_BRANCH_LUi
  { 960,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #960 = LSA
  { 961,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #961 = LSA_R6
  { 962,	3,	1,	66,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #962 = LUXC1
  { 963,	3,	1,	66,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #963 = LUXC164
  { 964,	3,	1,	66,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #964 = LUXC1_MM
  { 965,	2,	1,	67,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #965 = LUi
  { 966,	2,	1,	67,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #966 = LUi64
  { 967,	2,	1,	67,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #967 = LUi_MM
  { 968,	3,	1,	68,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #968 = LW
  { 969,	3,	1,	68,	2,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #969 = LW16_MM
  { 970,	3,	1,	68,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #970 = LW64
  { 971,	3,	1,	69,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #971 = LWC1
  { 972,	3,	1,	69,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #972 = LWC1_MM
  { 973,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #973 = LWC2
  { 974,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #974 = LWC2_R6
  { 975,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #975 = LWC3
  { 976,	3,	1,	68,	2,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #976 = LWGP_MM
  { 977,	4,	1,	70,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #977 = LWL
  { 978,	4,	1,	70,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #978 = LWL64
  { 979,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #979 = LWL_MM
  { 980,	3,	1,	0,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #980 = LWM16_MM
  { 981,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #981 = LWM32_MM
  { 982,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #982 = LWM_MM
  { 983,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #983 = LWPC
  { 984,	4,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #984 = LWP_MM
  { 985,	4,	1,	71,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #985 = LWR
  { 986,	4,	1,	71,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #986 = LWR64
  { 987,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #987 = LWR_MM
  { 988,	3,	1,	68,	2,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #988 = LWSP_MM
  { 989,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #989 = LWUPC
  { 990,	3,	1,	72,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #990 = LWU_MM
  { 991,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #991 = LWX
  { 992,	3,	1,	73,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #992 = LWXC1
  { 993,	3,	1,	73,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #993 = LWXC1_MM
  { 994,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #994 = LWXS_MM
  { 995,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #995 = LW_MM
  { 996,	3,	1,	72,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #996 = LWu
  { 997,	4,	1,	57,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #997 = LbRxRyOffMemX16
  { 998,	4,	1,	58,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #998 = LbuRxRyOffMemX16
  { 999,	4,	1,	64,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #999 = LhRxRyOffMemX16
  { 1000,	4,	1,	65,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1000 = LhuRxRyOffMemX16
  { 1001,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #1001 = LiRxImm16
  { 1002,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #1002 = LiRxImmAlignX16
  { 1003,	2,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #1003 = LiRxImmX16
  { 1004,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1004 = LoadAddr32Imm
  { 1005,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1005 = LoadAddr32Reg
  { 1006,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1006 = LoadImm32Reg
  { 1007,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #1007 = LoadImm64Reg
  { 1008,	3,	1,	3,	2,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1008 = LwConstant32
  { 1009,	3,	1,	68,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo191,0,nullptr },  // Inst #1009 = LwRxPcTcp16
  { 1010,	3,	1,	68,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo191,0,nullptr },  // Inst #1010 = LwRxPcTcpX16
  { 1011,	4,	1,	68,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1011 = LwRxRyOffMemX16
  { 1012,	3,	1,	68,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo192,0,nullptr },  // Inst #1012 = LwRxSpImmX16
  { 1013,	2,	0,	74,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1013 = MADD
  { 1014,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo193,0,nullptr },  // Inst #1014 = MADDF_D
  { 1015,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo194,0,nullptr },  // Inst #1015 = MADDF_S
  { 1016,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #1016 = MADDR_Q_H
  { 1017,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #1017 = MADDR_Q_W
  { 1018,	2,	0,	75,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1018 = MADDU
  { 1019,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #1019 = MADDU_DSP
  { 1020,	2,	0,	75,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1020 = MADDU_MM
  { 1021,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #1021 = MADDV_B
  { 1022,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #1022 = MADDV_D
  { 1023,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #1023 = MADDV_H
  { 1024,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #1024 = MADDV_W
  { 1025,	4,	1,	76,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1025 = MADD_D32
  { 1026,	4,	1,	76,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1026 = MADD_D32_MM
  { 1027,	4,	1,	76,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1027 = MADD_D64
  { 1028,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #1028 = MADD_DSP
  { 1029,	2,	0,	74,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1029 = MADD_MM
  { 1030,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #1030 = MADD_Q_H
  { 1031,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #1031 = MADD_Q_W
  { 1032,	4,	1,	77,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1032 = MADD_S
  { 1033,	4,	1,	77,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1033 = MADD_S_MM
  { 1034,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #1034 = MAQ_SA_W_PHL
  { 1035,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #1035 = MAQ_SA_W_PHR
  { 1036,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #1036 = MAQ_S_W_PHL
  { 1037,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #1037 = MAQ_S_W_PHR
  { 1038,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #1038 = MAXA_D
  { 1039,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #1039 = MAXA_S
  { 1040,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1040 = MAXI_S_B
  { 1041,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1041 = MAXI_S_D
  { 1042,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1042 = MAXI_S_H
  { 1043,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1043 = MAXI_S_W
  { 1044,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1044 = MAXI_U_B
  { 1045,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1045 = MAXI_U_D
  { 1046,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1046 = MAXI_U_H
  { 1047,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1047 = MAXI_U_W
  { 1048,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1048 = MAX_A_B
  { 1049,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1049 = MAX_A_D
  { 1050,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1050 = MAX_A_H
  { 1051,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1051 = MAX_A_W
  { 1052,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #1052 = MAX_D
  { 1053,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #1053 = MAX_S
  { 1054,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1054 = MAX_S_B
  { 1055,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1055 = MAX_S_D
  { 1056,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1056 = MAX_S_H
  { 1057,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1057 = MAX_S_W
  { 1058,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1058 = MAX_U_B
  { 1059,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1059 = MAX_U_D
  { 1060,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1060 = MAX_U_H
  { 1061,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1061 = MAX_U_W
  { 1062,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1062 = MFC0
  { 1063,	2,	1,	78,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo198,0,nullptr },  // Inst #1063 = MFC1
  { 1064,	2,	1,	78,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo198,0,nullptr },  // Inst #1064 = MFC1_MM
  { 1065,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1065 = MFC2
  { 1066,	2,	1,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo199,0,nullptr },  // Inst #1066 = MFHC1_D32
  { 1067,	2,	1,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1067 = MFHC1_D64
  { 1068,	2,	1,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo199,0,nullptr },  // Inst #1068 = MFHC1_MM
  { 1069,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66,0,nullptr },  // Inst #1069 = MFHI
  { 1070,	1,	1,	80,	2,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo66,0,nullptr },  // Inst #1070 = MFHI16_MM
  { 1071,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo153,0,nullptr },  // Inst #1071 = MFHI64
  { 1072,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo201,0,nullptr },  // Inst #1072 = MFHI_DSP
  { 1073,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66,0,nullptr },  // Inst #1073 = MFHI_MM
  { 1074,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66,0,nullptr },  // Inst #1074 = MFLO
  { 1075,	1,	1,	80,	2,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo66,0,nullptr },  // Inst #1075 = MFLO16_MM
  { 1076,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo153,0,nullptr },  // Inst #1076 = MFLO64
  { 1077,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo201,0,nullptr },  // Inst #1077 = MFLO_DSP
  { 1078,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66,0,nullptr },  // Inst #1078 = MFLO_MM
  { 1079,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #1079 = MINA_D
  { 1080,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #1080 = MINA_S
  { 1081,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1081 = MINI_S_B
  { 1082,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1082 = MINI_S_D
  { 1083,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1083 = MINI_S_H
  { 1084,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1084 = MINI_S_W
  { 1085,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1085 = MINI_U_B
  { 1086,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1086 = MINI_U_D
  { 1087,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1087 = MINI_U_H
  { 1088,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1088 = MINI_U_W
  { 1089,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1089 = MIN_A_B
  { 1090,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1090 = MIN_A_D
  { 1091,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1091 = MIN_A_H
  { 1092,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1092 = MIN_A_W
  { 1093,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #1093 = MIN_D
  { 1094,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #1094 = MIN_S
  { 1095,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1095 = MIN_S_B
  { 1096,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1096 = MIN_S_D
  { 1097,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1097 = MIN_S_H
  { 1098,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1098 = MIN_S_W
  { 1099,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1099 = MIN_U_B
  { 1100,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1100 = MIN_U_D
  { 1101,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1101 = MIN_U_H
  { 1102,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1102 = MIN_U_W
  { 1103,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo13,0,nullptr },  // Inst #1103 = MIPSeh_return32
  { 1104,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo98,0,nullptr },  // Inst #1104 = MIPSeh_return64
  { 1105,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1105 = MOD
  { 1106,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1106 = MODSUB
  { 1107,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1107 = MODU
  { 1108,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1108 = MOD_S_B
  { 1109,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1109 = MOD_S_D
  { 1110,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1110 = MOD_S_H
  { 1111,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1111 = MOD_S_W
  { 1112,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1112 = MOD_U_B
  { 1113,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1113 = MOD_U_D
  { 1114,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1114 = MOD_U_H
  { 1115,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1115 = MOD_U_W
  { 1116,	2,	1,	0,	2,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1116 = MOVE16_MM
  { 1117,	4,	1,	0,	2,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo202,0,nullptr },  // Inst #1117 = MOVEP_MM
  { 1118,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1118 = MOVE_V
  { 1119,	4,	1,	81,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1119 = MOVF_D32
  { 1120,	4,	1,	81,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1120 = MOVF_D32_MM
  { 1121,	4,	1,	81,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1121 = MOVF_D64
  { 1122,	4,	1,	82,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1122 = MOVF_I
  { 1123,	4,	1,	82,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo207,0,nullptr },  // Inst #1123 = MOVF_I64
  { 1124,	4,	1,	82,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1124 = MOVF_I_MM
  { 1125,	4,	1,	83,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1125 = MOVF_S
  { 1126,	4,	1,	83,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1126 = MOVF_S_MM
  { 1127,	4,	1,	84,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo209,0,nullptr },  // Inst #1127 = MOVN_I64_D64
  { 1128,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo210,0,nullptr },  // Inst #1128 = MOVN_I64_I
  { 1129,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo211,0,nullptr },  // Inst #1129 = MOVN_I64_I64
  { 1130,	4,	1,	86,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo212,0,nullptr },  // Inst #1130 = MOVN_I64_S
  { 1131,	4,	1,	84,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo213,0,nullptr },  // Inst #1131 = MOVN_I_D32
  { 1132,	4,	1,	84,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo213,0,nullptr },  // Inst #1132 = MOVN_I_D32_MM
  { 1133,	4,	1,	84,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo214,0,nullptr },  // Inst #1133 = MOVN_I_D64
  { 1134,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo215,0,nullptr },  // Inst #1134 = MOVN_I_I
  { 1135,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo216,0,nullptr },  // Inst #1135 = MOVN_I_I64
  { 1136,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo215,0,nullptr },  // Inst #1136 = MOVN_I_MM
  { 1137,	4,	1,	86,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo217,0,nullptr },  // Inst #1137 = MOVN_I_S
  { 1138,	4,	1,	86,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo217,0,nullptr },  // Inst #1138 = MOVN_I_S_MM
  { 1139,	4,	1,	87,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1139 = MOVT_D32
  { 1140,	4,	1,	87,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1140 = MOVT_D32_MM
  { 1141,	4,	1,	87,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1141 = MOVT_D64
  { 1142,	4,	1,	88,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1142 = MOVT_I
  { 1143,	4,	1,	88,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo207,0,nullptr },  // Inst #1143 = MOVT_I64
  { 1144,	4,	1,	88,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1144 = MOVT_I_MM
  { 1145,	4,	1,	89,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1145 = MOVT_S
  { 1146,	4,	1,	89,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1146 = MOVT_S_MM
  { 1147,	4,	1,	90,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo209,0,nullptr },  // Inst #1147 = MOVZ_I64_D64
  { 1148,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo210,0,nullptr },  // Inst #1148 = MOVZ_I64_I
  { 1149,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo211,0,nullptr },  // Inst #1149 = MOVZ_I64_I64
  { 1150,	4,	1,	92,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo212,0,nullptr },  // Inst #1150 = MOVZ_I64_S
  { 1151,	4,	1,	90,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo213,0,nullptr },  // Inst #1151 = MOVZ_I_D32
  { 1152,	4,	1,	90,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo213,0,nullptr },  // Inst #1152 = MOVZ_I_D32_MM
  { 1153,	4,	1,	90,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo214,0,nullptr },  // Inst #1153 = MOVZ_I_D64
  { 1154,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo215,0,nullptr },  // Inst #1154 = MOVZ_I_I
  { 1155,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo216,0,nullptr },  // Inst #1155 = MOVZ_I_I64
  { 1156,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo215,0,nullptr },  // Inst #1156 = MOVZ_I_MM
  { 1157,	4,	1,	92,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo217,0,nullptr },  // Inst #1157 = MOVZ_I_S
  { 1158,	4,	1,	92,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo217,0,nullptr },  // Inst #1158 = MOVZ_I_S_MM
  { 1159,	2,	0,	93,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1159 = MSUB
  { 1160,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo193,0,nullptr },  // Inst #1160 = MSUBF_D
  { 1161,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo194,0,nullptr },  // Inst #1161 = MSUBF_S
  { 1162,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #1162 = MSUBR_Q_H
  { 1163,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #1163 = MSUBR_Q_W
  { 1164,	2,	0,	94,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1164 = MSUBU
  { 1165,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #1165 = MSUBU_DSP
  { 1166,	2,	0,	94,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1166 = MSUBU_MM
  { 1167,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #1167 = MSUBV_B
  { 1168,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #1168 = MSUBV_D
  { 1169,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #1169 = MSUBV_H
  { 1170,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #1170 = MSUBV_W
  { 1171,	4,	1,	95,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1171 = MSUB_D32
  { 1172,	4,	1,	95,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1172 = MSUB_D32_MM
  { 1173,	4,	1,	95,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1173 = MSUB_D64
  { 1174,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #1174 = MSUB_DSP
  { 1175,	2,	0,	93,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1175 = MSUB_MM
  { 1176,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #1176 = MSUB_Q_H
  { 1177,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #1177 = MSUB_Q_W
  { 1178,	4,	1,	96,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1178 = MSUB_S
  { 1179,	4,	1,	96,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1179 = MSUB_S_MM
  { 1180,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1180 = MTC0
  { 1181,	2,	1,	97,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo218,0,nullptr },  // Inst #1181 = MTC1
  { 1182,	2,	1,	97,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo218,0,nullptr },  // Inst #1182 = MTC1_MM
  { 1183,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1183 = MTC2
  { 1184,	3,	1,	98,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo219,0,nullptr },  // Inst #1184 = MTHC1_D32
  { 1185,	3,	1,	98,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo220,0,nullptr },  // Inst #1185 = MTHC1_D64
  { 1186,	3,	1,	98,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo219,0,nullptr },  // Inst #1186 = MTHC1_MM
  { 1187,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo66,0,nullptr },  // Inst #1187 = MTHI
  { 1188,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList22, OperandInfo153,0,nullptr },  // Inst #1188 = MTHI64
  { 1189,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo221,0,nullptr },  // Inst #1189 = MTHI_DSP
  { 1190,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo66,0,nullptr },  // Inst #1190 = MTHI_MM
  { 1191,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList6, OperandInfo222,0,nullptr },  // Inst #1191 = MTHLIP
  { 1192,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo66,0,nullptr },  // Inst #1192 = MTLO
  { 1193,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList24, OperandInfo153,0,nullptr },  // Inst #1193 = MTLO64
  { 1194,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo223,0,nullptr },  // Inst #1194 = MTLO_DSP
  { 1195,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo66,0,nullptr },  // Inst #1195 = MTLO_MM
  { 1196,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList25, OperandInfo153,0,nullptr },  // Inst #1196 = MTM0
  { 1197,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList26, OperandInfo153,0,nullptr },  // Inst #1197 = MTM1
  { 1198,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList27, OperandInfo153,0,nullptr },  // Inst #1198 = MTM2
  { 1199,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList28, OperandInfo153,0,nullptr },  // Inst #1199 = MTP0
  { 1200,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList29, OperandInfo153,0,nullptr },  // Inst #1200 = MTP1
  { 1201,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList30, OperandInfo153,0,nullptr },  // Inst #1201 = MTP2
  { 1202,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1202 = MUH
  { 1203,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1203 = MUHU
  { 1204,	3,	1,	100,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList12, OperandInfo14,0,nullptr },  // Inst #1204 = MUL
  { 1205,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo82,0,nullptr },  // Inst #1205 = MULEQ_S_W_PHL
  { 1206,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo82,0,nullptr },  // Inst #1206 = MULEQ_S_W_PHR
  { 1207,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo19,0,nullptr },  // Inst #1207 = MULEU_S_PH_QBL
  { 1208,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo19,0,nullptr },  // Inst #1208 = MULEU_S_PH_QBR
  { 1209,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo19,0,nullptr },  // Inst #1209 = MULQ_RS_PH
  { 1210,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo14,0,nullptr },  // Inst #1210 = MULQ_RS_W
  { 1211,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo19,0,nullptr },  // Inst #1211 = MULQ_S_PH
  { 1212,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo14,0,nullptr },  // Inst #1212 = MULQ_S_W
  { 1213,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1213 = MULR_Q_H
  { 1214,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1214 = MULR_Q_W
  { 1215,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo108,0,nullptr },  // Inst #1215 = MULSAQ_S_W_PH
  { 1216,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #1216 = MULSA_W_PH
  { 1217,	2,	0,	101,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1217 = MULT
  { 1218,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo224,0,nullptr },  // Inst #1218 = MULTU_DSP
  { 1219,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo224,0,nullptr },  // Inst #1219 = MULT_DSP
  { 1220,	2,	0,	101,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1220 = MULT_MM
  { 1221,	2,	0,	102,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1221 = MULTu
  { 1222,	2,	0,	102,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1222 = MULTu_MM
  { 1223,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1223 = MULU
  { 1224,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1224 = MULV_B
  { 1225,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1225 = MULV_D
  { 1226,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1226 = MULV_H
  { 1227,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1227 = MULV_W
  { 1228,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1228 = MUL_MM
  { 1229,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo19,0,nullptr },  // Inst #1229 = MUL_PH
  { 1230,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1230 = MUL_Q_H
  { 1231,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1231 = MUL_Q_W
  { 1232,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1232 = MUL_R6
  { 1233,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo19,0,nullptr },  // Inst #1233 = MUL_S_PH
  { 1234,	1,	1,	6,	2,	0, 0x0ULL, ImplicitList21, nullptr, OperandInfo154,0,nullptr },  // Inst #1234 = Mfhi16
  { 1235,	1,	1,	6,	2,	0, 0x0ULL, ImplicitList23, nullptr, OperandInfo154,0,nullptr },  // Inst #1235 = Mflo16
  { 1236,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo225,0,nullptr },  // Inst #1236 = Move32R16
  { 1237,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo226,0,nullptr },  // Inst #1237 = MoveR3216
  { 1238,	2,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo95,0,nullptr },  // Inst #1238 = MultRxRy16
  { 1239,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo42,0,nullptr },  // Inst #1239 = MultRxRyRz16
  { 1240,	2,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo95,0,nullptr },  // Inst #1240 = MultuRxRy16
  { 1241,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo42,0,nullptr },  // Inst #1241 = MultuRxRyRz16
  { 1242,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1242 = NLOC_B
  { 1243,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #1243 = NLOC_D
  { 1244,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1244 = NLOC_H
  { 1245,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #1245 = NLOC_W
  { 1246,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1246 = NLZC_B
  { 1247,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #1247 = NLZC_D
  { 1248,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1248 = NLZC_H
  { 1249,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #1249 = NLZC_W
  { 1250,	4,	1,	103,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1250 = NMADD_D32
  { 1251,	4,	1,	103,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1251 = NMADD_D32_MM
  { 1252,	4,	1,	103,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1252 = NMADD_D64
  { 1253,	4,	1,	104,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1253 = NMADD_S
  { 1254,	4,	1,	104,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1254 = NMADD_S_MM
  { 1255,	4,	1,	105,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1255 = NMSUB_D32
  { 1256,	4,	1,	105,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1256 = NMSUB_D32_MM
  { 1257,	4,	1,	105,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1257 = NMSUB_D64
  { 1258,	4,	1,	106,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1258 = NMSUB_S
  { 1259,	4,	1,	106,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1259 = NMSUB_S_MM
  { 1260,	0,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1260 = NOP
  { 1261,	3,	1,	107,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1261 = NOR
  { 1262,	3,	1,	107,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1262 = NOR64
  { 1263,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1263 = NORI_B
  { 1264,	3,	1,	107,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1264 = NOR_MM
  { 1265,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1265 = NOR_V
  { 1266,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1266 = NOR_V_D_PSEUDO
  { 1267,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1267 = NOR_V_H_PSEUDO
  { 1268,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1268 = NOR_V_W_PSEUDO
  { 1269,	2,	1,	0,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo228,0,nullptr },  // Inst #1269 = NOT16_MM
  { 1270,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #1270 = NegRxRy16
  { 1271,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #1271 = NotRxRy16
  { 1272,	3,	1,	108,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1272 = OR
  { 1273,	3,	1,	108,	2,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #1273 = OR16_MM
  { 1274,	3,	1,	108,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1274 = OR64
  { 1275,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1275 = ORI_B
  { 1276,	3,	1,	108,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1276 = OR_MM
  { 1277,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1277 = OR_V
  { 1278,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1278 = OR_V_D_PSEUDO
  { 1279,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1279 = OR_V_H_PSEUDO
  { 1280,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1280 = OR_V_W_PSEUDO
  { 1281,	3,	1,	109,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1281 = ORi
  { 1282,	3,	1,	108,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #1282 = ORi64
  { 1283,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1283 = ORi_MM
  { 1284,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #1284 = OrRxRxRy16
  { 1285,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1285 = PACKRL_PH
  { 1286,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1286 = PAUSE
  { 1287,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1287 = PAUSE_MM
  { 1288,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1288 = PCKEV_B
  { 1289,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1289 = PCKEV_D
  { 1290,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1290 = PCKEV_H
  { 1291,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1291 = PCKEV_W
  { 1292,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1292 = PCKOD_B
  { 1293,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1293 = PCKOD_D
  { 1294,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1294 = PCKOD_H
  { 1295,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1295 = PCKOD_W
  { 1296,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1296 = PCNT_B
  { 1297,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #1297 = PCNT_D
  { 1298,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1298 = PCNT_H
  { 1299,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #1299 = PCNT_W
  { 1300,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo19,0,nullptr },  // Inst #1300 = PICK_PH
  { 1301,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo19,0,nullptr },  // Inst #1301 = PICK_QB
  { 1302,	2,	1,	25,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1302 = POP
  { 1303,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1303 = PRECEQU_PH_QBL
  { 1304,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1304 = PRECEQU_PH_QBLA
  { 1305,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1305 = PRECEQU_PH_QBR
  { 1306,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1306 = PRECEQU_PH_QBRA
  { 1307,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo229,0,nullptr },  // Inst #1307 = PRECEQ_W_PHL
  { 1308,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo229,0,nullptr },  // Inst #1308 = PRECEQ_W_PHR
  { 1309,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1309 = PRECEU_PH_QBL
  { 1310,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1310 = PRECEU_PH_QBLA
  { 1311,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1311 = PRECEU_PH_QBR
  { 1312,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1312 = PRECEU_PH_QBRA
  { 1313,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo19,0,nullptr },  // Inst #1313 = PRECRQU_S_QB_PH
  { 1314,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo230,0,nullptr },  // Inst #1314 = PRECRQ_PH_W
  { 1315,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1315 = PRECRQ_QB_PH
  { 1316,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo230,0,nullptr },  // Inst #1316 = PRECRQ_RS_PH_W
  { 1317,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1317 = PRECR_QB_PH
  { 1318,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo231,0,nullptr },  // Inst #1318 = PRECR_SRA_PH_W
  { 1319,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo231,0,nullptr },  // Inst #1319 = PRECR_SRA_R_PH_W
  { 1320,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #1320 = PREF
  { 1321,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #1321 = PREF_MM
  { 1322,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #1322 = PREF_R6
  { 1323,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #1323 = PREPEND
  { 1324,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1324 = PseudoCMPU_EQ_QB
  { 1325,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1325 = PseudoCMPU_LE_QB
  { 1326,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1326 = PseudoCMPU_LT_QB
  { 1327,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1327 = PseudoCMP_EQ_PH
  { 1328,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1328 = PseudoCMP_LE_PH
  { 1329,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1329 = PseudoCMP_LT_PH
  { 1330,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo233,0,nullptr },  // Inst #1330 = PseudoCVT_D32_W
  { 1331,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #1331 = PseudoCVT_D64_L
  { 1332,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo234,0,nullptr },  // Inst #1332 = PseudoCVT_D64_W
  { 1333,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #1333 = PseudoCVT_S_L
  { 1334,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo218,0,nullptr },  // Inst #1334 = PseudoCVT_S_W
  { 1335,	3,	1,	23,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1335 = PseudoDMULT
  { 1336,	3,	1,	24,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1336 = PseudoDMULTu
  { 1337,	3,	1,	29,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1337 = PseudoDSDIV
  { 1338,	3,	1,	41,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1338 = PseudoDUDIV
  { 1339,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #1339 = PseudoIndirectBranch
  { 1340,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1340 = PseudoIndirectBranch64
  { 1341,	4,	1,	74,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo236,0,nullptr },  // Inst #1341 = PseudoMADD
  { 1342,	4,	1,	75,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo236,0,nullptr },  // Inst #1342 = PseudoMADDU
  { 1343,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo237,0,nullptr },  // Inst #1343 = PseudoMFHI
  { 1344,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo238,0,nullptr },  // Inst #1344 = PseudoMFHI64
  { 1345,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo237,0,nullptr },  // Inst #1345 = PseudoMFLO
  { 1346,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo238,0,nullptr },  // Inst #1346 = PseudoMFLO64
  { 1347,	4,	1,	93,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo236,0,nullptr },  // Inst #1347 = PseudoMSUB
  { 1348,	4,	1,	94,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo236,0,nullptr },  // Inst #1348 = PseudoMSUBU
  { 1349,	3,	1,	99,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1349 = PseudoMTLOHI
  { 1350,	3,	1,	99,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1350 = PseudoMTLOHI64
  { 1351,	3,	1,	99,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo224,0,nullptr },  // Inst #1351 = PseudoMTLOHI_DSP
  { 1352,	3,	1,	101,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1352 = PseudoMULT
  { 1353,	3,	1,	102,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1353 = PseudoMULTu
  { 1354,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo240,0,nullptr },  // Inst #1354 = PseudoPICK_PH
  { 1355,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo240,0,nullptr },  // Inst #1355 = PseudoPICK_QB
  { 1356,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #1356 = PseudoReturn
  { 1357,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1357 = PseudoReturn64
  { 1358,	3,	1,	110,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1358 = PseudoSDIV
  { 1359,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo241,0,nullptr },  // Inst #1359 = PseudoSELECTFP_F_D32
  { 1360,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo242,0,nullptr },  // Inst #1360 = PseudoSELECTFP_F_D64
  { 1361,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo243,0,nullptr },  // Inst #1361 = PseudoSELECTFP_F_I
  { 1362,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo244,0,nullptr },  // Inst #1362 = PseudoSELECTFP_F_I64
  { 1363,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1363 = PseudoSELECTFP_F_S
  { 1364,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo241,0,nullptr },  // Inst #1364 = PseudoSELECTFP_T_D32
  { 1365,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo242,0,nullptr },  // Inst #1365 = PseudoSELECTFP_T_D64
  { 1366,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo243,0,nullptr },  // Inst #1366 = PseudoSELECTFP_T_I
  { 1367,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo244,0,nullptr },  // Inst #1367 = PseudoSELECTFP_T_I64
  { 1368,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1368 = PseudoSELECTFP_T_S
  { 1369,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo241,0,nullptr },  // Inst #1369 = PseudoSELECT_D32
  { 1370,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo242,0,nullptr },  // Inst #1370 = PseudoSELECT_D64
  { 1371,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo243,0,nullptr },  // Inst #1371 = PseudoSELECT_I
  { 1372,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo244,0,nullptr },  // Inst #1372 = PseudoSELECT_I64
  { 1373,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1373 = PseudoSELECT_S
  { 1374,	3,	1,	111,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1374 = PseudoUDIV
  { 1375,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo229,0,nullptr },  // Inst #1375 = RADDU_W_QB
  { 1376,	2,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1376 = RDDSP
  { 1377,	2,	1,	112,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1377 = RDHWR
  { 1378,	2,	1,	112,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo247,0,nullptr },  // Inst #1378 = RDHWR64
  { 1379,	2,	1,	112,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1379 = RDHWR_MM
  { 1380,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo248,0,nullptr },  // Inst #1380 = REPLV_PH
  { 1381,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo248,0,nullptr },  // Inst #1381 = REPLV_QB
  { 1382,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo249,0,nullptr },  // Inst #1382 = REPL_PH
  { 1383,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo249,0,nullptr },  // Inst #1383 = REPL_QB
  { 1384,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #1384 = RINT_D
  { 1385,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #1385 = RINT_S
  { 1386,	3,	1,	113,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1386 = ROTR
  { 1387,	3,	1,	114,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1387 = ROTRV
  { 1388,	3,	1,	114,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1388 = ROTRV_MM
  { 1389,	3,	1,	113,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1389 = ROTR_MM
  { 1390,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #1390 = ROUND_L_D64
  { 1391,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #1391 = ROUND_L_S
  { 1392,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #1392 = ROUND_W_D32
  { 1393,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #1393 = ROUND_W_D64
  { 1394,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #1394 = ROUND_W_MM
  { 1395,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #1395 = ROUND_W_S
  { 1396,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #1396 = ROUND_W_S_MM
  { 1397,	0,	0,	116,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1397 = Restore16
  { 1398,	0,	0,	116,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1398 = RestoreX16
  { 1399,	0,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1399 = RetRA
  { 1400,	0,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1400 = RetRA16
  { 1401,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1401 = SAT_S_B
  { 1402,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1402 = SAT_S_D
  { 1403,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1403 = SAT_S_H
  { 1404,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1404 = SAT_S_W
  { 1405,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1405 = SAT_U_B
  { 1406,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1406 = SAT_U_D
  { 1407,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1407 = SAT_U_H
  { 1408,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1408 = SAT_U_W
  { 1409,	3,	0,	117,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1409 = SB
  { 1410,	3,	0,	117,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo250,0,nullptr },  // Inst #1410 = SB16_MM
  { 1411,	3,	0,	117,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1411 = SB64
  { 1412,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1412 = SB_MM
  { 1413,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo251,0,nullptr },  // Inst #1413 = SC
  { 1414,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo252,0,nullptr },  // Inst #1414 = SCD
  { 1415,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo252,0,nullptr },  // Inst #1415 = SCD_R6
  { 1416,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo253,0,nullptr },  // Inst #1416 = SC_MM
  { 1417,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo251,0,nullptr },  // Inst #1417 = SC_R6
  { 1418,	3,	0,	118,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1418 = SD
  { 1419,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1419 = SDBBP
  { 1420,	1,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1420 = SDBBP16_MM
  { 1421,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1421 = SDBBP_MM
  { 1422,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1422 = SDBBP_R6
  { 1423,	3,	0,	119,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #1423 = SDC1
  { 1424,	3,	0,	119,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo160,0,nullptr },  // Inst #1424 = SDC164
  { 1425,	3,	0,	119,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #1425 = SDC1_MM
  { 1426,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #1426 = SDC2
  { 1427,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #1427 = SDC2_R6
  { 1428,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #1428 = SDC3
  { 1429,	2,	0,	110,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1429 = SDIV
  { 1430,	2,	0,	110,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1430 = SDIV_MM
  { 1431,	3,	0,	120,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1431 = SDL
  { 1432,	3,	0,	121,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1432 = SDR
  { 1433,	3,	0,	122,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #1433 = SDXC1
  { 1434,	3,	0,	122,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #1434 = SDXC164
  { 1435,	2,	1,	123,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1435 = SEB
  { 1436,	2,	1,	123,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #1436 = SEB64
  { 1437,	2,	1,	123,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1437 = SEB_MM
  { 1438,	2,	1,	124,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1438 = SEH
  { 1439,	2,	1,	124,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #1439 = SEH64
  { 1440,	2,	1,	124,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1440 = SEH_MM
  { 1441,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1441 = SELEQZ
  { 1442,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1442 = SELEQZ64
  { 1443,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #1443 = SELEQZ_D
  { 1444,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #1444 = SELEQZ_S
  { 1445,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1445 = SELNEZ
  { 1446,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1446 = SELNEZ64
  { 1447,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #1447 = SELNEZ_D
  { 1448,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #1448 = SELNEZ_S
  { 1449,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo254,0,nullptr },  // Inst #1449 = SEL_D
  { 1450,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo255,0,nullptr },  // Inst #1450 = SEL_S
  { 1451,	3,	1,	125,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1451 = SEQ
  { 1452,	3,	1,	126,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #1452 = SEQi
  { 1453,	3,	0,	127,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1453 = SH
  { 1454,	3,	0,	127,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo250,0,nullptr },  // Inst #1454 = SH16_MM
  { 1455,	3,	0,	127,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1455 = SH64
  { 1456,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1456 = SHF_B
  { 1457,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1457 = SHF_H
  { 1458,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1458 = SHF_W
  { 1459,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo256,0,nullptr },  // Inst #1459 = SHILO
  { 1460,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo222,0,nullptr },  // Inst #1460 = SHILOV
  { 1461,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo257,0,nullptr },  // Inst #1461 = SHLLV_PH
  { 1462,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo257,0,nullptr },  // Inst #1462 = SHLLV_QB
  { 1463,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo257,0,nullptr },  // Inst #1463 = SHLLV_S_PH
  { 1464,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo14,0,nullptr },  // Inst #1464 = SHLLV_S_W
  { 1465,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo258,0,nullptr },  // Inst #1465 = SHLL_PH
  { 1466,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo258,0,nullptr },  // Inst #1466 = SHLL_QB
  { 1467,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo258,0,nullptr },  // Inst #1467 = SHLL_S_PH
  { 1468,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo29,0,nullptr },  // Inst #1468 = SHLL_S_W
  { 1469,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1469 = SHRAV_PH
  { 1470,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1470 = SHRAV_QB
  { 1471,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1471 = SHRAV_R_PH
  { 1472,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1472 = SHRAV_R_QB
  { 1473,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1473 = SHRAV_R_W
  { 1474,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1474 = SHRA_PH
  { 1475,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1475 = SHRA_QB
  { 1476,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1476 = SHRA_R_PH
  { 1477,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1477 = SHRA_R_QB
  { 1478,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1478 = SHRA_R_W
  { 1479,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1479 = SHRLV_PH
  { 1480,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1480 = SHRLV_QB
  { 1481,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1481 = SHRL_PH
  { 1482,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1482 = SHRL_QB
  { 1483,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1483 = SH_MM
  { 1484,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo54,0,nullptr },  // Inst #1484 = SLDI_B
  { 1485,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo55,0,nullptr },  // Inst #1485 = SLDI_D
  { 1486,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo56,0,nullptr },  // Inst #1486 = SLDI_H
  { 1487,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo57,0,nullptr },  // Inst #1487 = SLDI_W
  { 1488,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo259,0,nullptr },  // Inst #1488 = SLD_B
  { 1489,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo260,0,nullptr },  // Inst #1489 = SLD_D
  { 1490,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo261,0,nullptr },  // Inst #1490 = SLD_H
  { 1491,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo262,0,nullptr },  // Inst #1491 = SLD_W
  { 1492,	3,	1,	128,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1492 = SLL
  { 1493,	3,	1,	128,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1493 = SLL16_MM
  { 1494,	2,	1,	128,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #1494 = SLL64_32
  { 1495,	2,	1,	128,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #1495 = SLL64_64
  { 1496,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1496 = SLLI_B
  { 1497,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1497 = SLLI_D
  { 1498,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1498 = SLLI_H
  { 1499,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1499 = SLLI_W
  { 1500,	3,	1,	129,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1500 = SLLV
  { 1501,	3,	1,	129,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1501 = SLLV_MM
  { 1502,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1502 = SLL_B
  { 1503,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1503 = SLL_D
  { 1504,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1504 = SLL_H
  { 1505,	3,	1,	128,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1505 = SLL_MM
  { 1506,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1506 = SLL_W
  { 1507,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1507 = SLT
  { 1508,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo263,0,nullptr },  // Inst #1508 = SLT64
  { 1509,	3,	1,	130,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1509 = SLT_MM
  { 1510,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1510 = SLTi
  { 1511,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1511 = SLTi64
  { 1512,	3,	1,	131,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1512 = SLTi_MM
  { 1513,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1513 = SLTiu
  { 1514,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1514 = SLTiu64
  { 1515,	3,	1,	131,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1515 = SLTiu_MM
  { 1516,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1516 = SLTu
  { 1517,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo263,0,nullptr },  // Inst #1517 = SLTu64
  { 1518,	3,	1,	130,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1518 = SLTu_MM
  { 1519,	3,	1,	125,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1519 = SNE
  { 1520,	3,	1,	126,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #1520 = SNEi
  { 1521,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1521 = SNZ_B_PSEUDO
  { 1522,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo266,0,nullptr },  // Inst #1522 = SNZ_D_PSEUDO
  { 1523,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo267,0,nullptr },  // Inst #1523 = SNZ_H_PSEUDO
  { 1524,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1524 = SNZ_V_PSEUDO
  { 1525,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo268,0,nullptr },  // Inst #1525 = SNZ_W_PSEUDO
  { 1526,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1526 = SPLATI_B
  { 1527,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1527 = SPLATI_D
  { 1528,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1528 = SPLATI_H
  { 1529,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1529 = SPLATI_W
  { 1530,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo269,0,nullptr },  // Inst #1530 = SPLAT_B
  { 1531,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo270,0,nullptr },  // Inst #1531 = SPLAT_D
  { 1532,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo271,0,nullptr },  // Inst #1532 = SPLAT_H
  { 1533,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo272,0,nullptr },  // Inst #1533 = SPLAT_W
  { 1534,	3,	1,	132,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1534 = SRA
  { 1535,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1535 = SRAI_B
  { 1536,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1536 = SRAI_D
  { 1537,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1537 = SRAI_H
  { 1538,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1538 = SRAI_W
  { 1539,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1539 = SRARI_B
  { 1540,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1540 = SRARI_D
  { 1541,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1541 = SRARI_H
  { 1542,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1542 = SRARI_W
  { 1543,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1543 = SRAR_B
  { 1544,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1544 = SRAR_D
  { 1545,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1545 = SRAR_H
  { 1546,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1546 = SRAR_W
  { 1547,	3,	1,	133,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1547 = SRAV
  { 1548,	3,	1,	133,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1548 = SRAV_MM
  { 1549,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1549 = SRA_B
  { 1550,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1550 = SRA_D
  { 1551,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1551 = SRA_H
  { 1552,	3,	1,	132,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1552 = SRA_MM
  { 1553,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1553 = SRA_W
  { 1554,	3,	1,	134,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1554 = SRL
  { 1555,	3,	1,	134,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1555 = SRL16_MM
  { 1556,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1556 = SRLI_B
  { 1557,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1557 = SRLI_D
  { 1558,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1558 = SRLI_H
  { 1559,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1559 = SRLI_W
  { 1560,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1560 = SRLRI_B
  { 1561,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1561 = SRLRI_D
  { 1562,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1562 = SRLRI_H
  { 1563,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1563 = SRLRI_W
  { 1564,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1564 = SRLR_B
  { 1565,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1565 = SRLR_D
  { 1566,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1566 = SRLR_H
  { 1567,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1567 = SRLR_W
  { 1568,	3,	1,	135,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1568 = SRLV
  { 1569,	3,	1,	135,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1569 = SRLV_MM
  { 1570,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1570 = SRL_B
  { 1571,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1571 = SRL_D
  { 1572,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1572 = SRL_H
  { 1573,	3,	1,	134,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1573 = SRL_MM
  { 1574,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1574 = SRL_W
  { 1575,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1575 = SSNOP
  { 1576,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1576 = SSNOP_MM
  { 1577,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo176,0,nullptr },  // Inst #1577 = STORE_ACC128
  { 1578,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo177,0,nullptr },  // Inst #1578 = STORE_ACC64
  { 1579,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #1579 = STORE_ACC64DSP
  { 1580,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo179,0,nullptr },  // Inst #1580 = STORE_CCOND_DSP
  { 1581,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo171,0,nullptr },  // Inst #1581 = ST_B
  { 1582,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo172,0,nullptr },  // Inst #1582 = ST_D
  { 1583,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo173,0,nullptr },  // Inst #1583 = ST_H
  { 1584,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo174,0,nullptr },  // Inst #1584 = ST_W
  { 1585,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1585 = SUB
  { 1586,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1586 = SUBQH_PH
  { 1587,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1587 = SUBQH_R_PH
  { 1588,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1588 = SUBQH_R_W
  { 1589,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1589 = SUBQH_W
  { 1590,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #1590 = SUBQ_PH
  { 1591,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #1591 = SUBQ_S_PH
  { 1592,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14,0,nullptr },  // Inst #1592 = SUBQ_S_W
  { 1593,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1593 = SUBSUS_U_B
  { 1594,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1594 = SUBSUS_U_D
  { 1595,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1595 = SUBSUS_U_H
  { 1596,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1596 = SUBSUS_U_W
  { 1597,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1597 = SUBSUU_S_B
  { 1598,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1598 = SUBSUU_S_D
  { 1599,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1599 = SUBSUU_S_H
  { 1600,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1600 = SUBSUU_S_W
  { 1601,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1601 = SUBS_S_B
  { 1602,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1602 = SUBS_S_D
  { 1603,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1603 = SUBS_S_H
  { 1604,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1604 = SUBS_S_W
  { 1605,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1605 = SUBS_U_B
  { 1606,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1606 = SUBS_U_D
  { 1607,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1607 = SUBS_U_H
  { 1608,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1608 = SUBS_U_W
  { 1609,	3,	1,	136,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1609 = SUBU16_MM
  { 1610,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1610 = SUBUH_QB
  { 1611,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1611 = SUBUH_R_QB
  { 1612,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #1612 = SUBU_PH
  { 1613,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #1613 = SUBU_QB
  { 1614,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #1614 = SUBU_S_PH
  { 1615,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo19,0,nullptr },  // Inst #1615 = SUBU_S_QB
  { 1616,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1616 = SUBVI_B
  { 1617,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1617 = SUBVI_D
  { 1618,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1618 = SUBVI_H
  { 1619,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1619 = SUBVI_W
  { 1620,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1620 = SUBV_B
  { 1621,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1621 = SUBV_D
  { 1622,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1622 = SUBV_H
  { 1623,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1623 = SUBV_W
  { 1624,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1624 = SUB_MM
  { 1625,	3,	1,	136,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1625 = SUBu
  { 1626,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1626 = SUBu_MM
  { 1627,	3,	0,	137,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #1627 = SUXC1
  { 1628,	3,	0,	137,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #1628 = SUXC164
  { 1629,	3,	0,	137,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #1629 = SUXC1_MM
  { 1630,	3,	0,	138,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1630 = SW
  { 1631,	3,	0,	138,	2,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo250,0,nullptr },  // Inst #1631 = SW16_MM
  { 1632,	3,	0,	138,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1632 = SW64
  { 1633,	3,	0,	139,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #1633 = SWC1
  { 1634,	3,	0,	139,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #1634 = SWC1_MM
  { 1635,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #1635 = SWC2
  { 1636,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #1636 = SWC2_R6
  { 1637,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #1637 = SWC3
  { 1638,	3,	0,	140,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1638 = SWL
  { 1639,	3,	0,	140,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1639 = SWL64
  { 1640,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #1640 = SWL_MM
  { 1641,	3,	0,	0,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1641 = SWM16_MM
  { 1642,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1642 = SWM32_MM
  { 1643,	3,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1643 = SWM_MM
  { 1644,	4,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1644 = SWP_MM
  { 1645,	3,	0,	141,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1645 = SWR
  { 1646,	3,	0,	141,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #1646 = SWR64
  { 1647,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #1647 = SWR_MM
  { 1648,	3,	0,	138,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #1648 = SWSP_MM
  { 1649,	3,	0,	142,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1649 = SWXC1
  { 1650,	3,	0,	142,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1650 = SWXC1_MM
  { 1651,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #1651 = SW_MM
  { 1652,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1652 = SYNC
  { 1653,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo273,0,nullptr },  // Inst #1653 = SYNCI
  { 1654,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1654 = SYNC_MM
  { 1655,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1655 = SYSCALL
  { 1656,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1656 = SYSCALL_MM
  { 1657,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1657 = SZ_B_PSEUDO
  { 1658,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo266,0,nullptr },  // Inst #1658 = SZ_D_PSEUDO
  { 1659,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo267,0,nullptr },  // Inst #1659 = SZ_H_PSEUDO
  { 1660,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1660 = SZ_V_PSEUDO
  { 1661,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo268,0,nullptr },  // Inst #1661 = SZ_W_PSEUDO
  { 1662,	0,	0,	143,	2,	0|(1<<MCID::MayStore)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1662 = Save16
  { 1663,	0,	0,	143,	2,	0|(1<<MCID::MayStore)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1663 = SaveX16
  { 1664,	4,	0,	117,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1664 = SbRxRyOffMemX16
  { 1665,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo274,0,nullptr },  // Inst #1665 = SebRx16
  { 1666,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo274,0,nullptr },  // Inst #1666 = SehRx16
  { 1667,	4,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo275,0,nullptr },  // Inst #1667 = SelBeqZ
  { 1668,	4,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo275,0,nullptr },  // Inst #1668 = SelBneZ
  { 1669,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo276,0,nullptr },  // Inst #1669 = SelTBteqZCmp
  { 1670,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo277,0,nullptr },  // Inst #1670 = SelTBteqZCmpi
  { 1671,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo276,0,nullptr },  // Inst #1671 = SelTBteqZSlt
  { 1672,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo277,0,nullptr },  // Inst #1672 = SelTBteqZSlti
  { 1673,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo277,0,nullptr },  // Inst #1673 = SelTBteqZSltiu
  { 1674,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo276,0,nullptr },  // Inst #1674 = SelTBteqZSltu
  { 1675,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo276,0,nullptr },  // Inst #1675 = SelTBtneZCmp
  { 1676,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo277,0,nullptr },  // Inst #1676 = SelTBtneZCmpi
  { 1677,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo276,0,nullptr },  // Inst #1677 = SelTBtneZSlt
  { 1678,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo277,0,nullptr },  // Inst #1678 = SelTBtneZSlti
  { 1679,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo277,0,nullptr },  // Inst #1679 = SelTBtneZSltiu
  { 1680,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo276,0,nullptr },  // Inst #1680 = SelTBtneZSltu
  { 1681,	4,	0,	127,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1681 = ShRxRyOffMemX16
  { 1682,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo278,0,nullptr },  // Inst #1682 = SllX16
  { 1683,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #1683 = SllvRxRy16
  { 1684,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #1684 = SltCCRxRy16
  { 1685,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo95,0,nullptr },  // Inst #1685 = SltRxRy16
  { 1686,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo278,0,nullptr },  // Inst #1686 = SltiCCRxImmX16
  { 1687,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39,0,nullptr },  // Inst #1687 = SltiRxImm16
  { 1688,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39,0,nullptr },  // Inst #1688 = SltiRxImmX16
  { 1689,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo278,0,nullptr },  // Inst #1689 = SltiuCCRxImmX16
  { 1690,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39,0,nullptr },  // Inst #1690 = SltiuRxImm16
  { 1691,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39,0,nullptr },  // Inst #1691 = SltiuRxImmX16
  { 1692,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #1692 = SltuCCRxRy16
  { 1693,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo95,0,nullptr },  // Inst #1693 = SltuRxRy16
  { 1694,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo42,0,nullptr },  // Inst #1694 = SltuRxRyRz16
  { 1695,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo278,0,nullptr },  // Inst #1695 = SraX16
  { 1696,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #1696 = SravRxRy16
  { 1697,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo278,0,nullptr },  // Inst #1697 = SrlX16
  { 1698,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #1698 = SrlvRxRy16
  { 1699,	3,	1,	6,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo42,0,nullptr },  // Inst #1699 = SubuRxRyRz16
  { 1700,	4,	0,	138,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1700 = SwRxRyOffMemX16
  { 1701,	3,	0,	138,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo192,0,nullptr },  // Inst #1701 = SwRxSpImmX16
  { 1702,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #1702 = TAILCALL
  { 1703,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo153,0,nullptr },  // Inst #1703 = TAILCALL64_R
  { 1704,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo66,0,nullptr },  // Inst #1704 = TAILCALL_R
  { 1705,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1705 = TEQ
  { 1706,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1706 = TEQI
  { 1707,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1707 = TEQI_MM
  { 1708,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1708 = TEQ_MM
  { 1709,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1709 = TGE
  { 1710,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1710 = TGEI
  { 1711,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1711 = TGEIU
  { 1712,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1712 = TGEIU_MM
  { 1713,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1713 = TGEI_MM
  { 1714,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1714 = TGEU
  { 1715,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1715 = TGEU_MM
  { 1716,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1716 = TGE_MM
  { 1717,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1717 = TLBP
  { 1718,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1718 = TLBP_MM
  { 1719,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1719 = TLBR
  { 1720,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1720 = TLBR_MM
  { 1721,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1721 = TLBWI
  { 1722,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1722 = TLBWI_MM
  { 1723,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1723 = TLBWR
  { 1724,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1724 = TLBWR_MM
  { 1725,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1725 = TLT
  { 1726,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1726 = TLTI
  { 1727,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1727 = TLTIU_MM
  { 1728,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1728 = TLTI_MM
  { 1729,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1729 = TLTU
  { 1730,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1730 = TLTU_MM
  { 1731,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1731 = TLT_MM
  { 1732,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1732 = TNE
  { 1733,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1733 = TNEI
  { 1734,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1734 = TNEI_MM
  { 1735,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1735 = TNE_MM
  { 1736,	0,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1736 = TRAP
  { 1737,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #1737 = TRUNC_L_D64
  { 1738,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #1738 = TRUNC_L_S
  { 1739,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #1739 = TRUNC_W_D32
  { 1740,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #1740 = TRUNC_W_D64
  { 1741,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #1741 = TRUNC_W_MM
  { 1742,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #1742 = TRUNC_W_S
  { 1743,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #1743 = TRUNC_W_S_MM
  { 1744,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1744 = TTLTIU
  { 1745,	2,	0,	111,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1745 = UDIV
  { 1746,	2,	0,	111,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1746 = UDIV_MM
  { 1747,	3,	1,	22,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList33, OperandInfo32,0,nullptr },  // Inst #1747 = V3MULU
  { 1748,	3,	1,	22,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList25, OperandInfo32,0,nullptr },  // Inst #1748 = VMM0
  { 1749,	3,	1,	22,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList34, OperandInfo32,0,nullptr },  // Inst #1749 = VMULU
  { 1750,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #1750 = VSHF_B
  { 1751,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #1751 = VSHF_D
  { 1752,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #1752 = VSHF_H
  { 1753,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #1753 = VSHF_W
  { 1754,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1754 = WAIT
  { 1755,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1755 = WAIT_MM
  { 1756,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1756 = WRDSP
  { 1757,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1757 = WSBH
  { 1758,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1758 = WSBH_MM
  { 1759,	3,	1,	145,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1759 = XOR
  { 1760,	3,	1,	145,	2,	0|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #1760 = XOR16_MM
  { 1761,	3,	1,	145,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #1761 = XOR64
  { 1762,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #1762 = XORI_B
  { 1763,	3,	1,	145,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1763 = XOR_MM
  { 1764,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1764 = XOR_V
  { 1765,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1765 = XOR_V_D_PSEUDO
  { 1766,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1766 = XOR_V_H_PSEUDO
  { 1767,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1767 = XOR_V_W_PSEUDO
  { 1768,	3,	1,	146,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1768 = XORi
  { 1769,	3,	1,	145,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #1769 = XORi64
  { 1770,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #1770 = XORi_MM
  { 1771,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo43,0,nullptr },  // Inst #1771 = XorRxRxRy16
};

extern const char MipsInstrNameData[] = {
  /* 0 */ 'D', 'M', 'F', 'C', '0', 0,
  /* 6 */ 'D', 'M', 'T', 'C', '0', 0,
  /* 12 */ 'V', 'M', 'M', '0', 0,
  /* 17 */ 'M', 'T', 'M', '0', 0,
  /* 22 */ 'M', 'T', 'P', '0', 0,
  /* 27 */ 'B', 'B', 'I', 'T', '0', 0,
  /* 33 */ 'L', 'D', 'C', '1', 0,
  /* 38 */ 'S', 'D', 'C', '1', 0,
  /* 43 */ 'C', 'F', 'C', '1', 0,
  /* 48 */ 'D', 'M', 'F', 'C', '1', 0,
  /* 54 */ 'C', 'T', 'C', '1', 0,
  /* 59 */ 'D', 'M', 'T', 'C', '1', 0,
  /* 65 */ 'L', 'W', 'C', '1', 0,
  /* 70 */ 'S', 'W', 'C', '1', 0,
  /* 75 */ 'L', 'D', 'X', 'C', '1', 0,
  /* 81 */ 'S', 'D', 'X', 'C', '1', 0,
  /* 87 */ 'L', 'U', 'X', 'C', '1', 0,
  /* 93 */ 'S', 'U', 'X', 'C', '1', 0,
  /* 99 */ 'L', 'W', 'X', 'C', '1', 0,
  /* 105 */ 'S', 'W', 'X', 'C', '1', 0,
  /* 111 */ 'M', 'T', 'M', '1', 0,
  /* 116 */ 'M', 'T', 'P', '1', 0,
  /* 121 */ 'B', 'B', 'I', 'T', '1', 0,
  /* 127 */ 'B', 'B', 'I', 'T', '0', '3', '2', 0,
  /* 135 */ 'B', 'B', 'I', 'T', '1', '3', '2', 0,
  /* 143 */ 'D', 'S', 'R', 'A', '3', '2', 0,
  /* 150 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 160 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 170 */ 'F', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 179 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 189 */ 'F', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 198 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 208 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '3', '2', 0,
  /* 218 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 229 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 239 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 249 */ 'C', '_', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 258 */ 'C', '_', 'S', 'F', '_', 'D', '3', '2', 0,
  /* 267 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', 0,
  /* 276 */ 'C', '_', 'F', '_', 'D', '3', '2', 0,
  /* 284 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'D', '3', '2', 0,
  /* 305 */ 'F', 'N', 'E', 'G', '_', 'D', '3', '2', 0,
  /* 314 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', 0,
  /* 325 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', 0,
  /* 336 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '3', '2', 0,
  /* 346 */ 'F', 'M', 'U', 'L', '_', 'D', '3', '2', 0,
  /* 355 */ 'C', '_', 'U', 'N', '_', 'D', '3', '2', 0,
  /* 364 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', 0,
  /* 373 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 383 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 393 */ 'C', '_', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 402 */ 'F', 'A', 'B', 'S', '_', 'D', '3', '2', 0,
  /* 411 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', 0,
  /* 421 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'D', '3', '2', 0,
  /* 438 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '3', '2', 0,
  /* 448 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 458 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 468 */ 'C', '_', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 477 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '3', '2', 0,
  /* 487 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', 0,
  /* 496 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'D', '3', '2', 0,
  /* 517 */ 'F', 'D', 'I', 'V', '_', 'D', '3', '2', 0,
  /* 526 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', 0,
  /* 535 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '3', '2', 0,
  /* 547 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '3', '2', 0,
  /* 559 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '3', '2', 0,
  /* 570 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '3', '2', 0,
  /* 582 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '3', '2', 0,
  /* 592 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', 0,
  /* 601 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 621 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 641 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 662 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 682 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 698 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 718 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 738 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 757 */ 'D', 'S', 'L', 'L', '3', '2', 0,
  /* 764 */ 'D', 'S', 'R', 'L', '3', '2', 0,
  /* 771 */ 'D', 'R', 'O', 'T', 'R', '3', '2', 0,
  /* 779 */ 'C', 'I', 'N', 'S', '3', '2', 0,
  /* 786 */ 'E', 'X', 'T', 'S', '3', '2', 0,
  /* 793 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', 0,
  /* 802 */ 'D', 'S', 'L', 'L', '6', '4', '_', '3', '2', 0,
  /* 812 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '3', '2', 0,
  /* 828 */ 'L', 'w', 'C', 'o', 'n', 's', 't', 'a', 'n', 't', '3', '2', 0,
  /* 841 */ 'L', 'D', 'C', '2', 0,
  /* 846 */ 'S', 'D', 'C', '2', 0,
  /* 851 */ 'D', 'M', 'F', 'C', '2', 0,
  /* 857 */ 'D', 'M', 'T', 'C', '2', 0,
  /* 863 */ 'L', 'W', 'C', '2', 0,
  /* 868 */ 'S', 'W', 'C', '2', 0,
  /* 873 */ 'M', 'T', 'M', '2', 0,
  /* 878 */ 'M', 'T', 'P', '2', 0,
  /* 883 */ 'L', 'D', 'C', '3', 0,
  /* 888 */ 'S', 'D', 'C', '3', 0,
  /* 893 */ 'L', 'W', 'C', '3', 0,
  /* 898 */ 'S', 'W', 'C', '3', 0,
  /* 903 */ 'L', 'D', 'C', '1', '6', '4', 0,
  /* 910 */ 'S', 'D', 'C', '1', '6', '4', 0,
  /* 917 */ 'L', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 925 */ 'S', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 933 */ 'L', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 941 */ 'S', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 949 */ 'S', 'E', 'B', '6', '4', 0,
  /* 955 */ 'L', 'B', '6', '4', 0,
  /* 960 */ 'S', 'B', '6', '4', 0,
  /* 965 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 976 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 988 */ 'A', 'N', 'D', '6', '4', 0,
  /* 994 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 1004 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 1014 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 1027 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 1040 */ 'F', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 1049 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 1059 */ 'F', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 1068 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 1078 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '6', '4', 0,
  /* 1088 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1099 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1109 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1119 */ 'C', '_', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1128 */ 'C', '_', 'S', 'F', '_', 'D', '6', '4', 0,
  /* 1137 */ 'M', 'O', 'V', 'F', '_', 'D', '6', '4', 0,
  /* 1146 */ 'C', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1154 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1175 */ 'F', 'N', 'E', 'G', '_', 'D', '6', '4', 0,
  /* 1184 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1195 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1206 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '6', '4', 0,
  /* 1216 */ 'F', 'M', 'U', 'L', '_', 'D', '6', '4', 0,
  /* 1225 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1237 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1249 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1260 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1272 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1282 */ 'C', '_', 'U', 'N', '_', 'D', '6', '4', 0,
  /* 1291 */ 'F', 'C', 'M', 'P', '_', 'D', '6', '4', 0,
  /* 1300 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1310 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1320 */ 'C', '_', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1329 */ 'F', 'A', 'B', 'S', '_', 'D', '6', '4', 0,
  /* 1338 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '6', '4', 0,
  /* 1348 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'D', '6', '4', 0,
  /* 1365 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '6', '4', 0,
  /* 1375 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1385 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1395 */ 'C', '_', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1404 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '6', '4', 0,
  /* 1414 */ 'M', 'O', 'V', 'T', '_', 'D', '6', '4', 0,
  /* 1423 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'D', '6', '4', 0,
  /* 1444 */ 'F', 'D', 'I', 'V', '_', 'D', '6', '4', 0,
  /* 1453 */ 'F', 'M', 'O', 'V', '_', 'D', '6', '4', 0,
  /* 1462 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1474 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1486 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1497 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1509 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1519 */ 'B', 'N', 'E', '6', '4', 0,
  /* 1525 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 0,
  /* 1538 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', 0,
  /* 1556 */ 'S', 'E', 'H', '6', '4', 0,
  /* 1562 */ 'L', 'H', '6', '4', 0,
  /* 1567 */ 'S', 'H', '6', '4', 0,
  /* 1572 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', '6', '4', 0,
  /* 1585 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '6', '4', 0,
  /* 1600 */ 'M', 'T', 'H', 'I', '6', '4', 0,
  /* 1607 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1620 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1633 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 1653 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 1673 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1694 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1714 */ 'M', 'O', 'V', 'F', '_', 'I', '6', '4', 0,
  /* 1723 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'I', '6', '4', 0,
  /* 1744 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1755 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1766 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1782 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1802 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1822 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1841 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '6', '4', 0,
  /* 1858 */ 'M', 'O', 'V', 'T', '_', 'I', '6', '4', 0,
  /* 1867 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'I', '6', '4', 0,
  /* 1888 */ 'L', 'W', 'L', '6', '4', 0,
  /* 1894 */ 'S', 'W', 'L', '6', '4', 0,
  /* 1900 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', '6', '4', 0,
  /* 1913 */ 'M', 'T', 'L', 'O', '6', '4', 0,
  /* 1920 */ 'B', 'E', 'Q', '6', '4', 0,
  /* 1926 */ 'J', 'R', '6', '4', 0,
  /* 1931 */ 'J', 'A', 'L', 'R', '6', '4', 0,
  /* 1938 */ 'N', 'O', 'R', '6', '4', 0,
  /* 1944 */ 'X', 'O', 'R', '6', '4', 0,
  /* 1950 */ 'R', 'D', 'H', 'W', 'R', '6', '4', 0,
  /* 1958 */ 'L', 'W', 'R', '6', '4', 0,
  /* 1964 */ 'S', 'W', 'R', '6', '4', 0,
  /* 1970 */ 'S', 'L', 'T', '6', '4', 0,
  /* 1976 */ 'L', 'W', '6', '4', 0,
  /* 1981 */ 'S', 'W', '6', '4', 0,
  /* 1986 */ 'B', 'G', 'E', 'Z', '6', '4', 0,
  /* 1993 */ 'B', 'L', 'E', 'Z', '6', '4', 0,
  /* 2000 */ 'S', 'E', 'L', 'N', 'E', 'Z', '6', '4', 0,
  /* 2009 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '6', '4', 0,
  /* 2018 */ 'B', 'G', 'T', 'Z', '6', '4', 0,
  /* 2025 */ 'B', 'L', 'T', 'Z', '6', '4', 0,
  /* 2032 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', '_', '6', '4', 0,
  /* 2048 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', '_', '6', '4', 0,
  /* 2069 */ 'S', 'L', 'L', '6', '4', '_', '6', '4', 0,
  /* 2078 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', '6', '4', 0,
  /* 2101 */ 'A', 'N', 'D', 'i', '6', '4', 0,
  /* 2108 */ 'X', 'O', 'R', 'i', '6', '4', 0,
  /* 2115 */ 'S', 'L', 'T', 'i', '6', '4', 0,
  /* 2122 */ 'L', 'U', 'i', '6', '4', 0,
  /* 2128 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 2143 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 2159 */ 'L', 'B', 'u', '6', '4', 0,
  /* 2165 */ 'L', 'H', 'u', '6', '4', 0,
  /* 2171 */ 'S', 'L', 'T', 'u', '6', '4', 0,
  /* 2178 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '6', '4', 0,
  /* 2190 */ 'S', 'L', 'T', 'i', 'u', '6', '4', 0,
  /* 2198 */ 'M', 'o', 'v', 'e', 'R', '3', '2', '1', '6', 0,
  /* 2208 */ 'R', 'e', 't', 'R', 'A', '1', '6', 0,
  /* 2216 */ 'J', 'a', 'l', 'B', '1', '6', 0,
  /* 2223 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 2243 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 2263 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2284 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2304 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 2320 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 2340 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2360 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2379 */ 'M', 'o', 'v', 'e', '3', '2', 'R', '1', '6', 0,
  /* 2389 */ 'S', 'r', 'a', 'X', '1', '6', 0,
  /* 2396 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'X', '1', '6', 0,
  /* 2407 */ 'S', 'a', 'v', 'e', 'X', '1', '6', 0,
  /* 2415 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2430 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2445 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2460 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2475 */ 'S', 'l', 'l', 'X', '1', '6', 0,
  /* 2482 */ 'S', 'r', 'l', 'X', '1', '6', 0,
  /* 2489 */ 'L', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2505 */ 'S', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2521 */ 'L', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2537 */ 'S', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2553 */ 'L', 'b', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2570 */ 'L', 'h', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2587 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2606 */ 'L', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2622 */ 'S', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2638 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'P', 'c', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2654 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2668 */ 'L', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2681 */ 'S', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2694 */ 'S', 'l', 't', 'i', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2709 */ 'S', 'l', 't', 'i', 'u', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2725 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2736 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2749 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2762 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2776 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2790 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2806 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2819 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2832 */ 'B', 'i', 'm', 'm', 'X', '1', '6', 0,
  /* 2840 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'A', 'l', 'i', 'g', 'n', 'X', '1', '6', 0,
  /* 2856 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', 'X', '1', '6', 0,
  /* 2869 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2883 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2897 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2911 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2925 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2941 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2957 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2972 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2987 */ 'B', 't', 'n', 'e', 'z', 'X', '1', '6', 0,
  /* 2996 */ 'B', 't', 'e', 'q', 'z', 'X', '1', '6', 0,
  /* 3005 */ 'J', 'r', 'c', 'R', 'a', '1', '6', 0,
  /* 3013 */ 'J', 'r', 'R', 'a', '1', '6', 0,
  /* 3020 */ 'R', 'e', 's', 't', 'o', 'r', 'e', '1', '6', 0,
  /* 3030 */ 'G', 'o', 't', 'P', 'r', 'o', 'l', 'o', 'g', 'u', 'e', '1', '6', 0,
  /* 3044 */ 'S', 'a', 'v', 'e', '1', '6', 0,
  /* 3051 */ 'J', 'u', 'm', 'p', 'L', 'i', 'n', 'k', 'R', 'e', 'g', '1', '6', 0,
  /* 3065 */ 'M', 'f', 'h', 'i', '1', '6', 0,
  /* 3072 */ 'B', 'r', 'e', 'a', 'k', '1', '6', 0,
  /* 3080 */ 'J', 'a', 'l', '1', '6', 0,
  /* 3086 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', '1', '6', 0,
  /* 3099 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3109 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3121 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3133 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3146 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3161 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3173 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3185 */ 'B', 'i', 'm', 'm', '1', '6', 0,
  /* 3192 */ 'M', 'f', 'l', 'o', '1', '6', 0,
  /* 3199 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', '1', '6', 0,
  /* 3211 */ 'S', 'e', 'b', 'R', 'x', '1', '6', 0,
  /* 3219 */ 'J', 'r', 'c', 'R', 'x', '1', '6', 0,
  /* 3227 */ 'S', 'e', 'h', 'R', 'x', '1', '6', 0,
  /* 3235 */ 'S', 'l', 't', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3247 */ 'S', 'l', 't', 'u', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3260 */ 'N', 'e', 'g', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3270 */ 'C', 'm', 'p', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3280 */ 'S', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3290 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3301 */ 'N', 'o', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3311 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3322 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3334 */ 'D', 'i', 'v', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3345 */ 'S', 'r', 'a', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3356 */ 'D', 'i', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3366 */ 'S', 'l', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3377 */ 'S', 'r', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3388 */ 'A', 'n', 'd', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3400 */ 'O', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3411 */ 'X', 'o', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3423 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3436 */ 'S', 'u', 'b', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3449 */ 'A', 'd', 'd', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3462 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3475 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3489 */ 'B', 't', 'n', 'e', 'z', '1', '6', 0,
  /* 3497 */ 'B', 't', 'e', 'q', 'z', '1', '6', 0,
  /* 3505 */ 'L', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 3513 */ 'S', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 3521 */ 'L', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 3529 */ 'S', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 3537 */ 'D', 'L', 'S', 'A', '_', 'R', '6', 0,
  /* 3545 */ 'J', 'R', '_', 'H', 'B', '_', 'R', '6', 0,
  /* 3554 */ 'S', 'C', '_', 'R', '6', 0,
  /* 3560 */ 'S', 'C', 'D', '_', 'R', '6', 0,
  /* 3567 */ 'L', 'L', 'D', '_', 'R', '6', 0,
  /* 3574 */ 'C', 'A', 'C', 'H', 'E', '_', 'R', '6', 0,
  /* 3583 */ 'P', 'R', 'E', 'F', '_', 'R', '6', 0,
  /* 3591 */ 'L', 'L', '_', 'R', '6', 0,
  /* 3597 */ 'D', 'M', 'U', 'L', '_', 'R', '6', 0,
  /* 3605 */ 'D', 'C', 'L', 'O', '_', 'R', '6', 0,
  /* 3613 */ 'S', 'D', 'B', 'B', 'P', '_', 'R', '6', 0,
  /* 3622 */ 'D', 'C', 'L', 'Z', '_', 'R', '6', 0,
  /* 3630 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 3642 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 3655 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 3674 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 3693 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 3713 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 3732 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 3747 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 3766 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 3785 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 3803 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3818 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3834 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3849 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3865 */ 'D', 'S', 'R', 'A', 0,
  /* 3870 */ 'R', 'e', 't', 'R', 'A', 0,
  /* 3876 */ 'D', 'L', 'S', 'A', 0,
  /* 3881 */ 'C', 'F', 'C', 'M', 'S', 'A', 0,
  /* 3888 */ 'C', 'T', 'C', 'M', 'S', 'A', 0,
  /* 3895 */ 'S', 'E', 'B', 0,
  /* 3899 */ 'E', 'H', 'B', 0,
  /* 3903 */ 'J', 'R', '_', 'H', 'B', 0,
  /* 3909 */ 'J', 'A', 'L', 'R', '_', 'H', 'B', 0,
  /* 3917 */ 'L', 'B', 0,
  /* 3920 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', 0,
  /* 3928 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3941 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3953 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3970 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', 0,
  /* 3979 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', 0,
  /* 3988 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'Q', 'B', 0,
  /* 4002 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', 0,
  /* 4010 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', 0,
  /* 4018 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', 0,
  /* 4026 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4039 */ 'C', 'M', 'P', 'G', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4051 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4068 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', 0,
  /* 4078 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 4089 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 4100 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', 0,
  /* 4111 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', 0,
  /* 4121 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 4131 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 4141 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4154 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4166 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4183 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', 0,
  /* 4191 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', 0,
  /* 4199 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', 0,
  /* 4208 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4217 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4226 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4235 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', 0,
  /* 4246 */ 'S', 'B', 0,
  /* 4249 */ 'M', 'O', 'D', 'S', 'U', 'B', 0,
  /* 4256 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 0,
  /* 4267 */ 'S', 'R', 'A', '_', 'B', 0,
  /* 4273 */ 'A', 'D', 'D', '_', 'A', '_', 'B', 0,
  /* 4281 */ 'M', 'I', 'N', '_', 'A', '_', 'B', 0,
  /* 4289 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'B', 0,
  /* 4298 */ 'M', 'A', 'X', '_', 'A', '_', 'B', 0,
  /* 4306 */ 'N', 'L', 'O', 'C', '_', 'B', 0,
  /* 4313 */ 'N', 'L', 'Z', 'C', '_', 'B', 0,
  /* 4320 */ 'S', 'L', 'D', '_', 'B', 0,
  /* 4326 */ 'P', 'C', 'K', 'O', 'D', '_', 'B', 0,
  /* 4334 */ 'I', 'L', 'V', 'O', 'D', '_', 'B', 0,
  /* 4342 */ 'I', 'N', 'S', 'V', 'E', '_', 'B', 0,
  /* 4350 */ 'V', 'S', 'H', 'F', '_', 'B', 0,
  /* 4357 */ 'B', 'N', 'E', 'G', '_', 'B', 0,
  /* 4364 */ 'S', 'R', 'A', 'I', '_', 'B', 0,
  /* 4371 */ 'S', 'L', 'D', 'I', '_', 'B', 0,
  /* 4378 */ 'A', 'N', 'D', 'I', '_', 'B', 0,
  /* 4385 */ 'B', 'N', 'E', 'G', 'I', '_', 'B', 0,
  /* 4393 */ 'B', 'S', 'E', 'L', 'I', '_', 'B', 0,
  /* 4401 */ 'S', 'L', 'L', 'I', '_', 'B', 0,
  /* 4408 */ 'S', 'R', 'L', 'I', '_', 'B', 0,
  /* 4415 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'B', 0,
  /* 4424 */ 'C', 'E', 'Q', 'I', '_', 'B', 0,
  /* 4431 */ 'S', 'R', 'A', 'R', 'I', '_', 'B', 0,
  /* 4439 */ 'B', 'C', 'L', 'R', 'I', '_', 'B', 0,
  /* 4447 */ 'S', 'R', 'L', 'R', 'I', '_', 'B', 0,
  /* 4455 */ 'N', 'O', 'R', 'I', '_', 'B', 0,
  /* 4462 */ 'X', 'O', 'R', 'I', '_', 'B', 0,
  /* 4469 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'B', 0,
  /* 4478 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'B', 0,
  /* 4487 */ 'B', 'S', 'E', 'T', 'I', '_', 'B', 0,
  /* 4495 */ 'S', 'U', 'B', 'V', 'I', '_', 'B', 0,
  /* 4503 */ 'A', 'D', 'D', 'V', 'I', '_', 'B', 0,
  /* 4511 */ 'B', 'M', 'Z', 'I', '_', 'B', 0,
  /* 4518 */ 'B', 'M', 'N', 'Z', 'I', '_', 'B', 0,
  /* 4526 */ 'F', 'I', 'L', 'L', '_', 'B', 0,
  /* 4533 */ 'S', 'L', 'L', '_', 'B', 0,
  /* 4539 */ 'S', 'R', 'L', '_', 'B', 0,
  /* 4545 */ 'B', 'I', 'N', 'S', 'L', '_', 'B', 0,
  /* 4553 */ 'I', 'L', 'V', 'L', '_', 'B', 0,
  /* 4560 */ 'C', 'E', 'Q', '_', 'B', 0,
  /* 4566 */ 'S', 'R', 'A', 'R', '_', 'B', 0,
  /* 4573 */ 'B', 'C', 'L', 'R', '_', 'B', 0,
  /* 4580 */ 'S', 'R', 'L', 'R', '_', 'B', 0,
  /* 4587 */ 'B', 'I', 'N', 'S', 'R', '_', 'B', 0,
  /* 4595 */ 'I', 'L', 'V', 'R', '_', 'B', 0,
  /* 4602 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'B', 0,
  /* 4611 */ 'M', 'O', 'D', '_', 'S', '_', 'B', 0,
  /* 4619 */ 'C', 'L', 'E', '_', 'S', '_', 'B', 0,
  /* 4627 */ 'A', 'V', 'E', '_', 'S', '_', 'B', 0,
  /* 4635 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'B', 0,
  /* 4644 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'B', 0,
  /* 4653 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'B', 0,
  /* 4662 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'B', 0,
  /* 4671 */ 'M', 'I', 'N', '_', 'S', '_', 'B', 0,
  /* 4679 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'B', 0,
  /* 4688 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'B', 0,
  /* 4697 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'B', 0,
  /* 4706 */ 'S', 'A', 'T', '_', 'S', '_', 'B', 0,
  /* 4714 */ 'C', 'L', 'T', '_', 'S', '_', 'B', 0,
  /* 4722 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'B', 0,
  /* 4733 */ 'D', 'I', 'V', '_', 'S', '_', 'B', 0,
  /* 4741 */ 'M', 'A', 'X', '_', 'S', '_', 'B', 0,
  /* 4749 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'B', 0,
  /* 4758 */ 'S', 'P', 'L', 'A', 'T', '_', 'B', 0,
  /* 4766 */ 'B', 'S', 'E', 'T', '_', 'B', 0,
  /* 4773 */ 'P', 'C', 'N', 'T', '_', 'B', 0,
  /* 4780 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', 0,
  /* 4789 */ 'S', 'T', '_', 'B', 0,
  /* 4794 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'B', 0,
  /* 4803 */ 'M', 'O', 'D', '_', 'U', '_', 'B', 0,
  /* 4811 */ 'C', 'L', 'E', '_', 'U', '_', 'B', 0,
  /* 4819 */ 'A', 'V', 'E', '_', 'U', '_', 'B', 0,
  /* 4827 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'B', 0,
  /* 4836 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'B', 0,
  /* 4845 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'B', 0,
  /* 4854 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'B', 0,
  /* 4863 */ 'M', 'I', 'N', '_', 'U', '_', 'B', 0,
  /* 4871 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'B', 0,
  /* 4880 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'B', 0,
  /* 4889 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'B', 0,
  /* 4898 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'B', 0,
  /* 4909 */ 'S', 'A', 'T', '_', 'U', '_', 'B', 0,
  /* 4917 */ 'C', 'L', 'T', '_', 'U', '_', 'B', 0,
  /* 4925 */ 'D', 'I', 'V', '_', 'U', '_', 'B', 0,
  /* 4933 */ 'M', 'A', 'X', '_', 'U', '_', 'B', 0,
  /* 4941 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'B', 0,
  /* 4950 */ 'M', 'S', 'U', 'B', 'V', '_', 'B', 0,
  /* 4958 */ 'M', 'A', 'D', 'D', 'V', '_', 'B', 0,
  /* 4966 */ 'P', 'C', 'K', 'E', 'V', '_', 'B', 0,
  /* 4974 */ 'I', 'L', 'V', 'E', 'V', '_', 'B', 0,
  /* 4982 */ 'M', 'U', 'L', 'V', '_', 'B', 0,
  /* 4989 */ 'B', 'Z', '_', 'B', 0,
  /* 4994 */ 'B', 'N', 'Z', '_', 'B', 0,
  /* 5000 */ 'B', 'C', 0,
  /* 5003 */ 'B', 'G', 'E', 'C', 0,
  /* 5008 */ 'B', 'N', 'E', 'C', 0,
  /* 5013 */ 'J', 'I', 'C', 0,
  /* 5017 */ 'B', 'A', 'L', 'C', 0,
  /* 5022 */ 'J', 'I', 'A', 'L', 'C', 0,
  /* 5028 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 5036 */ 'B', 'L', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 5044 */ 'B', 'N', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 5052 */ 'B', 'E', 'Q', 'Z', 'A', 'L', 'C', 0,
  /* 5060 */ 'B', 'G', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 5068 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 5076 */ 'S', 'Y', 'N', 'C', 0,
  /* 5081 */ 'F', 'R', 'A', 'M', 'E', '_', 'A', 'L', 'L', 'O', 'C', 0,
  /* 5093 */ 'L', 'D', 'P', 'C', 0,
  /* 5098 */ 'A', 'U', 'I', 'P', 'C', 0,
  /* 5104 */ 'A', 'L', 'U', 'I', 'P', 'C', 0,
  /* 5111 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', 0,
  /* 5119 */ 'L', 'W', 'U', 'P', 'C', 0,
  /* 5125 */ 'L', 'W', 'P', 'C', 0,
  /* 5130 */ 'B', 'E', 'Q', 'C', 0,
  /* 5135 */ 'A', 'D', 'D', 'S', 'C', 0,
  /* 5141 */ 'B', 'L', 'T', 'C', 0,
  /* 5146 */ 'B', 'G', 'E', 'U', 'C', 0,
  /* 5152 */ 'B', 'L', 'T', 'U', 'C', 0,
  /* 5158 */ 'B', 'N', 'V', 'C', 0,
  /* 5163 */ 'B', 'O', 'V', 'C', 0,
  /* 5168 */ 'A', 'D', 'D', 'W', 'C', 0,
  /* 5174 */ 'B', 'G', 'E', 'Z', 'C', 0,
  /* 5180 */ 'B', 'L', 'E', 'Z', 'C', 0,
  /* 5186 */ 'B', 'N', 'E', 'Z', 'C', 0,
  /* 5192 */ 'B', 'E', 'Q', 'Z', 'C', 0,
  /* 5198 */ 'B', 'G', 'T', 'Z', 'C', 0,
  /* 5204 */ 'B', 'L', 'T', 'Z', 'C', 0,
  /* 5210 */ 'S', 'C', 'D', 0,
  /* 5214 */ 'D', 'A', 'D', 'D', 0,
  /* 5219 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 0,
  /* 5230 */ 'D', 'S', 'H', 'D', 0,
  /* 5235 */ 'L', 'L', 'D', 0,
  /* 5239 */ 'A', 'N', 'D', 0,
  /* 5243 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', 0,
  /* 5251 */ 'A', 'P', 'P', 'E', 'N', 'D', 0,
  /* 5258 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 5271 */ 'D', 'M', 'O', 'D', 0,
  /* 5276 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 5293 */ 'S', 'D', 0,
  /* 5296 */ 'F', 'L', 'O', 'G', '2', '_', 'D', 0,
  /* 5304 */ 'F', 'E', 'X', 'P', '2', '_', 'D', 0,
  /* 5312 */ 'M', 'I', 'N', 'A', '_', 'D', 0,
  /* 5319 */ 'S', 'R', 'A', '_', 'D', 0,
  /* 5325 */ 'M', 'A', 'X', 'A', '_', 'D', 0,
  /* 5332 */ 'A', 'D', 'D', '_', 'A', '_', 'D', 0,
  /* 5340 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'D', 0,
  /* 5349 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'D', 0,
  /* 5358 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'D', 0,
  /* 5367 */ 'F', 'S', 'U', 'B', '_', 'D', 0,
  /* 5374 */ 'F', 'M', 'S', 'U', 'B', '_', 'D', 0,
  /* 5382 */ 'N', 'L', 'O', 'C', '_', 'D', 0,
  /* 5389 */ 'N', 'L', 'Z', 'C', '_', 'D', 0,
  /* 5396 */ 'F', 'A', 'D', 'D', '_', 'D', 0,
  /* 5403 */ 'F', 'M', 'A', 'D', 'D', '_', 'D', 0,
  /* 5411 */ 'S', 'L', 'D', '_', 'D', 0,
  /* 5417 */ 'P', 'C', 'K', 'O', 'D', '_', 'D', 0,
  /* 5425 */ 'I', 'L', 'V', 'O', 'D', '_', 'D', 0,
  /* 5433 */ 'F', 'C', 'L', 'E', '_', 'D', 0,
  /* 5440 */ 'F', 'S', 'L', 'E', '_', 'D', 0,
  /* 5447 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'D', 0,
  /* 5457 */ 'F', 'C', 'U', 'L', 'E', '_', 'D', 0,
  /* 5465 */ 'F', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 5473 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 5484 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'D', 0,
  /* 5494 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'D', 0,
  /* 5503 */ 'F', 'C', 'N', 'E', '_', 'D', 0,
  /* 5510 */ 'F', 'S', 'N', 'E', '_', 'D', 0,
  /* 5517 */ 'F', 'C', 'U', 'N', 'E', '_', 'D', 0,
  /* 5525 */ 'F', 'S', 'U', 'N', 'E', '_', 'D', 0,
  /* 5533 */ 'I', 'N', 'S', 'V', 'E', '_', 'D', 0,
  /* 5541 */ 'F', 'C', 'A', 'F', '_', 'D', 0,
  /* 5548 */ 'F', 'S', 'A', 'F', '_', 'D', 0,
  /* 5555 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'D', 0,
  /* 5565 */ 'M', 'S', 'U', 'B', 'F', '_', 'D', 0,
  /* 5573 */ 'M', 'A', 'D', 'D', 'F', '_', 'D', 0,
  /* 5581 */ 'V', 'S', 'H', 'F', '_', 'D', 0,
  /* 5588 */ 'C', 'M', 'P', '_', 'F', '_', 'D', 0,
  /* 5596 */ 'B', 'N', 'E', 'G', '_', 'D', 0,
  /* 5603 */ 'S', 'R', 'A', 'I', '_', 'D', 0,
  /* 5610 */ 'S', 'L', 'D', 'I', '_', 'D', 0,
  /* 5617 */ 'B', 'N', 'E', 'G', 'I', '_', 'D', 0,
  /* 5625 */ 'S', 'L', 'L', 'I', '_', 'D', 0,
  /* 5632 */ 'S', 'R', 'L', 'I', '_', 'D', 0,
  /* 5639 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'D', 0,
  /* 5648 */ 'C', 'E', 'Q', 'I', '_', 'D', 0,
  /* 5655 */ 'S', 'R', 'A', 'R', 'I', '_', 'D', 0,
  /* 5663 */ 'B', 'C', 'L', 'R', 'I', '_', 'D', 0,
  /* 5671 */ 'S', 'R', 'L', 'R', 'I', '_', 'D', 0,
  /* 5679 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'D', 0,
  /* 5688 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'D', 0,
  /* 5697 */ 'B', 'S', 'E', 'T', 'I', '_', 'D', 0,
  /* 5705 */ 'S', 'U', 'B', 'V', 'I', '_', 'D', 0,
  /* 5713 */ 'A', 'D', 'D', 'V', 'I', '_', 'D', 0,
  /* 5721 */ 'S', 'E', 'L', '_', 'D', 0,
  /* 5727 */ 'F', 'I', 'L', 'L', '_', 'D', 0,
  /* 5734 */ 'S', 'L', 'L', '_', 'D', 0,
  /* 5740 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'D', 0,
  /* 5749 */ 'F', 'F', 'Q', 'L', '_', 'D', 0,
  /* 5756 */ 'S', 'R', 'L', '_', 'D', 0,
  /* 5762 */ 'B', 'I', 'N', 'S', 'L', '_', 'D', 0,
  /* 5770 */ 'F', 'M', 'U', 'L', '_', 'D', 0,
  /* 5777 */ 'I', 'L', 'V', 'L', '_', 'D', 0,
  /* 5784 */ 'F', 'M', 'I', 'N', '_', 'D', 0,
  /* 5791 */ 'F', 'C', 'U', 'N', '_', 'D', 0,
  /* 5798 */ 'F', 'S', 'U', 'N', '_', 'D', 0,
  /* 5805 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'D', 0,
  /* 5815 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'D', 0,
  /* 5824 */ 'F', 'R', 'C', 'P', '_', 'D', 0,
  /* 5831 */ 'F', 'C', 'E', 'Q', '_', 'D', 0,
  /* 5838 */ 'F', 'S', 'E', 'Q', '_', 'D', 0,
  /* 5845 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'D', 0,
  /* 5855 */ 'F', 'C', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5863 */ 'F', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5871 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5882 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5892 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'D', 0,
  /* 5901 */ 'S', 'R', 'A', 'R', '_', 'D', 0,
  /* 5908 */ 'B', 'C', 'L', 'R', '_', 'D', 0,
  /* 5915 */ 'S', 'R', 'L', 'R', '_', 'D', 0,
  /* 5922 */ 'F', 'C', 'O', 'R', '_', 'D', 0,
  /* 5929 */ 'F', 'S', 'O', 'R', '_', 'D', 0,
  /* 5936 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'D', 0,
  /* 5945 */ 'F', 'F', 'Q', 'R', '_', 'D', 0,
  /* 5952 */ 'B', 'I', 'N', 'S', 'R', '_', 'D', 0,
  /* 5960 */ 'I', 'L', 'V', 'R', '_', 'D', 0,
  /* 5967 */ 'F', 'A', 'B', 'S', '_', 'D', 0,
  /* 5974 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'D', 0,
  /* 5983 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 5992 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 6001 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 6011 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'D', 0,
  /* 6022 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 6031 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 6041 */ 'M', 'O', 'D', '_', 'S', '_', 'D', 0,
  /* 6049 */ 'C', 'L', 'E', '_', 'S', '_', 'D', 0,
  /* 6057 */ 'A', 'V', 'E', '_', 'S', '_', 'D', 0,
  /* 6065 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'D', 0,
  /* 6074 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'D', 0,
  /* 6083 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'D', 0,
  /* 6092 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'D', 0,
  /* 6101 */ 'M', 'I', 'N', '_', 'S', '_', 'D', 0,
  /* 6109 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'D', 0,
  /* 6118 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'D', 0,
  /* 6127 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'D', 0,
  /* 6136 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'D', 0,
  /* 6145 */ 'S', 'A', 'T', '_', 'S', '_', 'D', 0,
  /* 6153 */ 'C', 'L', 'T', '_', 'S', '_', 'D', 0,
  /* 6161 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 6171 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 6181 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'D', 0,
  /* 6192 */ 'D', 'I', 'V', '_', 'S', '_', 'D', 0,
  /* 6200 */ 'M', 'A', 'X', '_', 'S', '_', 'D', 0,
  /* 6208 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'D', 0,
  /* 6217 */ 'S', 'P', 'L', 'A', 'T', '_', 'D', 0,
  /* 6225 */ 'B', 'S', 'E', 'T', '_', 'D', 0,
  /* 6232 */ 'F', 'C', 'L', 'T', '_', 'D', 0,
  /* 6239 */ 'F', 'S', 'L', 'T', '_', 'D', 0,
  /* 6246 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'D', 0,
  /* 6256 */ 'F', 'C', 'U', 'L', 'T', '_', 'D', 0,
  /* 6264 */ 'F', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 6272 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 6283 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'D', 0,
  /* 6293 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'D', 0,
  /* 6302 */ 'P', 'C', 'N', 'T', '_', 'D', 0,
  /* 6309 */ 'F', 'R', 'I', 'N', 'T', '_', 'D', 0,
  /* 6317 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', 0,
  /* 6326 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 6334 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 6343 */ 'S', 'T', '_', 'D', 0,
  /* 6348 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6357 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6366 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6376 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'D', 0,
  /* 6387 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 6396 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 6406 */ 'M', 'O', 'D', '_', 'U', '_', 'D', 0,
  /* 6414 */ 'C', 'L', 'E', '_', 'U', '_', 'D', 0,
  /* 6422 */ 'A', 'V', 'E', '_', 'U', '_', 'D', 0,
  /* 6430 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'D', 0,
  /* 6439 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'D', 0,
  /* 6448 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'D', 0,
  /* 6457 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'D', 0,
  /* 6466 */ 'M', 'I', 'N', '_', 'U', '_', 'D', 0,
  /* 6474 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'D', 0,
  /* 6483 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'D', 0,
  /* 6492 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'D', 0,
  /* 6501 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'D', 0,
  /* 6510 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'D', 0,
  /* 6521 */ 'S', 'A', 'T', '_', 'U', '_', 'D', 0,
  /* 6529 */ 'C', 'L', 'T', '_', 'U', '_', 'D', 0,
  /* 6537 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 6547 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 6557 */ 'D', 'I', 'V', '_', 'U', '_', 'D', 0,
  /* 6565 */ 'M', 'A', 'X', '_', 'U', '_', 'D', 0,
  /* 6573 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'D', 0,
  /* 6582 */ 'M', 'S', 'U', 'B', 'V', '_', 'D', 0,
  /* 6590 */ 'M', 'A', 'D', 'D', 'V', '_', 'D', 0,
  /* 6598 */ 'P', 'C', 'K', 'E', 'V', '_', 'D', 0,
  /* 6606 */ 'I', 'L', 'V', 'E', 'V', '_', 'D', 0,
  /* 6614 */ 'F', 'D', 'I', 'V', '_', 'D', 0,
  /* 6621 */ 'M', 'U', 'L', 'V', '_', 'D', 0,
  /* 6628 */ 'F', 'M', 'A', 'X', '_', 'D', 0,
  /* 6635 */ 'B', 'Z', '_', 'D', 0,
  /* 6640 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'D', 0,
  /* 6649 */ 'B', 'N', 'Z', '_', 'D', 0,
  /* 6655 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'D', 0,
  /* 6664 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 6677 */ 'T', 'G', 'E', 0,
  /* 6681 */ 'C', 'A', 'C', 'H', 'E', 0,
  /* 6687 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 6694 */ 'B', 'N', 'E', 0,
  /* 6698 */ 'S', 'N', 'E', 0,
  /* 6702 */ 'T', 'N', 'E', 0,
  /* 6706 */ 'P', 'A', 'U', 'S', 'E', 0,
  /* 6712 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 6722 */ 'B', 'C', '1', 'F', 0,
  /* 6727 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 6740 */ 'P', 'R', 'E', 'F', 0,
  /* 6745 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 6760 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 6774 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 6788 */ 'D', 'S', 'B', 'H', 0,
  /* 6793 */ 'W', 'S', 'B', 'H', 0,
  /* 6798 */ 'S', 'E', 'H', 0,
  /* 6802 */ 'L', 'H', 0,
  /* 6805 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', 0,
  /* 6813 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6826 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6838 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6854 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'E', '_', 'P', 'H', 0,
  /* 6870 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', 0,
  /* 6879 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', 0,
  /* 6888 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'P', 'H', 0,
  /* 6902 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', 0,
  /* 6910 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', 0,
  /* 6918 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', 0,
  /* 6926 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', 0,
  /* 6936 */ 'M', 'U', 'L', '_', 'P', 'H', 0,
  /* 6943 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', 0,
  /* 6951 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', 0,
  /* 6959 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'E', 'Q', '_', 'P', 'H', 0,
  /* 6975 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', 0,
  /* 6985 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 6996 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 7007 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', 0,
  /* 7018 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', 0,
  /* 7029 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 7039 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 7048 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7058 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7068 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7078 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7088 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 7098 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 7108 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', 0,
  /* 7119 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'T', '_', 'P', 'H', 0,
  /* 7135 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', 0,
  /* 7143 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', 0,
  /* 7151 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', 0,
  /* 7160 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', 0,
  /* 7169 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', 0,
  /* 7178 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', 0,
  /* 7187 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7196 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7207 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7221 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7235 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7244 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7256 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7270 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7282 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7295 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7308 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 7318 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 7328 */ 'S', 'H', 0,
  /* 7331 */ 'D', 'M', 'U', 'H', 0,
  /* 7336 */ 'S', 'R', 'A', '_', 'H', 0,
  /* 7342 */ 'A', 'D', 'D', '_', 'A', '_', 'H', 0,
  /* 7350 */ 'M', 'I', 'N', '_', 'A', '_', 'H', 0,
  /* 7358 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'H', 0,
  /* 7367 */ 'M', 'A', 'X', '_', 'A', '_', 'H', 0,
  /* 7375 */ 'N', 'L', 'O', 'C', '_', 'H', 0,
  /* 7382 */ 'N', 'L', 'Z', 'C', '_', 'H', 0,
  /* 7389 */ 'S', 'L', 'D', '_', 'H', 0,
  /* 7395 */ 'P', 'C', 'K', 'O', 'D', '_', 'H', 0,
  /* 7403 */ 'I', 'L', 'V', 'O', 'D', '_', 'H', 0,
  /* 7411 */ 'I', 'N', 'S', 'V', 'E', '_', 'H', 0,
  /* 7419 */ 'V', 'S', 'H', 'F', '_', 'H', 0,
  /* 7426 */ 'B', 'N', 'E', 'G', '_', 'H', 0,
  /* 7433 */ 'S', 'R', 'A', 'I', '_', 'H', 0,
  /* 7440 */ 'S', 'L', 'D', 'I', '_', 'H', 0,
  /* 7447 */ 'B', 'N', 'E', 'G', 'I', '_', 'H', 0,
  /* 7455 */ 'S', 'L', 'L', 'I', '_', 'H', 0,
  /* 7462 */ 'S', 'R', 'L', 'I', '_', 'H', 0,
  /* 7469 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'H', 0,
  /* 7478 */ 'C', 'E', 'Q', 'I', '_', 'H', 0,
  /* 7485 */ 'S', 'R', 'A', 'R', 'I', '_', 'H', 0,
  /* 7493 */ 'B', 'C', 'L', 'R', 'I', '_', 'H', 0,
  /* 7501 */ 'S', 'R', 'L', 'R', 'I', '_', 'H', 0,
  /* 7509 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'H', 0,
  /* 7518 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'H', 0,
  /* 7527 */ 'B', 'S', 'E', 'T', 'I', '_', 'H', 0,
  /* 7535 */ 'S', 'U', 'B', 'V', 'I', '_', 'H', 0,
  /* 7543 */ 'A', 'D', 'D', 'V', 'I', '_', 'H', 0,
  /* 7551 */ 'F', 'I', 'L', 'L', '_', 'H', 0,
  /* 7558 */ 'S', 'L', 'L', '_', 'H', 0,
  /* 7564 */ 'S', 'R', 'L', '_', 'H', 0,
  /* 7570 */ 'B', 'I', 'N', 'S', 'L', '_', 'H', 0,
  /* 7578 */ 'I', 'L', 'V', 'L', '_', 'H', 0,
  /* 7585 */ 'F', 'E', 'X', 'D', 'O', '_', 'H', 0,
  /* 7593 */ 'C', 'E', 'Q', '_', 'H', 0,
  /* 7599 */ 'F', 'T', 'Q', '_', 'H', 0,
  /* 7605 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'H', 0,
  /* 7614 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'H', 0,
  /* 7623 */ 'M', 'U', 'L', '_', 'Q', '_', 'H', 0,
  /* 7631 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'H', 0,
  /* 7641 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'H', 0,
  /* 7651 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'H', 0,
  /* 7660 */ 'S', 'R', 'A', 'R', '_', 'H', 0,
  /* 7667 */ 'B', 'C', 'L', 'R', '_', 'H', 0,
  /* 7674 */ 'S', 'R', 'L', 'R', '_', 'H', 0,
  /* 7681 */ 'B', 'I', 'N', 'S', 'R', '_', 'H', 0,
  /* 7689 */ 'I', 'L', 'V', 'R', '_', 'H', 0,
  /* 7696 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7705 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7714 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7724 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 7733 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 7743 */ 'M', 'O', 'D', '_', 'S', '_', 'H', 0,
  /* 7751 */ 'C', 'L', 'E', '_', 'S', '_', 'H', 0,
  /* 7759 */ 'A', 'V', 'E', '_', 'S', '_', 'H', 0,
  /* 7767 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'H', 0,
  /* 7776 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'H', 0,
  /* 7785 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'H', 0,
  /* 7794 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'H', 0,
  /* 7803 */ 'M', 'I', 'N', '_', 'S', '_', 'H', 0,
  /* 7811 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'H', 0,
  /* 7820 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'H', 0,
  /* 7829 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', 0,
  /* 7838 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'H', 0,
  /* 7847 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'H', 0,
  /* 7856 */ 'S', 'A', 'T', '_', 'S', '_', 'H', 0,
  /* 7864 */ 'C', 'L', 'T', '_', 'S', '_', 'H', 0,
  /* 7872 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'H', 0,
  /* 7883 */ 'D', 'I', 'V', '_', 'S', '_', 'H', 0,
  /* 7891 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', 0,
  /* 7901 */ 'M', 'A', 'X', '_', 'S', '_', 'H', 0,
  /* 7909 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'H', 0,
  /* 7918 */ 'S', 'P', 'L', 'A', 'T', '_', 'H', 0,
  /* 7926 */ 'B', 'S', 'E', 'T', '_', 'H', 0,
  /* 7933 */ 'P', 'C', 'N', 'T', '_', 'H', 0,
  /* 7940 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', 0,
  /* 7949 */ 'S', 'T', '_', 'H', 0,
  /* 7954 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 7963 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 7972 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 7982 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 7991 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 8001 */ 'M', 'O', 'D', '_', 'U', '_', 'H', 0,
  /* 8009 */ 'C', 'L', 'E', '_', 'U', '_', 'H', 0,
  /* 8017 */ 'A', 'V', 'E', '_', 'U', '_', 'H', 0,
  /* 8025 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'H', 0,
  /* 8034 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'H', 0,
  /* 8043 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'H', 0,
  /* 8052 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'H', 0,
  /* 8061 */ 'M', 'I', 'N', '_', 'U', '_', 'H', 0,
  /* 8069 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'H', 0,
  /* 8078 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'H', 0,
  /* 8087 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'H', 0,
  /* 8096 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'H', 0,
  /* 8105 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'H', 0,
  /* 8116 */ 'S', 'A', 'T', '_', 'U', '_', 'H', 0,
  /* 8124 */ 'C', 'L', 'T', '_', 'U', '_', 'H', 0,
  /* 8132 */ 'D', 'I', 'V', '_', 'U', '_', 'H', 0,
  /* 8140 */ 'M', 'A', 'X', '_', 'U', '_', 'H', 0,
  /* 8148 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'H', 0,
  /* 8157 */ 'M', 'S', 'U', 'B', 'V', '_', 'H', 0,
  /* 8165 */ 'M', 'A', 'D', 'D', 'V', '_', 'H', 0,
  /* 8173 */ 'P', 'C', 'K', 'E', 'V', '_', 'H', 0,
  /* 8181 */ 'I', 'L', 'V', 'E', 'V', '_', 'H', 0,
  /* 8189 */ 'M', 'U', 'L', 'V', '_', 'H', 0,
  /* 8196 */ 'B', 'Z', '_', 'H', 0,
  /* 8201 */ 'B', 'N', 'Z', '_', 'H', 0,
  /* 8207 */ 'S', 'Y', 'N', 'C', 'I', 0,
  /* 8213 */ 'D', 'I', 0,
  /* 8216 */ 'T', 'G', 'E', 'I', 0,
  /* 8221 */ 'T', 'N', 'E', 'I', 0,
  /* 8226 */ 'D', 'A', 'H', 'I', 0,
  /* 8231 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', 0,
  /* 8242 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', 0,
  /* 8255 */ 'P', 'H', 'I', 0,
  /* 8259 */ 'M', 'T', 'H', 'I', 0,
  /* 8264 */ 'T', 'E', 'Q', 'I', 0,
  /* 8269 */ 'D', 'A', 'T', 'I', 0,
  /* 8274 */ 'T', 'L', 'T', 'I', 0,
  /* 8279 */ 'D', 'A', 'U', 'I', 0,
  /* 8284 */ 'T', 'L', 'B', 'W', 'I', 0,
  /* 8290 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', 0,
  /* 8301 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', 0,
  /* 8312 */ 'M', 'O', 'V', 'F', '_', 'I', 0,
  /* 8319 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'I', 0,
  /* 8338 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', 0,
  /* 8347 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', 0,
  /* 8356 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', 0,
  /* 8371 */ 'M', 'O', 'V', 'T', '_', 'I', 0,
  /* 8378 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'I', 0,
  /* 8397 */ 'J', 0,
  /* 8399 */ 'B', 'R', 'E', 'A', 'K', 0,
  /* 8405 */ 'B', 'A', 'L', 0,
  /* 8409 */ 'J', 'A', 'L', 0,
  /* 8413 */ 'B', 'G', 'E', 'Z', 'A', 'L', 0,
  /* 8420 */ 'B', 'L', 'T', 'Z', 'A', 'L', 0,
  /* 8427 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8442 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8456 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8471 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8482 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8493 */ 'L', 'D', 'L', 0,
  /* 8497 */ 'S', 'D', 'L', 0,
  /* 8501 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 8510 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 8519 */ 'B', 'N', 'E', 'L', 0,
  /* 8524 */ 'B', 'C', '1', 'F', 'L', 0,
  /* 8530 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8543 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8556 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8568 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8582 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', 0,
  /* 8591 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', 0,
  /* 8599 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'L', 0,
  /* 8607 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'L', 0,
  /* 8615 */ 'K', 'I', 'L', 'L', 0,
  /* 8620 */ 'D', 'S', 'L', 'L', 0,
  /* 8625 */ 'B', 'E', 'Q', 'L', 0,
  /* 8630 */ 'D', 'S', 'R', 'L', 0,
  /* 8635 */ 'B', 'C', '1', 'T', 'L', 0,
  /* 8641 */ 'D', 'M', 'U', 'L', 0,
  /* 8646 */ 'L', 'W', 'L', 0,
  /* 8650 */ 'S', 'W', 'L', 0,
  /* 8654 */ 'B', 'G', 'E', 'Z', 'L', 0,
  /* 8660 */ 'B', 'L', 'E', 'Z', 'L', 0,
  /* 8666 */ 'B', 'G', 'T', 'Z', 'L', 0,
  /* 8672 */ 'B', 'L', 'T', 'Z', 'L', 0,
  /* 8678 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'L', 0,
  /* 8694 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 8708 */ 'L', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 8716 */ 'S', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 8724 */ 'C', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 8732 */ 'M', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 8740 */ 'M', 'F', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 8749 */ 'M', 'T', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 8758 */ 'C', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 8766 */ 'M', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 8774 */ 'L', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 8782 */ 'S', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 8790 */ 'L', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8799 */ 'S', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8808 */ 'L', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8817 */ 'S', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8826 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8839 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8852 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8864 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8878 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8892 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8904 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8917 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8929 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8941 */ 'L', 'W', 'M', '3', '2', '_', 'M', 'M', 0,
  /* 8950 */ 'S', 'W', 'M', '3', '2', '_', 'M', 'M', 0,
  /* 8959 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', '_', 'M', 'M', 0,
  /* 8971 */ 'A', 'D', 'D', 'I', 'U', 'R', '2', '_', 'M', 'M', 0,
  /* 8982 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', '_', 'M', 'M', 0,
  /* 8995 */ 'A', 'D', 'D', 'I', 'U', 'S', '5', '_', 'M', 'M', 0,
  /* 9006 */ 'S', 'B', '1', '6', '_', 'M', 'M', 0,
  /* 9014 */ 'J', 'R', 'C', '1', '6', '_', 'M', 'M', 0,
  /* 9023 */ 'A', 'N', 'D', '1', '6', '_', 'M', 'M', 0,
  /* 9032 */ 'M', 'O', 'V', 'E', '1', '6', '_', 'M', 'M', 0,
  /* 9042 */ 'S', 'H', '1', '6', '_', 'M', 'M', 0,
  /* 9050 */ 'A', 'N', 'D', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 9060 */ 'M', 'F', 'H', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 9070 */ 'L', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 9078 */ 'B', 'R', 'E', 'A', 'K', '1', '6', '_', 'M', 'M', 0,
  /* 9089 */ 'S', 'L', 'L', '1', '6', '_', 'M', 'M', 0,
  /* 9098 */ 'S', 'R', 'L', '1', '6', '_', 'M', 'M', 0,
  /* 9107 */ 'L', 'W', 'M', '1', '6', '_', 'M', 'M', 0,
  /* 9116 */ 'S', 'W', 'M', '1', '6', '_', 'M', 'M', 0,
  /* 9125 */ 'M', 'F', 'L', 'O', '1', '6', '_', 'M', 'M', 0,
  /* 9135 */ 'S', 'D', 'B', 'B', 'P', '1', '6', '_', 'M', 'M', 0,
  /* 9146 */ 'J', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 9154 */ 'J', 'A', 'L', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 9164 */ 'X', 'O', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 9173 */ 'J', 'A', 'L', 'R', 'S', '1', '6', '_', 'M', 'M', 0,
  /* 9184 */ 'N', 'O', 'T', '1', '6', '_', 'M', 'M', 0,
  /* 9193 */ 'L', 'B', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9202 */ 'S', 'U', 'B', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9212 */ 'A', 'D', 'D', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9222 */ 'L', 'H', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9231 */ 'L', 'W', '1', '6', '_', 'M', 'M', 0,
  /* 9239 */ 'S', 'W', '1', '6', '_', 'M', 'M', 0,
  /* 9247 */ 'B', 'N', 'E', 'Z', '1', '6', '_', 'M', 'M', 0,
  /* 9257 */ 'B', 'E', 'Q', 'Z', '1', '6', '_', 'M', 'M', 0,
  /* 9267 */ 'S', 'R', 'A', '_', 'M', 'M', 0,
  /* 9274 */ 'S', 'E', 'B', '_', 'M', 'M', 0,
  /* 9281 */ 'E', 'H', 'B', '_', 'M', 'M', 0,
  /* 9288 */ 'L', 'B', '_', 'M', 'M', 0,
  /* 9294 */ 'S', 'B', '_', 'M', 'M', 0,
  /* 9300 */ 'F', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 9308 */ 'M', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 9316 */ 'S', 'Y', 'N', 'C', '_', 'M', 'M', 0,
  /* 9324 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', '_', 'M', 'M', 0,
  /* 9335 */ 'S', 'C', '_', 'M', 'M', 0,
  /* 9341 */ 'B', 'N', 'E', 'Z', 'C', '_', 'M', 'M', 0,
  /* 9350 */ 'B', 'E', 'Q', 'Z', 'C', '_', 'M', 'M', 0,
  /* 9359 */ 'F', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 9367 */ 'M', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 9375 */ 'A', 'N', 'D', '_', 'M', 'M', 0,
  /* 9382 */ 'T', 'G', 'E', '_', 'M', 'M', 0,
  /* 9389 */ 'C', 'A', 'C', 'H', 'E', '_', 'M', 'M', 0,
  /* 9398 */ 'B', 'N', 'E', '_', 'M', 'M', 0,
  /* 9405 */ 'T', 'N', 'E', '_', 'M', 'M', 0,
  /* 9412 */ 'P', 'A', 'U', 'S', 'E', '_', 'M', 'M', 0,
  /* 9421 */ 'B', 'C', '1', 'F', '_', 'M', 'M', 0,
  /* 9429 */ 'P', 'R', 'E', 'F', '_', 'M', 'M', 0,
  /* 9437 */ 'F', 'N', 'E', 'G', '_', 'M', 'M', 0,
  /* 9445 */ 'W', 'S', 'B', 'H', '_', 'M', 'M', 0,
  /* 9453 */ 'S', 'E', 'H', '_', 'M', 'M', 0,
  /* 9460 */ 'L', 'H', '_', 'M', 'M', 0,
  /* 9466 */ 'S', 'H', '_', 'M', 'M', 0,
  /* 9472 */ 'D', 'I', '_', 'M', 'M', 0,
  /* 9478 */ 'T', 'G', 'E', 'I', '_', 'M', 'M', 0,
  /* 9486 */ 'T', 'N', 'E', 'I', '_', 'M', 'M', 0,
  /* 9494 */ 'M', 'F', 'H', 'I', '_', 'M', 'M', 0,
  /* 9502 */ 'M', 'T', 'H', 'I', '_', 'M', 'M', 0,
  /* 9510 */ 'T', 'E', 'Q', 'I', '_', 'M', 'M', 0,
  /* 9518 */ 'T', 'L', 'T', 'I', '_', 'M', 'M', 0,
  /* 9526 */ 'T', 'L', 'B', 'W', 'I', '_', 'M', 'M', 0,
  /* 9535 */ 'M', 'O', 'V', 'F', '_', 'I', '_', 'M', 'M', 0,
  /* 9545 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'M', 'M', 0,
  /* 9555 */ 'M', 'O', 'V', 'T', '_', 'I', '_', 'M', 'M', 0,
  /* 9565 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'M', 'M', 0,
  /* 9575 */ 'J', '_', 'M', 'M', 0,
  /* 9580 */ 'B', 'R', 'E', 'A', 'K', '_', 'M', 'M', 0,
  /* 9589 */ 'J', 'A', 'L', '_', 'M', 'M', 0,
  /* 9596 */ 'B', 'G', 'E', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 9606 */ 'B', 'L', 'T', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 9616 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', '_', 'M', 'M', 0,
  /* 9627 */ 'S', 'L', 'L', '_', 'M', 'M', 0,
  /* 9634 */ 'S', 'R', 'L', '_', 'M', 'M', 0,
  /* 9641 */ 'F', 'M', 'U', 'L', '_', 'M', 'M', 0,
  /* 9649 */ 'L', 'W', 'L', '_', 'M', 'M', 0,
  /* 9656 */ 'S', 'W', 'L', '_', 'M', 'M', 0,
  /* 9663 */ 'L', 'W', 'M', '_', 'M', 'M', 0,
  /* 9670 */ 'S', 'W', 'M', '_', 'M', 'M', 0,
  /* 9677 */ 'C', 'L', 'O', '_', 'M', 'M', 0,
  /* 9684 */ 'M', 'F', 'L', 'O', '_', 'M', 'M', 0,
  /* 9692 */ 'M', 'T', 'L', 'O', '_', 'M', 'M', 0,
  /* 9700 */ 'S', 'D', 'B', 'B', 'P', '_', 'M', 'M', 0,
  /* 9709 */ 'T', 'L', 'B', 'P', '_', 'M', 'M', 0,
  /* 9717 */ 'M', 'O', 'V', 'E', 'P', '_', 'M', 'M', 0,
  /* 9726 */ 'L', 'W', 'G', 'P', '_', 'M', 'M', 0,
  /* 9734 */ 'S', 'S', 'N', 'O', 'P', '_', 'M', 'M', 0,
  /* 9743 */ 'A', 'D', 'D', 'I', 'U', 'R', '1', 'S', 'P', '_', 'M', 'M', 0,
  /* 9756 */ 'A', 'D', 'D', 'I', 'U', 'S', 'P', '_', 'M', 'M', 0,
  /* 9767 */ 'L', 'W', 'S', 'P', '_', 'M', 'M', 0,
  /* 9775 */ 'S', 'W', 'S', 'P', '_', 'M', 'M', 0,
  /* 9783 */ 'L', 'W', 'P', '_', 'M', 'M', 0,
  /* 9790 */ 'S', 'W', 'P', '_', 'M', 'M', 0,
  /* 9797 */ 'B', 'E', 'Q', '_', 'M', 'M', 0,
  /* 9804 */ 'T', 'E', 'Q', '_', 'M', 'M', 0,
  /* 9811 */ 'T', 'L', 'B', 'R', '_', 'M', 'M', 0,
  /* 9819 */ 'J', 'R', '_', 'M', 'M', 0,
  /* 9825 */ 'J', 'A', 'L', 'R', '_', 'M', 'M', 0,
  /* 9833 */ 'N', 'O', 'R', '_', 'M', 'M', 0,
  /* 9840 */ 'X', 'O', 'R', '_', 'M', 'M', 0,
  /* 9847 */ 'R', 'O', 'T', 'R', '_', 'M', 'M', 0,
  /* 9855 */ 'T', 'L', 'B', 'W', 'R', '_', 'M', 'M', 0,
  /* 9864 */ 'R', 'D', 'H', 'W', 'R', '_', 'M', 'M', 0,
  /* 9873 */ 'L', 'W', 'R', '_', 'M', 'M', 0,
  /* 9880 */ 'S', 'W', 'R', '_', 'M', 'M', 0,
  /* 9887 */ 'F', 'A', 'B', 'S', '_', 'M', 'M', 0,
  /* 9895 */ 'J', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 9903 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 9914 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 9925 */ 'I', 'N', 'S', '_', 'M', 'M', 0,
  /* 9932 */ 'J', 'A', 'L', 'R', 'S', '_', 'M', 'M', 0,
  /* 9941 */ 'L', 'W', 'X', 'S', '_', 'M', 'M', 0,
  /* 9949 */ 'F', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 9959 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 9970 */ 'F', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 9980 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 9991 */ 'C', 'V', 'T', '_', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 10002 */ 'M', 'O', 'V', 'F', '_', 'S', '_', 'M', 'M', 0,
  /* 10012 */ 'F', 'N', 'E', 'G', '_', 'S', '_', 'M', 'M', 0,
  /* 10022 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 10034 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 10046 */ 'F', 'M', 'U', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 10056 */ 'C', 'V', 'T', '_', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 10067 */ 'F', 'A', 'B', 'S', '_', 'S', '_', 'M', 'M', 0,
  /* 10077 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 10088 */ 'M', 'O', 'V', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 10098 */ 'F', 'D', 'I', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 10108 */ 'F', 'M', 'O', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 10118 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10131 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10144 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10156 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10169 */ 'C', 'V', 'T', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10180 */ 'B', 'C', '1', 'T', '_', 'M', 'M', 0,
  /* 10188 */ 'D', 'E', 'R', 'E', 'T', '_', 'M', 'M', 0,
  /* 10197 */ 'W', 'A', 'I', 'T', '_', 'M', 'M', 0,
  /* 10205 */ 'S', 'L', 'T', '_', 'M', 'M', 0,
  /* 10212 */ 'T', 'L', 'T', '_', 'M', 'M', 0,
  /* 10219 */ 'M', 'U', 'L', 'T', '_', 'M', 'M', 0,
  /* 10227 */ 'F', 'S', 'Q', 'R', 'T', '_', 'M', 'M', 0,
  /* 10236 */ 'E', 'X', 'T', '_', 'M', 'M', 0,
  /* 10243 */ 'M', 'S', 'U', 'B', 'U', '_', 'M', 'M', 0,
  /* 10252 */ 'M', 'A', 'D', 'D', 'U', '_', 'M', 'M', 0,
  /* 10261 */ 'T', 'G', 'E', 'U', '_', 'M', 'M', 0,
  /* 10269 */ 'T', 'G', 'E', 'I', 'U', '_', 'M', 'M', 0,
  /* 10278 */ 'T', 'L', 'T', 'I', 'U', '_', 'M', 'M', 0,
  /* 10287 */ 'T', 'L', 'T', 'U', '_', 'M', 'M', 0,
  /* 10295 */ 'L', 'W', 'U', '_', 'M', 'M', 0,
  /* 10302 */ 'S', 'R', 'A', 'V', '_', 'M', 'M', 0,
  /* 10310 */ 'F', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 10318 */ 'S', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 10326 */ 'U', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 10334 */ 'S', 'L', 'L', 'V', '_', 'M', 'M', 0,
  /* 10342 */ 'S', 'R', 'L', 'V', '_', 'M', 'M', 0,
  /* 10350 */ 'R', 'O', 'T', 'R', 'V', '_', 'M', 'M', 0,
  /* 10359 */ 'L', 'W', '_', 'M', 'M', 0,
  /* 10365 */ 'S', 'W', '_', 'M', 'M', 0,
  /* 10371 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', '_', 'M', 'M', 0,
  /* 10384 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'M', 'M', 0,
  /* 10395 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'M', 'M', 0,
  /* 10406 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'M', 'M', 0,
  /* 10416 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 10427 */ 'C', 'V', 'T', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 10438 */ 'C', 'V', 'T', '_', 'W', '_', 'M', 'M', 0,
  /* 10447 */ 'B', 'G', 'E', 'Z', '_', 'M', 'M', 0,
  /* 10455 */ 'B', 'L', 'E', 'Z', '_', 'M', 'M', 0,
  /* 10463 */ 'C', 'L', 'Z', '_', 'M', 'M', 0,
  /* 10470 */ 'B', 'G', 'T', 'Z', '_', 'M', 'M', 0,
  /* 10478 */ 'B', 'L', 'T', 'Z', '_', 'M', 'M', 0,
  /* 10486 */ 'A', 'D', 'D', 'i', '_', 'M', 'M', 0,
  /* 10494 */ 'A', 'N', 'D', 'i', '_', 'M', 'M', 0,
  /* 10502 */ 'X', 'O', 'R', 'i', '_', 'M', 'M', 0,
  /* 10510 */ 'S', 'L', 'T', 'i', '_', 'M', 'M', 0,
  /* 10518 */ 'L', 'U', 'i', '_', 'M', 'M', 0,
  /* 10525 */ 'L', 'B', 'u', '_', 'M', 'M', 0,
  /* 10532 */ 'S', 'U', 'B', 'u', '_', 'M', 'M', 0,
  /* 10540 */ 'A', 'D', 'D', 'u', '_', 'M', 'M', 0,
  /* 10548 */ 'L', 'H', 'u', '_', 'M', 'M', 0,
  /* 10555 */ 'S', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 10563 */ 'M', 'U', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 10572 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '_', 'M', 'M', 0,
  /* 10585 */ 'S', 'L', 'T', 'i', 'u', '_', 'M', 'M', 0,
  /* 10594 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 10604 */ 'D', 'I', 'N', 'S', 'M', 0,
  /* 10610 */ 'D', 'E', 'X', 'T', 'M', 0,
  /* 10616 */ 'B', 'A', 'L', 'I', 'G', 'N', 0,
  /* 10623 */ 'D', 'A', 'L', 'I', 'G', 'N', 0,
  /* 10630 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 10646 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 10663 */ 'F', 'E', 'X', 'P', '2', '_', 'D', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10680 */ 'F', 'E', 'X', 'P', '2', '_', 'W', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10697 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10713 */ 'S', 'N', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10726 */ 'S', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10738 */ 'B', 'S', 'E', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10753 */ 'F', 'I', 'L', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10768 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10785 */ 'C', 'O', 'P', 'Y', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10800 */ 'B', 'S', 'E', 'L', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10814 */ 'A', 'N', 'D', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10829 */ 'N', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10844 */ 'X', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10859 */ 'S', 'N', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10872 */ 'S', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10884 */ 'B', 'S', 'E', 'L', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10898 */ 'A', 'N', 'D', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10913 */ 'N', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10928 */ 'X', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10943 */ 'S', 'N', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10956 */ 'S', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10968 */ 'S', 'N', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10981 */ 'S', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10993 */ 'B', 'S', 'E', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11008 */ 'F', 'I', 'L', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11023 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11040 */ 'C', 'O', 'P', 'Y', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11055 */ 'B', 'S', 'E', 'L', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11069 */ 'A', 'N', 'D', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11084 */ 'N', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11099 */ 'X', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11114 */ 'S', 'N', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11127 */ 'S', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11139 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11160 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11182 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11203 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11224 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11246 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11267 */ 'D', 'C', 'L', 'O', 0,
  /* 11272 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', 0,
  /* 11283 */ 'S', 'H', 'I', 'L', 'O', 0,
  /* 11289 */ 'M', 'T', 'L', 'O', 0,
  /* 11294 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 11303 */ 'T', 'R', 'A', 'P', 0,
  /* 11308 */ 'D', 'B', 'I', 'T', 'S', 'W', 'A', 'P', 0,
  /* 11317 */ 'S', 'D', 'B', 'B', 'P', 0,
  /* 11323 */ 'T', 'L', 'B', 'P', 0,
  /* 11328 */ 'E', 'X', 'T', 'P', 'D', 'P', 0,
  /* 11335 */ 'M', 'T', 'H', 'L', 'I', 'P', 0,
  /* 11342 */ 'S', 'S', 'N', 'O', 'P', 0,
  /* 11348 */ 'D', 'P', 'O', 'P', 0,
  /* 11353 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 11367 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 11382 */ 'R', 'D', 'D', 'S', 'P', 0,
  /* 11388 */ 'W', 'R', 'D', 'S', 'P', 0,
  /* 11394 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', 0,
  /* 11403 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', 0,
  /* 11412 */ 'L', 'O', 'A', 'D', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 11427 */ 'S', 'T', 'O', 'R', 'E', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 11443 */ 'M', 'F', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 11452 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 11469 */ 'M', 'T', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 11478 */ 'M', 'F', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 11487 */ 'M', 'T', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 11496 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', 0,
  /* 11505 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', 0,
  /* 11515 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', 0,
  /* 11525 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', 0,
  /* 11535 */ 'J', 'R', 'A', 'D', 'D', 'I', 'U', 'S', 'P', 0,
  /* 11545 */ 'E', 'X', 'T', 'P', 0,
  /* 11550 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 11565 */ 'B', 'E', 'Q', 0,
  /* 11569 */ 'S', 'E', 'Q', 0,
  /* 11573 */ 'T', 'E', 'Q', 0,
  /* 11577 */ 'T', 'L', 'B', 'R', 0,
  /* 11582 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11597 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11611 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11626 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11637 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 11648 */ 'B', 'A', 'L', '_', 'B', 'R', 0,
  /* 11655 */ 'L', 'D', 'R', 0,
  /* 11659 */ 'S', 'D', 'R', 0,
  /* 11663 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 11676 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 11689 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 11701 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 11715 */ 'J', 'R', 0,
  /* 11718 */ 'J', 'A', 'L', 'R', 0,
  /* 11723 */ 'N', 'O', 'R', 0,
  /* 11727 */ 'X', 'O', 'R', 0,
  /* 11731 */ 'D', 'R', 'O', 'T', 'R', 0,
  /* 11737 */ 'T', 'L', 'B', 'W', 'R', 0,
  /* 11743 */ 'R', 'D', 'H', 'W', 'R', 0,
  /* 11749 */ 'L', 'W', 'R', 0,
  /* 11753 */ 'S', 'W', 'R', 0,
  /* 11757 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '6', '4', '_', 'R', 0,
  /* 11770 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '_', 'R', 0,
  /* 11781 */ 'C', 'I', 'N', 'S', 0,
  /* 11786 */ 'D', 'I', 'N', 'S', 0,
  /* 11791 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 11808 */ 'E', 'X', 'T', 'S', 0,
  /* 11813 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'S', 0,
  /* 11823 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'S', 0,
  /* 11833 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'S', 0,
  /* 11844 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 11855 */ 'M', 'I', 'N', 'A', '_', 'S', 0,
  /* 11862 */ 'M', 'A', 'X', 'A', '_', 'S', 0,
  /* 11869 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 11876 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 11884 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 11891 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 11899 */ 'C', '_', 'N', 'G', 'E', '_', 'S', 0,
  /* 11907 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'S', 0,
  /* 11916 */ 'C', '_', 'O', 'L', 'E', '_', 'S', 0,
  /* 11924 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'S', 0,
  /* 11934 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'S', 0,
  /* 11945 */ 'C', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 11953 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 11963 */ 'C', '_', 'L', 'E', '_', 'S', 0,
  /* 11970 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'S', 0,
  /* 11979 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'S', 0,
  /* 11989 */ 'M', 'S', 'U', 'B', 'F', '_', 'S', 0,
  /* 11997 */ 'M', 'A', 'D', 'D', 'F', '_', 'S', 0,
  /* 12005 */ 'C', '_', 'S', 'F', '_', 'S', 0,
  /* 12012 */ 'M', 'O', 'V', 'F', '_', 'S', 0,
  /* 12019 */ 'C', '_', 'F', '_', 'S', 0,
  /* 12025 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'S', 0,
  /* 12044 */ 'C', 'M', 'P', '_', 'F', '_', 'S', 0,
  /* 12052 */ 'F', 'N', 'E', 'G', '_', 'S', 0,
  /* 12059 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', 0,
  /* 12068 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', 0,
  /* 12077 */ 'S', 'E', 'L', '_', 'S', 0,
  /* 12083 */ 'C', '_', 'N', 'G', 'L', '_', 'S', 0,
  /* 12091 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 12098 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', 0,
  /* 12108 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', 0,
  /* 12118 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', 0,
  /* 12127 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', 0,
  /* 12137 */ 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 12145 */ 'M', 'I', 'N', '_', 'S', 0,
  /* 12151 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'S', 0,
  /* 12161 */ 'C', '_', 'U', 'N', '_', 'S', 0,
  /* 12168 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'S', 0,
  /* 12177 */ 'C', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 12185 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 12195 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'S', 0,
  /* 12206 */ 'C', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 12214 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 12224 */ 'C', '_', 'E', 'Q', '_', 'S', 0,
  /* 12231 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'S', 0,
  /* 12240 */ 'F', 'A', 'B', 'S', '_', 'S', 0,
  /* 12247 */ 'C', 'L', 'A', 'S', 'S', '_', 'S', 0,
  /* 12255 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'S', 0,
  /* 12270 */ 'C', '_', 'N', 'G', 'T', '_', 'S', 0,
  /* 12278 */ 'C', '_', 'O', 'L', 'T', '_', 'S', 0,
  /* 12286 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'S', 0,
  /* 12296 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'S', 0,
  /* 12307 */ 'C', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 12315 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 12325 */ 'C', '_', 'L', 'T', '_', 'S', 0,
  /* 12332 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'S', 0,
  /* 12341 */ 'R', 'I', 'N', 'T', '_', 'S', 0,
  /* 12348 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 12356 */ 'M', 'O', 'V', 'T', '_', 'S', 0,
  /* 12363 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'S', 0,
  /* 12382 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 12389 */ 'F', 'M', 'O', 'V', '_', 'S', 0,
  /* 12396 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', 0,
  /* 12406 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', 0,
  /* 12416 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', 0,
  /* 12425 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', 0,
  /* 12435 */ 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 12443 */ 'M', 'A', 'X', '_', 'S', 0,
  /* 12449 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'S', 0,
  /* 12458 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'S', 0,
  /* 12467 */ 'B', 'C', '1', 'T', 0,
  /* 12472 */ 'D', 'E', 'R', 'E', 'T', 0,
  /* 12478 */ 'W', 'A', 'I', 'T', 0,
  /* 12483 */ 'S', 'L', 'T', 0,
  /* 12487 */ 'T', 'L', 'T', 0,
  /* 12491 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 0,
  /* 12503 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 0,
  /* 12514 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 12525 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 12536 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 12551 */ 'D', 'E', 'X', 'T', 0,
  /* 12556 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 'U', 0,
  /* 12568 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 'U', 0,
  /* 12580 */ 'D', 'M', 'O', 'D', 'U', 0,
  /* 12586 */ 'T', 'G', 'E', 'U', 0,
  /* 12591 */ 'D', 'M', 'U', 'H', 'U', 0,
  /* 12597 */ 'T', 'G', 'E', 'I', 'U', 0,
  /* 12603 */ 'T', 'T', 'L', 'T', 'I', 'U', 0,
  /* 12610 */ 'V', '3', 'M', 'U', 'L', 'U', 0,
  /* 12617 */ 'D', 'M', 'U', 'L', 'U', 0,
  /* 12623 */ 'V', 'M', 'U', 'L', 'U', 0,
  /* 12629 */ 'D', 'I', 'N', 'S', 'U', 0,
  /* 12635 */ 'T', 'L', 'T', 'U', 0,
  /* 12640 */ 'D', 'E', 'X', 'T', 'U', 0,
  /* 12646 */ 'D', 'D', 'I', 'V', 'U', 0,
  /* 12652 */ 'D', 'S', 'R', 'A', 'V', 0,
  /* 12658 */ 'B', 'I', 'T', 'R', 'E', 'V', 0,
  /* 12665 */ 'D', 'D', 'I', 'V', 0,
  /* 12670 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'S', 'D', 'I', 'V', 0,
  /* 12682 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'D', 'I', 'V', 0,
  /* 12693 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'U', 'D', 'I', 'V', 0,
  /* 12705 */ 'P', 's', 'e', 'u', 'd', 'o', 'U', 'D', 'I', 'V', 0,
  /* 12716 */ 'D', 'S', 'L', 'L', 'V', 0,
  /* 12722 */ 'D', 'S', 'R', 'L', 'V', 0,
  /* 12728 */ 'S', 'H', 'I', 'L', 'O', 'V', 0,
  /* 12735 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', 0,
  /* 12743 */ 'E', 'X', 'T', 'P', 'V', 0,
  /* 12749 */ 'D', 'R', 'O', 'T', 'R', 'V', 0,
  /* 12756 */ 'I', 'N', 'S', 'V', 0,
  /* 12761 */ 'A', 'N', 'D', '_', 'V', 0,
  /* 12767 */ 'M', 'O', 'V', 'E', '_', 'V', 0,
  /* 12774 */ 'B', 'S', 'E', 'L', '_', 'V', 0,
  /* 12781 */ 'N', 'O', 'R', '_', 'V', 0,
  /* 12787 */ 'X', 'O', 'R', '_', 'V', 0,
  /* 12793 */ 'B', 'Z', '_', 'V', 0,
  /* 12798 */ 'B', 'M', 'Z', '_', 'V', 0,
  /* 12804 */ 'B', 'N', 'Z', '_', 'V', 0,
  /* 12810 */ 'B', 'M', 'N', 'Z', '_', 'V', 0,
  /* 12817 */ 'L', 'W', 0,
  /* 12820 */ 'S', 'W', 0,
  /* 12823 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', 0,
  /* 12839 */ 'F', 'L', 'O', 'G', '2', '_', 'W', 0,
  /* 12847 */ 'F', 'E', 'X', 'P', '2', '_', 'W', 0,
  /* 12855 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'W', 0,
  /* 12871 */ 'S', 'R', 'A', '_', 'W', 0,
  /* 12877 */ 'A', 'D', 'D', '_', 'A', '_', 'W', 0,
  /* 12885 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'W', 0,
  /* 12894 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'W', 0,
  /* 12903 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'W', 0,
  /* 12912 */ 'F', 'S', 'U', 'B', '_', 'W', 0,
  /* 12919 */ 'F', 'M', 'S', 'U', 'B', '_', 'W', 0,
  /* 12927 */ 'N', 'L', 'O', 'C', '_', 'W', 0,
  /* 12934 */ 'N', 'L', 'Z', 'C', '_', 'W', 0,
  /* 12941 */ 'F', 'A', 'D', 'D', '_', 'W', 0,
  /* 12948 */ 'F', 'M', 'A', 'D', 'D', '_', 'W', 0,
  /* 12956 */ 'S', 'L', 'D', '_', 'W', 0,
  /* 12962 */ 'P', 'C', 'K', 'O', 'D', '_', 'W', 0,
  /* 12970 */ 'I', 'L', 'V', 'O', 'D', '_', 'W', 0,
  /* 12978 */ 'F', 'C', 'L', 'E', '_', 'W', 0,
  /* 12985 */ 'F', 'S', 'L', 'E', '_', 'W', 0,
  /* 12992 */ 'F', 'C', 'U', 'L', 'E', '_', 'W', 0,
  /* 13000 */ 'F', 'S', 'U', 'L', 'E', '_', 'W', 0,
  /* 13008 */ 'F', 'C', 'N', 'E', '_', 'W', 0,
  /* 13015 */ 'F', 'S', 'N', 'E', '_', 'W', 0,
  /* 13022 */ 'F', 'C', 'U', 'N', 'E', '_', 'W', 0,
  /* 13030 */ 'F', 'S', 'U', 'N', 'E', '_', 'W', 0,
  /* 13038 */ 'I', 'N', 'S', 'V', 'E', '_', 'W', 0,
  /* 13046 */ 'F', 'C', 'A', 'F', '_', 'W', 0,
  /* 13053 */ 'F', 'S', 'A', 'F', '_', 'W', 0,
  /* 13060 */ 'V', 'S', 'H', 'F', '_', 'W', 0,
  /* 13067 */ 'B', 'N', 'E', 'G', '_', 'W', 0,
  /* 13074 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', 0,
  /* 13089 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', 0,
  /* 13101 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', 0,
  /* 13118 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', 0,
  /* 13133 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', 0,
  /* 13141 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', 0,
  /* 13149 */ 'S', 'R', 'A', 'I', '_', 'W', 0,
  /* 13156 */ 'S', 'L', 'D', 'I', '_', 'W', 0,
  /* 13163 */ 'B', 'N', 'E', 'G', 'I', '_', 'W', 0,
  /* 13171 */ 'S', 'L', 'L', 'I', '_', 'W', 0,
  /* 13178 */ 'S', 'R', 'L', 'I', '_', 'W', 0,
  /* 13185 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'W', 0,
  /* 13194 */ 'C', 'E', 'Q', 'I', '_', 'W', 0,
  /* 13201 */ 'S', 'R', 'A', 'R', 'I', '_', 'W', 0,
  /* 13209 */ 'B', 'C', 'L', 'R', 'I', '_', 'W', 0,
  /* 13217 */ 'S', 'R', 'L', 'R', 'I', '_', 'W', 0,
  /* 13225 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'W', 0,
  /* 13234 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'W', 0,
  /* 13243 */ 'B', 'S', 'E', 'T', 'I', '_', 'W', 0,
  /* 13251 */ 'S', 'U', 'B', 'V', 'I', '_', 'W', 0,
  /* 13259 */ 'A', 'D', 'D', 'V', 'I', '_', 'W', 0,
  /* 13267 */ 'F', 'I', 'L', 'L', '_', 'W', 0,
  /* 13274 */ 'S', 'L', 'L', '_', 'W', 0,
  /* 13280 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'W', 0,
  /* 13289 */ 'F', 'F', 'Q', 'L', '_', 'W', 0,
  /* 13296 */ 'S', 'R', 'L', '_', 'W', 0,
  /* 13302 */ 'B', 'I', 'N', 'S', 'L', '_', 'W', 0,
  /* 13310 */ 'F', 'M', 'U', 'L', '_', 'W', 0,
  /* 13317 */ 'I', 'L', 'V', 'L', '_', 'W', 0,
  /* 13324 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 13336 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 13348 */ 'F', 'M', 'I', 'N', '_', 'W', 0,
  /* 13355 */ 'F', 'C', 'U', 'N', '_', 'W', 0,
  /* 13362 */ 'F', 'S', 'U', 'N', '_', 'W', 0,
  /* 13369 */ 'F', 'E', 'X', 'D', 'O', '_', 'W', 0,
  /* 13377 */ 'F', 'R', 'C', 'P', '_', 'W', 0,
  /* 13384 */ 'F', 'C', 'E', 'Q', '_', 'W', 0,
  /* 13391 */ 'F', 'S', 'E', 'Q', '_', 'W', 0,
  /* 13398 */ 'F', 'C', 'U', 'E', 'Q', '_', 'W', 0,
  /* 13406 */ 'F', 'S', 'U', 'E', 'Q', '_', 'W', 0,
  /* 13414 */ 'F', 'T', 'Q', '_', 'W', 0,
  /* 13420 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'W', 0,
  /* 13429 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'W', 0,
  /* 13438 */ 'M', 'U', 'L', '_', 'Q', '_', 'W', 0,
  /* 13446 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'W', 0,
  /* 13456 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'W', 0,
  /* 13466 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'W', 0,
  /* 13475 */ 'S', 'R', 'A', 'R', '_', 'W', 0,
  /* 13482 */ 'B', 'C', 'L', 'R', '_', 'W', 0,
  /* 13489 */ 'S', 'R', 'L', 'R', '_', 'W', 0,
  /* 13496 */ 'F', 'C', 'O', 'R', '_', 'W', 0,
  /* 13503 */ 'F', 'S', 'O', 'R', '_', 'W', 0,
  /* 13510 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'W', 0,
  /* 13519 */ 'F', 'F', 'Q', 'R', '_', 'W', 0,
  /* 13526 */ 'B', 'I', 'N', 'S', 'R', '_', 'W', 0,
  /* 13534 */ 'E', 'X', 'T', 'R', '_', 'W', 0,
  /* 13541 */ 'I', 'L', 'V', 'R', '_', 'W', 0,
  /* 13548 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', 0,
  /* 13557 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 13567 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 13577 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', 0,
  /* 13586 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', 0,
  /* 13596 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', 0,
  /* 13606 */ 'F', 'A', 'B', 'S', '_', 'W', 0,
  /* 13613 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', 0,
  /* 13623 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', 0,
  /* 13633 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', 0,
  /* 13644 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'W', 0,
  /* 13653 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 13662 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 13671 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 13681 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'W', 0,
  /* 13692 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 13701 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 13711 */ 'M', 'O', 'D', '_', 'S', '_', 'W', 0,
  /* 13719 */ 'C', 'L', 'E', '_', 'S', '_', 'W', 0,
  /* 13727 */ 'A', 'V', 'E', '_', 'S', '_', 'W', 0,
  /* 13735 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'W', 0,
  /* 13744 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'W', 0,
  /* 13753 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'W', 0,
  /* 13762 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'W', 0,
  /* 13771 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', 0,
  /* 13780 */ 'M', 'I', 'N', '_', 'S', '_', 'W', 0,
  /* 13788 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'W', 0,
  /* 13797 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', 0,
  /* 13806 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', 0,
  /* 13815 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', 0,
  /* 13824 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', 0,
  /* 13833 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'W', 0,
  /* 13842 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'W', 0,
  /* 13851 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'W', 0,
  /* 13860 */ 'S', 'A', 'T', '_', 'S', '_', 'W', 0,
  /* 13868 */ 'C', 'L', 'T', '_', 'S', '_', 'W', 0,
  /* 13876 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 13886 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 13896 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 13910 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'W', 0,
  /* 13921 */ 'D', 'I', 'V', '_', 'S', '_', 'W', 0,
  /* 13929 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', 0,
  /* 13939 */ 'M', 'A', 'X', '_', 'S', '_', 'W', 0,
  /* 13947 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'W', 0,
  /* 13956 */ 'S', 'P', 'L', 'A', 'T', '_', 'W', 0,
  /* 13964 */ 'B', 'S', 'E', 'T', '_', 'W', 0,
  /* 13971 */ 'F', 'C', 'L', 'T', '_', 'W', 0,
  /* 13978 */ 'F', 'S', 'L', 'T', '_', 'W', 0,
  /* 13985 */ 'F', 'C', 'U', 'L', 'T', '_', 'W', 0,
  /* 13993 */ 'F', 'S', 'U', 'L', 'T', '_', 'W', 0,
  /* 14001 */ 'P', 'C', 'N', 'T', '_', 'W', 0,
  /* 14008 */ 'F', 'R', 'I', 'N', 'T', '_', 'W', 0,
  /* 14016 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', 0,
  /* 14025 */ 'F', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 14033 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 14042 */ 'S', 'T', '_', 'W', 0,
  /* 14047 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 14056 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 14065 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 14075 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'W', 0,
  /* 14086 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 14095 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 14105 */ 'M', 'O', 'D', '_', 'U', '_', 'W', 0,
  /* 14113 */ 'C', 'L', 'E', '_', 'U', '_', 'W', 0,
  /* 14121 */ 'A', 'V', 'E', '_', 'U', '_', 'W', 0,
  /* 14129 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'W', 0,
  /* 14138 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'W', 0,
  /* 14147 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'W', 0,
  /* 14156 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'W', 0,
  /* 14165 */ 'M', 'I', 'N', '_', 'U', '_', 'W', 0,
  /* 14173 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'W', 0,
  /* 14182 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'W', 0,
  /* 14191 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'W', 0,
  /* 14200 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'W', 0,
  /* 14209 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'W', 0,
  /* 14220 */ 'S', 'A', 'T', '_', 'U', '_', 'W', 0,
  /* 14228 */ 'C', 'L', 'T', '_', 'U', '_', 'W', 0,
  /* 14236 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 14246 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 14256 */ 'D', 'I', 'V', '_', 'U', '_', 'W', 0,
  /* 14264 */ 'M', 'A', 'X', '_', 'U', '_', 'W', 0,
  /* 14272 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'W', 0,
  /* 14281 */ 'M', 'S', 'U', 'B', 'V', '_', 'W', 0,
  /* 14289 */ 'M', 'A', 'D', 'D', 'V', '_', 'W', 0,
  /* 14297 */ 'P', 'C', 'K', 'E', 'V', '_', 'W', 0,
  /* 14305 */ 'I', 'L', 'V', 'E', 'V', '_', 'W', 0,
  /* 14313 */ 'F', 'D', 'I', 'V', '_', 'W', 0,
  /* 14320 */ 'M', 'U', 'L', 'V', '_', 'W', 0,
  /* 14327 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', 0,
  /* 14335 */ 'F', 'M', 'A', 'X', '_', 'W', 0,
  /* 14342 */ 'B', 'Z', '_', 'W', 0,
  /* 14347 */ 'B', 'N', 'Z', '_', 'W', 0,
  /* 14353 */ 'L', 'H', 'X', 0,
  /* 14357 */ 'J', 'A', 'L', 'X', 0,
  /* 14362 */ 'L', 'B', 'U', 'X', 0,
  /* 14367 */ 'L', 'W', 'X', 0,
  /* 14371 */ 'C', 'O', 'P', 'Y', 0,
  /* 14376 */ 'C', 'O', 'N', 'S', 'T', 'P', 'O', 'O', 'L', '_', 'E', 'N', 'T', 'R', 'Y', 0,
  /* 14392 */ 'B', 'G', 'E', 'Z', 0,
  /* 14397 */ 'B', 'L', 'E', 'Z', 0,
  /* 14402 */ 'B', 'C', '1', 'N', 'E', 'Z', 0,
  /* 14409 */ 'B', 'C', '2', 'N', 'E', 'Z', 0,
  /* 14416 */ 'S', 'E', 'L', 'N', 'E', 'Z', 0,
  /* 14423 */ 'D', 'C', 'L', 'Z', 0,
  /* 14428 */ 'B', 'C', '1', 'E', 'Q', 'Z', 0,
  /* 14435 */ 'B', 'C', '2', 'E', 'Q', 'Z', 0,
  /* 14442 */ 'S', 'E', 'L', 'E', 'Q', 'Z', 0,
  /* 14449 */ 'B', 'G', 'T', 'Z', 0,
  /* 14454 */ 'B', 'L', 'T', 'Z', 0,
  /* 14459 */ 'S', 'e', 'l', 'B', 'n', 'e', 'Z', 0,
  /* 14467 */ 'S', 'e', 'l', 'B', 'e', 'q', 'Z', 0,
  /* 14475 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '3', '2', 'R', 'e', 'g', 0,
  /* 14488 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'R', 'e', 'g', 0,
  /* 14502 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '6', '4', 'R', 'e', 'g', 0,
  /* 14515 */ 'J', 'a', 'l', 'O', 'n', 'e', 'R', 'e', 'g', 0,
  /* 14525 */ 'J', 'a', 'l', 'T', 'w', 'o', 'R', 'e', 'g', 0,
  /* 14535 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', 0,
  /* 14556 */ 'D', 'A', 'D', 'D', 'i', 0,
  /* 14562 */ 'A', 'N', 'D', 'i', 0,
  /* 14567 */ 'S', 'N', 'E', 'i', 0,
  /* 14572 */ 'S', 'E', 'Q', 'i', 0,
  /* 14577 */ 'X', 'O', 'R', 'i', 0,
  /* 14582 */ 'S', 'L', 'T', 'i', 0,
  /* 14587 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'L', 'U', 'i', 0,
  /* 14603 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 14617 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 14631 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 0,
  /* 14645 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 0,
  /* 14659 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'I', 'm', 'm', 0,
  /* 14673 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', 0,
  /* 14686 */ 'J', 'A', 'L', 'R', '6', '4', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 14699 */ 'J', 'A', 'L', 'R', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 14710 */ 'B', '_', 'M', 'M', '_', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 14722 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 0,
  /* 14735 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 0,
  /* 14748 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 0,
  /* 14761 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 0,
  /* 14774 */ 'L', 'B', 'u', 0,
  /* 14778 */ 'D', 'S', 'U', 'B', 'u', 0,
  /* 14784 */ 'B', 'A', 'D', 'D', 'u', 0,
  /* 14790 */ 'D', 'A', 'D', 'D', 'u', 0,
  /* 14796 */ 'L', 'H', 'u', 0,
  /* 14800 */ 'S', 'L', 'T', 'u', 0,
  /* 14805 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 'u', 0,
  /* 14818 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 'u', 0,
  /* 14830 */ 'L', 'W', 'u', 0,
  /* 14834 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'D', 'A', 'D', 'D', 'i', 'u', 0,
  /* 14853 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 14863 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 14881 */ 'S', 'L', 'T', 'i', 'u', 0,
  /* 14887 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 14902 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 14917 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'u', 0,
  /* 14931 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'u', 0,
};

extern const unsigned MipsInstrNameIndices[] = {
    8255U, 10594U, 10630U, 8510U, 8501U, 8615U, 6745U, 6760U, 
    6727U, 6774U, 11791U, 6712U, 6664U, 14371U, 6687U, 12536U, 
    5258U, 11294U, 12525U, 5276U, 12514U, 5081U, 7078U, 4111U, 
    13824U, 5215U, 5111U, 9324U, 9743U, 8971U, 8995U, 9756U, 
    6879U, 6996U, 13567U, 13141U, 6951U, 7058U, 13806U, 5135U, 
    4289U, 5349U, 7358U, 12894U, 4697U, 6136U, 7847U, 13851U, 
    4889U, 6501U, 8096U, 14200U, 9212U, 3979U, 4089U, 7143U, 
    4191U, 7098U, 4131U, 4503U, 5713U, 7543U, 13259U, 4959U, 
    6591U, 8166U, 14290U, 5168U, 4273U, 5332U, 7342U, 12877U, 
    9360U, 14557U, 10486U, 14847U, 10576U, 14785U, 10540U, 10646U, 
    11550U, 10617U, 5104U, 5239U, 9023U, 988U, 9050U, 4378U, 
    9375U, 12761U, 10814U, 10898U, 11069U, 14562U, 2101U, 10494U, 
    5251U, 4602U, 5983U, 7696U, 13653U, 4794U, 6348U, 7954U, 
    14047U, 2320U, 698U, 1782U, 3747U, 2243U, 621U, 1653U, 
    3674U, 2284U, 662U, 1694U, 3713U, 2263U, 641U, 1673U, 
    3693U, 2360U, 738U, 1822U, 3785U, 2223U, 601U, 1633U, 
    3655U, 2340U, 718U, 1802U, 3766U, 2304U, 682U, 1766U, 
    3732U, 8280U, 5098U, 4679U, 6118U, 7820U, 13833U, 4871U, 
    6483U, 8078U, 14182U, 4627U, 6057U, 7759U, 13727U, 4819U, 
    6422U, 8017U, 14121U, 2762U, 2638U, 3146U, 2790U, 2587U, 
    3086U, 2654U, 3449U, 3388U, 3897U, 9007U, 14784U, 8405U, 
    5017U, 10616U, 11648U, 27U, 127U, 121U, 135U, 5000U, 
    14428U, 6722U, 8524U, 9421U, 14402U, 12467U, 8635U, 10180U, 
    14435U, 14409U, 4439U, 5663U, 7493U, 13209U, 4573U, 5908U, 
    7667U, 13482U, 11565U, 1920U, 5130U, 8625U, 9257U, 5052U, 
    5192U, 9350U, 9797U, 5003U, 5146U, 14392U, 1986U, 8413U, 
    5028U, 8599U, 9903U, 9596U, 5174U, 8654U, 10447U, 14449U, 
    2018U, 5060U, 5198U, 8666U, 10470U, 4415U, 5639U, 7469U, 
    13185U, 4545U, 5762U, 7570U, 13302U, 4469U, 5679U, 7509U, 
    13225U, 4587U, 5952U, 7681U, 13526U, 12658U, 11309U, 14397U, 
    1993U, 5036U, 5180U, 8660U, 10455U, 5141U, 5152U, 14454U, 
    2025U, 8420U, 5068U, 8607U, 9914U, 9606U, 5204U, 8672U, 
    10478U, 4518U, 12810U, 4511U, 12798U, 6694U, 1519U, 5008U, 
    4385U, 5617U, 7447U, 13163U, 4357U, 5596U, 7426U, 13067U, 
    8519U, 9247U, 5044U, 5186U, 9341U, 9398U, 5158U, 4994U, 
    6649U, 8201U, 12804U, 14347U, 5163U, 592U, 10697U, 8399U, 
    9078U, 9580U, 4393U, 10800U, 10738U, 10993U, 10884U, 12774U, 
    11055U, 4487U, 5697U, 7527U, 13243U, 4766U, 6225U, 7926U, 
    13964U, 4989U, 6635U, 8196U, 12793U, 14342U, 14710U, 3173U, 
    2819U, 3185U, 2832U, 3161U, 2806U, 3072U, 3497U, 2883U, 
    2430U, 2911U, 2460U, 2941U, 2972U, 2996U, 3489U, 2869U, 
    2415U, 2897U, 2445U, 2925U, 2957U, 2987U, 1525U, 2032U, 
    6681U, 9389U, 3574U, 1249U, 12118U, 559U, 1486U, 10406U, 
    12416U, 10144U, 4424U, 5648U, 7478U, 13194U, 4560U, 5832U, 
    7593U, 13385U, 43U, 8724U, 3881U, 11781U, 779U, 5975U, 
    12247U, 4635U, 6065U, 7767U, 13735U, 4827U, 6430U, 8025U, 
    14129U, 4619U, 6049U, 7751U, 13719U, 4811U, 6414U, 8009U, 
    14113U, 11268U, 9677U, 3606U, 4653U, 6083U, 7785U, 13753U, 
    4845U, 6448U, 8043U, 14147U, 4714U, 6153U, 7864U, 13868U, 
    4917U, 6529U, 8124U, 14228U, 14424U, 10463U, 3623U, 4026U, 
    3928U, 4141U, 4039U, 3941U, 4154U, 4057U, 3959U, 4172U, 
    5892U, 6965U, 12231U, 5588U, 12044U, 5494U, 6860U, 11970U, 
    6293U, 7125U, 12332U, 5555U, 11979U, 5845U, 12185U, 5447U, 
    11924U, 6246U, 12286U, 5871U, 12195U, 5473U, 11934U, 6272U, 
    12296U, 5805U, 12151U, 5882U, 12214U, 5484U, 11953U, 6283U, 
    12315U, 5815U, 12168U, 14376U, 10785U, 11040U, 4749U, 6208U, 
    7909U, 13947U, 4941U, 6573U, 8148U, 14272U, 54U, 8758U, 
    3888U, 11813U, 12829U, 10371U, 8684U, 11823U, 12861U, 9991U, 
    1272U, 8982U, 12137U, 10056U, 411U, 8904U, 1338U, 8700U, 
    13902U, 10427U, 582U, 1509U, 10438U, 12435U, 10169U, 393U, 
    1320U, 12224U, 276U, 1146U, 12019U, 249U, 1119U, 11963U, 
    468U, 1395U, 12325U, 208U, 1078U, 11899U, 218U, 1088U, 
    11907U, 336U, 1206U, 12083U, 438U, 1365U, 12270U, 229U, 
    1099U, 11916U, 448U, 1375U, 12278U, 373U, 1300U, 12177U, 
    258U, 1128U, 12005U, 383U, 1310U, 12206U, 239U, 1109U, 
    11945U, 458U, 1385U, 12307U, 355U, 1282U, 12161U, 3270U, 
    3109U, 2736U, 830U, 5214U, 14556U, 14846U, 14790U, 8226U, 
    10623U, 8269U, 8279U, 11308U, 11267U, 3605U, 14423U, 3622U, 
    12665U, 12646U, 12472U, 10188U, 12551U, 10610U, 12640U, 8213U, 
    11786U, 10604U, 12629U, 12666U, 12647U, 4733U, 6192U, 7883U, 
    13921U, 4925U, 6557U, 8132U, 14256U, 9472U, 3876U, 3537U, 
    0U, 48U, 851U, 5271U, 12580U, 6U, 59U, 857U, 
    7331U, 12591U, 8641U, 12497U, 14811U, 12617U, 3597U, 6109U, 
    7811U, 13788U, 6474U, 8069U, 14173U, 6031U, 7733U, 13701U, 
    6396U, 7991U, 14095U, 7207U, 7282U, 13324U, 7244U, 8471U, 
    11626U, 7308U, 7187U, 11348U, 7221U, 7295U, 13336U, 7270U, 
    6001U, 7714U, 13671U, 6366U, 7972U, 14065U, 8482U, 11637U, 
    7318U, 7235U, 11731U, 771U, 12749U, 6788U, 12676U, 5230U, 
    8620U, 757U, 802U, 12716U, 3865U, 143U, 12652U, 8630U, 
    764U, 12722U, 4251U, 14778U, 12699U, 3356U, 3334U, 3899U, 
    9281U, 8218U, 9480U, 12473U, 10189U, 12552U, 11545U, 11328U, 
    12735U, 12743U, 13633U, 13596U, 7891U, 14327U, 13623U, 13577U, 
    7829U, 13534U, 11808U, 786U, 10236U, 1538U, 2048U, 5967U, 
    402U, 1329U, 9887U, 12240U, 10067U, 13606U, 5396U, 189U, 
    1059U, 9359U, 11884U, 9970U, 12941U, 5541U, 13046U, 5831U, 
    13384U, 5974U, 13644U, 5433U, 12978U, 6232U, 13971U, 364U, 
    8892U, 1291U, 793U, 8959U, 5503U, 13008U, 5922U, 13496U, 
    5855U, 13398U, 5457U, 12992U, 6256U, 13985U, 5517U, 13022U, 
    5791U, 13355U, 6614U, 517U, 1444U, 10310U, 12382U, 10098U, 
    14313U, 7585U, 13369U, 5304U, 10663U, 12847U, 10680U, 5740U, 
    13280U, 5936U, 13510U, 6161U, 13876U, 6537U, 14236U, 5749U, 
    13289U, 5945U, 13519U, 4526U, 5727U, 10753U, 11008U, 7551U, 
    13267U, 5296U, 12839U, 1260U, 12127U, 570U, 1497U, 10416U, 
    12425U, 10156U, 5403U, 12948U, 5358U, 12903U, 6628U, 14335U, 
    5340U, 12885U, 5784U, 13348U, 526U, 8929U, 1453U, 12389U, 
    10108U, 5374U, 12919U, 5770U, 346U, 1216U, 9641U, 12091U, 
    10046U, 13310U, 305U, 1175U, 9437U, 12052U, 10012U, 5824U, 
    13377U, 6309U, 14008U, 6334U, 14033U, 5548U, 13053U, 5838U, 
    13391U, 5440U, 12985U, 6239U, 13978U, 5510U, 13015U, 5929U, 
    13503U, 6326U, 477U, 1404U, 10227U, 12348U, 10077U, 14025U, 
    5367U, 170U, 1040U, 9300U, 11869U, 9949U, 12912U, 5863U, 
    13406U, 5465U, 13000U, 6264U, 13993U, 5525U, 13030U, 5798U, 
    13362U, 6171U, 13886U, 6547U, 14246U, 7599U, 13414U, 6011U, 
    13681U, 6376U, 14075U, 3030U, 6022U, 7724U, 13692U, 6387U, 
    7982U, 14086U, 5992U, 7705U, 13662U, 6357U, 7963U, 14056U, 
    4974U, 6606U, 8181U, 14305U, 4553U, 5777U, 7578U, 13317U, 
    4334U, 5425U, 7403U, 12970U, 4595U, 5960U, 7689U, 13541U, 
    11782U, 4780U, 11139U, 6317U, 11182U, 10768U, 11160U, 11023U, 
    11224U, 7940U, 11203U, 14016U, 11246U, 12756U, 4342U, 5533U, 
    7411U, 13038U, 9925U, 8397U, 8409U, 11718U, 9154U, 1931U, 
    14686U, 14699U, 9173U, 9932U, 3909U, 9825U, 9895U, 14357U, 
    9589U, 5022U, 5013U, 11715U, 9146U, 1926U, 11535U, 9014U, 
    3903U, 3545U, 9819U, 9575U, 3080U, 2216U, 14515U, 14525U, 
    3013U, 3005U, 3219U, 3051U, 3917U, 955U, 9193U, 14362U, 
    9288U, 14774U, 2159U, 10525U, 5236U, 33U, 903U, 8708U, 
    841U, 3505U, 883U, 4372U, 5611U, 7441U, 13157U, 8493U, 
    5093U, 11655U, 75U, 917U, 4321U, 5412U, 7390U, 12957U, 
    14853U, 2178U, 10572U, 6802U, 1562U, 9222U, 14353U, 9460U, 
    14796U, 2165U, 10548U, 9070U, 8588U, 5235U, 3567U, 9621U, 
    3591U, 3630U, 965U, 11353U, 11412U, 14863U, 14834U, 14587U, 
    3877U, 3538U, 87U, 933U, 8790U, 14599U, 2122U, 10518U, 
    12817U, 9231U, 1976U, 65U, 8774U, 863U, 3521U, 893U, 
    9726U, 8646U, 1888U, 9649U, 9107U, 8941U, 9663U, 5125U, 
    9783U, 11749U, 1958U, 9873U, 9767U, 5119U, 10295U, 14367U, 
    99U, 8808U, 9941U, 10359U, 14830U, 2489U, 2553U, 2521U, 
    2570U, 3099U, 2840U, 2725U, 14659U, 14488U, 14475U, 14502U, 
    828U, 3199U, 2856U, 2606U, 2668U, 5225U, 5573U, 11997U, 
    7641U, 13456U, 12574U, 11515U, 10252U, 4958U, 6590U, 8165U, 
    14289U, 199U, 8840U, 1069U, 11403U, 9367U, 7614U, 13429U, 
    11892U, 9981U, 8530U, 11663U, 8556U, 11689U, 5325U, 11862U, 
    4662U, 6092U, 7794U, 13762U, 4854U, 6457U, 8052U, 14156U, 
    4298U, 5359U, 7367U, 12904U, 6629U, 12443U, 4741U, 6200U, 
    7901U, 13939U, 4933U, 6565U, 8140U, 14264U, 1U, 49U, 
    8732U, 852U, 150U, 994U, 8740U, 8237U, 9060U, 1578U, 
    11443U, 9494U, 11278U, 9125U, 1906U, 11478U, 9684U, 5312U, 
    11855U, 4644U, 6074U, 7776U, 13744U, 4836U, 6439U, 8034U, 
    14138U, 4281U, 5341U, 7350U, 12886U, 5785U, 12145U, 4671U, 
    6101U, 7803U, 13780U, 4863U, 6466U, 8061U, 14165U, 812U, 
    2143U, 5272U, 4249U, 12581U, 4611U, 6041U, 7743U, 13711U, 
    4803U, 6406U, 8001U, 14105U, 9032U, 9717U, 12767U, 267U, 
    8852U, 1137U, 8312U, 1714U, 9535U, 12012U, 10002U, 1014U, 
    8290U, 1607U, 11833U, 314U, 8864U, 1184U, 8338U, 1744U, 
    9545U, 12059U, 10022U, 487U, 8917U, 1414U, 8371U, 1858U, 
    9555U, 12356U, 10088U, 1027U, 8301U, 1620U, 11844U, 325U, 
    8878U, 1195U, 8347U, 1755U, 9565U, 12068U, 10034U, 4262U, 
    5565U, 11989U, 7631U, 13446U, 12562U, 11505U, 10243U, 4950U, 
    6582U, 8157U, 14281U, 180U, 8827U, 1050U, 11394U, 9308U, 
    7605U, 13420U, 11877U, 9960U, 7U, 60U, 8766U, 858U, 
    160U, 1004U, 8749U, 8259U, 1600U, 11469U, 9502U, 11335U, 
    11289U, 1913U, 11487U, 9692U, 17U, 111U, 873U, 22U, 
    116U, 878U, 7332U, 12592U, 8642U, 8568U, 11701U, 8427U, 
    11582U, 7018U, 13613U, 7068U, 13815U, 7651U, 13466U, 7256U, 
    7196U, 12498U, 11525U, 11496U, 10219U, 14812U, 10563U, 12612U, 
    4982U, 6621U, 8189U, 14320U, 9642U, 6936U, 7623U, 13438U, 
    3598U, 7039U, 3065U, 3192U, 2379U, 2198U, 3290U, 3423U, 
    3322U, 3475U, 4306U, 5382U, 7375U, 12927U, 4313U, 5389U, 
    7382U, 12934U, 198U, 8839U, 1068U, 11891U, 9980U, 179U, 
    8826U, 1049U, 11876U, 9959U, 11344U, 11723U, 1938U, 4455U, 
    9833U, 12781U, 10829U, 10913U, 11084U, 9184U, 3260U, 3301U, 
    11724U, 9165U, 1939U, 4456U, 9834U, 12782U, 10830U, 10914U, 
    11085U, 14578U, 2109U, 10503U, 3400U, 6926U, 6706U, 9412U, 
    4966U, 6598U, 8173U, 14297U, 4326U, 5417U, 7395U, 12962U, 
    4773U, 6302U, 7933U, 14001U, 6894U, 3994U, 11349U, 8456U, 
    3818U, 11611U, 3849U, 8543U, 11676U, 8442U, 3803U, 11597U, 
    3834U, 6838U, 13089U, 6813U, 13118U, 6826U, 13074U, 13101U, 
    6740U, 9429U, 3583U, 5243U, 4051U, 3953U, 4166U, 6959U, 
    6854U, 7119U, 12823U, 8678U, 12855U, 8694U, 13896U, 12491U, 
    14805U, 12670U, 12693U, 14535U, 2078U, 5219U, 12568U, 8231U, 
    1572U, 11272U, 1900U, 4256U, 12556U, 8242U, 1585U, 11452U, 
    12503U, 14818U, 6888U, 3988U, 14673U, 2128U, 12682U, 284U, 
    1154U, 8319U, 1723U, 12025U, 496U, 1423U, 8378U, 1867U, 
    12363U, 421U, 1348U, 8356U, 1841U, 12255U, 12705U, 4235U, 
    11382U, 11743U, 1950U, 9864U, 7169U, 4217U, 6910U, 4010U, 
    6310U, 12341U, 11732U, 12750U, 10350U, 9847U, 1237U, 12108U, 
    547U, 1474U, 10395U, 12406U, 10131U, 3020U, 2396U, 3870U, 
    2208U, 4706U, 6145U, 7856U, 13860U, 4909U, 6521U, 8116U, 
    14220U, 4246U, 9006U, 960U, 9294U, 5138U, 5210U, 3560U, 
    9335U, 3554U, 5293U, 11317U, 9135U, 9700U, 3613U, 38U, 
    910U, 8716U, 846U, 3513U, 888U, 12677U, 10318U, 8497U, 
    11659U, 81U, 925U, 3895U, 949U, 9274U, 6798U, 1556U, 
    9453U, 14442U, 2009U, 6655U, 12458U, 14416U, 2000U, 6640U, 
    12449U, 5721U, 12077U, 11569U, 14572U, 7328U, 9042U, 1567U, 
    4351U, 7420U, 13061U, 11283U, 12728U, 7160U, 4208U, 7108U, 
    13929U, 6902U, 4002U, 7029U, 13771U, 7151U, 4199U, 7007U, 
    4100U, 13586U, 6805U, 3920U, 6975U, 4068U, 13548U, 7178U, 
    4226U, 6918U, 4018U, 9466U, 4371U, 5610U, 7440U, 13156U, 
    4320U, 5411U, 7389U, 12956U, 8621U, 9089U, 803U, 2069U, 
    4401U, 5625U, 7455U, 13171U, 12717U, 10334U, 4533U, 5734U, 
    7558U, 9627U, 13274U, 12483U, 1970U, 10205U, 14582U, 2115U, 
    10510U, 14881U, 2190U, 10585U, 14800U, 2171U, 10555U, 6698U, 
    14567U, 10713U, 10859U, 10943U, 10968U, 11114U, 4478U, 5688U, 
    7518U, 13234U, 4758U, 6217U, 7918U, 13956U, 3866U, 4364U, 
    5603U, 7433U, 13149U, 4431U, 5655U, 7485U, 13201U, 4566U, 
    5901U, 7660U, 13475U, 12653U, 10302U, 4267U, 5319U, 7336U, 
    9267U, 12871U, 8631U, 9098U, 4408U, 5632U, 7462U, 13178U, 
    4447U, 5671U, 7501U, 13217U, 4580U, 5915U, 7674U, 13489U, 
    12723U, 10342U, 4539U, 5756U, 7564U, 9634U, 13296U, 11342U, 
    9734U, 3642U, 976U, 11367U, 11427U, 4789U, 6343U, 7949U, 
    14042U, 4252U, 6870U, 6985U, 13557U, 13133U, 6943U, 7048U, 
    13797U, 4898U, 6510U, 8105U, 14209U, 4722U, 6181U, 7872U, 
    13910U, 4688U, 6127U, 7838U, 13842U, 4880U, 6492U, 8087U, 
    14191U, 9202U, 3970U, 4078U, 7135U, 4183U, 7088U, 4121U, 
    4495U, 5705U, 7535U, 13251U, 4951U, 6583U, 8158U, 14282U, 
    9301U, 14779U, 10532U, 93U, 941U, 8799U, 12820U, 9239U, 
    1981U, 70U, 8782U, 868U, 3529U, 898U, 8650U, 1894U, 
    9656U, 9116U, 8950U, 9670U, 9790U, 11753U, 1964U, 9880U, 
    9775U, 105U, 8817U, 10365U, 5076U, 8207U, 9316U, 8591U, 
    9616U, 10726U, 10872U, 10956U, 10981U, 11127U, 3044U, 2407U, 
    2505U, 3211U, 3227U, 14467U, 14459U, 14735U, 14617U, 14761U, 
    14645U, 14902U, 14931U, 14722U, 14603U, 14748U, 14631U, 14887U, 
    14917U, 2537U, 2475U, 3366U, 3235U, 3280U, 2694U, 3121U, 
    2749U, 2709U, 3133U, 2776U, 3247U, 3311U, 3462U, 2389U, 
    3345U, 2482U, 3377U, 3436U, 2622U, 2681U, 8582U, 11757U, 
    11770U, 11573U, 8264U, 9510U, 9804U, 6677U, 8216U, 12597U, 
    10269U, 9478U, 12586U, 10261U, 9382U, 11323U, 9709U, 11577U, 
    9811U, 8284U, 9526U, 11737U, 9855U, 12487U, 8274U, 10278U, 
    9518U, 12635U, 10287U, 10212U, 6702U, 8221U, 9486U, 9405U, 
    11303U, 1225U, 12098U, 535U, 1462U, 10384U, 12396U, 10118U, 
    12603U, 12700U, 10326U, 12610U, 12U, 12623U, 4350U, 5581U, 
    7419U, 13060U, 12478U, 10197U, 11388U, 6793U, 9445U, 11727U, 
    9164U, 1944U, 4462U, 9840U, 12787U, 10844U, 10928U, 11099U, 
    14577U, 2108U, 10502U, 3411U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1772);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfo {
  explicit MipsGenInstrInfo(int SO = -1, int DO = -1);
  virtual ~MipsGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MipsInsts[];
extern const unsigned MipsInstrNameIndices[];
extern const char MipsInstrNameData[];
MipsGenInstrInfo::MipsGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1772);
}
MipsGenInstrInfo::~MipsGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {namespace Mips {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {namespace Mips {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {namespace Mips {
namespace OpTypes { 
enum OperandType {
  InvertedImOperand = 0,
  InvertedImOperand64 = 1,
  LSAImm = 2,
  PtrRC = 3,
  brtarget = 4,
  brtarget10_mm = 5,
  brtarget21 = 6,
  brtarget26 = 7,
  brtarget7_mm = 8,
  brtarget_mm = 9,
  calloffset16 = 10,
  calltarget = 11,
  calltarget_mm = 12,
  condcode = 13,
  cpinst_operand = 14,
  f32imm = 15,
  f64imm = 16,
  i16imm = 17,
  i1imm = 18,
  i32imm = 19,
  i64imm = 20,
  i8imm = 21,
  imm32 = 22,
  imm64 = 23,
  jmpoffset16 = 24,
  jmptarget = 25,
  jmptarget_mm = 26,
  li_simm7 = 27,
  mem = 28,
  mem16 = 29,
  mem16_ea = 30,
  mem_ea = 31,
  mem_mm_12 = 32,
  mem_mm_4 = 33,
  mem_mm_4_lsl1 = 34,
  mem_mm_4_lsl2 = 35,
  mem_mm_4sp = 36,
  mem_mm_gp_imm7_lsl2 = 37,
  mem_mm_sp_imm5_lsl2 = 38,
  mem_msa = 39,
  mem_simm11 = 40,
  mem_simm16 = 41,
  mem_simm9 = 42,
  movep_regpair = 43,
  pcrel16 = 44,
  reglist = 45,
  reglist16 = 46,
  regpair = 47,
  simm10 = 48,
  simm10_64 = 49,
  simm11 = 50,
  simm12 = 51,
  simm16 = 52,
  simm16_64 = 53,
  simm18_lsl3 = 54,
  simm19_lsl2 = 55,
  simm20 = 56,
  simm23_lsl2 = 57,
  simm3_lsa2 = 58,
  simm4 = 59,
  simm5 = 60,
  simm7 = 61,
  simm9 = 62,
  simm9_addiusp = 63,
  size_ext = 64,
  size_ins = 65,
  uimm10 = 66,
  uimm16 = 67,
  uimm16_64 = 68,
  uimm2 = 69,
  uimm20 = 70,
  uimm3 = 71,
  uimm3_shift = 72,
  uimm4 = 73,
  uimm4_andi = 74,
  uimm5 = 75,
  uimm5_64 = 76,
  uimm5_lsl2 = 77,
  uimm6 = 78,
  uimm6_lsl2 = 79,
  uimm8 = 80,
  uimmz = 81,
  vsplat_simm10 = 82,
  vsplat_simm5 = 83,
  vsplat_uimm1 = 84,
  vsplat_uimm2 = 85,
  vsplat_uimm3 = 86,
  vsplat_uimm4 = 87,
  vsplat_uimm5 = 88,
  vsplat_uimm6 = 89,
  vsplat_uimm8 = 90,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace Mips
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Mips {

enum Arch {
	Arch_se,
	Arch_micromips
};

// Std2MicroMips
int Std2MicroMips(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsTable[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MM },
  { Mips::ADDi, Mips::ADDi, Mips::ADDi_MM },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDiu_MM },
  { Mips::ADDu, Mips::ADDu, Mips::ADDu_MM },
  { Mips::AND, Mips::AND, Mips::AND_MM },
  { Mips::ANDi, Mips::ANDi, Mips::ANDi_MM },
  { Mips::BC1F, Mips::BC1F, Mips::BC1F_MM },
  { Mips::BC1FL, Mips::BC1FL, (uint16_t)-1U },
  { Mips::BC1T, Mips::BC1T, Mips::BC1T_MM },
  { Mips::BC1TL, Mips::BC1TL, (uint16_t)-1U },
  { Mips::BEQ, Mips::BEQ, Mips::BEQ_MM },
  { Mips::BEQL, Mips::BEQL, (uint16_t)-1U },
  { Mips::BGEZ, Mips::BGEZ, Mips::BGEZ_MM },
  { Mips::BGEZAL, Mips::BGEZAL, Mips::BGEZAL_MM },
  { Mips::BGEZALL, Mips::BGEZALL, (uint16_t)-1U },
  { Mips::BGEZL, Mips::BGEZL, (uint16_t)-1U },
  { Mips::BGTZ, Mips::BGTZ, Mips::BGTZ_MM },
  { Mips::BGTZL, Mips::BGTZL, (uint16_t)-1U },
  { Mips::BLEZ, Mips::BLEZ, Mips::BLEZ_MM },
  { Mips::BLEZL, Mips::BLEZL, (uint16_t)-1U },
  { Mips::BLTZ, Mips::BLTZ, Mips::BLTZ_MM },
  { Mips::BLTZAL, Mips::BLTZAL, Mips::BLTZAL_MM },
  { Mips::BLTZALL, Mips::BLTZALL, (uint16_t)-1U },
  { Mips::BLTZL, Mips::BLTZL, (uint16_t)-1U },
  { Mips::BNE, Mips::BNE, Mips::BNE_MM },
  { Mips::BNEL, Mips::BNEL, (uint16_t)-1U },
  { Mips::BREAK, Mips::BREAK, Mips::BREAK_MM },
  { Mips::CACHE, Mips::CACHE, Mips::CACHE_MM },
  { Mips::CEIL_W_D32, Mips::CEIL_W_D32, Mips::CEIL_W_MM },
  { Mips::CEIL_W_S, Mips::CEIL_W_S, Mips::CEIL_W_S_MM },
  { Mips::CFC1, Mips::CFC1, Mips::CFC1_MM },
  { Mips::CLO, Mips::CLO, Mips::CLO_MM },
  { Mips::CLZ, Mips::CLZ, Mips::CLZ_MM },
  { Mips::CTC1, Mips::CTC1, Mips::CTC1_MM },
  { Mips::CVT_D32_S, Mips::CVT_D32_S, Mips::CVT_D_S_MM },
  { Mips::CVT_D32_W, Mips::CVT_D32_W, Mips::CVT_D32_W_MM },
  { Mips::CVT_L_D64, Mips::CVT_L_D64, Mips::CVT_L_D64_MM },
  { Mips::CVT_L_S, Mips::CVT_L_S, Mips::CVT_L_S_MM },
  { Mips::CVT_S_D32, Mips::CVT_S_D32, Mips::CVT_S_D32_MM },
  { Mips::CVT_S_W, Mips::CVT_S_W, Mips::CVT_S_W_MM },
  { Mips::CVT_W_D32, Mips::CVT_W_D32, Mips::CVT_W_MM },
  { Mips::CVT_W_S, Mips::CVT_W_S, Mips::CVT_W_S_MM },
  { Mips::DERET, Mips::DERET, Mips::DERET_MM },
  { Mips::DI, Mips::DI, Mips::DI_MM },
  { Mips::EHB, Mips::EHB, Mips::EHB_MM },
  { Mips::EI, Mips::EI, Mips::EI_MM },
  { Mips::ERET, Mips::ERET, Mips::ERET_MM },
  { Mips::EXT, Mips::EXT, Mips::EXT_MM },
  { Mips::FABS_D32, Mips::FABS_D32, Mips::FABS_MM },
  { Mips::FABS_S, Mips::FABS_S, Mips::FABS_S_MM },
  { Mips::FADD_D32, Mips::FADD_D32, Mips::FADD_MM },
  { Mips::FADD_S, Mips::FADD_S, Mips::FADD_S_MM },
  { Mips::FCMP_D32, Mips::FCMP_D32, Mips::FCMP_D32_MM },
  { Mips::FCMP_S32, Mips::FCMP_S32, Mips::FCMP_S32_MM },
  { Mips::FDIV_D32, Mips::FDIV_D32, Mips::FDIV_MM },
  { Mips::FDIV_S, Mips::FDIV_S, Mips::FDIV_S_MM },
  { Mips::FLOOR_W_D32, Mips::FLOOR_W_D32, Mips::FLOOR_W_MM },
  { Mips::FLOOR_W_S, Mips::FLOOR_W_S, Mips::FLOOR_W_S_MM },
  { Mips::FMOV_D32, Mips::FMOV_D32, Mips::FMOV_D32_MM },
  { Mips::FMOV_S, Mips::FMOV_S, Mips::FMOV_S_MM },
  { Mips::FMUL_D32, Mips::FMUL_D32, Mips::FMUL_MM },
  { Mips::FMUL_S, Mips::FMUL_S, Mips::FMUL_S_MM },
  { Mips::FNEG_D32, Mips::FNEG_D32, Mips::FNEG_MM },
  { Mips::FNEG_S, Mips::FNEG_S, Mips::FNEG_S_MM },
  { Mips::FSQRT_D32, Mips::FSQRT_D32, Mips::FSQRT_MM },
  { Mips::FSQRT_S, Mips::FSQRT_S, Mips::FSQRT_S_MM },
  { Mips::FSUB_D32, Mips::FSUB_D32, Mips::FSUB_MM },
  { Mips::FSUB_S, Mips::FSUB_S, Mips::FSUB_S_MM },
  { Mips::INS, Mips::INS, Mips::INS_MM },
  { Mips::J, Mips::J, Mips::J_MM },
  { Mips::JAL, Mips::JAL, Mips::JAL_MM },
  { Mips::JR, Mips::JR, Mips::JR_MM },
  { Mips::LB, Mips::LB, Mips::LB_MM },
  { Mips::LBu, Mips::LBu, Mips::LBu_MM },
  { Mips::LDC1, Mips::LDC1, Mips::LDC1_MM },
  { Mips::LEA_ADDiu, Mips::LEA_ADDiu, Mips::LEA_ADDiu_MM },
  { Mips::LH, Mips::LH, Mips::LH_MM },
  { Mips::LHu, Mips::LHu, Mips::LHu_MM },
  { Mips::LUXC1, Mips::LUXC1, Mips::LUXC1_MM },
  { Mips::LUi, Mips::LUi, Mips::LUi_MM },
  { Mips::LW, Mips::LW, Mips::LW_MM },
  { Mips::LWC1, Mips::LWC1, Mips::LWC1_MM },
  { Mips::LWXC1, Mips::LWXC1, Mips::LWXC1_MM },
  { Mips::MADD, Mips::MADD, Mips::MADD_MM },
  { Mips::MADDU, Mips::MADDU, Mips::MADDU_MM },
  { Mips::MADD_D32, Mips::MADD_D32, Mips::MADD_D32_MM },
  { Mips::MADD_S, Mips::MADD_S, Mips::MADD_S_MM },
  { Mips::MFC1, Mips::MFC1, Mips::MFC1_MM },
  { Mips::MFHC1_D32, Mips::MFHC1_D32, Mips::MFHC1_MM },
  { Mips::MFHI, Mips::MFHI, Mips::MFHI_MM },
  { Mips::MFLO, Mips::MFLO, Mips::MFLO_MM },
  { Mips::MOVF_D32, Mips::MOVF_D32, Mips::MOVF_D32_MM },
  { Mips::MOVF_I, Mips::MOVF_I, Mips::MOVF_I_MM },
  { Mips::MOVF_S, Mips::MOVF_S, Mips::MOVF_S_MM },
  { Mips::MOVN_I_D32, Mips::MOVN_I_D32, Mips::MOVN_I_D32_MM },
  { Mips::MOVN_I_I, Mips::MOVN_I_I, Mips::MOVN_I_MM },
  { Mips::MOVN_I_S, Mips::MOVN_I_S, Mips::MOVN_I_S_MM },
  { Mips::MOVT_D32, Mips::MOVT_D32, Mips::MOVT_D32_MM },
  { Mips::MOVT_I, Mips::MOVT_I, Mips::MOVT_I_MM },
  { Mips::MOVT_S, Mips::MOVT_S, Mips::MOVT_S_MM },
  { Mips::MOVZ_I_D32, Mips::MOVZ_I_D32, Mips::MOVZ_I_D32_MM },
  { Mips::MOVZ_I_I, Mips::MOVZ_I_I, Mips::MOVZ_I_MM },
  { Mips::MOVZ_I_S, Mips::MOVZ_I_S, Mips::MOVZ_I_S_MM },
  { Mips::MSUB, Mips::MSUB, Mips::MSUB_MM },
  { Mips::MSUBU, Mips::MSUBU, Mips::MSUBU_MM },
  { Mips::MSUB_D32, Mips::MSUB_D32, Mips::MSUB_D32_MM },
  { Mips::MSUB_S, Mips::MSUB_S, Mips::MSUB_S_MM },
  { Mips::MTC1, Mips::MTC1, Mips::MTC1_MM },
  { Mips::MTHC1_D32, Mips::MTHC1_D32, Mips::MTHC1_MM },
  { Mips::MTHI, Mips::MTHI, Mips::MTHI_MM },
  { Mips::MTLO, Mips::MTLO, Mips::MTLO_MM },
  { Mips::MUL, Mips::MUL, Mips::MUL_MM },
  { Mips::MULT, Mips::MULT, Mips::MULT_MM },
  { Mips::MULTu, Mips::MULTu, Mips::MULTu_MM },
  { Mips::NMADD_D32, Mips::NMADD_D32, Mips::NMADD_D32_MM },
  { Mips::NMADD_S, Mips::NMADD_S, Mips::NMADD_S_MM },
  { Mips::NMSUB_D32, Mips::NMSUB_D32, Mips::NMSUB_D32_MM },
  { Mips::NMSUB_S, Mips::NMSUB_S, Mips::NMSUB_S_MM },
  { Mips::NOR, Mips::NOR, Mips::NOR_MM },
  { Mips::OR, Mips::OR, Mips::OR_MM },
  { Mips::ORi, Mips::ORi, Mips::ORi_MM },
  { Mips::PAUSE, Mips::PAUSE, Mips::PAUSE_MM },
  { Mips::PREF, Mips::PREF, Mips::PREF_MM },
  { Mips::RDHWR, Mips::RDHWR, Mips::RDHWR_MM },
  { Mips::ROTR, Mips::ROTR, Mips::ROTR_MM },
  { Mips::ROTRV, Mips::ROTRV, Mips::ROTRV_MM },
  { Mips::ROUND_W_D32, Mips::ROUND_W_D32, Mips::ROUND_W_MM },
  { Mips::ROUND_W_S, Mips::ROUND_W_S, Mips::ROUND_W_S_MM },
  { Mips::SB, Mips::SB, Mips::SB_MM },
  { Mips::SDBBP, Mips::SDBBP, Mips::SDBBP_MM },
  { Mips::SDC1, Mips::SDC1, Mips::SDC1_MM },
  { Mips::SDIV, Mips::SDIV, Mips::SDIV_MM },
  { Mips::SEB, Mips::SEB, Mips::SEB_MM },
  { Mips::SEH, Mips::SEH, Mips::SEH_MM },
  { Mips::SH, Mips::SH, Mips::SH_MM },
  { Mips::SLL, Mips::SLL, Mips::SLL_MM },
  { Mips::SLLV, Mips::SLLV, Mips::SLLV_MM },
  { Mips::SLT, Mips::SLT, Mips::SLT_MM },
  { Mips::SLTi, Mips::SLTi, Mips::SLTi_MM },
  { Mips::SLTiu, Mips::SLTiu, Mips::SLTiu_MM },
  { Mips::SLTu, Mips::SLTu, Mips::SLTu_MM },
  { Mips::SRA, Mips::SRA, Mips::SRA_MM },
  { Mips::SRAV, Mips::SRAV, Mips::SRAV_MM },
  { Mips::SRL, Mips::SRL, Mips::SRL_MM },
  { Mips::SRLV, Mips::SRLV, Mips::SRLV_MM },
  { Mips::SSNOP, Mips::SSNOP, Mips::SSNOP_MM },
  { Mips::SUB, Mips::SUB, Mips::SUB_MM },
  { Mips::SUBu, Mips::SUBu, Mips::SUBu_MM },
  { Mips::SUXC1, Mips::SUXC1, Mips::SUXC1_MM },
  { Mips::SW, Mips::SW, Mips::SW_MM },
  { Mips::SWC1, Mips::SWC1, Mips::SWC1_MM },
  { Mips::SWXC1, Mips::SWXC1, Mips::SWXC1_MM },
  { Mips::SYNC, Mips::SYNC, Mips::SYNC_MM },
  { Mips::SYNCI, Mips::SYNCI, (uint16_t)-1U },
  { Mips::SYSCALL, Mips::SYSCALL, Mips::SYSCALL_MM },
  { Mips::TEQ, Mips::TEQ, Mips::TEQ_MM },
  { Mips::TEQI, Mips::TEQI, Mips::TEQI_MM },
  { Mips::TGE, Mips::TGE, Mips::TGE_MM },
  { Mips::TGEI, Mips::TGEI, Mips::TGEI_MM },
  { Mips::TGEIU, Mips::TGEIU, Mips::TGEIU_MM },
  { Mips::TGEU, Mips::TGEU, Mips::TGEU_MM },
  { Mips::TLBP, Mips::TLBP, Mips::TLBP_MM },
  { Mips::TLBR, Mips::TLBR, Mips::TLBR_MM },
  { Mips::TLBWI, Mips::TLBWI, Mips::TLBWI_MM },
  { Mips::TLBWR, Mips::TLBWR, Mips::TLBWR_MM },
  { Mips::TLT, Mips::TLT, Mips::TLT_MM },
  { Mips::TLTI, Mips::TLTI, Mips::TLTI_MM },
  { Mips::TLTU, Mips::TLTU, Mips::TLTU_MM },
  { Mips::TNE, Mips::TNE, Mips::TNE_MM },
  { Mips::TNEI, Mips::TNEI, Mips::TNEI_MM },
  { Mips::TRUNC_W_D32, Mips::TRUNC_W_D32, Mips::TRUNC_W_MM },
  { Mips::TRUNC_W_S, Mips::TRUNC_W_S, Mips::TRUNC_W_S_MM },
  { Mips::TTLTIU, Mips::TTLTIU, Mips::TLTIU_MM },
  { Mips::UDIV, Mips::UDIV, Mips::UDIV_MM },
  { Mips::WSBH, Mips::WSBH, Mips::WSBH_MM },
  { Mips::XOR, Mips::XOR, Mips::XOR_MM },
  { Mips::XORi, Mips::XORi, Mips::XORi_MM },
}; // End of Std2MicroMipsTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 177;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == Std2MicroMipsTable[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsTable[mid][1];
  if (inArch == Arch_micromips)
    return Std2MicroMipsTable[mid][2];
  return -1;}

} // End Mips namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

