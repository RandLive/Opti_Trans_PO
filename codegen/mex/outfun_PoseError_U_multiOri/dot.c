/*
 * dot.c
 *
 * Code generation for function 'dot'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "outfun_PoseError_U_multiOri.h"
#include "dot.h"

/* Function Definitions */
real_T dot(const real_T a[3], const real_T b[3])
{
  real_T c;
  int32_T k;
  c = 0.0;
  for (k = 0; k < 3; k++) {
    c += a[k] * b[k];
  }

  return c;
}

/* End of code generation (dot.c) */
