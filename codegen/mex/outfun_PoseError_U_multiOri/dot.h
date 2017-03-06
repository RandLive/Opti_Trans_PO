/*
 * dot.h
 *
 * Code generation for function 'dot'
 *
 */

#ifndef DOT_H
#define DOT_H

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
extern real_T dot(const real_T a[3], const real_T b[3]);

#ifdef __WATCOMC__

#pragma aux dot value [8087];

#endif
#endif

/* End of code generation (dot.h) */
