/*
 * _coder_outfun_PoseError_U_multiOri_mex.cpp
 *
 * Code generation for function '_coder_outfun_PoseError_U_multiOri_mex'
 *
 */

/* Include files */
#include "outfun_PoseError_U_multiOri.h"
#include "_coder_outfun_PoseError_U_multiOri_mex.h"
#include "outfun_PoseError_U_multiOri_terminate.h"
#include "_coder_outfun_PoseError_U_multiOri_api.h"
#include "outfun_PoseError_U_multiOri_initialize.h"
#include "outfun_PoseError_U_multiOri_data.h"

/* Function Declarations */
static void c_outfun_PoseError_U_multiOri_m(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */
static void c_outfun_PoseError_U_multiOri_m(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1])
{
  int32_T n;
  const mxArray *inputs[1];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        27, "outfun_PoseError_U_multiOri");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 27,
                        "outfun_PoseError_U_multiOri");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  outfun_PoseError_U_multiOri_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  outfun_PoseError_U_multiOri_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(outfun_PoseError_U_multiOri_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  outfun_PoseError_U_multiOri_initialize();

  /* Dispatch the entry-point. */
  c_outfun_PoseError_U_multiOri_m(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_outfun_PoseError_U_multiOri_mex.cpp) */
