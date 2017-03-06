/*
 * outfun_PoseError_U_multiOri.c
 *
 * Code generation for function 'outfun_PoseError_U_multiOri'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "outfun_PoseError_U_multiOri.h"
#include "mpower.h"
#include "power.h"
#include "Bfeld.h"
#include "outfun_PoseError_U_multiOri_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "dot.h"
#include "cosd.h"
#include "sind.h"
#include "mean.h"
#include "abs1.h"
#include "sqrt.h"
#include "sum.h"
#include "rms.h"
#include "sin.h"
#include "outfun_PoseError_U_multiOri_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 14,    /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 27,  /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 37,  /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 38,  /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 139, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 140, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 141, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 142, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 143, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 144, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 145, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 146, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 149, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 150, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 151, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 152, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 153, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 154, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 155, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 156, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 169, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 223, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 400, /* lineNo */
  "outfun_PoseError_U_multiOri",       /* fcnName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 13, /* lineNo */
  "min",                               /* fcnName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 19, /* lineNo */
  "minOrMax",                          /* fcnName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 140,/* lineNo */
  "minOrMax",                          /* fcnName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 375,/* lineNo */
  "minOrMax",                          /* fcnName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 13, /* lineNo */
  "max",                               /* fcnName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 1,   /* lineNo */
  18,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 96,/* lineNo */
  1,                                   /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 97,/* lineNo */
  1,                                   /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 127,/* lineNo */
  1,                                   /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 127,/* lineNo */
  28,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 127,/* lineNo */
  55,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 127,/* lineNo */
  82,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 128,/* lineNo */
  1,                                   /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 128,/* lineNo */
  28,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 128,/* lineNo */
  55,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 128,/* lineNo */
  82,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 129,/* lineNo */
  1,                                   /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 217,/* lineNo */
  5,                                   /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 218,/* lineNo */
  5,                                   /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 131,/* lineNo */
  14,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  109,                                 /* lineNo */
  20,                                  /* colNo */
  "rs",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  22,                                  /* colNo */
  "rs",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  56,                                  /* colNo */
  "rs",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  90,                                  /* colNo */
  "rs",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  124,                                 /* colNo */
  "rs",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  22,                                  /* colNo */
  "rs",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  56,                                  /* colNo */
  "rs",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  90,                                  /* colNo */
  "rs",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  124,                                 /* colNo */
  "rs",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  9,                                   /* colNo */
  "rr1",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  25,                                  /* colNo */
  "rr1",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  43,                                  /* colNo */
  "rr2",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  39,                                  /* colNo */
  "rr2",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  77,                                  /* colNo */
  "rr3",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  53,                                  /* colNo */
  "rr3",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  111,                                 /* colNo */
  "rr4",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  67,                                  /* colNo */
  "rr4",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  9,                                   /* colNo */
  "rr5",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  81,                                  /* colNo */
  "rr5",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  43,                                  /* colNo */
  "rr6",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  95,                                  /* colNo */
  "rr6",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  77,                                  /* colNo */
  "rr7",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  109,                                 /* colNo */
  "rr7",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  111,                                 /* colNo */
  "rr8",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  123,                                 /* colNo */
  "rr8",                               /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo q_emlrtRTEI = { 220,/* lineNo */
  16,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m"/* pName */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  8,                                   /* colNo */
  "rr",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  223,                                 /* lineNo */
  15,                                  /* colNo */
  "B",                                 /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  224,                                 /* lineNo */
  18,                                  /* colNo */
  "B",                                 /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  225,                                 /* lineNo */
  18,                                  /* colNo */
  "B",                                 /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  226,                                 /* lineNo */
  18,                                  /* colNo */
  "B",                                 /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  28,                                  /* colNo */
  "os",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  114,                                 /* lineNo */
  28,                                  /* colNo */
  "os",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  116,                                 /* lineNo */
  28,                                  /* colNo */
  "os",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  228,                                 /* lineNo */
  33,                                  /* colNo */
  "os",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  228,                                 /* lineNo */
  52,                                  /* colNo */
  "os",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  228,                                 /* lineNo */
  72,                                  /* colNo */
  "os",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  228,                                 /* lineNo */
  91,                                  /* colNo */
  "os",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  228,                                 /* lineNo */
  111,                                 /* colNo */
  "os",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo r_emlrtRTEI = { 39,/* lineNo */
  27,                                  /* colNo */
  "minOrMax",                          /* fName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 121,/* lineNo */
  27,                                  /* colNo */
  "minOrMax",                          /* fName */
  "E:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 96,    /* lineNo */
  12,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 96,  /* lineNo */
  12,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 97,  /* lineNo */
  12,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 97,  /* lineNo */
  12,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 127, /* lineNo */
  13,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 127, /* lineNo */
  13,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 127, /* lineNo */
  40,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 127, /* lineNo */
  40,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 127, /* lineNo */
  67,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 127, /* lineNo */
  67,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 127, /* lineNo */
  94,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 127, /* lineNo */
  94,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 128, /* lineNo */
  13,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 128, /* lineNo */
  13,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 128, /* lineNo */
  40,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 128, /* lineNo */
  40,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 128, /* lineNo */
  67,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 128, /* lineNo */
  67,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 128, /* lineNo */
  94,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 128, /* lineNo */
  94,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 129, /* lineNo */
  12,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 129, /* lineNo */
  12,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 217, /* lineNo */
  15,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 217, /* lineNo */
  15,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 218, /* lineNo */
  16,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 218,/* lineNo */
  16,                                  /* colNo */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  222,                                 /* lineNo */
  27,                                  /* colNo */
  "rr",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  222,                                 /* lineNo */
  42,                                  /* colNo */
  "rr",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  222,                                 /* lineNo */
  57,                                  /* colNo */
  "rr",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  229,                                 /* lineNo */
  16,                                  /* colNo */
  "U1",                                /* aName */
  "outfun_PoseError_U_multiOri",       /* fName */
  "C:\\\\Users\\\\\xe6\xa2\xa6\xe9\x9d\x9e.ML95H\\\\Desktop\\\\Ready\\\\outfun_PoseError_U_multiOri.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
real_T outfun_PoseError_U_multiOri(const emlrtStack *sp, const real_T x[40])
{
  real_T F_out;
  real_T K;
  real_T y;
  real_T d0;
  real_T dv3[1001];
  int32_T i0;
  static const real_T b[1001] = { 0.0, 1.0E-5, 2.0E-5, 3.0000000000000004E-5,
    4.0E-5, 5.0E-5, 6.0000000000000008E-5, 7.0000000000000007E-5, 8.0E-5, 9.0E-5,
    0.0001, 0.00011, 0.00012000000000000002, 0.00013000000000000002,
    0.00014000000000000001, 0.00015000000000000001, 0.00016, 0.00017, 0.00018,
    0.00019, 0.0002, 0.00021, 0.00022, 0.00023, 0.00024000000000000003, 0.00025,
    0.00026000000000000003, 0.00027, 0.00028000000000000003, 0.00029,
    0.00030000000000000003, 0.00031, 0.00032, 0.00033000000000000005, 0.00034,
    0.00035000000000000005, 0.00036, 0.00037000000000000005, 0.00038,
    0.00039000000000000005, 0.0004, 0.00041000000000000005, 0.00042,
    0.00043000000000000004, 0.00044, 0.00045000000000000004, 0.00046,
    0.00047000000000000004, 0.00048000000000000007, 0.00049000000000000009,
    0.0005, 0.00051, 0.00052000000000000006, 0.00053000000000000009, 0.00054,
    0.00055, 0.00056000000000000006, 0.00057000000000000009, 0.00058, 0.00059,
    0.00060000000000000006, 0.00061000000000000008, 0.00062, 0.00063, 0.00064,
    0.00065000000000000008, 0.0006600000000000001, 0.00067, 0.00068,
    0.00069000000000000008, 0.0007000000000000001, 0.00071, 0.00072,
    0.00073000000000000007, 0.0007400000000000001, 0.00075, 0.00076,
    0.00077000000000000007, 0.00078000000000000009, 0.00079, 0.0008,
    0.00081000000000000006, 0.00082000000000000009, 0.00083000000000000012,
    0.00084, 0.00085000000000000006, 0.00086000000000000009,
    0.00087000000000000011, 0.00088, 0.00089000000000000006,
    0.00090000000000000008, 0.00091000000000000011, 0.00092, 0.00093,
    0.00094000000000000008, 0.00095000000000000011, 0.00096000000000000013,
    0.00097, 0.00098000000000000019, 0.00099, 0.001, 0.00101, 0.00102, 0.00103,
    0.0010400000000000001, 0.0010500000000000002, 0.0010600000000000002, 0.00107,
    0.00108, 0.00109, 0.0011, 0.00111, 0.0011200000000000001,
    0.0011300000000000001, 0.0011400000000000002, 0.0011500000000000002, 0.00116,
    0.00117, 0.00118, 0.00119, 0.0012000000000000001, 0.0012100000000000001,
    0.0012200000000000002, 0.0012300000000000002, 0.00124, 0.00125, 0.00126,
    0.00127, 0.00128, 0.0012900000000000001, 0.0013000000000000002,
    0.0013100000000000002, 0.0013200000000000002, 0.00133, 0.00134, 0.00135,
    0.00136, 0.0013700000000000001, 0.0013800000000000002, 0.0013900000000000002,
    0.0014000000000000002, 0.00141, 0.00142, 0.00143, 0.00144,
    0.0014500000000000001, 0.0014600000000000001, 0.0014700000000000002,
    0.0014800000000000002, 0.0014900000000000002, 0.0015, 0.00151, 0.00152,
    0.0015300000000000001, 0.0015400000000000001, 0.0015500000000000002,
    0.0015600000000000002, 0.0015700000000000002, 0.00158, 0.00159, 0.0016,
    0.00161, 0.0016200000000000001, 0.0016300000000000002, 0.0016400000000000002,
    0.0016500000000000002, 0.0016600000000000002, 0.00167, 0.00168, 0.00169,
    0.0017000000000000001, 0.0017100000000000001, 0.0017200000000000002,
    0.0017300000000000002, 0.0017400000000000002, 0.00175, 0.00176, 0.00177,
    0.0017800000000000001, 0.0017900000000000001, 0.0018000000000000002,
    0.0018100000000000002, 0.0018200000000000002, 0.0018300000000000002, 0.00184,
    0.00185, 0.00186, 0.0018700000000000001, 0.0018800000000000002,
    0.0018900000000000002, 0.0019000000000000002, 0.0019100000000000002,
    0.0019200000000000003, 0.00193, 0.00194, 0.0019500000000000001,
    0.0019600000000000004, 0.00197, 0.00198, 0.00199, 0.002, 0.00201, 0.00202,
    0.00203, 0.00204, 0.00205, 0.00206, 0.0020700000000000002,
    0.0020800000000000003, 0.0020900000000000003, 0.0021000000000000003,
    0.0021100000000000003, 0.0021200000000000004, 0.0021300000000000004, 0.00214,
    0.00215, 0.00216, 0.00217, 0.00218, 0.00219, 0.0022, 0.00221, 0.00222,
    0.00223, 0.0022400000000000002, 0.0022500000000000003, 0.0022600000000000003,
    0.0022700000000000003, 0.0022800000000000003, 0.0022900000000000004,
    0.0023000000000000004, 0.00231, 0.00232, 0.00233, 0.00234, 0.00235, 0.00236,
    0.00237, 0.00238, 0.00239, 0.0024000000000000002, 0.0024100000000000002,
    0.0024200000000000003, 0.0024300000000000003, 0.0024400000000000003,
    0.0024500000000000004, 0.0024600000000000004, 0.0024700000000000004, 0.00248,
    0.00249, 0.0025, 0.00251, 0.00252, 0.00253, 0.00254, 0.00255, 0.00256,
    0.0025700000000000002, 0.0025800000000000003, 0.0025900000000000003,
    0.0026000000000000003, 0.0026100000000000003, 0.0026200000000000004,
    0.0026300000000000004, 0.0026400000000000004, 0.00265, 0.00266, 0.00267,
    0.00268, 0.00269, 0.0027, 0.00271, 0.00272, 0.0027300000000000002,
    0.0027400000000000002, 0.0027500000000000003, 0.0027600000000000003,
    0.0027700000000000003, 0.0027800000000000004, 0.0027900000000000004,
    0.0028000000000000004, 0.0028100000000000004, 0.00282, 0.00283, 0.00284,
    0.00285, 0.00286, 0.00287, 0.00288, 0.00289, 0.0029000000000000002,
    0.0029100000000000003, 0.0029200000000000003, 0.0029300000000000003,
    0.0029400000000000003, 0.0029500000000000004, 0.0029600000000000004,
    0.0029700000000000004, 0.0029800000000000004, 0.00299, 0.003, 0.00301,
    0.00302, 0.00303, 0.00304, 0.00305, 0.0030600000000000002,
    0.0030700000000000002, 0.0030800000000000003, 0.0030900000000000003,
    0.0031000000000000003, 0.0031100000000000004, 0.0031200000000000004,
    0.0031300000000000004, 0.0031400000000000004, 0.0031500000000000005, 0.00316,
    0.00317, 0.00318, 0.00319, 0.0032, 0.00321, 0.00322, 0.0032300000000000002,
    0.0032400000000000003, 0.0032500000000000003, 0.0032600000000000003,
    0.0032700000000000003, 0.0032800000000000004, 0.0032900000000000004,
    0.0033000000000000004, 0.0033100000000000004, 0.0033200000000000005, 0.00333,
    0.00334, 0.00335, 0.00336, 0.00337, 0.00338, 0.0033900000000000002,
    0.0034000000000000002, 0.0034100000000000003, 0.0034200000000000003,
    0.0034300000000000003, 0.0034400000000000003, 0.0034500000000000004,
    0.0034600000000000004, 0.0034700000000000004, 0.0034800000000000005,
    0.0034900000000000005, 0.0035, 0.00351, 0.00352, 0.00353, 0.00354, 0.00355,
    0.0035600000000000002, 0.0035700000000000003, 0.0035800000000000003,
    0.0035900000000000003, 0.0036000000000000003, 0.0036100000000000004,
    0.0036200000000000004, 0.0036300000000000004, 0.0036400000000000004,
    0.0036500000000000005, 0.0036600000000000005, 0.00367, 0.00368, 0.00369,
    0.0037, 0.00371, 0.00372, 0.0037300000000000002, 0.0037400000000000003,
    0.0037500000000000003, 0.0037600000000000003, 0.0037700000000000003,
    0.0037800000000000004, 0.0037900000000000004, 0.0038000000000000004,
    0.0038100000000000005, 0.0038200000000000005, 0.0038300000000000005,
    0.0038400000000000005, 0.00385, 0.00386, 0.00387, 0.00388,
    0.0038900000000000002, 0.0039000000000000003, 0.00391, 0.0039200000000000007,
    0.00393, 0.00394, 0.00395, 0.00396, 0.0039700000000000004, 0.00398,
    0.0039900000000000005, 0.004, 0.0040100000000000005, 0.00402,
    0.0040300000000000006, 0.00404, 0.0040500000000000006, 0.00406,
    0.0040700000000000007, 0.00408, 0.0040900000000000008, 0.0041, 0.00411,
    0.00412, 0.00413, 0.0041400000000000005, 0.00415, 0.0041600000000000005,
    0.00417, 0.0041800000000000006, 0.00419, 0.0042000000000000006, 0.00421,
    0.0042200000000000007, 0.00423, 0.0042400000000000007, 0.00425,
    0.0042600000000000008, 0.00427, 0.00428, 0.00429, 0.0043,
    0.0043100000000000005, 0.00432, 0.0043300000000000005, 0.00434,
    0.0043500000000000006, 0.00436, 0.0043700000000000006, 0.00438,
    0.0043900000000000007, 0.0044, 0.0044100000000000007, 0.00442,
    0.0044300000000000008, 0.00444, 0.00445, 0.00446, 0.00447,
    0.0044800000000000005, 0.00449, 0.0045000000000000005, 0.00451,
    0.0045200000000000006, 0.00453, 0.0045400000000000006, 0.00455,
    0.0045600000000000007, 0.00457, 0.0045800000000000007, 0.00459,
    0.0046000000000000008, 0.00461, 0.00462, 0.0046300000000000004, 0.00464,
    0.0046500000000000005, 0.00466, 0.0046700000000000005, 0.00468,
    0.0046900000000000006, 0.0047, 0.0047100000000000006, 0.00472,
    0.0047300000000000007, 0.00474, 0.0047500000000000007, 0.00476,
    0.0047700000000000008, 0.00478, 0.00479, 0.0048000000000000004, 0.00481,
    0.0048200000000000005, 0.00483, 0.0048400000000000006, 0.00485,
    0.0048600000000000006, 0.00487, 0.0048800000000000007, 0.00489,
    0.0049000000000000007, 0.00491, 0.0049200000000000008, 0.00493,
    0.0049400000000000008, 0.00495, 0.00496, 0.0049700000000000005, 0.00498,
    0.0049900000000000005, 0.005, 0.0050100000000000006, 0.00502,
    0.0050300000000000006, 0.00504, 0.0050500000000000007, 0.00506,
    0.0050700000000000007, 0.00508, 0.0050900000000000008, 0.0051,
    0.0051100000000000008, 0.00512, 0.00513, 0.0051400000000000005, 0.00515,
    0.0051600000000000005, 0.00517, 0.0051800000000000006, 0.00519,
    0.0052000000000000006, 0.00521, 0.0052200000000000007, 0.00523,
    0.0052400000000000007, 0.00525, 0.0052600000000000008, 0.00527,
    0.0052800000000000008, 0.00529, 0.0053, 0.0053100000000000005, 0.00532,
    0.0053300000000000005, 0.00534, 0.0053500000000000006, 0.00536,
    0.0053700000000000006, 0.00538, 0.0053900000000000007, 0.0054,
    0.0054100000000000007, 0.00542, 0.0054300000000000008, 0.00544,
    0.0054500000000000009, 0.0054600000000000004, 0.00547, 0.0054800000000000005,
    0.00549, 0.0055000000000000005, 0.00551, 0.0055200000000000006, 0.00553,
    0.0055400000000000007, 0.00555, 0.0055600000000000007, 0.00557,
    0.0055800000000000008, 0.00559, 0.0056000000000000008, 0.00561,
    0.0056200000000000009, 0.0056300000000000005, 0.00564, 0.0056500000000000005,
    0.00566, 0.0056700000000000006, 0.00568, 0.0056900000000000006, 0.0057,
    0.0057100000000000007, 0.00572, 0.0057300000000000007, 0.00574,
    0.0057500000000000008, 0.00576, 0.0057700000000000008, 0.00578,
    0.0057900000000000009, 0.0058000000000000005, 0.00581, 0.0058200000000000005,
    0.00583, 0.0058400000000000006, 0.00585, 0.0058600000000000006, 0.00587,
    0.0058800000000000007, 0.00589, 0.0059000000000000007, 0.00591,
    0.0059200000000000008, 0.00593, 0.0059400000000000008, 0.00595,
    0.0059600000000000009, 0.0059700000000000005, 0.00598, 0.0059900000000000005,
    0.006, 0.0060100000000000006, 0.00602, 0.0060300000000000006, 0.00604,
    0.0060500000000000007, 0.00606, 0.0060700000000000007, 0.00608,
    0.0060900000000000008, 0.0061, 0.0061100000000000008, 0.0061200000000000004,
    0.0061300000000000009, 0.0061400000000000005, 0.00615, 0.0061600000000000005,
    0.00617, 0.0061800000000000006, 0.00619, 0.0062000000000000006, 0.00621,
    0.0062200000000000007, 0.00623, 0.0062400000000000008, 0.00625,
    0.0062600000000000008, 0.00627, 0.0062800000000000009, 0.0062900000000000005,
    0.0063000000000000009, 0.0063100000000000005, 0.00632, 0.0063300000000000006,
    0.00634, 0.0063500000000000006, 0.00636, 0.0063700000000000007, 0.00638,
    0.0063900000000000007, 0.0064, 0.0064100000000000008, 0.00642,
    0.0064300000000000008, 0.00644, 0.0064500000000000009, 0.0064600000000000005,
    0.0064700000000000009, 0.0064800000000000005, 0.00649, 0.0065000000000000006,
    0.00651, 0.0065200000000000006, 0.00653, 0.0065400000000000007, 0.00655,
    0.0065600000000000007, 0.00657, 0.0065800000000000008, 0.00659,
    0.0066000000000000008, 0.00661, 0.0066200000000000009, 0.0066300000000000005,
    0.0066400000000000009, 0.0066500000000000005, 0.00666, 0.0066700000000000006,
    0.00668, 0.0066900000000000006, 0.0067, 0.0067100000000000007, 0.00672,
    0.0067300000000000007, 0.00674, 0.0067500000000000008, 0.00676,
    0.0067700000000000008, 0.0067800000000000004, 0.0067900000000000009,
    0.0068000000000000005, 0.0068100000000000009, 0.0068200000000000005, 0.00683,
    0.0068400000000000006, 0.00685, 0.0068600000000000006, 0.00687,
    0.0068800000000000007, 0.00689, 0.0069000000000000008, 0.00691,
    0.0069200000000000008, 0.00693, 0.0069400000000000009, 0.0069500000000000004,
    0.0069600000000000009, 0.0069700000000000005, 0.006980000000000001,
    0.0069900000000000006, 0.007, 0.0070100000000000006, 0.00702,
    0.0070300000000000007, 0.00704, 0.0070500000000000007, 0.00706,
    0.0070700000000000008, 0.00708, 0.0070900000000000008, 0.0071,
    0.0071100000000000009, 0.0071200000000000005, 0.0071300000000000009,
    0.0071400000000000005, 0.007150000000000001, 0.0071600000000000006, 0.00717,
    0.0071800000000000006, 0.00719, 0.0072000000000000007, 0.00721,
    0.0072200000000000007, 0.00723, 0.0072400000000000008, 0.00725,
    0.0072600000000000008, 0.00727, 0.0072800000000000009, 0.0072900000000000005,
    0.0073000000000000009, 0.0073100000000000005, 0.007320000000000001,
    0.0073300000000000006, 0.00734, 0.0073500000000000006, 0.00736,
    0.0073700000000000007, 0.00738, 0.0073900000000000007, 0.0074,
    0.0074100000000000008, 0.00742, 0.0074300000000000008, 0.00744,
    0.0074500000000000009, 0.0074600000000000005, 0.0074700000000000009,
    0.0074800000000000005, 0.007490000000000001, 0.0075000000000000006, 0.00751,
    0.0075200000000000006, 0.00753, 0.0075400000000000007, 0.00755,
    0.0075600000000000007, 0.00757, 0.0075800000000000008, 0.00759,
    0.0076000000000000009, 0.0076100000000000004, 0.0076200000000000009,
    0.0076300000000000005, 0.007640000000000001, 0.0076500000000000005,
    0.007660000000000001, 0.0076700000000000006, 0.0076800000000000011,
    0.0076900000000000007, 0.0077, 0.0077100000000000007, 0.00772,
    0.0077300000000000008, 0.00774, 0.0077500000000000008, 0.00776,
    0.0077700000000000009, 0.0077800000000000005, 0.0077900000000000009,
    0.0078000000000000005, 0.007810000000000001, 0.00782, 0.00783,
    0.0078400000000000015, 0.0078500000000000011, 0.00786, 0.00787, 0.00788,
    0.0078900000000000012, 0.0079, 0.00791, 0.00792, 0.0079300000000000013,
    0.0079400000000000009, 0.00795, 0.00796, 0.0079700000000000014,
    0.007980000000000001, 0.00799, 0.008, 0.0080100000000000015,
    0.0080200000000000011, 0.00803, 0.00804, 0.00805, 0.0080600000000000012,
    0.00807, 0.00808, 0.00809, 0.0081000000000000013, 0.0081100000000000009,
    0.00812, 0.00813, 0.0081400000000000014, 0.008150000000000001, 0.00816,
    0.00817, 0.0081800000000000015, 0.0081900000000000011, 0.0082, 0.00821,
    0.00822, 0.0082300000000000012, 0.00824, 0.00825, 0.00826,
    0.0082700000000000013, 0.0082800000000000009, 0.00829, 0.0083,
    0.0083100000000000014, 0.008320000000000001, 0.00833, 0.00834,
    0.0083500000000000015, 0.0083600000000000011, 0.00837, 0.00838, 0.00839,
    0.0084000000000000012, 0.00841, 0.00842, 0.00843, 0.0084400000000000013,
    0.0084500000000000009, 0.00846, 0.00847, 0.0084800000000000014,
    0.008490000000000001, 0.0085, 0.00851, 0.0085200000000000015,
    0.0085300000000000011, 0.00854, 0.00855, 0.00856, 0.0085700000000000012,
    0.00858, 0.00859, 0.0086, 0.0086100000000000013, 0.0086200000000000009,
    0.00863, 0.00864, 0.0086500000000000014, 0.008660000000000001, 0.00867,
    0.00868, 0.0086900000000000015, 0.0087000000000000011, 0.00871, 0.00872,
    0.00873, 0.0087400000000000012, 0.00875, 0.00876, 0.00877,
    0.0087800000000000013, 0.0087900000000000009, 0.0088, 0.00881,
    0.0088200000000000014, 0.008830000000000001, 0.00884, 0.00885,
    0.0088600000000000016, 0.0088700000000000011, 0.00888, 0.00889, 0.0089,
    0.0089100000000000013, 0.00892, 0.00893, 0.00894, 0.0089500000000000014,
    0.0089600000000000009, 0.00897, 0.00898, 0.0089900000000000015,
    0.0090000000000000011, 0.00901, 0.00902, 0.0090300000000000016,
    0.0090400000000000012, 0.00905, 0.00906, 0.00907, 0.0090800000000000013,
    0.00909, 0.0091, 0.00911, 0.0091200000000000014, 0.009130000000000001,
    0.00914, 0.00915, 0.0091600000000000015, 0.0091700000000000011, 0.00918,
    0.00919, 0.0092000000000000016, 0.0092100000000000012, 0.00922, 0.00923,
    0.00924, 0.0092500000000000013, 0.0092600000000000009, 0.00927, 0.00928,
    0.0092900000000000014, 0.009300000000000001, 0.00931, 0.00932,
    0.0093300000000000015, 0.0093400000000000011, 0.00935, 0.00936,
    0.0093700000000000016, 0.0093800000000000012, 0.00939, 0.0094, 0.00941,
    0.0094200000000000013, 0.0094300000000000009, 0.00944, 0.00945,
    0.0094600000000000014, 0.009470000000000001, 0.00948, 0.00949,
    0.0095000000000000015, 0.0095100000000000011, 0.00952, 0.00953,
    0.0095400000000000016, 0.0095500000000000012, 0.00956, 0.00957, 0.00958,
    0.0095900000000000013, 0.0096000000000000009, 0.00961, 0.00962,
    0.0096300000000000014, 0.009640000000000001, 0.00965, 0.00966,
    0.0096700000000000015, 0.0096800000000000011, 0.00969, 0.0097,
    0.0097100000000000016, 0.0097200000000000012, 0.00973, 0.00974, 0.00975,
    0.0097600000000000013, 0.0097700000000000009, 0.00978, 0.00979,
    0.0098000000000000014, 0.009810000000000001, 0.00982, 0.00983,
    0.0098400000000000015, 0.0098500000000000011, 0.00986, 0.00987,
    0.0098800000000000016, 0.0098900000000000012, 0.0099, 0.00991, 0.00992,
    0.0099300000000000013, 0.0099400000000000009, 0.00995, 0.00996,
    0.0099700000000000014, 0.009980000000000001, 0.00999, 0.01 };

  real_T dv4[1001];
  real_T dv5[1000];
  real_T Omega;
  real_T rr1[24];
  real_T b_x[24];
  real_T oo[24];
  emxArray_real_T *rs;
  int32_T i_z;
  int32_T loop_ub;
  emxArray_real_T *os;
  emxArray_real_T *b_rr1;
  int32_T i_x;
  int32_T i_y;
  int32_T varNum;
  int32_T b_i_x;
  int32_T ori;
  int32_T varLine;
  real_T dv6[3];
  emxArray_real_T *rr2;
  int32_T n;
  static const int8_T iv0[3] = { 1, 0, 0 };

  static const int8_T iv1[3] = { 1, 90, 90 };

  static const int8_T iv2[3] = { 1, 0, 90 };

  emxArray_real_T *rr3;
  emxArray_real_T *rr4;
  emxArray_real_T *rr5;
  emxArray_real_T *rr6;
  emxArray_real_T *rr7;
  emxArray_real_T *rr8;
  emxArray_real_T *rr;
  real_T dv7[3];
  emxArray_real_T *B;
  emxArray_real_T *U1;
  emxArray_real_T *r0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;
  boolean_T guard6 = false;
  boolean_T guard7 = false;
  boolean_T guard8 = false;
  boolean_T guard9 = false;
  real_T hoistedGlobal[24];
  boolean_T guard51 = false;
  boolean_T guard45 = false;
  boolean_T guard39 = false;
  boolean_T b0;
  boolean_T guard33 = false;
  boolean_T guard27 = false;
  boolean_T guard21 = false;
  boolean_T guard15 = false;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T b_oo[3];
  boolean_T guard50 = false;
  boolean_T guard44 = false;
  boolean_T guard38 = false;
  boolean_T guard32 = false;
  boolean_T guard26 = false;
  boolean_T guard20 = false;
  boolean_T guard14 = false;
  real_T dv8[3];
  real_T dv9[3];
  boolean_T guard49 = false;
  boolean_T guard43 = false;
  boolean_T guard37 = false;
  boolean_T guard31 = false;
  boolean_T guard25 = false;
  boolean_T guard19 = false;
  boolean_T guard13 = false;
  real_T dv10[3];
  real_T dv11[3];
  boolean_T guard48 = false;
  boolean_T guard42 = false;
  boolean_T guard36 = false;
  boolean_T guard30 = false;
  boolean_T guard24 = false;
  boolean_T guard18 = false;
  boolean_T guard12 = false;
  real_T dv12[3];
  real_T dv13[3];
  boolean_T guard47 = false;
  boolean_T guard41 = false;
  boolean_T guard35 = false;
  boolean_T guard29 = false;
  boolean_T guard23 = false;
  boolean_T guard17 = false;
  boolean_T guard11 = false;
  real_T dv14[3];
  boolean_T guard46 = false;
  boolean_T guard40 = false;
  boolean_T guard34 = false;
  boolean_T guard28 = false;
  boolean_T guard22 = false;
  boolean_T guard16 = false;
  boolean_T guard10 = false;
  boolean_T guard57 = false;
  boolean_T guard56 = false;
  real_T b_B[3];
  real_T dv15[3];
  boolean_T guard55 = false;
  boolean_T guard54 = false;
  boolean_T guard53 = false;
  real_T dv16[8];
  boolean_T guard52 = false;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Add noise */
  f = 1000.0;

  /* signal frequency of sine-wave excitation signal */
  /*  sine-wave excitation */
  /*  Relevent Constants */
  st.site = &emlrtRSI;
  mpower();
  mu0 = 1.2566370614359173E-6;

  /*  Permeability of vacumm */
  muR_sende = 1.0;

  /*  Relative permeability of transmitter coils */
  mur_empfang = 898.4;

  /*  Relative permeability of the sensor coil */
  /*  The gain of the pre amplifier for the transmitter coil array */
  /*  Sample length */
  /*  Cross-section area and gain for the sensor coil */
  N_sende = 207.0;

  /*  Windungszahl Sendespule  (number of windings - emitting coil) */
  /*  Windungszahl Empfangsspule (number of windings - sensing coil) */
  R_sende = 0.015;

  /*  Radius Sendespule (Radius of emitting coils) */
  /*  Turns of the sensor */
  st.site = &b_emlrtRSI;
  A_Empfang = 3.1415926535897931 * b_mpower(0.0002832);

  /*  Cross-section area of the transmitter coil */
  /*  Verstaerkung=567*3.295*3/4*6739.7/6000/Gain_tr;			% The gain of */
  /*  the amplifier for the sensor coil, 14.8 it the resistance of the circuit */
  /*  Calculation of current flow in the transmitter coils */
  /*  Select sinewave? */
  st.site = &c_emlrtRSI;
  b_mpower(14.8);
  K = 6.2831853071795862 * f;
  st.site = &c_emlrtRSI;
  y = 219.04000000000002 + b_mpower(6.2831853071795862 * f * 1.165 * 0.001);
  st.site = &c_emlrtRSI;
  b_sqrt(&st, &y);

  /*  14.8 is the circuit resistance and 1.165e-3 is the inductance */
  d0 = 2.0;
  st.site = &d_emlrtRSI;
  b_sqrt(&st, &d0);
  for (i0 = 0; i0 < 1001; i0++) {
    dv3[i0] = K * b[i0];
  }

  b_sin(dv3);
  for (i0 = 0; i0 < 1001; i0++) {
    dv4[i0] = dv3[i0] / y * 10.9;
  }

  memcpy(&dv5[0], &dv4[0], 1000U * sizeof(real_T));
  st.site = &d_emlrtRSI;
  Ia = d0 * rms(&st, dv5);

  /*  The amplitude of sinewave current */
  Omega = 6.2831853071795862 * f;

  /*  Angular speed for circuilar wave */
  /*  Select ramp signal? */
  /*  elseif flag == 1 */
  /*      T = max(t); */
  /*      I = U_g*100*t/(sqrt(14.8^2+(2*pi*(1/max(t))*1.165*10^-3)^2))*Gain_tr; */
  /*      Ia = I(max(size(I)));										 	% The maximum value of the ramp current */
  /*      Omega = 1/T;													% Angular speed - general caculation: d(Phi)/d(t). Here, we have 1 rad over total time T in ramp. The gradient remains. */
  /*      % Select DC signal? */
  /*  elseif flag == 2 */
  /*      T = max(t); */
  /*      I = U_g*100*t/(sqrt(14.8^2+(2*pi*(1/max(t))*1.165*10^-3)^2))*Gain_tr; */
  /*      Ia = mean(I);													% The mean value of the DC current */
  /*      Omega = 1/T; */
  /*  Orientations of each transmitter coil */
  /*  StartOrientation = [ 1 0 0;... */
  /*      1 20 30;... */
  /*      1 40 60;... */
  /*      1 60 90;... */
  /*      1 80 120;... */
  /*      1 100 150;... */
  /*      1 120 180;... */
  /*      1 140 210]; */
  /*  Add Shift */
  rr1[0] = 0.0;
  rr1[8] = x[0];
  rr1[16] = x[8];
  rr1[1] = 0.0;
  rr1[9] = x[1];
  rr1[17] = x[9];
  rr1[2] = 0.0;
  rr1[10] = x[2];
  rr1[18] = x[10];
  rr1[3] = 0.0;
  rr1[11] = x[3];
  rr1[19] = x[11];
  rr1[4] = 0.0;
  rr1[12] = x[4];
  rr1[20] = x[12];
  rr1[5] = 0.0;
  rr1[13] = x[5];
  rr1[21] = x[13];
  rr1[6] = 0.0;
  rr1[14] = x[6];
  rr1[22] = x[14];
  rr1[7] = 0.0;
  rr1[15] = x[7];
  rr1[23] = x[15];

  /*  oo = oo1 */
  /*  Distances between sensor and enmitter */
  /*  StartPosition = [-0.06 0.05 0;... */
  /*      -0.02 0.05 0;... */
  /*      0.02 0.05 0;... */
  /*      0.06 0.05 0;... */
  /*      -0.06 -0.05 0;... */
  /*      -0.02 -0.05 0;... */
  /*      0.02 -0.05 0;... */
  /*      0.06 -0.05 0]; */
  b_x[0] = x[16];
  b_x[8] = x[24];
  b_x[16] = x[32];
  b_x[1] = x[17];
  b_x[9] = x[25];
  b_x[17] = x[33];
  b_x[2] = x[18];
  b_x[10] = x[26];
  b_x[18] = x[34];
  b_x[3] = x[19];
  b_x[11] = x[27];
  b_x[19] = x[35];
  b_x[4] = x[20];
  b_x[12] = x[28];
  b_x[20] = x[36];
  b_x[5] = x[21];
  b_x[13] = x[29];
  b_x[21] = x[37];
  b_x[6] = x[22];
  b_x[14] = x[30];
  b_x[22] = x[38];
  b_x[7] = x[23];
  b_x[15] = x[31];
  b_x[23] = x[39];
  for (i0 = 0; i0 < 3; i0++) {
    for (i_z = 0; i_z < 8; i_z++) {
      oo[i_z + (i0 << 3)] = StartOrientation[i_z + (i0 << 3)] + rr1[i_z + (i0 <<
        3)];
      r[i_z + (i0 << 3)] = StartPosition[i_z + (i0 << 3)] + b_x[i_z + (i0 << 3)];
    }
  }

  emxInit_real_T(sp, &rs, 2, &b_emlrtRTEI, true);

  /*  r = r1; */
  i0 = rs->size[0] * rs->size[1];
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &b_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &emlrtDCI, sp);
  }

  rs->size[0] = (int32_T)varTotalNum;
  rs->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)rs, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &b_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &emlrtDCI, sp);
  }

  loop_ub = (int32_T)varTotalNum * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    rs->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &os, 2, &c_emlrtRTEI, true);
  i0 = os->size[0] * os->size[1];
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &d_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &c_emlrtDCI, sp);
  }

  os->size[0] = (int32_T)varTotalNum;
  os->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)os, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &d_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &c_emlrtDCI, sp);
  }

  loop_ub = (int32_T)varTotalNum * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    os->data[i0] = 0.0;
  }

  loop_ub = 1;
  i_z = 0;
  while (i_z < 6) {
    loop_ub = i_z + 1;
    i_y = 1;
    varNum = 0;
    while (varNum < 11) {
      i_y = varNum + 1;
      i_x = 1;
      b_i_x = 0;
      while (b_i_x < 11) {
        i_x = b_i_x + 1;
        ori = 1;
        while (ori - 1 < 3) {
          varLine = ((i_z * 11 * 11 * 3 + varNum * 11 * 3) + b_i_x * 3) + ori;
          dv6[0] = -0.25 + ((1.0 + (real_T)b_i_x) - 1.0) * 0.05;
          dv6[1] = -0.25 + ((1.0 + (real_T)varNum) - 1.0) * 0.05;
          dv6[2] = 0.05 + ((1.0 + (real_T)i_z) - 1.0) * 0.1;
          n = rs->size[0];
          if (!((varLine >= 1) && (varLine <= n))) {
            emlrtDynamicBoundsCheckR2012b(varLine, 1, n, &emlrtBCI, sp);
          }

          for (i0 = 0; i0 < 3; i0++) {
            rs->data[(varLine + rs->size[0] * i0) - 1] = dv6[i0];
          }

          /*      os(varLine,:) = [1; -180+360/(x_max*y_max*z_max)*varLine; -180+360/(x_max*y_max*z_max)*varLine]; */
          if (ori == 1) {
            n = os->size[0];
            if (!((varLine >= 1) && (varLine <= n))) {
              emlrtDynamicBoundsCheckR2012b(varLine, 1, n, &fb_emlrtBCI, sp);
            }

            for (i0 = 0; i0 < 3; i0++) {
              os->data[(varLine + os->size[0] * i0) - 1] = iv0[i0];
            }
          } else if (ori == 2) {
            n = os->size[0];
            if (!((varLine >= 1) && (varLine <= n))) {
              emlrtDynamicBoundsCheckR2012b(varLine, 1, n, &gb_emlrtBCI, sp);
            }

            for (i0 = 0; i0 < 3; i0++) {
              os->data[(varLine + os->size[0] * i0) - 1] = iv2[i0];
            }
          } else {
            n = os->size[0];
            if (!((varLine >= 1) && (varLine <= n))) {
              emlrtDynamicBoundsCheckR2012b(varLine, 1, n, &hb_emlrtBCI, sp);
            }

            for (i0 = 0; i0 < 3; i0++) {
              os->data[(varLine + os->size[0] * i0) - 1] = iv1[i0];
            }
          }

          ori++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        /*              os(varLine,:) = [1; 90; 90]; */
        b_i_x++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      varNum++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    i_z++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInit_real_T(sp, &b_rr1, 2, &d_emlrtRTEI, true);
  varTotalNum = (real_T)(i_x * i_y * loop_ub) * 3.0;
  i0 = b_rr1->size[0] * b_rr1->size[1];
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &f_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &e_emlrtDCI, sp);
  }

  b_rr1->size[0] = (int32_T)varTotalNum;
  b_rr1->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)b_rr1, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &f_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &e_emlrtDCI, sp);
  }

  loop_ub = (int32_T)varTotalNum * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_rr1->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &rr2, 2, &e_emlrtRTEI, true);
  i0 = rr2->size[0] * rr2->size[1];
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &h_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &g_emlrtDCI, sp);
  }

  rr2->size[0] = (int32_T)varTotalNum;
  rr2->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)rr2, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &h_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &g_emlrtDCI, sp);
  }

  loop_ub = (int32_T)varTotalNum * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    rr2->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &rr3, 2, &f_emlrtRTEI, true);
  i0 = rr3->size[0] * rr3->size[1];
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &j_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &i_emlrtDCI, sp);
  }

  rr3->size[0] = (int32_T)varTotalNum;
  rr3->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)rr3, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &j_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &i_emlrtDCI, sp);
  }

  loop_ub = (int32_T)varTotalNum * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    rr3->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &rr4, 2, &g_emlrtRTEI, true);
  i0 = rr4->size[0] * rr4->size[1];
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &l_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &k_emlrtDCI, sp);
  }

  rr4->size[0] = (int32_T)varTotalNum;
  rr4->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)rr4, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &l_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &k_emlrtDCI, sp);
  }

  loop_ub = (int32_T)varTotalNum * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    rr4->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &rr5, 2, &h_emlrtRTEI, true);
  i0 = rr5->size[0] * rr5->size[1];
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &n_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &m_emlrtDCI, sp);
  }

  rr5->size[0] = (int32_T)varTotalNum;
  rr5->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)rr5, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &n_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &m_emlrtDCI, sp);
  }

  loop_ub = (int32_T)varTotalNum * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    rr5->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &rr6, 2, &i_emlrtRTEI, true);
  i0 = rr6->size[0] * rr6->size[1];
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &p_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &o_emlrtDCI, sp);
  }

  rr6->size[0] = (int32_T)varTotalNum;
  rr6->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)rr6, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &p_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &o_emlrtDCI, sp);
  }

  loop_ub = (int32_T)varTotalNum * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    rr6->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &rr7, 2, &j_emlrtRTEI, true);
  i0 = rr7->size[0] * rr7->size[1];
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &r_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &q_emlrtDCI, sp);
  }

  rr7->size[0] = (int32_T)varTotalNum;
  rr7->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)rr7, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &r_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &q_emlrtDCI, sp);
  }

  loop_ub = (int32_T)varTotalNum * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    rr7->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &rr8, 2, &k_emlrtRTEI, true);
  i0 = rr8->size[0] * rr8->size[1];
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &t_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &s_emlrtDCI, sp);
  }

  rr8->size[0] = (int32_T)varTotalNum;
  rr8->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)rr8, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &t_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &s_emlrtDCI, sp);
  }

  loop_ub = (int32_T)varTotalNum * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    rr8->data[i0] = 0.0;
  }

  emxInit_real_T1(sp, &rr, 3, &l_emlrtRTEI, true);
  i0 = rr->size[0] * rr->size[1] * rr->size[2];
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &v_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &u_emlrtDCI, sp);
  }

  rr->size[0] = (int32_T)varTotalNum;
  rr->size[1] = 8;
  rr->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)rr, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (!(varTotalNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(varTotalNum, &v_emlrtDCI, sp);
  }

  if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
    emlrtIntegerCheckR2012b(varTotalNum, &u_emlrtDCI, sp);
  }

  loop_ub = ((int32_T)varTotalNum << 3) * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    rr->data[i0] = 0.0;
  }

  i0 = (int32_T)varTotalNum;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, varTotalNum, mxDOUBLE_CLASS, (int32_T)
    varTotalNum, &p_emlrtRTEI, sp);
  varNum = 1;
  while (varNum - 1 <= i0 - 1) {
    i_z = rs->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &b_emlrtBCI, sp);
    }

    loop_ub = b_rr1->size[0];
    if (!((varNum >= 1) && (varNum <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, loop_ub, &j_emlrtBCI, sp);
    }

    for (i_z = 0; i_z < 3; i_z++) {
      b_rr1->data[(varNum + b_rr1->size[0] * i_z) - 1] = rs->data[(varNum +
        rs->size[0] * i_z) - 1] - r[i_z << 3];
    }

    i_z = rs->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &c_emlrtBCI, sp);
    }

    loop_ub = rr2->size[0];
    if (!((varNum >= 1) && (varNum <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, loop_ub, &l_emlrtBCI, sp);
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr2->data[(varNum + rr2->size[0] * i_z) - 1] = rs->data[(varNum + rs->
        size[0] * i_z) - 1] - r[1 + (i_z << 3)];
    }

    i_z = rs->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &d_emlrtBCI, sp);
    }

    loop_ub = rr3->size[0];
    if (!((varNum >= 1) && (varNum <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, loop_ub, &n_emlrtBCI, sp);
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr3->data[(varNum + rr3->size[0] * i_z) - 1] = rs->data[(varNum + rs->
        size[0] * i_z) - 1] - r[2 + (i_z << 3)];
    }

    i_z = rs->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &e_emlrtBCI, sp);
    }

    loop_ub = rr4->size[0];
    if (!((varNum >= 1) && (varNum <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, loop_ub, &p_emlrtBCI, sp);
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr4->data[(varNum + rr4->size[0] * i_z) - 1] = rs->data[(varNum + rs->
        size[0] * i_z) - 1] - r[3 + (i_z << 3)];
    }

    i_z = rs->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &f_emlrtBCI, sp);
    }

    loop_ub = rr5->size[0];
    if (!((varNum >= 1) && (varNum <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, loop_ub, &r_emlrtBCI, sp);
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr5->data[(varNum + rr5->size[0] * i_z) - 1] = rs->data[(varNum + rs->
        size[0] * i_z) - 1] - r[4 + (i_z << 3)];
    }

    i_z = rs->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &g_emlrtBCI, sp);
    }

    loop_ub = rr6->size[0];
    if (!((varNum >= 1) && (varNum <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, loop_ub, &t_emlrtBCI, sp);
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr6->data[(varNum + rr6->size[0] * i_z) - 1] = rs->data[(varNum + rs->
        size[0] * i_z) - 1] - r[5 + (i_z << 3)];
    }

    i_z = rs->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &h_emlrtBCI, sp);
    }

    loop_ub = rr7->size[0];
    if (!((varNum >= 1) && (varNum <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, loop_ub, &v_emlrtBCI, sp);
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr7->data[(varNum + rr7->size[0] * i_z) - 1] = rs->data[(varNum + rs->
        size[0] * i_z) - 1] - r[6 + (i_z << 3)];
    }

    i_z = rs->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &i_emlrtBCI, sp);
    }

    loop_ub = rr8->size[0];
    if (!((varNum >= 1) && (varNum <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, loop_ub, &x_emlrtBCI, sp);
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr8->data[(varNum + rr8->size[0] * i_z) - 1] = rs->data[(varNum + rs->
        size[0] * i_z) - 1] - r[7 + (i_z << 3)];
    }

    i_z = b_rr1->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &k_emlrtBCI, sp);
    }

    i_z = rr2->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &m_emlrtBCI, sp);
    }

    i_z = rr3->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &o_emlrtBCI, sp);
    }

    i_z = rr4->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &q_emlrtBCI, sp);
    }

    i_z = rr5->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &s_emlrtBCI, sp);
    }

    i_z = rr6->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &u_emlrtBCI, sp);
    }

    i_z = rr7->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &w_emlrtBCI, sp);
    }

    i_z = rr8->size[0];
    if (!((varNum >= 1) && (varNum <= i_z))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, i_z, &y_emlrtBCI, sp);
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr1[i_z << 3] = b_rr1->data[(varNum + b_rr1->size[0] * i_z) - 1];
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr1[1 + (i_z << 3)] = rr2->data[(varNum + rr2->size[0] * i_z) - 1];
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr1[2 + (i_z << 3)] = rr3->data[(varNum + rr3->size[0] * i_z) - 1];
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr1[3 + (i_z << 3)] = rr4->data[(varNum + rr4->size[0] * i_z) - 1];
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr1[4 + (i_z << 3)] = rr5->data[(varNum + rr5->size[0] * i_z) - 1];
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr1[5 + (i_z << 3)] = rr6->data[(varNum + rr6->size[0] * i_z) - 1];
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr1[6 + (i_z << 3)] = rr7->data[(varNum + rr7->size[0] * i_z) - 1];
    }

    for (i_z = 0; i_z < 3; i_z++) {
      rr1[7 + (i_z << 3)] = rr8->data[(varNum + rr8->size[0] * i_z) - 1];
    }

    loop_ub = rr->size[0];
    if (!((varNum >= 1) && (varNum <= loop_ub))) {
      emlrtDynamicBoundsCheckR2012b(varNum, 1, loop_ub, &ab_emlrtBCI, sp);
    }

    for (i_z = 0; i_z < 3; i_z++) {
      for (n = 0; n < 8; n++) {
        rr->data[((varNum + rr->size[0] * n) + rr->size[0] * rr->size[1] * i_z)
          - 1] = rr1[n + (i_z << 3)];
      }
    }

    varNum++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&rr8);
  emxFree_real_T(&rr7);
  emxFree_real_T(&rr6);
  emxFree_real_T(&rr5);
  emxFree_real_T(&rr4);
  emxFree_real_T(&rr3);
  emxFree_real_T(&rr2);
  emxFree_real_T(&b_rr1);
  for (i0 = 0; i0 < 3; i0++) {
    dv6[i0] = r[i0 << 3] - r[1 + (i0 << 3)];
  }

  st.site = &e_emlrtRSI;
  power(dv6, dv7);
  d0 = sum(dv7);
  st.site = &e_emlrtRSI;
  b_sqrt(&st, &d0);
  st.site = &e_emlrtRSI;
  y = b_mpower(R_sende) + b_mpower(0.015);
  st.site = &e_emlrtRSI;
  b_sqrt(&st, &y);
  emxInit_real_T1(sp, &B, 3, &m_emlrtRTEI, true);
  emxInit_real_T(sp, &U1, 2, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &r0, 2, &emlrtRTEI, true);
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  guard5 = false;
  guard6 = false;
  guard7 = false;
  guard8 = false;
  guard9 = false;
  if (d0 > y) {
    for (i0 = 0; i0 < 3; i0++) {
      dv6[i0] = r[i0 << 3] - r[2 + (i0 << 3)];
    }

    st.site = &e_emlrtRSI;
    power(dv6, dv7);
    d0 = sum(dv7);
    st.site = &e_emlrtRSI;
    b_sqrt(&st, &d0);
    st.site = &e_emlrtRSI;
    y = b_mpower(R_sende) + b_mpower(0.015);
    st.site = &e_emlrtRSI;
    b_sqrt(&st, &y);
    if (d0 > y) {
      for (i0 = 0; i0 < 3; i0++) {
        dv6[i0] = r[i0 << 3] - r[3 + (i0 << 3)];
      }

      st.site = &e_emlrtRSI;
      power(dv6, dv7);
      d0 = sum(dv7);
      st.site = &e_emlrtRSI;
      b_sqrt(&st, &d0);
      st.site = &e_emlrtRSI;
      y = b_mpower(R_sende) + b_mpower(0.015);
      st.site = &e_emlrtRSI;
      b_sqrt(&st, &y);
      if (d0 > y) {
        for (i0 = 0; i0 < 3; i0++) {
          dv6[i0] = r[i0 << 3] - r[4 + (i0 << 3)];
        }

        st.site = &f_emlrtRSI;
        power(dv6, dv7);
        d0 = sum(dv7);
        st.site = &f_emlrtRSI;
        b_sqrt(&st, &d0);
        st.site = &f_emlrtRSI;
        y = b_mpower(R_sende) + b_mpower(0.015);
        st.site = &f_emlrtRSI;
        b_sqrt(&st, &y);
        if (d0 > y) {
          for (i0 = 0; i0 < 3; i0++) {
            dv6[i0] = r[i0 << 3] - r[5 + (i0 << 3)];
          }

          st.site = &f_emlrtRSI;
          power(dv6, dv7);
          d0 = sum(dv7);
          st.site = &f_emlrtRSI;
          b_sqrt(&st, &d0);
          st.site = &f_emlrtRSI;
          y = b_mpower(R_sende) + b_mpower(0.015);
          st.site = &f_emlrtRSI;
          b_sqrt(&st, &y);
          if (d0 > y) {
            for (i0 = 0; i0 < 3; i0++) {
              dv6[i0] = r[i0 << 3] - r[6 + (i0 << 3)];
            }

            st.site = &f_emlrtRSI;
            power(dv6, dv7);
            d0 = sum(dv7);
            st.site = &f_emlrtRSI;
            b_sqrt(&st, &d0);
            st.site = &f_emlrtRSI;
            y = b_mpower(R_sende) + b_mpower(0.015);
            st.site = &f_emlrtRSI;
            b_sqrt(&st, &y);
            if (d0 > y) {
              for (i0 = 0; i0 < 3; i0++) {
                dv6[i0] = r[i0 << 3] - r[7 + (i0 << 3)];
              }

              st.site = &f_emlrtRSI;
              power(dv6, dv7);
              d0 = sum(dv7);
              st.site = &f_emlrtRSI;
              b_sqrt(&st, &d0);
              st.site = &f_emlrtRSI;
              y = b_mpower(R_sende) + b_mpower(0.015);
              st.site = &f_emlrtRSI;
              b_sqrt(&st, &y);
              if (d0 > y) {
                for (i0 = 0; i0 < 3; i0++) {
                  dv6[i0] = r[1 + (i0 << 3)] - r[2 + (i0 << 3)];
                }

                st.site = &g_emlrtRSI;
                power(dv6, dv7);
                d0 = sum(dv7);
                st.site = &g_emlrtRSI;
                b_sqrt(&st, &d0);
                st.site = &g_emlrtRSI;
                y = b_mpower(R_sende) + b_mpower(0.015);
                st.site = &g_emlrtRSI;
                b_sqrt(&st, &y);
                if (d0 > y) {
                  for (i0 = 0; i0 < 3; i0++) {
                    dv6[i0] = r[1 + (i0 << 3)] - r[3 + (i0 << 3)];
                  }

                  st.site = &g_emlrtRSI;
                  power(dv6, dv7);
                  d0 = sum(dv7);
                  st.site = &g_emlrtRSI;
                  b_sqrt(&st, &d0);
                  st.site = &g_emlrtRSI;
                  y = b_mpower(R_sende) + b_mpower(0.015);
                  st.site = &g_emlrtRSI;
                  b_sqrt(&st, &y);
                  if (d0 > y) {
                    for (i0 = 0; i0 < 3; i0++) {
                      dv6[i0] = r[1 + (i0 << 3)] - r[4 + (i0 << 3)];
                    }

                    st.site = &g_emlrtRSI;
                    power(dv6, dv7);
                    d0 = sum(dv7);
                    st.site = &g_emlrtRSI;
                    b_sqrt(&st, &d0);
                    st.site = &g_emlrtRSI;
                    y = b_mpower(R_sende) + b_mpower(0.015);
                    st.site = &g_emlrtRSI;
                    b_sqrt(&st, &y);
                    if (d0 > y) {
                      for (i0 = 0; i0 < 3; i0++) {
                        dv6[i0] = r[1 + (i0 << 3)] - r[5 + (i0 << 3)];
                      }

                      st.site = &g_emlrtRSI;
                      power(dv6, dv7);
                      d0 = sum(dv7);
                      st.site = &g_emlrtRSI;
                      b_sqrt(&st, &d0);
                      st.site = &g_emlrtRSI;
                      y = b_mpower(R_sende) + b_mpower(0.015);
                      st.site = &g_emlrtRSI;
                      b_sqrt(&st, &y);
                      if (d0 > y) {
                        for (i0 = 0; i0 < 3; i0++) {
                          dv6[i0] = r[1 + (i0 << 3)] - r[6 + (i0 << 3)];
                        }

                        st.site = &g_emlrtRSI;
                        power(dv6, dv7);
                        d0 = sum(dv7);
                        st.site = &g_emlrtRSI;
                        b_sqrt(&st, &d0);
                        st.site = &g_emlrtRSI;
                        y = b_mpower(R_sende) + b_mpower(0.015);
                        st.site = &g_emlrtRSI;
                        b_sqrt(&st, &y);
                        if (d0 > y) {
                          for (i0 = 0; i0 < 3; i0++) {
                            dv6[i0] = r[1 + (i0 << 3)] - r[7 + (i0 << 3)];
                          }

                          st.site = &g_emlrtRSI;
                          power(dv6, dv7);
                          d0 = sum(dv7);
                          st.site = &g_emlrtRSI;
                          b_sqrt(&st, &d0);
                          st.site = &g_emlrtRSI;
                          y = b_mpower(R_sende) + b_mpower(0.015);
                          st.site = &g_emlrtRSI;
                          b_sqrt(&st, &y);
                          if (d0 > y) {
                            for (i0 = 0; i0 < 3; i0++) {
                              dv6[i0] = r[2 + (i0 << 3)] - r[3 + (i0 << 3)];
                            }

                            st.site = &h_emlrtRSI;
                            power(dv6, dv7);
                            d0 = sum(dv7);
                            st.site = &h_emlrtRSI;
                            b_sqrt(&st, &d0);
                            st.site = &h_emlrtRSI;
                            y = b_mpower(R_sende) + b_mpower(0.015);
                            st.site = &h_emlrtRSI;
                            b_sqrt(&st, &y);
                            if (d0 > y) {
                              for (i0 = 0; i0 < 3; i0++) {
                                dv6[i0] = r[2 + (i0 << 3)] - r[4 + (i0 << 3)];
                              }

                              st.site = &h_emlrtRSI;
                              power(dv6, dv7);
                              d0 = sum(dv7);
                              st.site = &h_emlrtRSI;
                              b_sqrt(&st, &d0);
                              st.site = &h_emlrtRSI;
                              y = b_mpower(R_sende) + b_mpower(0.015);
                              st.site = &h_emlrtRSI;
                              b_sqrt(&st, &y);
                              if (d0 > y) {
                                for (i0 = 0; i0 < 3; i0++) {
                                  dv6[i0] = r[2 + (i0 << 3)] - r[5 + (i0 << 3)];
                                }

                                st.site = &h_emlrtRSI;
                                power(dv6, dv7);
                                d0 = sum(dv7);
                                st.site = &h_emlrtRSI;
                                b_sqrt(&st, &d0);
                                st.site = &h_emlrtRSI;
                                y = b_mpower(R_sende) + b_mpower(0.015);
                                st.site = &h_emlrtRSI;
                                b_sqrt(&st, &y);
                                if (d0 > y) {
                                  for (i0 = 0; i0 < 3; i0++) {
                                    dv6[i0] = r[2 + (i0 << 3)] - r[6 + (i0 << 3)];
                                  }

                                  st.site = &h_emlrtRSI;
                                  power(dv6, dv7);
                                  d0 = sum(dv7);
                                  st.site = &h_emlrtRSI;
                                  b_sqrt(&st, &d0);
                                  st.site = &h_emlrtRSI;
                                  y = b_mpower(R_sende) + b_mpower(0.015);
                                  st.site = &h_emlrtRSI;
                                  b_sqrt(&st, &y);
                                  if (d0 > y) {
                                    for (i0 = 0; i0 < 3; i0++) {
                                      dv6[i0] = r[2 + (i0 << 3)] - r[7 + (i0 <<
                                        3)];
                                    }

                                    st.site = &h_emlrtRSI;
                                    power(dv6, dv7);
                                    d0 = sum(dv7);
                                    st.site = &h_emlrtRSI;
                                    b_sqrt(&st, &d0);
                                    st.site = &h_emlrtRSI;
                                    y = b_mpower(R_sende) + b_mpower(0.015);
                                    st.site = &h_emlrtRSI;
                                    b_sqrt(&st, &y);
                                    if (d0 > y) {
                                      for (i0 = 0; i0 < 3; i0++) {
                                        dv6[i0] = r[3 + (i0 << 3)] - r[4 + (i0 <<
                                          3)];
                                      }

                                      st.site = &i_emlrtRSI;
                                      power(dv6, dv7);
                                      d0 = sum(dv7);
                                      st.site = &i_emlrtRSI;
                                      b_sqrt(&st, &d0);
                                      st.site = &i_emlrtRSI;
                                      y = b_mpower(R_sende) + b_mpower(0.015);
                                      st.site = &i_emlrtRSI;
                                      b_sqrt(&st, &y);
                                      if (d0 > y) {
                                        for (i0 = 0; i0 < 3; i0++) {
                                          dv6[i0] = r[3 + (i0 << 3)] - r[5 + (i0
                                            << 3)];
                                        }

                                        st.site = &i_emlrtRSI;
                                        power(dv6, dv7);
                                        d0 = sum(dv7);
                                        st.site = &i_emlrtRSI;
                                        b_sqrt(&st, &d0);
                                        st.site = &i_emlrtRSI;
                                        y = b_mpower(R_sende) + b_mpower(0.015);
                                        st.site = &i_emlrtRSI;
                                        b_sqrt(&st, &y);
                                        if (d0 > y) {
                                          for (i0 = 0; i0 < 3; i0++) {
                                            dv6[i0] = r[3 + (i0 << 3)] - r[6 +
                                              (i0 << 3)];
                                          }

                                          st.site = &i_emlrtRSI;
                                          power(dv6, dv7);
                                          d0 = sum(dv7);
                                          st.site = &i_emlrtRSI;
                                          b_sqrt(&st, &d0);
                                          st.site = &i_emlrtRSI;
                                          y = b_mpower(R_sende) + b_mpower(0.015);
                                          st.site = &i_emlrtRSI;
                                          b_sqrt(&st, &y);
                                          if (d0 > y) {
                                            for (i0 = 0; i0 < 3; i0++) {
                                              dv6[i0] = r[3 + (i0 << 3)] - r[7 +
                                                (i0 << 3)];
                                            }

                                            st.site = &i_emlrtRSI;
                                            power(dv6, dv7);
                                            d0 = sum(dv7);
                                            st.site = &i_emlrtRSI;
                                            b_sqrt(&st, &d0);
                                            st.site = &i_emlrtRSI;
                                            y = b_mpower(R_sende) + b_mpower
                                              (0.015);
                                            st.site = &i_emlrtRSI;
                                            b_sqrt(&st, &y);
                                            if (d0 > y) {
                                              for (i0 = 0; i0 < 3; i0++) {
                                                dv6[i0] = r[4 + (i0 << 3)] - r[5
                                                  + (i0 << 3)];
                                              }

                                              st.site = &j_emlrtRSI;
                                              power(dv6, dv7);
                                              d0 = sum(dv7);
                                              st.site = &j_emlrtRSI;
                                              b_sqrt(&st, &d0);
                                              st.site = &j_emlrtRSI;
                                              y = b_mpower(R_sende) + b_mpower
                                                (0.015);
                                              st.site = &j_emlrtRSI;
                                              b_sqrt(&st, &y);
                                              if (d0 > y) {
                                                for (i0 = 0; i0 < 3; i0++) {
                                                  dv6[i0] = r[4 + (i0 << 3)] -
                                                    r[6 + (i0 << 3)];
                                                }

                                                st.site = &j_emlrtRSI;
                                                power(dv6, dv7);
                                                d0 = sum(dv7);
                                                st.site = &j_emlrtRSI;
                                                b_sqrt(&st, &d0);
                                                st.site = &j_emlrtRSI;
                                                y = b_mpower(R_sende) + b_mpower
                                                  (0.015);
                                                st.site = &j_emlrtRSI;
                                                b_sqrt(&st, &y);
                                                if (d0 > y) {
                                                  for (i0 = 0; i0 < 3; i0++) {
                                                    dv6[i0] = r[4 + (i0 << 3)] -
                                                      r[7 + (i0 << 3)];
                                                  }

                                                  st.site = &j_emlrtRSI;
                                                  power(dv6, dv7);
                                                  d0 = sum(dv7);
                                                  st.site = &j_emlrtRSI;
                                                  b_sqrt(&st, &d0);
                                                  st.site = &j_emlrtRSI;
                                                  y = b_mpower(R_sende) +
                                                    b_mpower(0.015);
                                                  st.site = &j_emlrtRSI;
                                                  b_sqrt(&st, &y);
                                                  if (d0 > y) {
                                                    for (i0 = 0; i0 < 3; i0++) {
                                                      dv6[i0] = r[5 + (i0 << 3)]
                                                        - r[6 + (i0 << 3)];
                                                    }

                                                    st.site = &k_emlrtRSI;
                                                    power(dv6, dv7);
                                                    d0 = sum(dv7);
                                                    st.site = &k_emlrtRSI;
                                                    b_sqrt(&st, &d0);
                                                    st.site = &k_emlrtRSI;
                                                    y = b_mpower(R_sende) +
                                                      b_mpower(0.015);
                                                    st.site = &k_emlrtRSI;
                                                    b_sqrt(&st, &y);
                                                    if (d0 > y) {
                                                      for (i0 = 0; i0 < 3; i0++)
                                                      {
                                                        dv6[i0] = r[5 + (i0 << 3)]
                                                          - r[7 + (i0 << 3)];
                                                      }

                                                      st.site = &k_emlrtRSI;
                                                      power(dv6, dv7);
                                                      d0 = sum(dv7);
                                                      st.site = &k_emlrtRSI;
                                                      b_sqrt(&st, &d0);
                                                      st.site = &k_emlrtRSI;
                                                      y = b_mpower(R_sende) +
                                                        b_mpower(0.015);
                                                      st.site = &k_emlrtRSI;
                                                      b_sqrt(&st, &y);
                                                      if (d0 > y) {
                                                        for (i0 = 0; i0 < 3; i0
                                                             ++) {
                                                          dv6[i0] = r[6 + (i0 <<
                                                            3)] - r[7 + (i0 << 3)];
                                                        }

                                                        st.site = &l_emlrtRSI;
                                                        power(dv6, dv7);
                                                        d0 = sum(dv7);
                                                        st.site = &l_emlrtRSI;
                                                        b_sqrt(&st, &d0);
                                                        st.site = &l_emlrtRSI;
                                                        y = b_mpower(R_sende) +
                                                          b_mpower(0.015);
                                                        st.site = &l_emlrtRSI;
                                                        b_sqrt(&st, &y);
                                                        if (d0 > y) {
                                                          memcpy(&hoistedGlobal
                                                                 [0], &r[0], 24U
                                                                 * sizeof(real_T));
                                                          st.site = &m_emlrtRSI;
                                                          b_st.site =
                                                            &cb_emlrtRSI;
                                                          c_st.site =
                                                            &db_emlrtRSI;
                                                          i0 = rs->size[0];
                                                          guard57 = false;
                                                          if (i0 == 1) {
                                                            guard57 = true;
                                                          } else {
                                                            i0 = rs->size[0];
                                                            if (i0 != 1) {
                                                              guard57 = true;
                                                            } else {
                                                              b0 = false;
                                                            }
                                                          }

                                                          if (guard57) {
                                                            b0 = true;
                                                          }

                                                          if (!b0) {
                                                            emlrtErrorWithMessageIdR2012b
                                                              (&c_st,
                                                               &r_emlrtRTEI,
                                                               "Coder:toolbox:autoDimIncompatibility",
                                                               0);
                                                          }

                                                          i0 = rs->size[0];
                                                          if (!(i0 > 0)) {
                                                            emlrtErrorWithMessageIdR2012b
                                                              (&c_st,
                                                               &s_emlrtRTEI,
                                                               "Coder:toolbox:eml_min_or_max_varDimZero",
                                                               0);
                                                          }

                                                          d_st.site =
                                                            &eb_emlrtRSI;
                                                          n = rs->size[0];
                                                          K = rs->data[0];
                                                          i0 = rs->size[0];
                                                          if (i0 > 1) {
                                                            i0 = rs->size[0];
                                                            if (1 < i0) {
                                                              e_st.site =
                                                                &fb_emlrtRSI;
                                                              if (n > 2147483646)
                                                              {
                                                                f_st.site =
                                                                  &gb_emlrtRSI;
                                                                check_forloop_overflow_error
                                                                  (&f_st);
                                                              }

                                                              for (loop_ub = 1;
                                                                   loop_ub + 1 <=
                                                                   n; loop_ub++)
                                                              {
                                                                if (rs->
                                                                    data[loop_ub]
                                                                    < K) {
                                                                  K = rs->
                                                                    data[loop_ub];
                                                                }
                                                              }
                                                            }
                                                          }

                                                          st.site = &m_emlrtRSI;
                                                          d0 = b_mpower(R_sende)
                                                            + b_mpower(0.015);
                                                          st.site = &m_emlrtRSI;
                                                          b_sqrt(&st, &d0);
                                                          if (hoistedGlobal[0] <
                                                              K - d0) {
                                                            guard9 = true;
                                                          } else {
                                                            memcpy
                                                              (&hoistedGlobal[0],
                                                               &r[0], 24U *
                                                               sizeof(real_T));
                                                            st.site =
                                                              &m_emlrtRSI;
                                                            b_st.site =
                                                              &hb_emlrtRSI;
                                                            c_st.site =
                                                              &db_emlrtRSI;
                                                            i0 = rs->size[0];
                                                            guard56 = false;
                                                            if (i0 == 1) {
                                                              guard56 = true;
                                                            } else {
                                                              i0 = rs->size[0];
                                                              if (i0 != 1) {
                                                                guard56 = true;
                                                              } else {
                                                                b0 = false;
                                                              }
                                                            }

                                                            if (guard56) {
                                                              b0 = true;
                                                            }

                                                            if (!b0) {
                                                              emlrtErrorWithMessageIdR2012b
                                                                (&c_st,
                                                                 &r_emlrtRTEI,
                                                                 "Coder:toolbox:autoDimIncompatibility",
                                                                 0);
                                                            }

                                                            i0 = rs->size[0];
                                                            if (!(i0 > 0)) {
                                                              emlrtErrorWithMessageIdR2012b
                                                                (&c_st,
                                                                 &s_emlrtRTEI,
                                                                 "Coder:toolbox:eml_min_or_max_varDimZero",
                                                                 0);
                                                            }

                                                            d_st.site =
                                                              &eb_emlrtRSI;
                                                            n = rs->size[0];
                                                            K = rs->data[0];
                                                            i0 = rs->size[0];
                                                            if (i0 > 1) {
                                                              i0 = rs->size[0];
                                                              if (1 < i0) {
                                                                e_st.site =
                                                                  &fb_emlrtRSI;
                                                                if (n >
                                                                    2147483646)
                                                                {
                                                                  f_st.site =
                                                                    &gb_emlrtRSI;
                                                                  check_forloop_overflow_error
                                                                    (&f_st);
                                                                }

                                                                for (loop_ub = 1;
                                                                     loop_ub + 1
                                                                     <= n;
                                                                     loop_ub++)
                                                                {
                                                                  if (rs->
                                                                      data[loop_ub]
                                                                      > K) {
                                                                    K = rs->
                                                                      data[loop_ub];
                                                                  }
                                                                }
                                                              }
                                                            }

                                                            st.site =
                                                              &m_emlrtRSI;
                                                            d0 = b_mpower
                                                              (R_sende) +
                                                              b_mpower(0.015);
                                                            st.site =
                                                              &m_emlrtRSI;
                                                            b_sqrt(&st, &d0);
                                                            if (hoistedGlobal[0]
                                                                > K + d0) {
                                                              guard9 = true;
                                                            } else {
                                                              memcpy
                                                                (&hoistedGlobal
                                                                 [0], &r[0], 24U
                                                                 * sizeof(real_T));
                                                              st.site =
                                                                &m_emlrtRSI;
                                                              b_st.site =
                                                                &cb_emlrtRSI;
                                                              c_st.site =
                                                                &db_emlrtRSI;
                                                              i0 = rs->size[0];
                                                              guard55 = false;
                                                              if (i0 == 1) {
                                                                guard55 = true;
                                                              } else {
                                                                i0 = rs->size[0];
                                                                if (i0 != 1) {
                                                                  guard55 = true;
                                                                } else {
                                                                  b0 = false;
                                                                }
                                                              }

                                                              if (guard55) {
                                                                b0 = true;
                                                              }

                                                              if (!b0) {
                                                                emlrtErrorWithMessageIdR2012b
                                                                  (&c_st,
                                                                   &r_emlrtRTEI,
                                                                   "Coder:toolbox:autoDimIncompatibility",
                                                                   0);
                                                              }

                                                              i0 = rs->size[0];
                                                              if (!(i0 > 0)) {
                                                                emlrtErrorWithMessageIdR2012b
                                                                  (&c_st,
                                                                   &s_emlrtRTEI,
                                                                   "Coder:toolbox:eml_min_or_max_varDimZero",
                                                                   0);
                                                              }

                                                              d_st.site =
                                                                &eb_emlrtRSI;
                                                              n = rs->size[0];
                                                              K = rs->data
                                                                [rs->size[0]];
                                                              i0 = rs->size[0];
                                                              if (i0 > 1) {
                                                                i0 = rs->size[0];
                                                                if (1 < i0) {
                                                                  e_st.site =
                                                                    &fb_emlrtRSI;
                                                                  if (n >
                                                                      2147483646)
                                                                  {
                                                                    f_st.site =
                                                                      &gb_emlrtRSI;
                                                                    check_forloop_overflow_error
                                                                      (&f_st);
                                                                  }

                                                                  for (loop_ub =
                                                                      1; loop_ub
                                                                      + 1 <= n;
                                                                      loop_ub++)
                                                                  {
                                                                    if (rs->
                                                                      data[loop_ub
                                                                      + rs->
                                                                      size[0]] <
                                                                      K) {
                                                                      K =
                                                                      rs->
                                                                      data[loop_ub
                                                                      + rs->
                                                                      size[0]];
                                                                    }
                                                                  }
                                                                }
                                                              }

                                                              st.site =
                                                                &m_emlrtRSI;
                                                              d0 = b_mpower
                                                                (R_sende) +
                                                                b_mpower(0.015);
                                                              st.site =
                                                                &m_emlrtRSI;
                                                              b_sqrt(&st, &d0);
                                                              if (hoistedGlobal
                                                                  [8] < K - d0)
                                                              {
                                                                guard9 = true;
                                                              } else {
                                                                memcpy
                                                                  (&hoistedGlobal
                                                                   [0], &r[0],
                                                                   24U * sizeof
                                                                   (real_T));
                                                                st.site =
                                                                  &m_emlrtRSI;
                                                                b_st.site =
                                                                  &hb_emlrtRSI;
                                                                c_st.site =
                                                                  &db_emlrtRSI;
                                                                i0 = rs->size[0];
                                                                guard54 = false;
                                                                if (i0 == 1) {
                                                                  guard54 = true;
                                                                } else {
                                                                  i0 = rs->size
                                                                    [0];
                                                                  if (i0 != 1) {
                                                                    guard54 =
                                                                      true;
                                                                  } else {
                                                                    b0 = false;
                                                                  }
                                                                }

                                                                if (guard54) {
                                                                  b0 = true;
                                                                }

                                                                if (!b0) {
                                                                  emlrtErrorWithMessageIdR2012b
                                                                    (&c_st,
                                                                     &r_emlrtRTEI,
                                                                     "Coder:toolbox:autoDimIncompatibility",
                                                                     0);
                                                                }

                                                                i0 = rs->size[0];
                                                                if (!(i0 > 0)) {
                                                                  emlrtErrorWithMessageIdR2012b
                                                                    (&c_st,
                                                                     &s_emlrtRTEI,
                                                                     "Coder:toolbox:eml_min_or_max_varDimZero",
                                                                     0);
                                                                }

                                                                d_st.site =
                                                                  &eb_emlrtRSI;
                                                                n = rs->size[0];
                                                                K = rs->data
                                                                  [rs->size[0]];
                                                                i0 = rs->size[0];
                                                                if (i0 > 1) {
                                                                  i0 = rs->size
                                                                    [0];
                                                                  if (1 < i0) {
                                                                    e_st.site =
                                                                      &fb_emlrtRSI;
                                                                    if (n >
                                                                      2147483646)
                                                                    {
                                                                      f_st.site =
                                                                      &gb_emlrtRSI;
                                                                      check_forloop_overflow_error
                                                                      (&f_st);
                                                                    }

                                                                    for (loop_ub
                                                                      = 1;
                                                                      loop_ub +
                                                                      1 <= n;
                                                                      loop_ub++)
                                                                    {
                                                                      if
                                                                      (rs->
                                                                      data[loop_ub
                                                                      + rs->
                                                                      size[0]] >
                                                                      K) {
                                                                      K =
                                                                      rs->
                                                                      data[loop_ub
                                                                      + rs->
                                                                      size[0]];
                                                                      }
                                                                    }
                                                                  }
                                                                }

                                                                st.site =
                                                                  &m_emlrtRSI;
                                                                d0 = b_mpower
                                                                  (R_sende) +
                                                                  b_mpower(0.015);
                                                                st.site =
                                                                  &m_emlrtRSI;
                                                                b_sqrt(&st, &d0);
                                                                if (hoistedGlobal
                                                                    [8] > K + d0)
                                                                {
                                                                  guard9 = true;
                                                                } else {
                                                                  memcpy
                                                                    (&hoistedGlobal
                                                                     [0], &r[0],
                                                                     24U *
                                                                     sizeof
                                                                     (real_T));
                                                                  st.site =
                                                                    &m_emlrtRSI;
                                                                  b_st.site =
                                                                    &cb_emlrtRSI;
                                                                  c_st.site =
                                                                    &db_emlrtRSI;
                                                                  i0 = rs->size
                                                                    [0];
                                                                  guard53 =
                                                                    false;
                                                                  if (i0 == 1) {
                                                                    guard53 =
                                                                      true;
                                                                  } else {
                                                                    i0 =
                                                                      rs->size[0];
                                                                    if (i0 != 1)
                                                                    {
                                                                      guard53 =
                                                                      true;
                                                                    } else {
                                                                      b0 = false;
                                                                    }
                                                                  }

                                                                  if (guard53) {
                                                                    b0 = true;
                                                                  }

                                                                  if (!b0) {
                                                                    emlrtErrorWithMessageIdR2012b
                                                                      (&c_st,
                                                                      &r_emlrtRTEI,
                                                                      "Coder:toolbox:autoDimIncompatibility",
                                                                      0);
                                                                  }

                                                                  i0 = rs->size
                                                                    [0];
                                                                  if (!(i0 > 0))
                                                                  {
                                                                    emlrtErrorWithMessageIdR2012b
                                                                      (&c_st,
                                                                      &s_emlrtRTEI,
                                                                      "Coder:toolbox:eml_min_or_max_varDimZero",
                                                                      0);
                                                                  }

                                                                  d_st.site =
                                                                    &eb_emlrtRSI;
                                                                  n = rs->size[0];
                                                                  K = rs->
                                                                    data
                                                                    [rs->size[0]
                                                                    << 1];
                                                                  i0 = rs->size
                                                                    [0];
                                                                  if (i0 > 1) {
                                                                    i0 =
                                                                      rs->size[0];
                                                                    if (1 < i0)
                                                                    {
                                                                      e_st.site =
                                                                      &fb_emlrtRSI;
                                                                      if (n >
                                                                      2147483646)
                                                                      {
                                                                      f_st.site =
                                                                      &gb_emlrtRSI;
                                                                      check_forloop_overflow_error
                                                                      (&f_st);
                                                                      }

                                                                      for
                                                                      (loop_ub =
                                                                      1; loop_ub
                                                                      + 1 <= n;
                                                                      loop_ub++)
                                                                      {
                                                                      if
                                                                      (rs->
                                                                      data[loop_ub
                                                                      + (rs->size
                                                                      [0] << 1)]
                                                                      < K) {
                                                                      K =
                                                                      rs->
                                                                      data[loop_ub
                                                                      + (rs->size
                                                                      [0] << 1)];
                                                                      }
                                                                      }
                                                                    }
                                                                  }

                                                                  st.site =
                                                                    &m_emlrtRSI;
                                                                  d0 = b_mpower
                                                                    (R_sende) +
                                                                    b_mpower
                                                                    (0.015);
                                                                  st.site =
                                                                    &m_emlrtRSI;
                                                                  b_sqrt(&st,
                                                                      &d0);
                                                                  if (hoistedGlobal
                                                                      [16] < K -
                                                                      d0) {
                                                                    guard9 =
                                                                      true;
                                                                  } else {
                                                                    memcpy
                                                                      (&hoistedGlobal
                                                                      [0], &r[0],
                                                                      24U *
                                                                      sizeof
                                                                      (real_T));
                                                                    st.site =
                                                                      &m_emlrtRSI;
                                                                    b_st.site =
                                                                      &hb_emlrtRSI;
                                                                    c_st.site =
                                                                      &db_emlrtRSI;
                                                                    i0 =
                                                                      rs->size[0];
                                                                    guard52 =
                                                                      false;
                                                                    if (i0 == 1)
                                                                    {
                                                                      guard52 =
                                                                      true;
                                                                    } else {
                                                                      i0 =
                                                                      rs->size[0];
                                                                      if (i0 !=
                                                                      1) {
                                                                      guard52 =
                                                                      true;
                                                                      } else {
                                                                      b0 = false;
                                                                      }
                                                                    }

                                                                    if (guard52)
                                                                    {
                                                                      b0 = true;
                                                                    }

                                                                    if (!b0) {
                                                                      emlrtErrorWithMessageIdR2012b
                                                                      (&c_st,
                                                                      &r_emlrtRTEI,
                                                                      "Coder:toolbox:autoDimIncompatibility",
                                                                      0);
                                                                    }

                                                                    i0 =
                                                                      rs->size[0];
                                                                    if (!(i0 > 0))
                                                                    {
                                                                      emlrtErrorWithMessageIdR2012b
                                                                      (&c_st,
                                                                      &s_emlrtRTEI,
                                                                      "Coder:toolbox:eml_min_or_max_varDimZero",
                                                                      0);
                                                                    }

                                                                    d_st.site =
                                                                      &eb_emlrtRSI;
                                                                    n = rs->
                                                                      size[0];
                                                                    K = rs->
                                                                      data
                                                                      [rs->size
                                                                      [0] << 1];
                                                                    i0 =
                                                                      rs->size[0];
                                                                    if (i0 > 1)
                                                                    {
                                                                      i0 =
                                                                      rs->size[0];
                                                                      if (1 < i0)
                                                                      {
                                                                      e_st.site =
                                                                      &fb_emlrtRSI;
                                                                      if (n >
                                                                      2147483646)
                                                                      {
                                                                      f_st.site =
                                                                      &gb_emlrtRSI;
                                                                      check_forloop_overflow_error
                                                                      (&f_st);
                                                                      }

                                                                      for
                                                                      (loop_ub =
                                                                      1; loop_ub
                                                                      + 1 <= n;
                                                                      loop_ub++)
                                                                      {
                                                                      if
                                                                      (rs->
                                                                      data[loop_ub
                                                                      + (rs->size
                                                                      [0] << 1)]
                                                                      > K) {
                                                                      K =
                                                                      rs->
                                                                      data[loop_ub
                                                                      + (rs->size
                                                                      [0] << 1)];
                                                                      }
                                                                      }
                                                                      }
                                                                    }

                                                                    st.site =
                                                                      &m_emlrtRSI;
                                                                    d0 =
                                                                      b_mpower
                                                                      (R_sende)
                                                                      + b_mpower
                                                                      (0.015);
                                                                    st.site =
                                                                      &m_emlrtRSI;
                                                                    b_sqrt(&st,
                                                                      &d0);
                                                                    if
                                                                      (hoistedGlobal
                                                                      [16] > K +
                                                                      d0) {
                                                                      guard9 =
                                                                      true;
                                                                    } else {
                                                                      guard1 =
                                                                      true;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        } else {
                                                          guard1 = true;
                                                        }
                                                      } else {
                                                        guard1 = true;
                                                      }
                                                    } else {
                                                      guard1 = true;
                                                    }
                                                  } else {
                                                    guard1 = true;
                                                  }
                                                } else {
                                                  guard1 = true;
                                                }
                                              } else {
                                                guard1 = true;
                                              }
                                            } else {
                                              guard1 = true;
                                            }
                                          } else {
                                            guard1 = true;
                                          }
                                        } else {
                                          guard1 = true;
                                        }
                                      } else {
                                        guard1 = true;
                                      }
                                    } else {
                                      guard1 = true;
                                    }
                                  } else {
                                    guard1 = true;
                                  }
                                } else {
                                  guard1 = true;
                                }
                              } else {
                                guard1 = true;
                              }
                            } else {
                              guard1 = true;
                            }
                          } else {
                            guard1 = true;
                          }
                        } else {
                          guard1 = true;
                        }
                      } else {
                        guard1 = true;
                      }
                    } else {
                      guard1 = true;
                    }
                  } else {
                    guard1 = true;
                  }
                } else {
                  guard1 = true;
                }
              } else {
                guard1 = true;
              }
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard9) {
    memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
    st.site = &n_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &db_emlrtRSI;
    i0 = rs->size[0];
    guard51 = false;
    if (i0 == 1) {
      guard51 = true;
    } else {
      i0 = rs->size[0];
      if (i0 != 1) {
        guard51 = true;
      } else {
        b0 = false;
      }
    }

    if (guard51) {
      b0 = true;
    }

    if (!b0) {
      emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    i0 = rs->size[0];
    if (!(i0 > 0)) {
      emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    d_st.site = &eb_emlrtRSI;
    n = rs->size[0];
    K = rs->data[0];
    i0 = rs->size[0];
    if (i0 > 1) {
      i0 = rs->size[0];
      if (1 < i0) {
        e_st.site = &fb_emlrtRSI;
        if (n > 2147483646) {
          f_st.site = &gb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
          if (rs->data[loop_ub] < K) {
            K = rs->data[loop_ub];
          }
        }
      }
    }

    st.site = &n_emlrtRSI;
    d0 = b_mpower(R_sende) + b_mpower(0.015);
    st.site = &n_emlrtRSI;
    b_sqrt(&st, &d0);
    if (hoistedGlobal[1] < K - d0) {
      guard8 = true;
    } else {
      memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
      st.site = &n_emlrtRSI;
      b_st.site = &hb_emlrtRSI;
      c_st.site = &db_emlrtRSI;
      i0 = rs->size[0];
      guard50 = false;
      if (i0 == 1) {
        guard50 = true;
      } else {
        i0 = rs->size[0];
        if (i0 != 1) {
          guard50 = true;
        } else {
          b0 = false;
        }
      }

      if (guard50) {
        b0 = true;
      }

      if (!b0) {
        emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      i0 = rs->size[0];
      if (!(i0 > 0)) {
        emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      d_st.site = &eb_emlrtRSI;
      n = rs->size[0];
      K = rs->data[0];
      i0 = rs->size[0];
      if (i0 > 1) {
        i0 = rs->size[0];
        if (1 < i0) {
          e_st.site = &fb_emlrtRSI;
          if (n > 2147483646) {
            f_st.site = &gb_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
            if (rs->data[loop_ub] > K) {
              K = rs->data[loop_ub];
            }
          }
        }
      }

      st.site = &n_emlrtRSI;
      d0 = b_mpower(R_sende) + b_mpower(0.015);
      st.site = &n_emlrtRSI;
      b_sqrt(&st, &d0);
      if (hoistedGlobal[1] > K + d0) {
        guard8 = true;
      } else {
        memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
        st.site = &n_emlrtRSI;
        b_st.site = &cb_emlrtRSI;
        c_st.site = &db_emlrtRSI;
        i0 = rs->size[0];
        guard49 = false;
        if (i0 == 1) {
          guard49 = true;
        } else {
          i0 = rs->size[0];
          if (i0 != 1) {
            guard49 = true;
          } else {
            b0 = false;
          }
        }

        if (guard49) {
          b0 = true;
        }

        if (!b0) {
          emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
            "Coder:toolbox:autoDimIncompatibility", 0);
        }

        i0 = rs->size[0];
        if (!(i0 > 0)) {
          emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }

        d_st.site = &eb_emlrtRSI;
        n = rs->size[0];
        K = rs->data[rs->size[0]];
        i0 = rs->size[0];
        if (i0 > 1) {
          i0 = rs->size[0];
          if (1 < i0) {
            e_st.site = &fb_emlrtRSI;
            if (n > 2147483646) {
              f_st.site = &gb_emlrtRSI;
              check_forloop_overflow_error(&f_st);
            }

            for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
              if (rs->data[loop_ub + rs->size[0]] < K) {
                K = rs->data[loop_ub + rs->size[0]];
              }
            }
          }
        }

        st.site = &n_emlrtRSI;
        d0 = b_mpower(R_sende) + b_mpower(0.015);
        st.site = &n_emlrtRSI;
        b_sqrt(&st, &d0);
        if (hoistedGlobal[9] < K - d0) {
          guard8 = true;
        } else {
          memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
          st.site = &n_emlrtRSI;
          b_st.site = &hb_emlrtRSI;
          c_st.site = &db_emlrtRSI;
          i0 = rs->size[0];
          guard48 = false;
          if (i0 == 1) {
            guard48 = true;
          } else {
            i0 = rs->size[0];
            if (i0 != 1) {
              guard48 = true;
            } else {
              b0 = false;
            }
          }

          if (guard48) {
            b0 = true;
          }

          if (!b0) {
            emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          i0 = rs->size[0];
          if (!(i0 > 0)) {
            emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          d_st.site = &eb_emlrtRSI;
          n = rs->size[0];
          K = rs->data[rs->size[0]];
          i0 = rs->size[0];
          if (i0 > 1) {
            i0 = rs->size[0];
            if (1 < i0) {
              e_st.site = &fb_emlrtRSI;
              if (n > 2147483646) {
                f_st.site = &gb_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                if (rs->data[loop_ub + rs->size[0]] > K) {
                  K = rs->data[loop_ub + rs->size[0]];
                }
              }
            }
          }

          st.site = &n_emlrtRSI;
          d0 = b_mpower(R_sende) + b_mpower(0.015);
          st.site = &n_emlrtRSI;
          b_sqrt(&st, &d0);
          if (hoistedGlobal[9] > K + d0) {
            guard8 = true;
          } else {
            memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
            st.site = &n_emlrtRSI;
            b_st.site = &cb_emlrtRSI;
            c_st.site = &db_emlrtRSI;
            i0 = rs->size[0];
            guard47 = false;
            if (i0 == 1) {
              guard47 = true;
            } else {
              i0 = rs->size[0];
              if (i0 != 1) {
                guard47 = true;
              } else {
                b0 = false;
              }
            }

            if (guard47) {
              b0 = true;
            }

            if (!b0) {
              emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
                "Coder:toolbox:autoDimIncompatibility", 0);
            }

            i0 = rs->size[0];
            if (!(i0 > 0)) {
              emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
                "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }

            d_st.site = &eb_emlrtRSI;
            n = rs->size[0];
            K = rs->data[rs->size[0] << 1];
            i0 = rs->size[0];
            if (i0 > 1) {
              i0 = rs->size[0];
              if (1 < i0) {
                e_st.site = &fb_emlrtRSI;
                if (n > 2147483646) {
                  f_st.site = &gb_emlrtRSI;
                  check_forloop_overflow_error(&f_st);
                }

                for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                  if (rs->data[loop_ub + (rs->size[0] << 1)] < K) {
                    K = rs->data[loop_ub + (rs->size[0] << 1)];
                  }
                }
              }
            }

            st.site = &n_emlrtRSI;
            d0 = b_mpower(R_sende) + b_mpower(0.015);
            st.site = &n_emlrtRSI;
            b_sqrt(&st, &d0);
            if (hoistedGlobal[17] < K - d0) {
              guard8 = true;
            } else {
              memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
              st.site = &n_emlrtRSI;
              b_st.site = &hb_emlrtRSI;
              c_st.site = &db_emlrtRSI;
              i0 = rs->size[0];
              guard46 = false;
              if (i0 == 1) {
                guard46 = true;
              } else {
                i0 = rs->size[0];
                if (i0 != 1) {
                  guard46 = true;
                } else {
                  b0 = false;
                }
              }

              if (guard46) {
                b0 = true;
              }

              if (!b0) {
                emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
                  "Coder:toolbox:autoDimIncompatibility", 0);
              }

              i0 = rs->size[0];
              if (!(i0 > 0)) {
                emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
              }

              d_st.site = &eb_emlrtRSI;
              n = rs->size[0];
              K = rs->data[rs->size[0] << 1];
              i0 = rs->size[0];
              if (i0 > 1) {
                i0 = rs->size[0];
                if (1 < i0) {
                  e_st.site = &fb_emlrtRSI;
                  if (n > 2147483646) {
                    f_st.site = &gb_emlrtRSI;
                    check_forloop_overflow_error(&f_st);
                  }

                  for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                    if (rs->data[loop_ub + (rs->size[0] << 1)] > K) {
                      K = rs->data[loop_ub + (rs->size[0] << 1)];
                    }
                  }
                }
              }

              st.site = &n_emlrtRSI;
              d0 = b_mpower(R_sende) + b_mpower(0.015);
              st.site = &n_emlrtRSI;
              b_sqrt(&st, &d0);
              if (hoistedGlobal[17] > K + d0) {
                guard8 = true;
              } else {
                guard1 = true;
              }
            }
          }
        }
      }
    }
  }

  if (guard8) {
    memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
    st.site = &o_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &db_emlrtRSI;
    i0 = rs->size[0];
    guard45 = false;
    if (i0 == 1) {
      guard45 = true;
    } else {
      i0 = rs->size[0];
      if (i0 != 1) {
        guard45 = true;
      } else {
        b0 = false;
      }
    }

    if (guard45) {
      b0 = true;
    }

    if (!b0) {
      emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    i0 = rs->size[0];
    if (!(i0 > 0)) {
      emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    d_st.site = &eb_emlrtRSI;
    n = rs->size[0];
    K = rs->data[0];
    i0 = rs->size[0];
    if (i0 > 1) {
      i0 = rs->size[0];
      if (1 < i0) {
        e_st.site = &fb_emlrtRSI;
        if (n > 2147483646) {
          f_st.site = &gb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
          if (rs->data[loop_ub] < K) {
            K = rs->data[loop_ub];
          }
        }
      }
    }

    st.site = &o_emlrtRSI;
    d0 = b_mpower(R_sende) + b_mpower(0.015);
    st.site = &o_emlrtRSI;
    b_sqrt(&st, &d0);
    if (hoistedGlobal[2] < K - d0) {
      guard7 = true;
    } else {
      memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
      st.site = &o_emlrtRSI;
      b_st.site = &hb_emlrtRSI;
      c_st.site = &db_emlrtRSI;
      i0 = rs->size[0];
      guard44 = false;
      if (i0 == 1) {
        guard44 = true;
      } else {
        i0 = rs->size[0];
        if (i0 != 1) {
          guard44 = true;
        } else {
          b0 = false;
        }
      }

      if (guard44) {
        b0 = true;
      }

      if (!b0) {
        emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      i0 = rs->size[0];
      if (!(i0 > 0)) {
        emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      d_st.site = &eb_emlrtRSI;
      n = rs->size[0];
      K = rs->data[0];
      i0 = rs->size[0];
      if (i0 > 1) {
        i0 = rs->size[0];
        if (1 < i0) {
          e_st.site = &fb_emlrtRSI;
          if (n > 2147483646) {
            f_st.site = &gb_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
            if (rs->data[loop_ub] > K) {
              K = rs->data[loop_ub];
            }
          }
        }
      }

      st.site = &o_emlrtRSI;
      d0 = b_mpower(R_sende) + b_mpower(0.015);
      st.site = &o_emlrtRSI;
      b_sqrt(&st, &d0);
      if (hoistedGlobal[2] > K + d0) {
        guard7 = true;
      } else {
        memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
        st.site = &o_emlrtRSI;
        b_st.site = &cb_emlrtRSI;
        c_st.site = &db_emlrtRSI;
        i0 = rs->size[0];
        guard43 = false;
        if (i0 == 1) {
          guard43 = true;
        } else {
          i0 = rs->size[0];
          if (i0 != 1) {
            guard43 = true;
          } else {
            b0 = false;
          }
        }

        if (guard43) {
          b0 = true;
        }

        if (!b0) {
          emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
            "Coder:toolbox:autoDimIncompatibility", 0);
        }

        i0 = rs->size[0];
        if (!(i0 > 0)) {
          emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }

        d_st.site = &eb_emlrtRSI;
        n = rs->size[0];
        K = rs->data[rs->size[0]];
        i0 = rs->size[0];
        if (i0 > 1) {
          i0 = rs->size[0];
          if (1 < i0) {
            e_st.site = &fb_emlrtRSI;
            if (n > 2147483646) {
              f_st.site = &gb_emlrtRSI;
              check_forloop_overflow_error(&f_st);
            }

            for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
              if (rs->data[loop_ub + rs->size[0]] < K) {
                K = rs->data[loop_ub + rs->size[0]];
              }
            }
          }
        }

        st.site = &o_emlrtRSI;
        d0 = b_mpower(R_sende) + b_mpower(0.015);
        st.site = &o_emlrtRSI;
        b_sqrt(&st, &d0);
        if (hoistedGlobal[10] < K - d0) {
          guard7 = true;
        } else {
          memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
          st.site = &o_emlrtRSI;
          b_st.site = &hb_emlrtRSI;
          c_st.site = &db_emlrtRSI;
          i0 = rs->size[0];
          guard42 = false;
          if (i0 == 1) {
            guard42 = true;
          } else {
            i0 = rs->size[0];
            if (i0 != 1) {
              guard42 = true;
            } else {
              b0 = false;
            }
          }

          if (guard42) {
            b0 = true;
          }

          if (!b0) {
            emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          i0 = rs->size[0];
          if (!(i0 > 0)) {
            emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          d_st.site = &eb_emlrtRSI;
          n = rs->size[0];
          K = rs->data[rs->size[0]];
          i0 = rs->size[0];
          if (i0 > 1) {
            i0 = rs->size[0];
            if (1 < i0) {
              e_st.site = &fb_emlrtRSI;
              if (n > 2147483646) {
                f_st.site = &gb_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                if (rs->data[loop_ub + rs->size[0]] > K) {
                  K = rs->data[loop_ub + rs->size[0]];
                }
              }
            }
          }

          st.site = &o_emlrtRSI;
          d0 = b_mpower(R_sende) + b_mpower(0.015);
          st.site = &o_emlrtRSI;
          b_sqrt(&st, &d0);
          if (hoistedGlobal[10] > K + d0) {
            guard7 = true;
          } else {
            memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
            st.site = &o_emlrtRSI;
            b_st.site = &cb_emlrtRSI;
            c_st.site = &db_emlrtRSI;
            i0 = rs->size[0];
            guard41 = false;
            if (i0 == 1) {
              guard41 = true;
            } else {
              i0 = rs->size[0];
              if (i0 != 1) {
                guard41 = true;
              } else {
                b0 = false;
              }
            }

            if (guard41) {
              b0 = true;
            }

            if (!b0) {
              emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
                "Coder:toolbox:autoDimIncompatibility", 0);
            }

            i0 = rs->size[0];
            if (!(i0 > 0)) {
              emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
                "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }

            d_st.site = &eb_emlrtRSI;
            n = rs->size[0];
            K = rs->data[rs->size[0] << 1];
            i0 = rs->size[0];
            if (i0 > 1) {
              i0 = rs->size[0];
              if (1 < i0) {
                e_st.site = &fb_emlrtRSI;
                if (n > 2147483646) {
                  f_st.site = &gb_emlrtRSI;
                  check_forloop_overflow_error(&f_st);
                }

                for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                  if (rs->data[loop_ub + (rs->size[0] << 1)] < K) {
                    K = rs->data[loop_ub + (rs->size[0] << 1)];
                  }
                }
              }
            }

            st.site = &o_emlrtRSI;
            d0 = b_mpower(R_sende) + b_mpower(0.015);
            st.site = &o_emlrtRSI;
            b_sqrt(&st, &d0);
            if (hoistedGlobal[18] < K - d0) {
              guard7 = true;
            } else {
              memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
              st.site = &o_emlrtRSI;
              b_st.site = &hb_emlrtRSI;
              c_st.site = &db_emlrtRSI;
              i0 = rs->size[0];
              guard40 = false;
              if (i0 == 1) {
                guard40 = true;
              } else {
                i0 = rs->size[0];
                if (i0 != 1) {
                  guard40 = true;
                } else {
                  b0 = false;
                }
              }

              if (guard40) {
                b0 = true;
              }

              if (!b0) {
                emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
                  "Coder:toolbox:autoDimIncompatibility", 0);
              }

              i0 = rs->size[0];
              if (!(i0 > 0)) {
                emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
              }

              d_st.site = &eb_emlrtRSI;
              n = rs->size[0];
              K = rs->data[rs->size[0] << 1];
              i0 = rs->size[0];
              if (i0 > 1) {
                i0 = rs->size[0];
                if (1 < i0) {
                  e_st.site = &fb_emlrtRSI;
                  if (n > 2147483646) {
                    f_st.site = &gb_emlrtRSI;
                    check_forloop_overflow_error(&f_st);
                  }

                  for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                    if (rs->data[loop_ub + (rs->size[0] << 1)] > K) {
                      K = rs->data[loop_ub + (rs->size[0] << 1)];
                    }
                  }
                }
              }

              st.site = &o_emlrtRSI;
              d0 = b_mpower(R_sende) + b_mpower(0.015);
              st.site = &o_emlrtRSI;
              b_sqrt(&st, &d0);
              if (hoistedGlobal[18] > K + d0) {
                guard7 = true;
              } else {
                guard1 = true;
              }
            }
          }
        }
      }
    }
  }

  if (guard7) {
    memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
    st.site = &p_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &db_emlrtRSI;
    i0 = rs->size[0];
    guard39 = false;
    if (i0 == 1) {
      guard39 = true;
    } else {
      i0 = rs->size[0];
      if (i0 != 1) {
        guard39 = true;
      } else {
        b0 = false;
      }
    }

    if (guard39) {
      b0 = true;
    }

    if (!b0) {
      emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    i0 = rs->size[0];
    if (!(i0 > 0)) {
      emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    d_st.site = &eb_emlrtRSI;
    n = rs->size[0];
    K = rs->data[0];
    i0 = rs->size[0];
    if (i0 > 1) {
      i0 = rs->size[0];
      if (1 < i0) {
        e_st.site = &fb_emlrtRSI;
        if (n > 2147483646) {
          f_st.site = &gb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
          if (rs->data[loop_ub] < K) {
            K = rs->data[loop_ub];
          }
        }
      }
    }

    st.site = &p_emlrtRSI;
    d0 = b_mpower(R_sende) + b_mpower(0.015);
    st.site = &p_emlrtRSI;
    b_sqrt(&st, &d0);
    if (hoistedGlobal[3] < K - d0) {
      guard6 = true;
    } else {
      memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
      st.site = &p_emlrtRSI;
      b_st.site = &hb_emlrtRSI;
      c_st.site = &db_emlrtRSI;
      i0 = rs->size[0];
      guard38 = false;
      if (i0 == 1) {
        guard38 = true;
      } else {
        i0 = rs->size[0];
        if (i0 != 1) {
          guard38 = true;
        } else {
          b0 = false;
        }
      }

      if (guard38) {
        b0 = true;
      }

      if (!b0) {
        emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      i0 = rs->size[0];
      if (!(i0 > 0)) {
        emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      d_st.site = &eb_emlrtRSI;
      n = rs->size[0];
      K = rs->data[0];
      i0 = rs->size[0];
      if (i0 > 1) {
        i0 = rs->size[0];
        if (1 < i0) {
          e_st.site = &fb_emlrtRSI;
          if (n > 2147483646) {
            f_st.site = &gb_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
            if (rs->data[loop_ub] > K) {
              K = rs->data[loop_ub];
            }
          }
        }
      }

      st.site = &p_emlrtRSI;
      d0 = b_mpower(R_sende) + b_mpower(0.015);
      st.site = &p_emlrtRSI;
      b_sqrt(&st, &d0);
      if (hoistedGlobal[3] > K + d0) {
        guard6 = true;
      } else {
        memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
        st.site = &p_emlrtRSI;
        b_st.site = &cb_emlrtRSI;
        c_st.site = &db_emlrtRSI;
        i0 = rs->size[0];
        guard37 = false;
        if (i0 == 1) {
          guard37 = true;
        } else {
          i0 = rs->size[0];
          if (i0 != 1) {
            guard37 = true;
          } else {
            b0 = false;
          }
        }

        if (guard37) {
          b0 = true;
        }

        if (!b0) {
          emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
            "Coder:toolbox:autoDimIncompatibility", 0);
        }

        i0 = rs->size[0];
        if (!(i0 > 0)) {
          emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }

        d_st.site = &eb_emlrtRSI;
        n = rs->size[0];
        K = rs->data[rs->size[0]];
        i0 = rs->size[0];
        if (i0 > 1) {
          i0 = rs->size[0];
          if (1 < i0) {
            e_st.site = &fb_emlrtRSI;
            if (n > 2147483646) {
              f_st.site = &gb_emlrtRSI;
              check_forloop_overflow_error(&f_st);
            }

            for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
              if (rs->data[loop_ub + rs->size[0]] < K) {
                K = rs->data[loop_ub + rs->size[0]];
              }
            }
          }
        }

        st.site = &p_emlrtRSI;
        d0 = b_mpower(R_sende) + b_mpower(0.015);
        st.site = &p_emlrtRSI;
        b_sqrt(&st, &d0);
        if (hoistedGlobal[11] < K - d0) {
          guard6 = true;
        } else {
          memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
          st.site = &p_emlrtRSI;
          b_st.site = &hb_emlrtRSI;
          c_st.site = &db_emlrtRSI;
          i0 = rs->size[0];
          guard36 = false;
          if (i0 == 1) {
            guard36 = true;
          } else {
            i0 = rs->size[0];
            if (i0 != 1) {
              guard36 = true;
            } else {
              b0 = false;
            }
          }

          if (guard36) {
            b0 = true;
          }

          if (!b0) {
            emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          i0 = rs->size[0];
          if (!(i0 > 0)) {
            emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          d_st.site = &eb_emlrtRSI;
          n = rs->size[0];
          K = rs->data[rs->size[0]];
          i0 = rs->size[0];
          if (i0 > 1) {
            i0 = rs->size[0];
            if (1 < i0) {
              e_st.site = &fb_emlrtRSI;
              if (n > 2147483646) {
                f_st.site = &gb_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                if (rs->data[loop_ub + rs->size[0]] > K) {
                  K = rs->data[loop_ub + rs->size[0]];
                }
              }
            }
          }

          st.site = &p_emlrtRSI;
          d0 = b_mpower(R_sende) + b_mpower(0.015);
          st.site = &p_emlrtRSI;
          b_sqrt(&st, &d0);
          if (hoistedGlobal[11] > K + d0) {
            guard6 = true;
          } else {
            memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
            st.site = &p_emlrtRSI;
            b_st.site = &cb_emlrtRSI;
            c_st.site = &db_emlrtRSI;
            i0 = rs->size[0];
            guard35 = false;
            if (i0 == 1) {
              guard35 = true;
            } else {
              i0 = rs->size[0];
              if (i0 != 1) {
                guard35 = true;
              } else {
                b0 = false;
              }
            }

            if (guard35) {
              b0 = true;
            }

            if (!b0) {
              emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
                "Coder:toolbox:autoDimIncompatibility", 0);
            }

            i0 = rs->size[0];
            if (!(i0 > 0)) {
              emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
                "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }

            d_st.site = &eb_emlrtRSI;
            n = rs->size[0];
            K = rs->data[rs->size[0] << 1];
            i0 = rs->size[0];
            if (i0 > 1) {
              i0 = rs->size[0];
              if (1 < i0) {
                e_st.site = &fb_emlrtRSI;
                if (n > 2147483646) {
                  f_st.site = &gb_emlrtRSI;
                  check_forloop_overflow_error(&f_st);
                }

                for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                  if (rs->data[loop_ub + (rs->size[0] << 1)] < K) {
                    K = rs->data[loop_ub + (rs->size[0] << 1)];
                  }
                }
              }
            }

            st.site = &p_emlrtRSI;
            d0 = b_mpower(R_sende) + b_mpower(0.015);
            st.site = &p_emlrtRSI;
            b_sqrt(&st, &d0);
            if (hoistedGlobal[19] < K - d0) {
              guard6 = true;
            } else {
              memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
              st.site = &p_emlrtRSI;
              b_st.site = &hb_emlrtRSI;
              c_st.site = &db_emlrtRSI;
              i0 = rs->size[0];
              guard34 = false;
              if (i0 == 1) {
                guard34 = true;
              } else {
                i0 = rs->size[0];
                if (i0 != 1) {
                  guard34 = true;
                } else {
                  b0 = false;
                }
              }

              if (guard34) {
                b0 = true;
              }

              if (!b0) {
                emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
                  "Coder:toolbox:autoDimIncompatibility", 0);
              }

              i0 = rs->size[0];
              if (!(i0 > 0)) {
                emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
              }

              d_st.site = &eb_emlrtRSI;
              n = rs->size[0];
              K = rs->data[rs->size[0] << 1];
              i0 = rs->size[0];
              if (i0 > 1) {
                i0 = rs->size[0];
                if (1 < i0) {
                  e_st.site = &fb_emlrtRSI;
                  if (n > 2147483646) {
                    f_st.site = &gb_emlrtRSI;
                    check_forloop_overflow_error(&f_st);
                  }

                  for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                    if (rs->data[loop_ub + (rs->size[0] << 1)] > K) {
                      K = rs->data[loop_ub + (rs->size[0] << 1)];
                    }
                  }
                }
              }

              st.site = &p_emlrtRSI;
              d0 = b_mpower(R_sende) + b_mpower(0.015);
              st.site = &p_emlrtRSI;
              b_sqrt(&st, &d0);
              if (hoistedGlobal[19] > K + d0) {
                guard6 = true;
              } else {
                guard1 = true;
              }
            }
          }
        }
      }
    }
  }

  if (guard6) {
    memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
    st.site = &q_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &db_emlrtRSI;
    i0 = rs->size[0];
    guard33 = false;
    if (i0 == 1) {
      guard33 = true;
    } else {
      i0 = rs->size[0];
      if (i0 != 1) {
        guard33 = true;
      } else {
        b0 = false;
      }
    }

    if (guard33) {
      b0 = true;
    }

    if (!b0) {
      emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    i0 = rs->size[0];
    if (!(i0 > 0)) {
      emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    d_st.site = &eb_emlrtRSI;
    n = rs->size[0];
    K = rs->data[0];
    i0 = rs->size[0];
    if (i0 > 1) {
      i0 = rs->size[0];
      if (1 < i0) {
        e_st.site = &fb_emlrtRSI;
        if (n > 2147483646) {
          f_st.site = &gb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
          if (rs->data[loop_ub] < K) {
            K = rs->data[loop_ub];
          }
        }
      }
    }

    st.site = &q_emlrtRSI;
    d0 = b_mpower(R_sende) + b_mpower(0.015);
    st.site = &q_emlrtRSI;
    b_sqrt(&st, &d0);
    if (hoistedGlobal[4] < K - d0) {
      guard5 = true;
    } else {
      memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
      st.site = &q_emlrtRSI;
      b_st.site = &hb_emlrtRSI;
      c_st.site = &db_emlrtRSI;
      i0 = rs->size[0];
      guard32 = false;
      if (i0 == 1) {
        guard32 = true;
      } else {
        i0 = rs->size[0];
        if (i0 != 1) {
          guard32 = true;
        } else {
          b0 = false;
        }
      }

      if (guard32) {
        b0 = true;
      }

      if (!b0) {
        emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      i0 = rs->size[0];
      if (!(i0 > 0)) {
        emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      d_st.site = &eb_emlrtRSI;
      n = rs->size[0];
      K = rs->data[0];
      i0 = rs->size[0];
      if (i0 > 1) {
        i0 = rs->size[0];
        if (1 < i0) {
          e_st.site = &fb_emlrtRSI;
          if (n > 2147483646) {
            f_st.site = &gb_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
            if (rs->data[loop_ub] > K) {
              K = rs->data[loop_ub];
            }
          }
        }
      }

      st.site = &q_emlrtRSI;
      d0 = b_mpower(R_sende) + b_mpower(0.015);
      st.site = &q_emlrtRSI;
      b_sqrt(&st, &d0);
      if (hoistedGlobal[4] > K + d0) {
        guard5 = true;
      } else {
        memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
        st.site = &q_emlrtRSI;
        b_st.site = &cb_emlrtRSI;
        c_st.site = &db_emlrtRSI;
        i0 = rs->size[0];
        guard31 = false;
        if (i0 == 1) {
          guard31 = true;
        } else {
          i0 = rs->size[0];
          if (i0 != 1) {
            guard31 = true;
          } else {
            b0 = false;
          }
        }

        if (guard31) {
          b0 = true;
        }

        if (!b0) {
          emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
            "Coder:toolbox:autoDimIncompatibility", 0);
        }

        i0 = rs->size[0];
        if (!(i0 > 0)) {
          emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }

        d_st.site = &eb_emlrtRSI;
        n = rs->size[0];
        K = rs->data[rs->size[0]];
        i0 = rs->size[0];
        if (i0 > 1) {
          i0 = rs->size[0];
          if (1 < i0) {
            e_st.site = &fb_emlrtRSI;
            if (n > 2147483646) {
              f_st.site = &gb_emlrtRSI;
              check_forloop_overflow_error(&f_st);
            }

            for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
              if (rs->data[loop_ub + rs->size[0]] < K) {
                K = rs->data[loop_ub + rs->size[0]];
              }
            }
          }
        }

        st.site = &q_emlrtRSI;
        d0 = b_mpower(R_sende) + b_mpower(0.015);
        st.site = &q_emlrtRSI;
        b_sqrt(&st, &d0);
        if (hoistedGlobal[12] < K - d0) {
          guard5 = true;
        } else {
          memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
          st.site = &q_emlrtRSI;
          b_st.site = &hb_emlrtRSI;
          c_st.site = &db_emlrtRSI;
          i0 = rs->size[0];
          guard30 = false;
          if (i0 == 1) {
            guard30 = true;
          } else {
            i0 = rs->size[0];
            if (i0 != 1) {
              guard30 = true;
            } else {
              b0 = false;
            }
          }

          if (guard30) {
            b0 = true;
          }

          if (!b0) {
            emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          i0 = rs->size[0];
          if (!(i0 > 0)) {
            emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          d_st.site = &eb_emlrtRSI;
          n = rs->size[0];
          K = rs->data[rs->size[0]];
          i0 = rs->size[0];
          if (i0 > 1) {
            i0 = rs->size[0];
            if (1 < i0) {
              e_st.site = &fb_emlrtRSI;
              if (n > 2147483646) {
                f_st.site = &gb_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                if (rs->data[loop_ub + rs->size[0]] > K) {
                  K = rs->data[loop_ub + rs->size[0]];
                }
              }
            }
          }

          st.site = &q_emlrtRSI;
          d0 = b_mpower(R_sende) + b_mpower(0.015);
          st.site = &q_emlrtRSI;
          b_sqrt(&st, &d0);
          if (hoistedGlobal[12] > K + d0) {
            guard5 = true;
          } else {
            memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
            st.site = &q_emlrtRSI;
            b_st.site = &cb_emlrtRSI;
            c_st.site = &db_emlrtRSI;
            i0 = rs->size[0];
            guard29 = false;
            if (i0 == 1) {
              guard29 = true;
            } else {
              i0 = rs->size[0];
              if (i0 != 1) {
                guard29 = true;
              } else {
                b0 = false;
              }
            }

            if (guard29) {
              b0 = true;
            }

            if (!b0) {
              emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
                "Coder:toolbox:autoDimIncompatibility", 0);
            }

            i0 = rs->size[0];
            if (!(i0 > 0)) {
              emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
                "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }

            d_st.site = &eb_emlrtRSI;
            n = rs->size[0];
            K = rs->data[rs->size[0] << 1];
            i0 = rs->size[0];
            if (i0 > 1) {
              i0 = rs->size[0];
              if (1 < i0) {
                e_st.site = &fb_emlrtRSI;
                if (n > 2147483646) {
                  f_st.site = &gb_emlrtRSI;
                  check_forloop_overflow_error(&f_st);
                }

                for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                  if (rs->data[loop_ub + (rs->size[0] << 1)] < K) {
                    K = rs->data[loop_ub + (rs->size[0] << 1)];
                  }
                }
              }
            }

            st.site = &q_emlrtRSI;
            d0 = b_mpower(R_sende) + b_mpower(0.015);
            st.site = &q_emlrtRSI;
            b_sqrt(&st, &d0);
            if (hoistedGlobal[20] < K - d0) {
              guard5 = true;
            } else {
              memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
              st.site = &q_emlrtRSI;
              b_st.site = &hb_emlrtRSI;
              c_st.site = &db_emlrtRSI;
              i0 = rs->size[0];
              guard28 = false;
              if (i0 == 1) {
                guard28 = true;
              } else {
                i0 = rs->size[0];
                if (i0 != 1) {
                  guard28 = true;
                } else {
                  b0 = false;
                }
              }

              if (guard28) {
                b0 = true;
              }

              if (!b0) {
                emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
                  "Coder:toolbox:autoDimIncompatibility", 0);
              }

              i0 = rs->size[0];
              if (!(i0 > 0)) {
                emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
              }

              d_st.site = &eb_emlrtRSI;
              n = rs->size[0];
              K = rs->data[rs->size[0] << 1];
              i0 = rs->size[0];
              if (i0 > 1) {
                i0 = rs->size[0];
                if (1 < i0) {
                  e_st.site = &fb_emlrtRSI;
                  if (n > 2147483646) {
                    f_st.site = &gb_emlrtRSI;
                    check_forloop_overflow_error(&f_st);
                  }

                  for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                    if (rs->data[loop_ub + (rs->size[0] << 1)] > K) {
                      K = rs->data[loop_ub + (rs->size[0] << 1)];
                    }
                  }
                }
              }

              st.site = &q_emlrtRSI;
              d0 = b_mpower(R_sende) + b_mpower(0.015);
              st.site = &q_emlrtRSI;
              b_sqrt(&st, &d0);
              if (hoistedGlobal[20] > K + d0) {
                guard5 = true;
              } else {
                guard1 = true;
              }
            }
          }
        }
      }
    }
  }

  if (guard5) {
    memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
    st.site = &r_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &db_emlrtRSI;
    i0 = rs->size[0];
    guard27 = false;
    if (i0 == 1) {
      guard27 = true;
    } else {
      i0 = rs->size[0];
      if (i0 != 1) {
        guard27 = true;
      } else {
        b0 = false;
      }
    }

    if (guard27) {
      b0 = true;
    }

    if (!b0) {
      emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    i0 = rs->size[0];
    if (!(i0 > 0)) {
      emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    d_st.site = &eb_emlrtRSI;
    n = rs->size[0];
    K = rs->data[0];
    i0 = rs->size[0];
    if (i0 > 1) {
      i0 = rs->size[0];
      if (1 < i0) {
        e_st.site = &fb_emlrtRSI;
        if (n > 2147483646) {
          f_st.site = &gb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
          if (rs->data[loop_ub] < K) {
            K = rs->data[loop_ub];
          }
        }
      }
    }

    st.site = &r_emlrtRSI;
    d0 = b_mpower(R_sende) + b_mpower(0.015);
    st.site = &r_emlrtRSI;
    b_sqrt(&st, &d0);
    if (hoistedGlobal[5] < K - d0) {
      guard4 = true;
    } else {
      memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
      st.site = &r_emlrtRSI;
      b_st.site = &hb_emlrtRSI;
      c_st.site = &db_emlrtRSI;
      i0 = rs->size[0];
      guard26 = false;
      if (i0 == 1) {
        guard26 = true;
      } else {
        i0 = rs->size[0];
        if (i0 != 1) {
          guard26 = true;
        } else {
          b0 = false;
        }
      }

      if (guard26) {
        b0 = true;
      }

      if (!b0) {
        emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      i0 = rs->size[0];
      if (!(i0 > 0)) {
        emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      d_st.site = &eb_emlrtRSI;
      n = rs->size[0];
      K = rs->data[0];
      i0 = rs->size[0];
      if (i0 > 1) {
        i0 = rs->size[0];
        if (1 < i0) {
          e_st.site = &fb_emlrtRSI;
          if (n > 2147483646) {
            f_st.site = &gb_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
            if (rs->data[loop_ub] > K) {
              K = rs->data[loop_ub];
            }
          }
        }
      }

      st.site = &r_emlrtRSI;
      d0 = b_mpower(R_sende) + b_mpower(0.015);
      st.site = &r_emlrtRSI;
      b_sqrt(&st, &d0);
      if (hoistedGlobal[5] > K + d0) {
        guard4 = true;
      } else {
        memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
        st.site = &r_emlrtRSI;
        b_st.site = &cb_emlrtRSI;
        c_st.site = &db_emlrtRSI;
        i0 = rs->size[0];
        guard25 = false;
        if (i0 == 1) {
          guard25 = true;
        } else {
          i0 = rs->size[0];
          if (i0 != 1) {
            guard25 = true;
          } else {
            b0 = false;
          }
        }

        if (guard25) {
          b0 = true;
        }

        if (!b0) {
          emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
            "Coder:toolbox:autoDimIncompatibility", 0);
        }

        i0 = rs->size[0];
        if (!(i0 > 0)) {
          emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }

        d_st.site = &eb_emlrtRSI;
        n = rs->size[0];
        K = rs->data[rs->size[0]];
        i0 = rs->size[0];
        if (i0 > 1) {
          i0 = rs->size[0];
          if (1 < i0) {
            e_st.site = &fb_emlrtRSI;
            if (n > 2147483646) {
              f_st.site = &gb_emlrtRSI;
              check_forloop_overflow_error(&f_st);
            }

            for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
              if (rs->data[loop_ub + rs->size[0]] < K) {
                K = rs->data[loop_ub + rs->size[0]];
              }
            }
          }
        }

        st.site = &r_emlrtRSI;
        d0 = b_mpower(R_sende) + b_mpower(0.015);
        st.site = &r_emlrtRSI;
        b_sqrt(&st, &d0);
        if (hoistedGlobal[13] < K - d0) {
          guard4 = true;
        } else {
          memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
          st.site = &r_emlrtRSI;
          b_st.site = &hb_emlrtRSI;
          c_st.site = &db_emlrtRSI;
          i0 = rs->size[0];
          guard24 = false;
          if (i0 == 1) {
            guard24 = true;
          } else {
            i0 = rs->size[0];
            if (i0 != 1) {
              guard24 = true;
            } else {
              b0 = false;
            }
          }

          if (guard24) {
            b0 = true;
          }

          if (!b0) {
            emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          i0 = rs->size[0];
          if (!(i0 > 0)) {
            emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          d_st.site = &eb_emlrtRSI;
          n = rs->size[0];
          K = rs->data[rs->size[0]];
          i0 = rs->size[0];
          if (i0 > 1) {
            i0 = rs->size[0];
            if (1 < i0) {
              e_st.site = &fb_emlrtRSI;
              if (n > 2147483646) {
                f_st.site = &gb_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                if (rs->data[loop_ub + rs->size[0]] > K) {
                  K = rs->data[loop_ub + rs->size[0]];
                }
              }
            }
          }

          st.site = &r_emlrtRSI;
          d0 = b_mpower(R_sende) + b_mpower(0.015);
          st.site = &r_emlrtRSI;
          b_sqrt(&st, &d0);
          if (hoistedGlobal[13] > K + d0) {
            guard4 = true;
          } else {
            memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
            st.site = &r_emlrtRSI;
            b_st.site = &cb_emlrtRSI;
            c_st.site = &db_emlrtRSI;
            i0 = rs->size[0];
            guard23 = false;
            if (i0 == 1) {
              guard23 = true;
            } else {
              i0 = rs->size[0];
              if (i0 != 1) {
                guard23 = true;
              } else {
                b0 = false;
              }
            }

            if (guard23) {
              b0 = true;
            }

            if (!b0) {
              emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
                "Coder:toolbox:autoDimIncompatibility", 0);
            }

            i0 = rs->size[0];
            if (!(i0 > 0)) {
              emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
                "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }

            d_st.site = &eb_emlrtRSI;
            n = rs->size[0];
            K = rs->data[rs->size[0] << 1];
            i0 = rs->size[0];
            if (i0 > 1) {
              i0 = rs->size[0];
              if (1 < i0) {
                e_st.site = &fb_emlrtRSI;
                if (n > 2147483646) {
                  f_st.site = &gb_emlrtRSI;
                  check_forloop_overflow_error(&f_st);
                }

                for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                  if (rs->data[loop_ub + (rs->size[0] << 1)] < K) {
                    K = rs->data[loop_ub + (rs->size[0] << 1)];
                  }
                }
              }
            }

            st.site = &r_emlrtRSI;
            d0 = b_mpower(R_sende) + b_mpower(0.015);
            st.site = &r_emlrtRSI;
            b_sqrt(&st, &d0);
            if (hoistedGlobal[21] < K - d0) {
              guard4 = true;
            } else {
              memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
              st.site = &r_emlrtRSI;
              b_st.site = &hb_emlrtRSI;
              c_st.site = &db_emlrtRSI;
              i0 = rs->size[0];
              guard22 = false;
              if (i0 == 1) {
                guard22 = true;
              } else {
                i0 = rs->size[0];
                if (i0 != 1) {
                  guard22 = true;
                } else {
                  b0 = false;
                }
              }

              if (guard22) {
                b0 = true;
              }

              if (!b0) {
                emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
                  "Coder:toolbox:autoDimIncompatibility", 0);
              }

              i0 = rs->size[0];
              if (!(i0 > 0)) {
                emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
              }

              d_st.site = &eb_emlrtRSI;
              n = rs->size[0];
              K = rs->data[rs->size[0] << 1];
              i0 = rs->size[0];
              if (i0 > 1) {
                i0 = rs->size[0];
                if (1 < i0) {
                  e_st.site = &fb_emlrtRSI;
                  if (n > 2147483646) {
                    f_st.site = &gb_emlrtRSI;
                    check_forloop_overflow_error(&f_st);
                  }

                  for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                    if (rs->data[loop_ub + (rs->size[0] << 1)] > K) {
                      K = rs->data[loop_ub + (rs->size[0] << 1)];
                    }
                  }
                }
              }

              st.site = &r_emlrtRSI;
              d0 = b_mpower(R_sende) + b_mpower(0.015);
              st.site = &r_emlrtRSI;
              b_sqrt(&st, &d0);
              if (hoistedGlobal[21] > K + d0) {
                guard4 = true;
              } else {
                guard1 = true;
              }
            }
          }
        }
      }
    }
  }

  if (guard4) {
    memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
    st.site = &s_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &db_emlrtRSI;
    i0 = rs->size[0];
    guard21 = false;
    if (i0 == 1) {
      guard21 = true;
    } else {
      i0 = rs->size[0];
      if (i0 != 1) {
        guard21 = true;
      } else {
        b0 = false;
      }
    }

    if (guard21) {
      b0 = true;
    }

    if (!b0) {
      emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    i0 = rs->size[0];
    if (!(i0 > 0)) {
      emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    d_st.site = &eb_emlrtRSI;
    n = rs->size[0];
    K = rs->data[0];
    i0 = rs->size[0];
    if (i0 > 1) {
      i0 = rs->size[0];
      if (1 < i0) {
        e_st.site = &fb_emlrtRSI;
        if (n > 2147483646) {
          f_st.site = &gb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
          if (rs->data[loop_ub] < K) {
            K = rs->data[loop_ub];
          }
        }
      }
    }

    st.site = &s_emlrtRSI;
    d0 = b_mpower(R_sende) + b_mpower(0.015);
    st.site = &s_emlrtRSI;
    b_sqrt(&st, &d0);
    if (hoistedGlobal[6] < K - d0) {
      guard3 = true;
    } else {
      memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
      st.site = &s_emlrtRSI;
      b_st.site = &hb_emlrtRSI;
      c_st.site = &db_emlrtRSI;
      i0 = rs->size[0];
      guard20 = false;
      if (i0 == 1) {
        guard20 = true;
      } else {
        i0 = rs->size[0];
        if (i0 != 1) {
          guard20 = true;
        } else {
          b0 = false;
        }
      }

      if (guard20) {
        b0 = true;
      }

      if (!b0) {
        emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      i0 = rs->size[0];
      if (!(i0 > 0)) {
        emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      d_st.site = &eb_emlrtRSI;
      n = rs->size[0];
      K = rs->data[0];
      i0 = rs->size[0];
      if (i0 > 1) {
        i0 = rs->size[0];
        if (1 < i0) {
          e_st.site = &fb_emlrtRSI;
          if (n > 2147483646) {
            f_st.site = &gb_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
            if (rs->data[loop_ub] > K) {
              K = rs->data[loop_ub];
            }
          }
        }
      }

      st.site = &s_emlrtRSI;
      d0 = b_mpower(R_sende) + b_mpower(0.015);
      st.site = &s_emlrtRSI;
      b_sqrt(&st, &d0);
      if (hoistedGlobal[6] > K + d0) {
        guard3 = true;
      } else {
        memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
        st.site = &s_emlrtRSI;
        b_st.site = &cb_emlrtRSI;
        c_st.site = &db_emlrtRSI;
        i0 = rs->size[0];
        guard19 = false;
        if (i0 == 1) {
          guard19 = true;
        } else {
          i0 = rs->size[0];
          if (i0 != 1) {
            guard19 = true;
          } else {
            b0 = false;
          }
        }

        if (guard19) {
          b0 = true;
        }

        if (!b0) {
          emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
            "Coder:toolbox:autoDimIncompatibility", 0);
        }

        i0 = rs->size[0];
        if (!(i0 > 0)) {
          emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }

        d_st.site = &eb_emlrtRSI;
        n = rs->size[0];
        K = rs->data[rs->size[0]];
        i0 = rs->size[0];
        if (i0 > 1) {
          i0 = rs->size[0];
          if (1 < i0) {
            e_st.site = &fb_emlrtRSI;
            if (n > 2147483646) {
              f_st.site = &gb_emlrtRSI;
              check_forloop_overflow_error(&f_st);
            }

            for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
              if (rs->data[loop_ub + rs->size[0]] < K) {
                K = rs->data[loop_ub + rs->size[0]];
              }
            }
          }
        }

        st.site = &s_emlrtRSI;
        d0 = b_mpower(R_sende) + b_mpower(0.015);
        st.site = &s_emlrtRSI;
        b_sqrt(&st, &d0);
        if (hoistedGlobal[14] < K - d0) {
          guard3 = true;
        } else {
          memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
          st.site = &s_emlrtRSI;
          b_st.site = &hb_emlrtRSI;
          c_st.site = &db_emlrtRSI;
          i0 = rs->size[0];
          guard18 = false;
          if (i0 == 1) {
            guard18 = true;
          } else {
            i0 = rs->size[0];
            if (i0 != 1) {
              guard18 = true;
            } else {
              b0 = false;
            }
          }

          if (guard18) {
            b0 = true;
          }

          if (!b0) {
            emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          i0 = rs->size[0];
          if (!(i0 > 0)) {
            emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          d_st.site = &eb_emlrtRSI;
          n = rs->size[0];
          K = rs->data[rs->size[0]];
          i0 = rs->size[0];
          if (i0 > 1) {
            i0 = rs->size[0];
            if (1 < i0) {
              e_st.site = &fb_emlrtRSI;
              if (n > 2147483646) {
                f_st.site = &gb_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                if (rs->data[loop_ub + rs->size[0]] > K) {
                  K = rs->data[loop_ub + rs->size[0]];
                }
              }
            }
          }

          st.site = &s_emlrtRSI;
          d0 = b_mpower(R_sende) + b_mpower(0.015);
          st.site = &s_emlrtRSI;
          b_sqrt(&st, &d0);
          if (hoistedGlobal[14] > K + d0) {
            guard3 = true;
          } else {
            memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
            st.site = &s_emlrtRSI;
            b_st.site = &cb_emlrtRSI;
            c_st.site = &db_emlrtRSI;
            i0 = rs->size[0];
            guard17 = false;
            if (i0 == 1) {
              guard17 = true;
            } else {
              i0 = rs->size[0];
              if (i0 != 1) {
                guard17 = true;
              } else {
                b0 = false;
              }
            }

            if (guard17) {
              b0 = true;
            }

            if (!b0) {
              emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
                "Coder:toolbox:autoDimIncompatibility", 0);
            }

            i0 = rs->size[0];
            if (!(i0 > 0)) {
              emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
                "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }

            d_st.site = &eb_emlrtRSI;
            n = rs->size[0];
            K = rs->data[rs->size[0] << 1];
            i0 = rs->size[0];
            if (i0 > 1) {
              i0 = rs->size[0];
              if (1 < i0) {
                e_st.site = &fb_emlrtRSI;
                if (n > 2147483646) {
                  f_st.site = &gb_emlrtRSI;
                  check_forloop_overflow_error(&f_st);
                }

                for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                  if (rs->data[loop_ub + (rs->size[0] << 1)] < K) {
                    K = rs->data[loop_ub + (rs->size[0] << 1)];
                  }
                }
              }
            }

            st.site = &s_emlrtRSI;
            d0 = b_mpower(R_sende) + b_mpower(0.015);
            st.site = &s_emlrtRSI;
            b_sqrt(&st, &d0);
            if (hoistedGlobal[22] < K - d0) {
              guard3 = true;
            } else {
              memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
              st.site = &s_emlrtRSI;
              b_st.site = &hb_emlrtRSI;
              c_st.site = &db_emlrtRSI;
              i0 = rs->size[0];
              guard16 = false;
              if (i0 == 1) {
                guard16 = true;
              } else {
                i0 = rs->size[0];
                if (i0 != 1) {
                  guard16 = true;
                } else {
                  b0 = false;
                }
              }

              if (guard16) {
                b0 = true;
              }

              if (!b0) {
                emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
                  "Coder:toolbox:autoDimIncompatibility", 0);
              }

              i0 = rs->size[0];
              if (!(i0 > 0)) {
                emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
              }

              d_st.site = &eb_emlrtRSI;
              n = rs->size[0];
              K = rs->data[rs->size[0] << 1];
              i0 = rs->size[0];
              if (i0 > 1) {
                i0 = rs->size[0];
                if (1 < i0) {
                  e_st.site = &fb_emlrtRSI;
                  if (n > 2147483646) {
                    f_st.site = &gb_emlrtRSI;
                    check_forloop_overflow_error(&f_st);
                  }

                  for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                    if (rs->data[loop_ub + (rs->size[0] << 1)] > K) {
                      K = rs->data[loop_ub + (rs->size[0] << 1)];
                    }
                  }
                }
              }

              st.site = &s_emlrtRSI;
              d0 = b_mpower(R_sende) + b_mpower(0.015);
              st.site = &s_emlrtRSI;
              b_sqrt(&st, &d0);
              if (hoistedGlobal[22] > K + d0) {
                guard3 = true;
              } else {
                guard1 = true;
              }
            }
          }
        }
      }
    }
  }

  if (guard3) {
    memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
    st.site = &t_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &db_emlrtRSI;
    i0 = rs->size[0];
    guard15 = false;
    if (i0 == 1) {
      guard15 = true;
    } else {
      i0 = rs->size[0];
      if (i0 != 1) {
        guard15 = true;
      } else {
        b0 = false;
      }
    }

    if (guard15) {
      b0 = true;
    }

    if (!b0) {
      emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    i0 = rs->size[0];
    if (!(i0 > 0)) {
      emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    d_st.site = &eb_emlrtRSI;
    n = rs->size[0];
    K = rs->data[0];
    i0 = rs->size[0];
    if (i0 > 1) {
      i0 = rs->size[0];
      if (1 < i0) {
        e_st.site = &fb_emlrtRSI;
        if (n > 2147483646) {
          f_st.site = &gb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
          if (rs->data[loop_ub] < K) {
            K = rs->data[loop_ub];
          }
        }
      }
    }

    st.site = &t_emlrtRSI;
    d0 = b_mpower(R_sende) + b_mpower(0.015);
    st.site = &t_emlrtRSI;
    b_sqrt(&st, &d0);
    if (hoistedGlobal[7] < K - d0) {
      guard2 = true;
    } else {
      memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
      st.site = &t_emlrtRSI;
      b_st.site = &hb_emlrtRSI;
      c_st.site = &db_emlrtRSI;
      i0 = rs->size[0];
      guard14 = false;
      if (i0 == 1) {
        guard14 = true;
      } else {
        i0 = rs->size[0];
        if (i0 != 1) {
          guard14 = true;
        } else {
          b0 = false;
        }
      }

      if (guard14) {
        b0 = true;
      }

      if (!b0) {
        emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      i0 = rs->size[0];
      if (!(i0 > 0)) {
        emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      d_st.site = &eb_emlrtRSI;
      n = rs->size[0];
      K = rs->data[0];
      i0 = rs->size[0];
      if (i0 > 1) {
        i0 = rs->size[0];
        if (1 < i0) {
          e_st.site = &fb_emlrtRSI;
          if (n > 2147483646) {
            f_st.site = &gb_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
            if (rs->data[loop_ub] > K) {
              K = rs->data[loop_ub];
            }
          }
        }
      }

      st.site = &t_emlrtRSI;
      d0 = b_mpower(R_sende) + b_mpower(0.015);
      st.site = &t_emlrtRSI;
      b_sqrt(&st, &d0);
      if (hoistedGlobal[7] > K + d0) {
        guard2 = true;
      } else {
        memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
        st.site = &t_emlrtRSI;
        b_st.site = &cb_emlrtRSI;
        c_st.site = &db_emlrtRSI;
        i0 = rs->size[0];
        guard13 = false;
        if (i0 == 1) {
          guard13 = true;
        } else {
          i0 = rs->size[0];
          if (i0 != 1) {
            guard13 = true;
          } else {
            b0 = false;
          }
        }

        if (guard13) {
          b0 = true;
        }

        if (!b0) {
          emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
            "Coder:toolbox:autoDimIncompatibility", 0);
        }

        i0 = rs->size[0];
        if (!(i0 > 0)) {
          emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }

        d_st.site = &eb_emlrtRSI;
        n = rs->size[0];
        K = rs->data[rs->size[0]];
        i0 = rs->size[0];
        if (i0 > 1) {
          i0 = rs->size[0];
          if (1 < i0) {
            e_st.site = &fb_emlrtRSI;
            if (n > 2147483646) {
              f_st.site = &gb_emlrtRSI;
              check_forloop_overflow_error(&f_st);
            }

            for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
              if (rs->data[loop_ub + rs->size[0]] < K) {
                K = rs->data[loop_ub + rs->size[0]];
              }
            }
          }
        }

        st.site = &t_emlrtRSI;
        d0 = b_mpower(R_sende) + b_mpower(0.015);
        st.site = &t_emlrtRSI;
        b_sqrt(&st, &d0);
        if (hoistedGlobal[15] < K - d0) {
          guard2 = true;
        } else {
          memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
          st.site = &t_emlrtRSI;
          b_st.site = &hb_emlrtRSI;
          c_st.site = &db_emlrtRSI;
          i0 = rs->size[0];
          guard12 = false;
          if (i0 == 1) {
            guard12 = true;
          } else {
            i0 = rs->size[0];
            if (i0 != 1) {
              guard12 = true;
            } else {
              b0 = false;
            }
          }

          if (guard12) {
            b0 = true;
          }

          if (!b0) {
            emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          i0 = rs->size[0];
          if (!(i0 > 0)) {
            emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          d_st.site = &eb_emlrtRSI;
          n = rs->size[0];
          K = rs->data[rs->size[0]];
          i0 = rs->size[0];
          if (i0 > 1) {
            i0 = rs->size[0];
            if (1 < i0) {
              e_st.site = &fb_emlrtRSI;
              if (n > 2147483646) {
                f_st.site = &gb_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                if (rs->data[loop_ub + rs->size[0]] > K) {
                  K = rs->data[loop_ub + rs->size[0]];
                }
              }
            }
          }

          st.site = &t_emlrtRSI;
          d0 = b_mpower(R_sende) + b_mpower(0.015);
          st.site = &t_emlrtRSI;
          b_sqrt(&st, &d0);
          if (hoistedGlobal[15] > K + d0) {
            guard2 = true;
          } else {
            memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
            st.site = &t_emlrtRSI;
            b_st.site = &cb_emlrtRSI;
            c_st.site = &db_emlrtRSI;
            i0 = rs->size[0];
            guard11 = false;
            if (i0 == 1) {
              guard11 = true;
            } else {
              i0 = rs->size[0];
              if (i0 != 1) {
                guard11 = true;
              } else {
                b0 = false;
              }
            }

            if (guard11) {
              b0 = true;
            }

            if (!b0) {
              emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
                "Coder:toolbox:autoDimIncompatibility", 0);
            }

            i0 = rs->size[0];
            if (!(i0 > 0)) {
              emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
                "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }

            d_st.site = &eb_emlrtRSI;
            n = rs->size[0];
            K = rs->data[rs->size[0] << 1];
            i0 = rs->size[0];
            if (i0 > 1) {
              i0 = rs->size[0];
              if (1 < i0) {
                e_st.site = &fb_emlrtRSI;
                if (n > 2147483646) {
                  f_st.site = &gb_emlrtRSI;
                  check_forloop_overflow_error(&f_st);
                }

                for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                  if (rs->data[loop_ub + (rs->size[0] << 1)] < K) {
                    K = rs->data[loop_ub + (rs->size[0] << 1)];
                  }
                }
              }
            }

            st.site = &t_emlrtRSI;
            d0 = b_mpower(R_sende) + b_mpower(0.015);
            st.site = &t_emlrtRSI;
            b_sqrt(&st, &d0);
            if (hoistedGlobal[23] < K - d0) {
              guard2 = true;
            } else {
              memcpy(&hoistedGlobal[0], &r[0], 24U * sizeof(real_T));
              st.site = &t_emlrtRSI;
              b_st.site = &hb_emlrtRSI;
              c_st.site = &db_emlrtRSI;
              i0 = rs->size[0];
              guard10 = false;
              if (i0 == 1) {
                guard10 = true;
              } else {
                i0 = rs->size[0];
                if (i0 != 1) {
                  guard10 = true;
                } else {
                  b0 = false;
                }
              }

              if (guard10) {
                b0 = true;
              }

              if (!b0) {
                emlrtErrorWithMessageIdR2012b(&c_st, &r_emlrtRTEI,
                  "Coder:toolbox:autoDimIncompatibility", 0);
              }

              i0 = rs->size[0];
              if (!(i0 > 0)) {
                emlrtErrorWithMessageIdR2012b(&c_st, &s_emlrtRTEI,
                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
              }

              d_st.site = &eb_emlrtRSI;
              n = rs->size[0];
              K = rs->data[rs->size[0] << 1];
              i0 = rs->size[0];
              if (i0 > 1) {
                i0 = rs->size[0];
                if (1 < i0) {
                  e_st.site = &fb_emlrtRSI;
                  if (n > 2147483646) {
                    f_st.site = &gb_emlrtRSI;
                    check_forloop_overflow_error(&f_st);
                  }

                  for (loop_ub = 1; loop_ub + 1 <= n; loop_ub++) {
                    if (rs->data[loop_ub + (rs->size[0] << 1)] > K) {
                      K = rs->data[loop_ub + (rs->size[0] << 1)];
                    }
                  }
                }
              }

              st.site = &t_emlrtRSI;
              d0 = b_mpower(R_sende) + b_mpower(0.015);
              st.site = &t_emlrtRSI;
              b_sqrt(&st, &d0);
              if (hoistedGlobal[23] > K + d0) {
                guard2 = true;
              } else {
                guard1 = true;
              }
            }
          }
        }
      }
    }
  }

  if (guard2) {
    /*  ((r(1,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(1,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(1,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(1,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(1,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(1,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))&&... */
    /*          (r(2,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(2,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(2,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(2,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(2,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(2,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))&&... */
    /*          (r(3,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(3,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(3,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(3,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(3,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(3,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))&&... */
    /*          (r(4,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(4,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(4,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(4,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(4,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(4,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))&&... */
    /*          (r(5,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(5,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(5,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(5,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(5,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(5,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))&&... */
    /*          (r(6,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(6,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(6,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(6,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(6,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(6,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))&&... */
    /*          (r(7,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(7,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(7,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(7,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(7,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(7,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))&&... */
    /*          (r(8,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(8,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(8,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(8,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(8,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(8,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))); */
    /*  */
    memset(&m[0], 0, 24U * sizeof(real_T));
    st.site = &u_emlrtRSI;
    K = 3.1415926535897931 * N_sende * Ia * b_mpower(R_sende);
    d0 = oo[16];
    sind(&d0);
    y = oo[8];
    cosd(&y);
    d1 = oo[16];
    sind(&d1);
    d2 = oo[8];
    sind(&d2);
    d3 = oo[16];
    cosd(&d3);
    b_oo[0] = d0 * y;
    b_oo[1] = d1 * d2;
    b_oo[2] = d3;
    for (i0 = 0; i0 < 3; i0++) {
      m[i0 << 3] = b_oo[i0] * K;
    }

    d0 = oo[17];
    sind(&d0);
    y = oo[9];
    cosd(&y);
    d1 = oo[17];
    sind(&d1);
    d2 = oo[9];
    sind(&d2);
    d3 = oo[17];
    cosd(&d3);
    dv8[0] = d0 * y;
    dv8[1] = d1 * d2;
    dv8[2] = d3;
    for (i0 = 0; i0 < 3; i0++) {
      m[1 + (i0 << 3)] = dv8[i0] * K;
    }

    d0 = oo[18];
    sind(&d0);
    y = oo[10];
    cosd(&y);
    d1 = oo[18];
    sind(&d1);
    d2 = oo[10];
    sind(&d2);
    d3 = oo[18];
    cosd(&d3);
    dv9[0] = d0 * y;
    dv9[1] = d1 * d2;
    dv9[2] = d3;
    for (i0 = 0; i0 < 3; i0++) {
      m[2 + (i0 << 3)] = dv9[i0] * K;
    }

    d0 = oo[19];
    sind(&d0);
    y = oo[11];
    cosd(&y);
    d1 = oo[19];
    sind(&d1);
    d2 = oo[11];
    sind(&d2);
    d3 = oo[19];
    cosd(&d3);
    dv10[0] = d0 * y;
    dv10[1] = d1 * d2;
    dv10[2] = d3;
    for (i0 = 0; i0 < 3; i0++) {
      m[3 + (i0 << 3)] = dv10[i0] * K;
    }

    d0 = oo[20];
    sind(&d0);
    y = oo[12];
    cosd(&y);
    d1 = oo[20];
    sind(&d1);
    d2 = oo[12];
    sind(&d2);
    d3 = oo[20];
    cosd(&d3);
    dv11[0] = d0 * y;
    dv11[1] = d1 * d2;
    dv11[2] = d3;
    for (i0 = 0; i0 < 3; i0++) {
      m[4 + (i0 << 3)] = dv11[i0] * K;
    }

    d0 = oo[21];
    sind(&d0);
    y = oo[13];
    cosd(&y);
    d1 = oo[21];
    sind(&d1);
    d2 = oo[13];
    sind(&d2);
    d3 = oo[21];
    cosd(&d3);
    dv12[0] = d0 * y;
    dv12[1] = d1 * d2;
    dv12[2] = d3;
    for (i0 = 0; i0 < 3; i0++) {
      m[5 + (i0 << 3)] = dv12[i0] * K;
    }

    d0 = oo[22];
    sind(&d0);
    y = oo[14];
    cosd(&y);
    d1 = oo[22];
    sind(&d1);
    d2 = oo[14];
    sind(&d2);
    d3 = oo[22];
    cosd(&d3);
    dv13[0] = d0 * y;
    dv13[1] = d1 * d2;
    dv13[2] = d3;
    for (i0 = 0; i0 < 3; i0++) {
      m[6 + (i0 << 3)] = dv13[i0] * K;
    }

    d0 = oo[23];
    sind(&d0);
    y = oo[15];
    cosd(&y);
    d1 = oo[23];
    sind(&d1);
    d2 = oo[15];
    sind(&d2);
    d3 = oo[23];
    cosd(&d3);
    dv14[0] = d0 * y;
    dv14[1] = d1 * d2;
    dv14[2] = d3;
    for (i0 = 0; i0 < 3; i0++) {
      m[7 + (i0 << 3)] = dv14[i0] * K;
    }

    /*     %% Constant values for voltage (induced in sensor coil) calculation */
    /*  Constant of B-field */
    /*  Value of angular frequency */
    /*  C2=2*pi*f; */
    /*  Constant for calculating the voltage */
    /*     %% B-filed Calculation */
    /*  B = zeros(varTotalNum,8,3); */
    /*  U2 = zeros(s,8); */
    /*  U1 = zeros(726,8); */
    /*  U1_nonoise = zeros(1,8); */
    /*  if flag == 0 */
    /*      PHI = zeros(s-1,8); */
    /*      dPHI = zeros(s-2,8); */
    /*      dt = zeros(8,s-2); */
    /*      V = zeros(s-2,8); */
    /*      V_Visual = zeros(s-2,8); */
    /*  else */
    /*      PHI = zeros(s,8); */
    /*      dPHI = zeros(s-1,8); */
    /*      dt = zeros(8,s-1); */
    /*      V = zeros(s-1,8); */
    /*      V_Visual = zeros(s-1,8); */
    /*  end */
    C = mu0 / 12.566370614359172 * muR_sende * Omega * (-mur_empfang * 500.0 *
      A_Empfang) * 144.39845895068805;

    /*  Ca = -muR_sende*mur_empfang*N_empfang*A_Empfang*Verstaerkung; */
    /*  n_sensor = [sind(os(3))*cosd(os(2)); sind(os(3))*sind(os(2)); */
    /*  cosd(os(3))]; */
    memset(&oo[0], 0, 24U * sizeof(real_T));
    i0 = B->size[0] * B->size[1] * B->size[2];
    if (!(varTotalNum >= 0.0)) {
      emlrtNonNegativeCheckR2012b(varTotalNum, &x_emlrtDCI, sp);
    }

    if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
      emlrtIntegerCheckR2012b(varTotalNum, &w_emlrtDCI, sp);
    }

    B->size[0] = (int32_T)varTotalNum;
    B->size[1] = 8;
    B->size[2] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)B, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    if (!(varTotalNum >= 0.0)) {
      emlrtNonNegativeCheckR2012b(varTotalNum, &x_emlrtDCI, sp);
    }

    if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
      emlrtIntegerCheckR2012b(varTotalNum, &w_emlrtDCI, sp);
    }

    loop_ub = ((int32_T)varTotalNum << 3) * 3;
    for (i0 = 0; i0 < loop_ub; i0++) {
      B->data[i0] = 0.0;
    }

    i0 = U1->size[0] * U1->size[1];
    if (!(varTotalNum >= 0.0)) {
      emlrtNonNegativeCheckR2012b(varTotalNum, &ab_emlrtDCI, sp);
    }

    if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
      emlrtIntegerCheckR2012b(varTotalNum, &y_emlrtDCI, sp);
    }

    U1->size[0] = (int32_T)varTotalNum;
    U1->size[1] = 8;
    emxEnsureCapacity(sp, (emxArray__common *)U1, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    if (!(varTotalNum >= 0.0)) {
      emlrtNonNegativeCheckR2012b(varTotalNum, &ab_emlrtDCI, sp);
    }

    if (varTotalNum != (int32_T)muDoubleScalarFloor(varTotalNum)) {
      emlrtIntegerCheckR2012b(varTotalNum, &y_emlrtDCI, sp);
    }

    loop_ub = (int32_T)varTotalNum << 3;
    for (i0 = 0; i0 < loop_ub; i0++) {
      U1->data[i0] = 0.0;
    }

    i0 = (int32_T)varTotalNum;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, varTotalNum, mxDOUBLE_CLASS,
      (int32_T)varTotalNum, &q_emlrtRTEI, sp);
    varNum = 0;
    while (varNum <= i0 - 1) {
      loop_ub = 0;
      while (loop_ub < 8) {
        i_z = rr->size[0];
        if (!((varNum + 1 >= 1) && (varNum + 1 <= i_z))) {
          emlrtDynamicBoundsCheckR2012b(varNum + 1, 1, i_z, &nb_emlrtBCI, sp);
        }

        oo[loop_ub] = rr->data[varNum + rr->size[0] * loop_ub];
        i_z = rr->size[0];
        if (!((varNum + 1 >= 1) && (varNum + 1 <= i_z))) {
          emlrtDynamicBoundsCheckR2012b(varNum + 1, 1, i_z, &ob_emlrtBCI, sp);
        }

        oo[8 + loop_ub] = rr->data[(varNum + rr->size[0] * loop_ub) + rr->size[0]
          * rr->size[1]];
        i_z = rr->size[0];
        if (!((varNum + 1 >= 1) && (varNum + 1 <= i_z))) {
          emlrtDynamicBoundsCheckR2012b(varNum + 1, 1, i_z, &pb_emlrtBCI, sp);
        }

        oo[16 + loop_ub] = rr->data[(varNum + rr->size[0] * loop_ub) + (rr->
          size[0] * rr->size[1] << 1)];
        for (i_z = 0; i_z < 3; i_z++) {
          dv6[i_z] = m[loop_ub + (i_z << 3)];
          b_oo[i_z] = oo[loop_ub + (i_z << 3)];
        }

        st.site = &v_emlrtRSI;
        Bfeld(dv6, b_oo, dv7);
        n = B->size[0];
        if (!((varNum + 1 >= 1) && (varNum + 1 <= n))) {
          emlrtDynamicBoundsCheckR2012b(varNum + 1, 1, n, &bb_emlrtBCI, sp);
        }

        for (i_z = 0; i_z < 3; i_z++) {
          B->data[(varNum + B->size[0] * loop_ub) + B->size[0] * B->size[1] *
            i_z] = dv7[i_z];
        }

        i_z = B->size[0];
        n = varNum + 1;
        if (!((n >= 1) && (n <= i_z))) {
          emlrtDynamicBoundsCheckR2012b(n, 1, i_z, &cb_emlrtBCI, sp);
        }

        i_z = B->size[0];
        n = varNum + 1;
        if (!((n >= 1) && (n <= i_z))) {
          emlrtDynamicBoundsCheckR2012b(n, 1, i_z, &db_emlrtBCI, sp);
        }

        i_z = B->size[0];
        n = varNum + 1;
        if (!((n >= 1) && (n <= i_z))) {
          emlrtDynamicBoundsCheckR2012b(n, 1, i_z, &eb_emlrtBCI, sp);
        }

        i_z = os->size[0];
        n = varNum + 1;
        if (!((n >= 1) && (n <= i_z))) {
          emlrtDynamicBoundsCheckR2012b(n, 1, i_z, &ib_emlrtBCI, sp);
        }

        i_z = os->size[0];
        n = varNum + 1;
        if (!((n >= 1) && (n <= i_z))) {
          emlrtDynamicBoundsCheckR2012b(n, 1, i_z, &jb_emlrtBCI, sp);
        }

        i_z = os->size[0];
        n = varNum + 1;
        if (!((n >= 1) && (n <= i_z))) {
          emlrtDynamicBoundsCheckR2012b(n, 1, i_z, &kb_emlrtBCI, sp);
        }

        i_z = os->size[0];
        n = varNum + 1;
        if (!((n >= 1) && (n <= i_z))) {
          emlrtDynamicBoundsCheckR2012b(n, 1, i_z, &lb_emlrtBCI, sp);
        }

        i_z = os->size[0];
        n = varNum + 1;
        if (!((n >= 1) && (n <= i_z))) {
          emlrtDynamicBoundsCheckR2012b(n, 1, i_z, &mb_emlrtBCI, sp);
        }

        d0 = os->data[varNum + (os->size[0] << 1)];
        sind(&d0);
        y = os->data[varNum + os->size[0]];
        cosd(&y);
        d1 = os->data[varNum + (os->size[0] << 1)];
        sind(&d1);
        d2 = os->data[varNum + os->size[0]];
        sind(&d2);
        d3 = os->data[varNum + (os->size[0] << 1)];
        cosd(&d3);
        b_B[0] = B->data[varNum + B->size[0] * loop_ub];
        b_B[1] = B->data[(varNum + B->size[0] * loop_ub) + B->size[0] * B->size
          [1]];
        b_B[2] = B->data[(varNum + B->size[0] * loop_ub) + (B->size[0] * B->
          size[1] << 1)];
        dv15[0] = d0 * y;
        dv15[1] = d1 * d2;
        dv15[2] = d3;
        i_z = U1->size[0];
        if (!((varNum + 1 >= 1) && (varNum + 1 <= i_z))) {
          emlrtDynamicBoundsCheckR2012b(varNum + 1, 1, i_z, &qb_emlrtBCI, sp);
        }

        U1->data[varNum + U1->size[0] * loop_ub] = C * dot(b_B, dv15);
        loop_ub++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      varNum++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /*      U_add_noise = zeros(varTotalNum,8); */
    /*      %% noise level */
    /*      nl = -100; */
    /*      for varNum=1:varTotalNum */
    /*          U_noise = wgn(1,8,nl,'dBW','real'); */
    /*          U_add_noise(varNum,:) = U_norm(varNum,:) + U_noise; */
    /*      end */
    /*  U_Measured = U_add_noise; */
    /*  U_Measured = U_norm; */
    /*  POR = [rs, os(:,2:3)]; */
    /*  */
    /*  */
    /*  %% */
    /*  % global  Anz_Spulen... */
    /*  %     I f C A_Empfang m r funktionscount zeit U... */
    /*  %     max_abstand Nummer... */
    /*  %     StartX StartY StartZ StartPhi StartTheta N_Channel */
    /*  */
    /*  N_Channel=8; */
    /*  f=1e3; */
    /*  */
    /*  */
    /*  POR=POR; %#ok<*ASGSL> */
    /*  U2=U_Measured; */
    /*  */
    /*  % omega=2*pi*f; */
    /*  */
    /*  StartX =0; */
    /*  StartY =0; */
    /*  StartZ = 0.35; */
    /*  StartPhi = -180; */
    /*  StartTheta = -180; */
    /*  */
    /*  % Anz_Punkte=1;                         % Anzahl der Testpunkte ?Number of testing point? */
    /*  Anz_Spulen=8;                           % Anzahl der Spulen    (Number of coils)                       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% required */
    /*  */
    /*  mu0=4*pi*10^-7;                         % ?                   (Permeability) */
    /*  muR_sende=1;                            % relative Permeabilität Sendespule  (Permeability of emitting coils) */
    /*  mur_empfang=898.4;                      % relative Permeabilität Empfangsspule  (Permeability of sensing coils) */
    /*  */
    /*  N_sende=207;                            % Windungszahl Sendespule  (number of windings - emitting coil) */
    /*  N_empfang=500;                          % Windungszahl Empfangsspule (number of windings - sensing coil) */
    /*  R_sende=0.015;                           % Radius Sendespule (Radius of emitting coils) */
    /*  R_empfang=283.2*10^-6;                  % Radius Empfangsspule (Radius of sensing coils) */
    /*  % I=0.7201;                                	% Strom Sendespule (current in the sensing coils) */
    /*  % I=0.11435; */
    /*  */
    /*  % I=0.030282398842848; */
    /*  % I=0.6602; */
    /*  */
    /*  */
    /*  % Frequenz Sendespule (frequency of signal on sensing coil) */
    /*  A_Empfang=pi*R_empfang^2;               % Normalenfläche Empfangsspule (normal area of the sensing coil) %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% direct value assign */
    /*  */
    /*  C1=mu0/(4*pi)*muR_sende;                % Konstande für B-Feld (constant of B field) */
    /*  C2=2*pi*f;                              % Konstante für Ableitung nach t (constant for w) */
    /*  C3=-mur_empfang*N_empfang*A_Empfang;      % Konstante für Spannungsberechnung (constant for voltage calculation) */
    /*  */
    /*  */
    /*  % Verstaerkung=6739.7*3.295*2/4; */
    /*  */
    /*  */
    /*  % Verstaerkung=1.573943202562500e+03; */
    /*  Verstaerkung= 144.3985; */
    /*  % Verstaerkung=6889.10446; */
    /*  C=Verstaerkung*C1*C2*C3;                % (Constant C)       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% direct value assign */
    /*  % K=pi*N_sende*I*R_sende^2;               % Vorfaktor magnetisches Dipol (factor of magnetic dipol)  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% direct value assign */
    /*  */
    /*  funktionscount=2000;                    % Abbruchbedingung für fsolve (stop option for fsolve functon) */
    /*  */
    /*  zeit=0.5;                               % Zeitbegrenzung für fsolve (time limitation for fsolve) */
    /*  */
    /*  max_abstand=2; */
    /*  */
    /*  % m=zeros(Anz_Spulen,3); */
    /*  % r=zeros(Anz_Spulen,3); */
    /*  */
    /*  % faktor= [1 1 1 1 1 1 1 1]';            % (factor for calibration calculation) */
    /*  */
    /*  % % magnetisches Dipol */
    /*  % phie=0;    thetae=0;       m(1,:)=faktor(1)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)]; */
    /*  % phie=20;     thetae=30;       m(2,:)=faktor(2)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)]; */
    /*  % phie=40;     thetae=60;    	m(3,:)=faktor(3)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)]; */
    /*  % phie=60;    thetae=90;   	m(4,:)=faktor(4)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)]; */
    /*  % phie=80;    thetae=120;       m(5,:)=faktor(5)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)]; */
    /*  % phie=100;	 thetae=150;    	m(6,:)=faktor(6)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)]; */
    /*  % phie=120;      thetae=180;     	m(7,:)=faktor(7)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)]; */
    /*  % phie=140;      thetae=210 ;      m(8,:)=faktor(8)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)]; */
    /*  % */
    /*  % % Ortskoordinaten der Spulen (position coordinate of the emitting coils) */
    /*  % r(1,:)=[-0.06 0.05 0]; */
    /*  % r(2,:)=[-0.02 0.05 0]; */
    /*  % r(3,:)=[0.02 0.05 0]; */
    /*  % r(4,:)=[0.06 0.05 0]; */
    /*  % r(5,:)=[-0.06 -0.05 0]; */
    /*  % r(6,:)=[-0.02 -0.05 0]; */
    /*  % r(7,:)=[0.02 -0.05 0]; */
    /*  % r(8,:)=[0.06 -0.05 0]; */
    /*  % % */
    /*  % load  KOOD_PODrand_0dB */
    /*  % % % */
    /*  % faktor= [1+koord_alle_alle(1,1)/100 1+koord_alle_alle(2,1)/100 1+koord_alle_alle(3,1)/100 1+koord_alle_alle(4,1)/100 1+koord_alle_alle(5,1)/100 1+koord_alle_alle(6,1)/100 1+koord_alle_alle(7,1)/100 1+koord_alle_alle(8,1)/100]'; */
    /*  % % */
    /*  % % magnetisches Dipol */
    /*  % phi=-90+koord_alle_alle(1,2)/5;    theta=90+koord_alle_alle(1,3)/5;       m(1,:)=faktor(1)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)]; */
    /*  % phi=30+koord_alle_alle(2,2)/5;     theta=60+koord_alle_alle(2,3)/5;       m(2,:)=faktor(2)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)]; */
    /*  % phi=90+koord_alle_alle(3,2)/5;     theta=30+koord_alle_alle(3,3)/5;       m(3,:)=faktor(3)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)]; */
    /*  % phi=120+koord_alle_alle(4,2)/5;    theta=60+koord_alle_alle(4,3)/5;   	  m(4,:)=faktor(4)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)]; */
    /*  % phi=120+koord_alle_alle(5,2)/5;    theta=90+koord_alle_alle(5,3)/5;       m(5,:)=faktor(5)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)]; */
    /*  % phi=240+koord_alle_alle(6,2)/5;	   theta=30+koord_alle_alle(6,3)/5;    	  m(6,:)=faktor(6)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)]; */
    /*  % phi=0+koord_alle_alle(7,2)/5;      theta=koord_alle_alle(7,3)/5;     	  m(7,:)=faktor(7)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)]; */
    /*  % phi=0+koord_alle_alle(8,2)/5;      theta=90+koord_alle_alle(8,3)/5;       m(8,:)=faktor(8)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)]; */
    /*  % */
    /*  % % % Ortskoordinaten der Spulen */
    /*  % r(1,:)=[-0.05-koord_alle_alle(1,4)/1000 0.10-koord_alle_alle(1,5)/1000 0-koord_alle_alle(1,6)/1000]; */
    /*  % r(2,:)=[-0.15-koord_alle_alle(2,4)/1000 0-koord_alle_alle(2,5)/1000 0-koord_alle_alle(2,6)/1000]; */
    /*  % r(3,:)=[-0.05-koord_alle_alle(3,4)/1000 -0.10-koord_alle_alle(3,5)/1000 0-koord_alle_alle(3,6)/1000]; */
    /*  % r(4,:)=[0.05-koord_alle_alle(4,4)/1000 -0.10-koord_alle_alle(4,5)/1000 0-koord_alle_alle(4,6)/1000]; */
    /*  % r(5,:)=[0.15-koord_alle_alle(5,4)/1000 0-koord_alle_alle(5,5)/1000 0-koord_alle_alle(5,6)/1000]; */
    /*  % r(6,:)=[0.05-koord_alle_alle(6,4)/1000 0.10-koord_alle_alle(6,5)/1000 0-koord_alle_alle(6,6)/1000]; */
    /*  % r(7,:)=[0.05-koord_alle_alle(7,4)/1000 0-koord_alle_alle(7,5)/1000 0-koord_alle_alle(7,6)/1000]; */
    /*  % r(8,:)=[-0.05-koord_alle_alle(8,4)/1000 0-koord_alle_alle(8,5)/1000 0-koord_alle_alle(8,6)/1000]; */
    /*  */
    /*  % xv=[0.0629 0.0310 0.2834 177.4494 64.0365]; */
    /*  % */
    /*  % n=[sind(xv(5))*cosd(xv(4)) sind(xv(5))*sind(xv(4)) cosd(xv(5))]; */
    /*  % */
    /*  % */
    /*  % F(1)= U(1)-C*dot(Bfeld(m(1,:),xv(1:3)-r(1,:)),n); */
    /*  % F(2)= U(2)-C*dot(Bfeld(m(2,:),xv(1:3)-r(2,:)),n); */
    /*  % F(3)= U(3)-C*dot(Bfeld(m(3,:),xv(1:3)-r(3,:)),n); */
    /*  % F(4)= U(4)-C*dot(Bfeld(m(4,:),xv(1:3)-r(4,:)),n); */
    /*  % F(5)= U(5)-C*dot(Bfeld(m(5,:),xv(1:3)-r(5,:)),n); */
    /*  % F(6)= U(6)-C*dot(Bfeld(m(6,:),xv(1:3)-r(6,:)),n); */
    /*  % F(7)= U(7)-C*dot(Bfeld(m(7,:),xv(1:3)-r(7,:)),n); */
    /*  % F(8)= U(8)-C*dot(Bfeld(m(8,:),xv(1:3)-r(8,:)),n); */
    /*  */
    /*  % [x,y,z,phi,theta]=POS(U,Nummer,StartX,StartY,StartZ,StartPhi,StartTheta) */
    /*  */
    /*  for i=1:i_x*i_y*i_z */
    /*  */
    /*      StartX = POR(i,1); */
    /*      StartY = POR(i,2); */
    /*      StartZ = POR(i,3); */
    /*      StartPhi = POR(i,4); */
    /*      StartTheta = POR(i,5); */
    /*  */
    /*  */
    /*      % U=U1(i,:)+wgn(1,8,-100,'dBW'); */
    /*      U=U2(i,:); */
    /*      [x,y,z,phi,theta]=POS(U,StartX,StartY,StartZ,StartPhi,StartTheta); */
    /*      POM(i,:)=[x,y,z,phi,theta]; %#ok<AGROW,*SAGROW> */
    /*  */
    /*      % StartX =POR(i,1)+0.01*(1-2*rand(1)); */
    /*      % StartY =POR(i,2)+0.01*(1-2*rand(1)); */
    /*      % StartZ = z; */
    /*      % StartPhi = phi; */
    /*      % StartTheta = theta; */
    /*      % pause(0.5); */
    /*  %     i; */
    /*  end */
    /*  % scatter3(coord(:,1),coord(:,2),coord(:,3));hold on;scatter3(POR(:,1),POR(:,2),POR(:,3),'r.'); */
    /*      F_out = 1/mean(rms(U_norm)); */
    st.site = &w_emlrtRSI;
    b_abs(&st, U1, r0);
    st.site = &w_emlrtRSI;
    mean(&st, r0, dv16);
    F_out = 1.0 / b_mean(dv16);
  }

  if (guard1) {
    F_out = rtInf;
  }

  emxFree_real_T(&r0);
  emxFree_real_T(&U1);
  emxFree_real_T(&B);
  emxFree_real_T(&rr);
  emxFree_real_T(&os);
  emxFree_real_T(&rs);

  /*      figure(2) */
  /*      scatter3(r(:,1),r(:,2),r(:,3));axis([-1 1 -1 1 -0.5 1]) */
  /*  oo */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return F_out;
}

/* End of code generation (outfun_PoseError_U_multiOri.c) */
