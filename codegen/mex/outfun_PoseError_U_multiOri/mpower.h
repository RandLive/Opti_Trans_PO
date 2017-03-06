/*
 * mpower.h
 *
 * Code generation for function 'mpower'
 *
 */

#ifndef MPOWER_H
#define MPOWER_H

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
extern real_T b_mpower(real_T a);

#ifdef __WATCOMC__

#pragma aux b_mpower value [8087];

#endif

extern real_T mpower();

#ifdef __WATCOMC__

#pragma aux mpower value [8087];

#endif
#endif

/* End of code generation (mpower.h) */
