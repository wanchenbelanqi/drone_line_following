/* Include files */

#include "image_processing_test_sfun.h"
#include "c4_image_processing_test.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c4_emlrtMCI = { 13, /* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtRSInfo c4_emlrtRSI = { 2,  /* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#image_processing_test:41"          /* pathName */
};

static emlrtRSInfo c4_b_emlrtRSI = { 3,/* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#image_processing_test:41"          /* pathName */
};

static emlrtRSInfo c4_c_emlrtRSI = { 81,/* lineNo */
  "imclose",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\imclose.m"/* pathName */
};

static emlrtRSInfo c4_d_emlrtRSI = { 93,/* lineNo */
  "imclose",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\imclose.m"/* pathName */
};

static emlrtRSInfo c4_e_emlrtRSI = { 72,/* lineNo */
  "padarray",                          /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c4_f_emlrtRSI = { 98,/* lineNo */
  "imdilate",                          /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\imdilate.m"/* pathName */
};

static emlrtRSInfo c4_g_emlrtRSI = { 17,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\morphop.m"/* pathName */
};

static emlrtRSInfo c4_h_emlrtRSI = { 646,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c4_i_emlrtRSI = { 880,/* lineNo */
  "morphop",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\+coder\\morphop.m"/* pathName */
};

static emlrtRSInfo c4_j_emlrtRSI = { 87,/* lineNo */
  "imerode",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\imerode.m"/* pathName */
};

static emlrtRSInfo c4_k_emlrtRSI = { 77,/* lineNo */
  "bwmorph",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\bwmorph.m"/* pathName */
};

static emlrtRSInfo c4_l_emlrtRSI = { 24,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c4_m_emlrtRSI = { 33,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c4_n_emlrtRSI = { 256,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c4_o_emlrtRSI = { 14,/* lineNo */
  "lutskel",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c4_p_emlrtRSI = { 15,/* lineNo */
  "lutskel",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c4_q_emlrtRSI = { 16,/* lineNo */
  "lutskel",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c4_r_emlrtRSI = { 17,/* lineNo */
  "lutskel",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c4_s_emlrtRSI = { 18,/* lineNo */
  "lutskel",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c4_t_emlrtRSI = { 19,/* lineNo */
  "lutskel",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c4_u_emlrtRSI = { 20,/* lineNo */
  "lutskel",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c4_v_emlrtRSI = { 21,/* lineNo */
  "lutskel",                           /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c4_w_emlrtRSI = { 145,/* lineNo */
  "bwlookup",                          /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\bwlookup.m"/* pathName */
};

static emlrtDCInfo c4_emlrtDCI = { 400,/* lineNo */
  19,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_emlrtBCI = { 1,  /* iFirst */
  1266,                                /* iLast */
  400,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_b_emlrtDCI = { 400,/* lineNo */
  21,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_b_emlrtBCI = { 1,/* iFirst */
  2166,                                /* iLast */
  400,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_c_emlrtDCI = { 407,/* lineNo */
  19,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_c_emlrtBCI = { 1,/* iFirst */
  1266,                                /* iLast */
  407,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_d_emlrtDCI = { 407,/* lineNo */
  21,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_d_emlrtBCI = { 1,/* iFirst */
  2166,                                /* iLast */
  407,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_e_emlrtDCI = { 414,/* lineNo */
  19,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_e_emlrtBCI = { 1,/* iFirst */
  1266,                                /* iLast */
  414,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_f_emlrtDCI = { 414,/* lineNo */
  21,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_f_emlrtBCI = { 1,/* iFirst */
  2166,                                /* iLast */
  414,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_g_emlrtDCI = { 421,/* lineNo */
  19,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_g_emlrtBCI = { 1,/* iFirst */
  1266,                                /* iLast */
  421,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_h_emlrtDCI = { 421,/* lineNo */
  21,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_h_emlrtBCI = { 1,/* iFirst */
  2166,                                /* iLast */
  421,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_i_emlrtBCI = { 1,/* iFirst */
  1260,                                /* iLast */
  444,                                 /* lineNo */
  100,                                 /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_i_emlrtDCI = { 444,/* lineNo */
  100,                                 /* colNo */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_j_emlrtBCI = { 1,/* iFirst */
  2160,                                /* iLast */
  444,                                 /* lineNo */
  100,                                 /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_k_emlrtBCI = { 1,/* iFirst */
  1266,                                /* iLast */
  444,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_j_emlrtDCI = { 444,/* lineNo */
  17,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_l_emlrtBCI = { 1,/* iFirst */
  2166,                                /* iLast */
  444,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_k_emlrtDCI = { 23,/* lineNo */
  8,                                   /* colNo */
  "lutskel",                           /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m",/* pName */
  1                                    /* checkKind */
};

static const boolean_T c4_bv[25] = { false, false, true, false, false, false,
  true, true, true, false, true, true, true, true, true, false, true, true, true,
  false, false, false, true, false, false };

/* Function Declarations */
static void initialize_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance);
static void initialize_params_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance);
static void enable_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance);
static void disable_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance);
static void c4_update_jit_animation_state_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance);
static void c4_do_animation_call_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance);
static void ext_mode_exec_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance);
static void set_sim_state_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance, const mxArray *c4_st);
static void sf_gateway_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance);
static void mdl_start_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance);
static void mdl_terminate_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance);
static void initSimStructsc4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance);
static void c4_imclose(SFc4_image_processing_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, boolean_T c4_A[2721600], boolean_T c4_B[2721600]);
static void c4_imdilate(SFc4_image_processing_testInstanceStruct *chartInstance,
  boolean_T c4_A[2742156], boolean_T c4_B[2742156]);
static void c4_imerode(SFc4_image_processing_testInstanceStruct *chartInstance,
  boolean_T c4_A[2742156], boolean_T c4_B[2742156]);
static void c4_bwmorph(SFc4_image_processing_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, boolean_T c4_bwin[2721600], real_T c4_varargin_1,
  boolean_T c4_b_bw[2721600]);
static void c4_bwmorphApplyOnce(SFc4_image_processing_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, boolean_T c4_b_bw[2721600], boolean_T
  c4_c_bw[2721600]);
static void c4_bwlookup(SFc4_image_processing_testInstanceStruct *chartInstance,
  boolean_T c4_bwin[2721600], boolean_T c4_lut[512], boolean_T c4_B[2721600]);
static void c4_emlrt_marshallIn(SFc4_image_processing_testInstanceStruct
  *chartInstance, const mxArray *c4_c_BW, const char_T *c4_identifier, boolean_T
  c4_y[2721600]);
static void c4_b_emlrt_marshallIn(SFc4_image_processing_testInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T c4_y[2721600]);
static uint8_T c4_c_emlrt_marshallIn(SFc4_image_processing_testInstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_image_processing_test, const
  char_T *c4_identifier);
static uint8_T c4_d_emlrt_marshallIn(SFc4_image_processing_testInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static const mxArray *c4_chart_data_browse_helper
  (SFc4_image_processing_testInstanceStruct *chartInstance, int32_T
   c4_ssIdNumber);
static void c4_b_bwmorphApplyOnce(SFc4_image_processing_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, boolean_T c4_b_bw[2721600]);
static void init_dsm_address_info(SFc4_image_processing_testInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc4_image_processing_testInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance)
{
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c4_st, "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_is_active_c4_image_processing_test = 0U;
}

static void initialize_params_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c4_update_jit_animation_state_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_do_animation_call_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance)
{
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellmatrix(2, 1), false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", *chartInstance->c4_b_BW, 11, 0U, 1U,
    0U, 2, 1260, 2160), false);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y",
    &chartInstance->c4_is_active_c4_image_processing_test, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c4_y, 1, c4_c_y);
  sf_mex_assign(&c4_st, c4_y, false);
  return c4_st;
}

static void set_sim_state_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  int32_T c4_i;
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_u = sf_mex_dup(c4_st);
  c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 0)), "BW",
                      chartInstance->c4_d_bv);
  for (c4_i = 0; c4_i < 2721600; c4_i++) {
    (*chartInstance->c4_b_BW)[c4_i] = chartInstance->c4_d_bv[c4_i];
  }

  chartInstance->c4_is_active_c4_image_processing_test = c4_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 1)),
     "is_active_c4_image_processing_test");
  sf_mex_destroy(&c4_u);
  sf_mex_destroy(&c4_st);
}

static void sf_gateway_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance)
{
  emlrtStack c4_b_st;
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c4_i = 0; c4_i < 2721600; c4_i++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 0U, (real_T)
                      (*chartInstance->c4_BW)[c4_i]);
  }

  chartInstance->c4_sfEvent = CALL_EVENT;
  for (c4_i1 = 0; c4_i1 < 2721600; c4_i1++) {
    (*chartInstance->c4_b_BW)[c4_i1] = (*chartInstance->c4_BW)[c4_i1];
  }

  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  c4_b_st.site = &c4_emlrtRSI;
  for (c4_i2 = 0; c4_i2 < 2721600; c4_i2++) {
    chartInstance->c4_b_bv[c4_i2] = (*chartInstance->c4_b_BW)[c4_i2];
  }

  c4_imclose(chartInstance, &c4_b_st, chartInstance->c4_b_bv,
             chartInstance->c4_bv1);
  for (c4_i3 = 0; c4_i3 < 2721600; c4_i3++) {
    (*chartInstance->c4_b_BW)[c4_i3] = chartInstance->c4_bv1[c4_i3];
  }

  c4_b_st.site = &c4_b_emlrtRSI;
  for (c4_i4 = 0; c4_i4 < 2721600; c4_i4++) {
    chartInstance->c4_bv2[c4_i4] = (*chartInstance->c4_b_BW)[c4_i4];
  }

  c4_bwmorph(chartInstance, &c4_b_st, chartInstance->c4_bv2, 40.0,
             chartInstance->c4_bv3);
  for (c4_i5 = 0; c4_i5 < 2721600; c4_i5++) {
    (*chartInstance->c4_b_BW)[c4_i5] = chartInstance->c4_bv3[c4_i5];
  }

  c4_do_animation_call_c4_image_processing_test(chartInstance);
  for (c4_i6 = 0; c4_i6 < 2721600; c4_i6++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 1U, (real_T)
                      (*chartInstance->c4_b_BW)[c4_i6]);
  }
}

static void mdl_start_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance)
{
  static const uint32_T c4_decisionTxtEndIdx = 0U;
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c4_chart_data_browse_helper);
  chartInstance->c4_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c4_RuntimeVar,
    &chartInstance->c4_IsDebuggerActive,
    &chartInstance->c4_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c4_mlFcnLineNumber, &chartInstance->c4_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    4U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 98);
}

static void mdl_cleanup_runtime_resources_c4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c4_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void initSimStructsc4_image_processing_test
  (SFc4_image_processing_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c4_image_processing_test_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static void c4_imclose(SFc4_image_processing_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, boolean_T c4_A[2721600], boolean_T c4_B[2721600])
{
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  real_T c4_a;
  real_T c4_b_a;
  real_T c4_c_a;
  real_T c4_c_i;
  real_T c4_c_j;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d2;
  real_T c4_d3;
  real_T c4_d4;
  real_T c4_d5;
  real_T c4_d_a;
  int32_T c4_b_c;
  int32_T c4_b_i;
  int32_T c4_b_j;
  int32_T c4_c;
  int32_T c4_c_c;
  int32_T c4_d_c;
  int32_T c4_d_i;
  int32_T c4_d_j;
  int32_T c4_e_i;
  int32_T c4_e_j;
  int32_T c4_f_i;
  int32_T c4_f_j;
  int32_T c4_g_i;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_j;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_c_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_b_st.site = &c4_e_emlrtRSI;
  for (c4_j = 0; c4_j < 3; c4_j++) {
    c4_c_j = 1.0 + (real_T)c4_j;
    for (c4_i = 0; c4_i < 1266; c4_i++) {
      c4_c_i = 1.0 + (real_T)c4_i;
      c4_d_i = (int32_T)emlrtIntegerCheckR2012b(c4_c_i, &c4_emlrtDCI, &c4_b_st);
      c4_i2 = (int32_T)emlrtIntegerCheckR2012b(c4_c_j, &c4_b_emlrtDCI, &c4_b_st);
      chartInstance->c4_Ap[(emlrtDynamicBoundsCheckR2012b(c4_d_i, 1, 1266,
        &c4_emlrtBCI, &c4_b_st) + 1266 * (emlrtDynamicBoundsCheckR2012b(c4_i2, 1,
        2166, &c4_b_emlrtBCI, &c4_b_st) - 1)) - 1] = false;
    }
  }

  for (c4_b_j = 0; c4_b_j < 3; c4_b_j++) {
    for (c4_b_i = 0; c4_b_i < 1266; c4_b_i++) {
      c4_c_i = 1.0 + (real_T)c4_b_i;
      c4_i1 = (int32_T)emlrtIntegerCheckR2012b(c4_c_i, &c4_c_emlrtDCI, &c4_b_st);
      c4_d = (real_T)(c4_b_j + 2164);
      c4_i3 = (int32_T)emlrtIntegerCheckR2012b(c4_d, &c4_d_emlrtDCI, &c4_b_st);
      chartInstance->c4_Ap[(emlrtDynamicBoundsCheckR2012b(c4_i1, 1, 1266,
        &c4_c_emlrtBCI, &c4_b_st) + 1266 * (emlrtDynamicBoundsCheckR2012b(c4_i3,
        1, 2166, &c4_d_emlrtBCI, &c4_b_st) - 1)) - 1] = false;
    }
  }

  for (c4_d_j = 0; c4_d_j < 2160; c4_d_j++) {
    c4_c_j = 1.0 + (real_T)c4_d_j;
    for (c4_e_i = 0; c4_e_i < 3; c4_e_i++) {
      c4_c_i = 1.0 + (real_T)c4_e_i;
      c4_a = c4_c_j;
      c4_c = (int32_T)c4_a;
      c4_i4 = (int32_T)emlrtIntegerCheckR2012b(c4_c_i, &c4_e_emlrtDCI, &c4_b_st);
      c4_d2 = (real_T)(c4_c + 3);
      c4_i7 = (int32_T)emlrtIntegerCheckR2012b(c4_d2, &c4_f_emlrtDCI, &c4_b_st);
      chartInstance->c4_Ap[(emlrtDynamicBoundsCheckR2012b(c4_i4, 1, 1266,
        &c4_e_emlrtBCI, &c4_b_st) + 1266 * (emlrtDynamicBoundsCheckR2012b(c4_i7,
        1, 2166, &c4_f_emlrtBCI, &c4_b_st) - 1)) - 1] = false;
    }
  }

  for (c4_e_j = 0; c4_e_j < 2160; c4_e_j++) {
    c4_c_j = 1.0 + (real_T)c4_e_j;
    for (c4_f_i = 0; c4_f_i < 3; c4_f_i++) {
      c4_b_a = c4_c_j;
      c4_b_c = (int32_T)c4_b_a;
      c4_d1 = (real_T)(c4_f_i + 1264);
      c4_i6 = (int32_T)emlrtIntegerCheckR2012b(c4_d1, &c4_g_emlrtDCI, &c4_b_st);
      c4_d3 = (real_T)(c4_b_c + 3);
      c4_i10 = (int32_T)emlrtIntegerCheckR2012b(c4_d3, &c4_h_emlrtDCI, &c4_b_st);
      chartInstance->c4_Ap[(emlrtDynamicBoundsCheckR2012b(c4_i6, 1, 1266,
        &c4_g_emlrtBCI, &c4_b_st) + 1266 * (emlrtDynamicBoundsCheckR2012b(c4_i10,
        1, 2166, &c4_h_emlrtBCI, &c4_b_st) - 1)) - 1] = false;
    }
  }

  for (c4_f_j = 0; c4_f_j < 2160; c4_f_j++) {
    c4_c_j = 1.0 + (real_T)c4_f_j;
    for (c4_g_i = 0; c4_g_i < 1260; c4_g_i++) {
      c4_c_i = 1.0 + (real_T)c4_g_i;
      c4_c_a = c4_c_i;
      c4_c_c = (int32_T)c4_c_a;
      c4_d_a = c4_c_j;
      c4_d_c = (int32_T)c4_d_a;
      c4_i12 = (int32_T)emlrtIntegerCheckR2012b(c4_c_i, &c4_i_emlrtDCI, &c4_b_st);
      c4_i13 = (int32_T)emlrtIntegerCheckR2012b(c4_c_j, &c4_i_emlrtDCI, &c4_b_st);
      c4_d4 = (real_T)(c4_c_c + 3);
      c4_i14 = (int32_T)emlrtIntegerCheckR2012b(c4_d4, &c4_j_emlrtDCI, &c4_b_st);
      c4_d5 = (real_T)(c4_d_c + 3);
      c4_i15 = (int32_T)emlrtIntegerCheckR2012b(c4_d5, &c4_j_emlrtDCI, &c4_b_st);
      chartInstance->c4_Ap[(emlrtDynamicBoundsCheckR2012b(c4_i14, 1, 1266,
        &c4_k_emlrtBCI, &c4_b_st) + 1266 * (emlrtDynamicBoundsCheckR2012b(c4_i15,
        1, 2166, &c4_l_emlrtBCI, &c4_b_st) - 1)) - 1] = c4_A
        [(emlrtDynamicBoundsCheckR2012b(c4_i12, 1, 1260, &c4_i_emlrtBCI,
           &c4_b_st) + 1260 * (emlrtDynamicBoundsCheckR2012b(c4_i13, 1, 2160,
            &c4_j_emlrtBCI, &c4_b_st) - 1)) - 1];
    }
  }

  c4_st.site = &c4_d_emlrtRSI;
  c4_imdilate(chartInstance, chartInstance->c4_Ap, chartInstance->c4_c_bv);
  c4_st.site = &c4_d_emlrtRSI;
  c4_imerode(chartInstance, chartInstance->c4_c_bv, chartInstance->c4_Ap);
  c4_i5 = 0;
  c4_i8 = 0;
  for (c4_i9 = 0; c4_i9 < 2160; c4_i9++) {
    for (c4_i11 = 0; c4_i11 < 1260; c4_i11++) {
      c4_B[c4_i11 + c4_i5] = chartInstance->c4_Ap[(c4_i11 + c4_i8) + 3801];
    }

    c4_i5 += 1260;
    c4_i8 += 1266;
  }
}

static void c4_imdilate(SFc4_image_processing_testInstanceStruct *chartInstance,
  boolean_T c4_A[2742156], boolean_T c4_B[2742156])
{
  real_T c4_asizeT[2];
  real_T c4_nsizeT[2];
  int32_T c4_i;
  int32_T c4_i1;
  (void)chartInstance;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_asizeT[c4_i] = 1266.0 + 900.0 * (real_T)c4_i;
  }

  for (c4_i1 = 0; c4_i1 < 2; c4_i1++) {
    c4_nsizeT[c4_i1] = 5.0;
  }

  dilate_binary_twod_tbb(&c4_A[0], &c4_asizeT[0], 2.0, &c4_bv[0], &c4_nsizeT[0],
    2.0, &c4_B[0]);
}

static void c4_imerode(SFc4_image_processing_testInstanceStruct *chartInstance,
  boolean_T c4_A[2742156], boolean_T c4_B[2742156])
{
  real_T c4_asizeT[2];
  real_T c4_nsizeT[2];
  int32_T c4_i;
  int32_T c4_i1;
  (void)chartInstance;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_asizeT[c4_i] = 1266.0 + 900.0 * (real_T)c4_i;
  }

  for (c4_i1 = 0; c4_i1 < 2; c4_i1++) {
    c4_nsizeT[c4_i1] = 5.0;
  }

  erode_binary_twod_tbb(&c4_A[0], &c4_asizeT[0], 2.0, &c4_bv[0], &c4_nsizeT[0],
                        2.0, &c4_B[0]);
}

static void c4_bwmorph(SFc4_image_processing_testInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, boolean_T c4_bwin[2721600], real_T c4_varargin_1,
  boolean_T c4_b_bw[2721600])
{
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  real_T c4_b_k;
  real_T c4_iter;
  real_T c4_n;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_k;
  boolean_T c4_b_p;
  boolean_T c4_c_p;
  boolean_T c4_exitg1;
  boolean_T c4_exitg2;
  boolean_T c4_p;
  boolean_T c4_x1;
  boolean_T c4_x2;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_k_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_n = c4_varargin_1;
  if (c4_n < 1.0) {
    for (c4_i = 0; c4_i < 2721600; c4_i++) {
      c4_b_bw[c4_i] = c4_bwin[c4_i];
    }
  } else if (c4_n == 1.0) {
    for (c4_i1 = 0; c4_i1 < 2721600; c4_i1++) {
      c4_b_bw[c4_i1] = c4_bwin[c4_i1];
    }

    c4_b_st.site = &c4_l_emlrtRSI;
    c4_b_bwmorphApplyOnce(chartInstance, &c4_b_st, c4_b_bw);
  } else {
    c4_iter = 0.0;
    for (c4_i2 = 0; c4_i2 < 2721600; c4_i2++) {
      c4_b_bw[c4_i2] = c4_bwin[c4_i2];
    }

    c4_exitg1 = false;
    while ((!c4_exitg1) && (c4_iter < c4_n)) {
      for (c4_i3 = 0; c4_i3 < 2721600; c4_i3++) {
        chartInstance->c4_last_aout[c4_i3] = c4_b_bw[c4_i3];
      }

      c4_b_st.site = &c4_m_emlrtRSI;
      c4_b_bwmorphApplyOnce(chartInstance, &c4_b_st, c4_b_bw);
      c4_iter++;
      c4_p = false;
      c4_b_p = true;
      c4_k = 0;
      c4_exitg2 = false;
      while ((!c4_exitg2) && (c4_k < 2721600)) {
        c4_b_k = 1.0 + (real_T)c4_k;
        c4_x1 = chartInstance->c4_last_aout[(int32_T)c4_b_k - 1];
        c4_x2 = c4_b_bw[(int32_T)c4_b_k - 1];
        c4_c_p = ((int32_T)c4_x1 == (int32_T)c4_x2);
        if (!c4_c_p) {
          c4_b_p = false;
          c4_exitg2 = true;
        } else {
          c4_k++;
        }
      }

      if (c4_b_p) {
        c4_p = true;
      }

      if (c4_p) {
        c4_exitg1 = true;
      }
    }
  }
}

static void c4_bwmorphApplyOnce(SFc4_image_processing_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, boolean_T c4_b_bw[2721600], boolean_T
  c4_c_bw[2721600])
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 2721600; c4_i++) {
    c4_c_bw[c4_i] = c4_b_bw[c4_i];
  }

  c4_b_bwmorphApplyOnce(chartInstance, c4_sp, c4_c_bw);
}

static void c4_bwlookup(SFc4_image_processing_testInstanceStruct *chartInstance,
  boolean_T c4_bwin[2721600], boolean_T c4_lut[512], boolean_T c4_B[2721600])
{
  real_T c4_sizeIn[2];
  int32_T c4_i;
  (void)chartInstance;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_sizeIn[c4_i] = 1260.0 + 900.0 * (real_T)c4_i;
  }

  bwlookup_tbb_boolean(&c4_bwin[0], &c4_sizeIn[0], 2.0, &c4_lut[0], 512.0,
                       &c4_B[0]);
}

static void c4_emlrt_marshallIn(SFc4_image_processing_testInstanceStruct
  *chartInstance, const mxArray *c4_c_BW, const char_T *c4_identifier, boolean_T
  c4_y[2721600])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_c_BW), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_c_BW);
}

static void c4_b_emlrt_marshallIn(SFc4_image_processing_testInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T c4_y[2721600])
{
  int32_T c4_i;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), chartInstance->c4_e_bv, 1, 11, 0U,
                1, 0U, 2, 1260, 2160);
  for (c4_i = 0; c4_i < 2721600; c4_i++) {
    c4_y[c4_i] = chartInstance->c4_e_bv[c4_i];
  }

  sf_mex_destroy(&c4_u);
}

static uint8_T c4_c_emlrt_marshallIn(SFc4_image_processing_testInstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_image_processing_test, const
  char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_is_active_c4_image_processing_test), &c4_thisId);
  sf_mex_destroy(&c4_b_is_active_c4_image_processing_test);
  return c4_y;
}

static uint8_T c4_d_emlrt_marshallIn(SFc4_image_processing_testInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_b_u;
  uint8_T c4_y;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b_u, 1, 3, 0U, 0, 0U, 0);
  c4_y = c4_b_u;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static const mxArray *c4_chart_data_browse_helper
  (SFc4_image_processing_testInstanceStruct *chartInstance, int32_T
   c4_ssIdNumber)
{
  const mxArray *c4_mxData = NULL;
  c4_mxData = NULL;
  switch (c4_ssIdNumber) {
   case 4U:
    sf_mex_assign(&c4_mxData, sf_mex_create("mxData", *chartInstance->c4_BW, 11,
      0U, 1U, 0U, 2, 1260, 2160), false);
    break;

   case 5U:
    sf_mex_assign(&c4_mxData, sf_mex_create("mxData", *chartInstance->c4_b_BW,
      11, 0U, 1U, 0U, 2, 1260, 2160), false);
    break;
  }

  return c4_mxData;
}

static void c4_b_bwmorphApplyOnce(SFc4_image_processing_testInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, boolean_T c4_b_bw[2721600])
{
  static real_T c4_b_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c4_d_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c4_f_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c4_h_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c4_j_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c4_l_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c4_n_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c4_p_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static char_T c4_cv[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  static char_T c4_cv1[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  static char_T c4_cv2[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  static char_T c4_cv3[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  static char_T c4_cv4[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  static char_T c4_cv5[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  static char_T c4_cv6[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  static char_T c4_cv7[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  static boolean_T c4_lut1[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, false, true, false, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, false, true, false, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c4_lut2[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, false, false, true, true, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, false, false, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, false, false, true, true, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, false, false, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c4_lut3[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, false, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, false, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c4_lut4[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, false, false, true,
    true, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, false, false, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c4_lut5[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true, true, true,
    true, false, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, true, true, true, true, false, true,
    true, true, true, true, true, true };

  static boolean_T c4_lut6[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, false, false,
    true, true, false, false, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, false, false,
    true, true, false, false, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c4_lut7[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    false, true, false, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    false, true, false, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c4_lut8[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    false, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, false, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    false, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, false, true, true, true, true, true,
    true, true, true, true, true, true };

  emlrtStack c4_b_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_l_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_o_y = NULL;
  const mxArray *c4_p_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_b_i;
  real_T c4_b_k;
  real_T c4_c_i;
  real_T c4_c_x;
  real_T c4_d_k;
  real_T c4_e_x;
  real_T c4_f_k;
  real_T c4_g_x;
  real_T c4_h_k;
  real_T c4_i_x;
  real_T c4_j_k;
  real_T c4_k_x;
  real_T c4_l_k;
  real_T c4_m_x;
  real_T c4_n_k;
  real_T c4_o_x;
  real_T c4_p_k;
  real_T c4_x;
  int32_T c4_c_k;
  int32_T c4_d_i;
  int32_T c4_e_k;
  int32_T c4_g_k;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_k;
  int32_T c4_k;
  int32_T c4_k_k;
  int32_T c4_m_k;
  int32_T c4_o_k;
  boolean_T c4_lut[512];
  boolean_T c4_b;
  boolean_T c4_b_b;
  boolean_T c4_c_b;
  boolean_T c4_d_b;
  boolean_T c4_e_b;
  boolean_T c4_f_b;
  boolean_T c4_g_b;
  boolean_T c4_h_b;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  for (c4_i = 0; c4_i < 8; c4_i++) {
    c4_b_i = 1.0 + (real_T)c4_i;
    c4_st.site = &c4_n_emlrtRSI;
    c4_c_i = c4_b_i;
    c4_b_st.site = &c4_o_emlrtRSI;
    for (c4_k = 0; c4_k < 512; c4_k++) {
      c4_b_k = 1.0 + (real_T)c4_k;
      c4_x = c4_b_x[(int32_T)c4_b_k - 1];
      c4_b = muDoubleScalarIsNaN(c4_x);
      if (c4_b) {
        c4_y = NULL;
        sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                      false);
        c4_b_y = NULL;
        sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c4_b_st, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                    sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c4_b_st, NULL, "message", 1U, 1U, 14, c4_b_y)));
      }
    }

    c4_b_st.site = &c4_p_emlrtRSI;
    for (c4_c_k = 0; c4_c_k < 512; c4_c_k++) {
      c4_d_k = 1.0 + (real_T)c4_c_k;
      c4_c_x = c4_d_x[(int32_T)c4_d_k - 1];
      c4_b_b = muDoubleScalarIsNaN(c4_c_x);
      if (c4_b_b) {
        c4_c_y = NULL;
        sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c4_d_y = NULL;
        sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c4_b_st, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_c_y, 14,
                    sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c4_b_st, NULL, "message", 1U, 1U, 14, c4_d_y)));
      }
    }

    c4_b_st.site = &c4_q_emlrtRSI;
    for (c4_e_k = 0; c4_e_k < 512; c4_e_k++) {
      c4_f_k = 1.0 + (real_T)c4_e_k;
      c4_e_x = c4_f_x[(int32_T)c4_f_k - 1];
      c4_c_b = muDoubleScalarIsNaN(c4_e_x);
      if (c4_c_b) {
        c4_e_y = NULL;
        sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c4_f_y = NULL;
        sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c4_b_st, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                    sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c4_b_st, NULL, "message", 1U, 1U, 14, c4_f_y)));
      }
    }

    c4_b_st.site = &c4_r_emlrtRSI;
    for (c4_g_k = 0; c4_g_k < 512; c4_g_k++) {
      c4_h_k = 1.0 + (real_T)c4_g_k;
      c4_g_x = c4_h_x[(int32_T)c4_h_k - 1];
      c4_d_b = muDoubleScalarIsNaN(c4_g_x);
      if (c4_d_b) {
        c4_g_y = NULL;
        sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c4_h_y = NULL;
        sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c4_b_st, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                    sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c4_b_st, NULL, "message", 1U, 1U, 14, c4_h_y)));
      }
    }

    c4_b_st.site = &c4_s_emlrtRSI;
    for (c4_i_k = 0; c4_i_k < 512; c4_i_k++) {
      c4_j_k = 1.0 + (real_T)c4_i_k;
      c4_i_x = c4_j_x[(int32_T)c4_j_k - 1];
      c4_e_b = muDoubleScalarIsNaN(c4_i_x);
      if (c4_e_b) {
        c4_i_y = NULL;
        sf_mex_assign(&c4_i_y, sf_mex_create("y", c4_cv4, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c4_j_y = NULL;
        sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_cv4, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c4_b_st, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_i_y, 14,
                    sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c4_b_st, NULL, "message", 1U, 1U, 14, c4_j_y)));
      }
    }

    c4_b_st.site = &c4_t_emlrtRSI;
    for (c4_k_k = 0; c4_k_k < 512; c4_k_k++) {
      c4_l_k = 1.0 + (real_T)c4_k_k;
      c4_k_x = c4_l_x[(int32_T)c4_l_k - 1];
      c4_f_b = muDoubleScalarIsNaN(c4_k_x);
      if (c4_f_b) {
        c4_k_y = NULL;
        sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c4_l_y = NULL;
        sf_mex_assign(&c4_l_y, sf_mex_create("y", c4_cv5, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c4_b_st, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_k_y, 14,
                    sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c4_b_st, NULL, "message", 1U, 1U, 14, c4_l_y)));
      }
    }

    c4_b_st.site = &c4_u_emlrtRSI;
    for (c4_m_k = 0; c4_m_k < 512; c4_m_k++) {
      c4_n_k = 1.0 + (real_T)c4_m_k;
      c4_m_x = c4_n_x[(int32_T)c4_n_k - 1];
      c4_g_b = muDoubleScalarIsNaN(c4_m_x);
      if (c4_g_b) {
        c4_m_y = NULL;
        sf_mex_assign(&c4_m_y, sf_mex_create("y", c4_cv6, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c4_n_y = NULL;
        sf_mex_assign(&c4_n_y, sf_mex_create("y", c4_cv6, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c4_b_st, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_m_y, 14,
                    sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c4_b_st, NULL, "message", 1U, 1U, 14, c4_n_y)));
      }
    }

    c4_b_st.site = &c4_v_emlrtRSI;
    for (c4_o_k = 0; c4_o_k < 512; c4_o_k++) {
      c4_p_k = 1.0 + (real_T)c4_o_k;
      c4_o_x = c4_p_x[(int32_T)c4_p_k - 1];
      c4_h_b = muDoubleScalarIsNaN(c4_o_x);
      if (c4_h_b) {
        c4_o_y = NULL;
        sf_mex_assign(&c4_o_y, sf_mex_create("y", c4_cv7, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c4_p_y = NULL;
        sf_mex_assign(&c4_p_y, sf_mex_create("y", c4_cv7, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c4_b_st, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_o_y, 14,
                    sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c4_b_st, NULL, "message", 1U, 1U, 14, c4_p_y)));
      }
    }

    switch ((int32_T)emlrtIntegerCheckR2012b(c4_c_i, &c4_k_emlrtDCI, &c4_st)) {
     case 1:
      for (c4_i1 = 0; c4_i1 < 512; c4_i1++) {
        c4_lut[c4_i1] = c4_lut1[c4_i1];
      }
      break;

     case 2:
      for (c4_i2 = 0; c4_i2 < 512; c4_i2++) {
        c4_lut[c4_i2] = c4_lut2[c4_i2];
      }
      break;

     case 3:
      for (c4_i3 = 0; c4_i3 < 512; c4_i3++) {
        c4_lut[c4_i3] = c4_lut3[c4_i3];
      }
      break;

     case 4:
      for (c4_i4 = 0; c4_i4 < 512; c4_i4++) {
        c4_lut[c4_i4] = c4_lut4[c4_i4];
      }
      break;

     case 5:
      for (c4_i5 = 0; c4_i5 < 512; c4_i5++) {
        c4_lut[c4_i5] = c4_lut5[c4_i5];
      }
      break;

     case 6:
      for (c4_i6 = 0; c4_i6 < 512; c4_i6++) {
        c4_lut[c4_i6] = c4_lut6[c4_i6];
      }
      break;

     case 7:
      for (c4_i7 = 0; c4_i7 < 512; c4_i7++) {
        c4_lut[c4_i7] = c4_lut7[c4_i7];
      }
      break;

     case 8:
      for (c4_i8 = 0; c4_i8 < 512; c4_i8++) {
        c4_lut[c4_i8] = c4_lut8[c4_i8];
      }
      break;

     default:
      for (c4_d_i = 0; c4_d_i < 512; c4_d_i++) {
        c4_lut[c4_d_i] = c4_lut1[c4_d_i];
      }
      break;
    }

    c4_st.site = &c4_n_emlrtRSI;
    for (c4_i9 = 0; c4_i9 < 2721600; c4_i9++) {
      chartInstance->c4_bw[c4_i9] = c4_b_bw[c4_i9];
    }

    c4_bwlookup(chartInstance, chartInstance->c4_bw, c4_lut, c4_b_bw);
  }
}

static void init_dsm_address_info(SFc4_image_processing_testInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc4_image_processing_testInstanceStruct
  *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_BW = (boolean_T (*)[2721600])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c4_b_BW = (boolean_T (*)[2721600])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_image_processing_test_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(806685381U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2688280719U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3469279426U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4059449860U);
}

mxArray *sf_c4_image_processing_test_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Morphop_binary_tbb_Buildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.Bwlookup_tbb_Buildable"));
  return(mxcell3p);
}

mxArray *sf_c4_image_processing_test_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("dilate_binary_twod_tbb");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c4_image_processing_test_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_image_processing_test(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPhDBxMDABqQ4IEwwYIXyGaFijHBxFri4AhCXVBakgsSLi5I9U4B0XmIumJ9YWuG"
    "Zl5YPNt+CAWE+GxbzGZHM54SKQ8AHe8r0iziA9Bsg6Wch4D8BIM8pHBou0PAh334FB8r0Q+yPIO"
    "B+JRT3Q/iZxfGJySWZZanxySbxmbmJ6anxBUX5yanFxZl56fElqcUlCPNBAACLjRzJ"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_image_processing_test_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "si8lC8uIoVxR4kME8UmZWPG";
}

static void sf_opaque_initialize_c4_image_processing_test(void *chartInstanceVar)
{
  initialize_params_c4_image_processing_test
    ((SFc4_image_processing_testInstanceStruct*) chartInstanceVar);
  initialize_c4_image_processing_test((SFc4_image_processing_testInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c4_image_processing_test(void *chartInstanceVar)
{
  enable_c4_image_processing_test((SFc4_image_processing_testInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c4_image_processing_test(void *chartInstanceVar)
{
  disable_c4_image_processing_test((SFc4_image_processing_testInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c4_image_processing_test(void *chartInstanceVar)
{
  sf_gateway_c4_image_processing_test((SFc4_image_processing_testInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_image_processing_test(SimStruct*
  S)
{
  return get_sim_state_c4_image_processing_test
    ((SFc4_image_processing_testInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_image_processing_test(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c4_image_processing_test
    ((SFc4_image_processing_testInstanceStruct*)sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c4_image_processing_test(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_image_processing_testInstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_image_processing_test_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_image_processing_test
      ((SFc4_image_processing_testInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_image_processing_test(void *chartInstanceVar)
{
  mdl_start_c4_image_processing_test((SFc4_image_processing_testInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c4_image_processing_test(void
  *chartInstanceVar)
{
  mdl_terminate_c4_image_processing_test
    ((SFc4_image_processing_testInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_image_processing_test
    ((SFc4_image_processing_testInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_image_processing_test(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_image_processing_test
      ((SFc4_image_processing_testInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc4_image_processing_test
      ((SFc4_image_processing_testInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_image_processing_test_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [19] = {
    "eNrtV09v00gUd6MuWiQWldVKXJBAXOC4Bw45QYmTQERDK5y2iEs0Hb/Eo4xnzPxJW06c+AycuHJ",
    "b7YEPw4EvsNrLfgTe2G4aHNshRFTsai257ti/9+a993t/Jt5Gr+/hdRXvt7963iV8/ox3w8uun/",
    "L1xtydvd/07uTrDygkbLxHFIm1V3sJEsMz0JJbw6ToiZEshTExAgWCIjaRylRp0yy2nIlJ1wrq9",
    "OnDiNEoiKTlYQtlSbgr+ClqS6zZQz1tpoCaLkBoIiXtOOpyMp5ZrMyxHwGdaBvXuaDBBDZxZum+",
    "5YYlHDonQHtCG4IW63PbAkMM+Oak0k3nqQ7OgDJOOCOi1NuI6AASDLCB/STEv7vWoFNFGI2IMi2",
    "IyBT0DpukOqWAok6m8cMRE8RIxQjvxNx3gou27XG0py9D4DUBQdtaCsgkkUyYav6DLnraEeSIQx",
    "uO7LhaWwAvrSP/gMExqMq4jXw5BUXGsCsqN00D0jlJ2ZplySLMsBgOiHpIkT8NYWX2YubogCBPM",
    "ECJKhikTvb0QLEphrdSm417LjOXlYyNM7L1MliqrTOFOhZm2rpU+IRzXQkbyGQHpsBTrW1iSD0s",
    "01qO05qFA4kBduldXQ1WMCQ+h/lShKyUrmkBkPadp9hYvkRSq42MfUze9s7O4udFWE8YUCNCoaw",
    "LKMI0YMzS8FZrC5l23CMQrTKpeWXgLEOWoTw9sqJ9LNUEY1LTRM5dcIxWAmM9Ri6xEvY1Fk0dzH",
    "G5DEcJjSB0DYZx6GPZILYkJtq1todYd1NmTtugqWJJCasWqw7bUMcl1GkC+2Ii5LHoKhkHeY/PW",
    "MDOgD08Rg4GaY0JiqqYNtgu2Pn2IQAmJVGCiXEL25w67aKRpYy5ufe7dz73rnzF3DuTKz7vzunZ",
    "KNHjzT2L+15u1O/bwP82crntOblfCvtsFuQcbgvvJ0/fJc//fvXH62vNv958ev9mnf3/bKx2Tri",
    "ar2+cNeRZgU0X8tphH8/ZtVmi//qc/q18rVmT+03bkwcnz+5N+p3mfvzicO9Rxs8SexsFe8/e33",
    "KTAbMxzWNFe2F+gHFrYrOx7vQ35+y9tCQel/P32fXPg/Xkf9su8ri5xL8tXLUOv8zbb9//1vZ68",
    "tn+z5fYf7vA9+10/g+J6yowpPeGLMbmM0yUdOMba35oQJvF+vzWfF9VzrtguX+Lnf/H5fv79zXz",
    "66LlvAuWW9e/Vef4j4avmwdeAb/1A/ux7vnqe+M/equdg27m6/uzn0R+xHhYcjrOP+MZdlT29T+",
    "Sp6vgPwNSG8GJ",
    ""
  };

  static char newstr [1289] = "";
  newstr[0] = '\0';
  for (i = 0; i < 19; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_image_processing_test(SimStruct *S)
{
  const char* newstr = sf_c4_image_processing_test_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1889422923U));
  ssSetChecksum1(S,(2927291224U));
  ssSetChecksum2(S,(3912765824U));
  ssSetChecksum3(S,(2259147910U));
}

static void mdlRTW_c4_image_processing_test(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_image_processing_test(SimStruct *S)
{
  SFc4_image_processing_testInstanceStruct *chartInstance;
  chartInstance = (SFc4_image_processing_testInstanceStruct *)utMalloc(sizeof
    (SFc4_image_processing_testInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc4_image_processing_testInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_image_processing_test;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_image_processing_test;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c4_image_processing_test;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c4_image_processing_test;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_image_processing_test;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c4_image_processing_test;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_image_processing_test;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_image_processing_test;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_image_processing_test;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_image_processing_test;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_image_processing_test;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_image_processing_test;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c4_JITStateAnimation,
    chartInstance->c4_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c4_image_processing_test(chartInstance);
}

void c4_image_processing_test_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_image_processing_test(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_image_processing_test(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_image_processing_test(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_image_processing_test_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
