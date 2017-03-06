/*
 * outfun_PoseError_U_multiOri_initialize.cpp
 *
 * Code generation for function 'outfun_PoseError_U_multiOri_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "outfun_PoseError_U_multiOri.h"
#include "outfun_PoseError_U_multiOri_initialize.h"
#include "_coder_outfun_PoseError_U_multiOri_mex.h"
#include "outfun_PoseError_U_multiOri_data.h"

/* Named Constants */
#define b_f                            (1000.0)
#define b_mu0                          (1.2566370614359173E-6)
#define b_muR_sende                    (1.0)
#define b_mur_empfang                  (898.4)
#define b_N_sende                      (207.0)
#define b_R_sende                      (0.015)
#define b_A_Empfang                    (2.5196276798544546E-7)
#define b_Ia                           (0.66015629477408966)
#define b_varTotalNum                  (2178.0)
#define b_C                            (-0.010268772800073872)

/* Function Declarations */
static void c_outfun_PoseError_U_multiOri_o();

/* Function Definitions */
static void c_outfun_PoseError_U_multiOri_o()
{
  static const real_T dv0[24] = { 0.0, 0.045560544034088622, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.026304392362506857, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.09659385637601646, 0.081010424386912444, 0.09659385637601646,
    0.09659385637601646, 0.09659385637601646, 0.09659385637601646,
    0.09659385637601646, 0.09659385637601646 };

  static const real_T dv1[24] = { -0.28, -0.28, 0.28, 0.28, -0.28, -0.28, 0.28,
    0.28, -0.28, -0.28, 0.28, 0.28, 0.28, 0.28, -0.28, -0.28, 0.58, 0.02, 0.58,
    0.02, 0.58, 0.02, 0.58, 0.02 };

  static const real_T dv2[24] = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  memcpy(&m[0], &dv0[0], 24U * sizeof(real_T));
  memcpy(&StartPosition[0], &dv1[0], 24U * sizeof(real_T));
  memcpy(&r[0], &dv1[0], 24U * sizeof(real_T));
  memcpy(&StartOrientation[0], &dv2[0], 24U * sizeof(real_T));
  C_dirty = 0U;
  m_dirty = 0U;
  varTotalNum_dirty = 0U;
  StartPosition_dirty = 0U;
  r_dirty = 0U;
  StartOrientation_dirty = 0U;
  Ia_dirty = 0U;
  A_Empfang_dirty = 0U;
  R_sende_dirty = 0U;
  N_sende_dirty = 0U;
  mur_empfang_dirty = 0U;
  muR_sende_dirty = 0U;
  mu0_dirty = 0U;
  f_dirty = 0U;
  C = b_C;
  varTotalNum = b_varTotalNum;
  Ia = b_Ia;
  A_Empfang = b_A_Empfang;
  R_sende = b_R_sende;
  N_sende = b_N_sende;
  mur_empfang = b_mur_empfang;
  muR_sende = b_muR_sende;
  mu0 = b_mu0;
  f = b_f;
}

void outfun_PoseError_U_multiOri_initialize()
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    c_outfun_PoseError_U_multiOri_o();
  }
}

/* End of code generation (outfun_PoseError_U_multiOri_initialize.cpp) */
