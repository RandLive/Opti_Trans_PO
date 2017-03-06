/*
 * _coder_outfun_PoseError_U_multiOri_api.cpp
 *
 * Code generation for function '_coder_outfun_PoseError_U_multiOri_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "outfun_PoseError_U_multiOri.h"
#include "_coder_outfun_PoseError_U_multiOri_api.h"
#include "outfun_PoseError_U_multiOri_data.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[40];
static const mxArray *b_emlrt_marshallOut(const real_T u[24]);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_f, const
  char_T *identifier);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_StartOrientation, const char_T *identifier, real_T y[24]);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[40];
static const mxArray *emlrt_marshallOut(const real_T u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[24]);
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[40];
static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[24]);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[40]
{
  real_T (*y)[40];
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const real_T u[24])
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv3[2] = { 8, 3 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv3, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m1);
  for (i = 0; i < 24; i++) {
    pData[i] = u[i];
  }

  emlrtAssign(&y, m1);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_f, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(c_f), &thisId);
  emlrtDestroyArray(&c_f);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_StartOrientation, const char_T *identifier, real_T y[24])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(b_StartOrientation), &thisId, y);
  emlrtDestroyArray(&b_StartOrientation);
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[40]
{
  real_T (*y)[40];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(x), &thisId);
  emlrtDestroyArray(&x);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[24])
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[40]
{
  real_T (*ret)[40];
  static const int32_T dims[2] = { 8, 5 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[40])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[24])
{
  static const int32_T dims[2] = { 8, 3 };

  int32_T i1;
  int32_T i2;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i1 = 0; i1 < 3; i1++) {
    for (i2 = 0; i2 < 8; i2++) {
      ret[i2 + (i1 << 3)] = (*(real_T (*)[24])mxGetData(src))[i2 + (i1 << 3)];
    }
  }

  emlrtDestroyArray(&src);
}

void outfun_PoseError_U_multiOri_api(const mxArray * const prhs[1], const
  mxArray *plhs[1])
{
  real_T (*x)[40];
  const mxArray *tmp;
  real_T F_out;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  x = emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[0]), "x");

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("f");
  if (tmp != NULL) {
    f = c_emlrt_marshallIn(&st, tmp, "f");
    f_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("mu0");
  if (tmp != NULL) {
    mu0 = c_emlrt_marshallIn(&st, tmp, "mu0");
    mu0_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("muR_sende");
  if (tmp != NULL) {
    muR_sende = c_emlrt_marshallIn(&st, tmp, "muR_sende");
    muR_sende_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("mur_empfang");
  if (tmp != NULL) {
    mur_empfang = c_emlrt_marshallIn(&st, tmp, "mur_empfang");
    mur_empfang_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("N_sende");
  if (tmp != NULL) {
    N_sende = c_emlrt_marshallIn(&st, tmp, "N_sende");
    N_sende_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("R_sende");
  if (tmp != NULL) {
    R_sende = c_emlrt_marshallIn(&st, tmp, "R_sende");
    R_sende_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("A_Empfang");
  if (tmp != NULL) {
    A_Empfang = c_emlrt_marshallIn(&st, tmp, "A_Empfang");
    A_Empfang_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Ia");
  if (tmp != NULL) {
    Ia = c_emlrt_marshallIn(&st, tmp, "Ia");
    Ia_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("StartOrientation");
  if (tmp != NULL) {
    e_emlrt_marshallIn(&st, tmp, "StartOrientation", StartOrientation);
    StartOrientation_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("r");
  if (tmp != NULL) {
    e_emlrt_marshallIn(&st, tmp, "r", r);
    r_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("StartPosition");
  if (tmp != NULL) {
    e_emlrt_marshallIn(&st, tmp, "StartPosition", StartPosition);
    StartPosition_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("varTotalNum");
  if (tmp != NULL) {
    varTotalNum = c_emlrt_marshallIn(&st, tmp, "varTotalNum");
    varTotalNum_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("m");
  if (tmp != NULL) {
    e_emlrt_marshallIn(&st, tmp, "m", m);
    m_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("C");
  if (tmp != NULL) {
    C = c_emlrt_marshallIn(&st, tmp, "C");
    C_dirty = 0U;
  }

  /* Invoke the target function */
  F_out = outfun_PoseError_U_multiOri(&st, *x);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("f", emlrt_marshallOut(f));
  emlrtPutGlobalVariable("mu0", emlrt_marshallOut(mu0));
  emlrtPutGlobalVariable("muR_sende", emlrt_marshallOut(muR_sende));
  emlrtPutGlobalVariable("mur_empfang", emlrt_marshallOut(mur_empfang));
  emlrtPutGlobalVariable("N_sende", emlrt_marshallOut(N_sende));
  emlrtPutGlobalVariable("R_sende", emlrt_marshallOut(R_sende));
  emlrtPutGlobalVariable("A_Empfang", emlrt_marshallOut(A_Empfang));
  emlrtPutGlobalVariable("Ia", emlrt_marshallOut(Ia));
  emlrtPutGlobalVariable("StartOrientation", b_emlrt_marshallOut
    (StartOrientation));
  emlrtPutGlobalVariable("r", b_emlrt_marshallOut(r));
  emlrtPutGlobalVariable("StartPosition", b_emlrt_marshallOut(StartPosition));
  emlrtPutGlobalVariable("varTotalNum", emlrt_marshallOut(varTotalNum));
  emlrtPutGlobalVariable("m", b_emlrt_marshallOut(m));
  emlrtPutGlobalVariable("C", emlrt_marshallOut(C));

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(F_out);
}

/* End of code generation (_coder_outfun_PoseError_U_multiOri_api.cpp) */
