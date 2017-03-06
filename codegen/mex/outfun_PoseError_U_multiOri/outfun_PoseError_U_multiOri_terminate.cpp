/*
 * outfun_PoseError_U_multiOri_terminate.cpp
 *
 * Code generation for function 'outfun_PoseError_U_multiOri_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "outfun_PoseError_U_multiOri.h"
#include "outfun_PoseError_U_multiOri_terminate.h"
#include "_coder_outfun_PoseError_U_multiOri_mex.h"
#include "outfun_PoseError_U_multiOri_data.h"

/* Function Definitions */
void outfun_PoseError_U_multiOri_atexit()
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void outfun_PoseError_U_multiOri_terminate()
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (outfun_PoseError_U_multiOri_terminate.cpp) */
