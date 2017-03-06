/*
 * sin.cpp
 *
 * Code generation for function 'sin'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "outfun_PoseError_U_multiOri.h"
#include "sin.h"

/* Function Definitions */
void b_sin(real_T x[1001])
{
  int32_T k;
  for (k = 0; k < 1001; k++) {
    x[k] = muDoubleScalarSin(x[k]);
  }
}

/* End of code generation (sin.cpp) */
