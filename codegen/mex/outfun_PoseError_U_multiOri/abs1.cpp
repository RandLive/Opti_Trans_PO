/*
 * abs1.cpp
 *
 * Code generation for function 'abs1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "outfun_PoseError_U_multiOri.h"
#include "abs1.h"
#include "outfun_PoseError_U_multiOri_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "outfun_PoseError_U_multiOri_data.h"

/* Variable Definitions */
static emlrtRSInfo jb_emlrtRSI = { 16, /* lineNo */
  "abs",                               /* fcnName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 67, /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pathName */
};

static emlrtRTEInfo o_emlrtRTEI = { 1, /* lineNo */
  14,                                  /* colNo */
  "abs",                               /* fName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m"/* pName */
};

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T n;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  n = y->size[0] * y->size[1];
  y->size[0] = x->size[0];
  y->size[1] = 8;
  emxEnsureCapacity(&st, (emxArray__common *)y, n, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  n = x->size[0] << 3;
  b_st.site = &kb_emlrtRSI;
  if ((!(1 > n)) && (n > 2147483646)) {
    c_st.site = &gb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k + 1 <= n; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

/* End of code generation (abs1.cpp) */
