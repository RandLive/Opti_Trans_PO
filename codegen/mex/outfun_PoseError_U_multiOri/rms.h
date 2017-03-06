/*
 * rms.h
 *
 * Code generation for function 'rms'
 *
 */

#ifndef RMS_H
#define RMS_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "outfun_PoseError_U_multiOri_types.h"

/* Function Declarations */
extern real_T rms(const emlrtStack *sp, const real_T x[1000]);

#ifdef __WATCOMC__

#pragma aux rms value [8087];

#endif
#endif

/* End of code generation (rms.h) */
