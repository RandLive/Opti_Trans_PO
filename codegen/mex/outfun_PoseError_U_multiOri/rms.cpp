/*
 * rms.cpp
 *
 * Code generation for function 'rms'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "outfun_PoseError_U_multiOri.h"
#include "rms.h"
#include "error.h"
#include "outfun_PoseError_U_multiOri_data.h"

/* Variable Definitions */
static emlrtRSInfo bb_emlrtRSI = { 30, /* lineNo */
  "rms",                               /* fcnName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\signal\\signal\\rms.m"/* pathName */
};

/* Function Definitions */
real_T rms(const emlrtStack *sp, const real_T x[1000])
{
  real_T y;
  real_T b_x[1000];
  int32_T k;
  real_T c_x;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (k = 0; k < 1000; k++) {
    b_x[k] = x[k] * x[k];
  }

  y = b_x[0];
  for (k = 0; k < 999; k++) {
    y += b_x[k + 1];
  }

  c_x = y / 1000.0;
  st.site = &bb_emlrtRSI;
  if (c_x < 0.0) {
    b_st.site = &ab_emlrtRSI;
    error(&b_st);
  }

  return muDoubleScalarSqrt(c_x);
}

/* End of code generation (rms.cpp) */
