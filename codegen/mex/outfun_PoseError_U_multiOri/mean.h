/*
 * mean.h
 *
 * Code generation for function 'mean'
 *
 */

#ifndef MEAN_H
#define MEAN_H

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
extern real_T b_mean(const real_T x[8]);

#ifdef __WATCOMC__

#pragma aux b_mean value [8087];

#endif

extern void mean(const emlrtStack *sp, const emxArray_real_T *x, real_T y[8]);

#endif

/* End of code generation (mean.h) */
