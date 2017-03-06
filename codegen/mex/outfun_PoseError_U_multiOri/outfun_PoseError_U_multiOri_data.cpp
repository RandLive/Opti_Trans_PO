/*
 * outfun_PoseError_U_multiOri_data.cpp
 *
 * Code generation for function 'outfun_PoseError_U_multiOri_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "outfun_PoseError_U_multiOri.h"
#include "outfun_PoseError_U_multiOri_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
real_T f;
real_T mu0;
real_T muR_sende;
real_T mur_empfang;
real_T N_sende;
real_T R_sende;
real_T A_Empfang;
real_T Ia;
real_T StartOrientation[24];
real_T r[24];
real_T StartPosition[24];
real_T varTotalNum;
real_T m[24];
real_T C;
uint32_T f_dirty;
uint32_T mu0_dirty;
uint32_T muR_sende_dirty;
uint32_T mur_empfang_dirty;
uint32_T N_sende_dirty;
uint32_T R_sende_dirty;
uint32_T A_Empfang_dirty;
uint32_T Ia_dirty;
uint32_T StartOrientation_dirty;
uint32_T r_dirty;
uint32_T StartPosition_dirty;
uint32_T varTotalNum_dirty;
uint32_T m_dirty;
uint32_T C_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131435U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "outfun_PoseError_U_multiOri",       /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo x_emlrtRSI = { 37,         /* lineNo */
  "mpower",                            /* fcnName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

emlrtRSInfo y_emlrtRSI = { 49,         /* lineNo */
  "power",                             /* fcnName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo ab_emlrtRSI = { 12,        /* lineNo */
  "sqrt",                              /* fcnName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

emlrtRSInfo gb_emlrtRSI = { 20,        /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo ib_emlrtRSI = { 3,         /* lineNo */
  "Bfeld",                             /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\Bfeld.m"/* pathName */
};

/* End of code generation (outfun_PoseError_U_multiOri_data.cpp) */
