/*
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "outfun_PoseError_U_multiOri.h"
#include "mean.h"
#include "eml_int_forloop_overflow_check.h"
#include "isequal.h"
#include "outfun_PoseError_U_multiOri_data.h"

/* Variable Definitions */
static emlrtRSInfo lb_emlrtRSI = { 40, /* lineNo */
  "mean",                              /* fcnName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 114,/* lineNo */
  "combine_vector_elements",           /* fcnName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"/* pathName */
};

static emlrtRTEInfo v_emlrtRTEI = { 17,/* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 21,/* lineNo */
  5,                                   /* colNo */
  "mean",                              /* fName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 30,/* lineNo */
  5,                                   /* colNo */
  "mean",                              /* fName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

/* Function Definitions */
real_T b_mean(const real_T x[8])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 7; k++) {
    y += x[k + 1];
  }

  y /= 8.0;
  return y;
}

void mean(const emlrtStack *sp, const emxArray_real_T *x, real_T y[8])
{
  boolean_T b1;
  int32_T vlen;
  int32_T i;
  int32_T xoffset;
  real_T s;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b1 = (x->size[0] != 1);
  if (!b1) {
    emlrtErrorWithMessageIdR2012b(sp, &v_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b1 = !isequal(x);
  if (!b1) {
    emlrtErrorWithMessageIdR2012b(sp, &w_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  b1 = !isequal(x);
  if (!b1) {
    emlrtErrorWithMessageIdR2012b(sp, &x_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  st.site = &lb_emlrtRSI;
  if (x->size[0] == 0) {
    memset(&y[0], 0, sizeof(real_T) << 3);
  } else {
    vlen = x->size[0];
    for (i = 0; i < 8; i++) {
      xoffset = i * vlen;
      s = x->data[xoffset];
      b_st.site = &mb_emlrtRSI;
      if ((!(2 > vlen)) && (vlen > 2147483646)) {
        c_st.site = &gb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (k = 2; k <= vlen; k++) {
        s += x->data[(xoffset + k) - 1];
      }

      y[i] = s;
    }
  }

  vlen = x->size[0];
  for (i = 0; i < 8; i++) {
    y[i] /= (real_T)vlen;
  }
}

/* End of code generation (mean.c) */
