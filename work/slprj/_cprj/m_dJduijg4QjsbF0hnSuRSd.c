/* Include files */

#include "modelInterface.h"
#include "m_dJduijg4QjsbF0hnSuRSd.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_dJduijg4QjsbF0hnSuRSd *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_dJduijg4QjsbF0hnSuRSd
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_dJduijg4QjsbF0hnSuRSd
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_dJduijg4QjsbF0hnSuRSd *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_dJduijg4QjsbF0hnSuRSd *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_dJduijg4QjsbF0hnSuRSd
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_dJduijg4QjsbF0hnSuRSd
  *moduleInstance);
static void init_simulink_io_address(InstanceStruct_dJduijg4QjsbF0hnSuRSd
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_dJduijg4QjsbF0hnSuRSd *moduleInstance)
{
  init_simulink_io_address(moduleInstance);
  cgxertSetSimStateCompliance(moduleInstance->S, 2);
}

static void cgxe_mdl_initialize(InstanceStruct_dJduijg4QjsbF0hnSuRSd
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_outputs(InstanceStruct_dJduijg4QjsbF0hnSuRSd
  *moduleInstance)
{
  slwrap_detect_contour_simulink_iBSF3GmFccquvMEU5euO5E(*moduleInstance->u0,
    *moduleInstance->b_y0);
}

static void cgxe_mdl_update(InstanceStruct_dJduijg4QjsbF0hnSuRSd *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_dJduijg4QjsbF0hnSuRSd *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_dJduijg4QjsbF0hnSuRSd
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_dJduijg4QjsbF0hnSuRSd
  *moduleInstance)
{
  (void)moduleInstance;
}

static void init_simulink_io_address(InstanceStruct_dJduijg4QjsbF0hnSuRSd
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (cv_Mat *)cgxertGetInputPortSignal(moduleInstance->S, 0);
  moduleInstance->b_y0 = (vector_vector_cv_Point *)cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_dJduijg4QjsbF0hnSuRSd(SimStruct *S, int_T tid)
{
  InstanceStruct_dJduijg4QjsbF0hnSuRSd *moduleInstance =
    (InstanceStruct_dJduijg4QjsbF0hnSuRSd *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_dJduijg4QjsbF0hnSuRSd(SimStruct *S)
{
  InstanceStruct_dJduijg4QjsbF0hnSuRSd *moduleInstance =
    (InstanceStruct_dJduijg4QjsbF0hnSuRSd *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_dJduijg4QjsbF0hnSuRSd(SimStruct *S, int_T tid)
{
  InstanceStruct_dJduijg4QjsbF0hnSuRSd *moduleInstance =
    (InstanceStruct_dJduijg4QjsbF0hnSuRSd *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_dJduijg4QjsbF0hnSuRSd(SimStruct *S)
{
  InstanceStruct_dJduijg4QjsbF0hnSuRSd *moduleInstance =
    (InstanceStruct_dJduijg4QjsbF0hnSuRSd *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_dJduijg4QjsbF0hnSuRSd(SimStruct *S)
{
  InstanceStruct_dJduijg4QjsbF0hnSuRSd *moduleInstance =
    (InstanceStruct_dJduijg4QjsbF0hnSuRSd *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_dJduijg4QjsbF0hnSuRSd(SimStruct *S)
{
  InstanceStruct_dJduijg4QjsbF0hnSuRSd *moduleInstance =
    (InstanceStruct_dJduijg4QjsbF0hnSuRSd *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_dJduijg4QjsbF0hnSuRSd(SimStruct *S)
{
  InstanceStruct_dJduijg4QjsbF0hnSuRSd *moduleInstance =
    (InstanceStruct_dJduijg4QjsbF0hnSuRSd *)calloc(1, sizeof
    (InstanceStruct_dJduijg4QjsbF0hnSuRSd));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_dJduijg4QjsbF0hnSuRSd);
  ssSetmdlInitializeConditions(S, mdlInitialize_dJduijg4QjsbF0hnSuRSd);
  ssSetmdlUpdate(S, mdlUpdate_dJduijg4QjsbF0hnSuRSd);
  ssSetmdlTerminate(S, mdlTerminate_dJduijg4QjsbF0hnSuRSd);
  ssSetmdlEnable(S, mdlEnable_dJduijg4QjsbF0hnSuRSd);
  ssSetmdlDisable(S, mdlDisable_dJduijg4QjsbF0hnSuRSd);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_dJduijg4QjsbF0hnSuRSd(SimStruct *S)
{
}

void method_dispatcher_dJduijg4QjsbF0hnSuRSd(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_dJduijg4QjsbF0hnSuRSd(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_dJduijg4QjsbF0hnSuRSd(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: dJduijg4QjsbF0hnSuRSd.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_dJduijg4QjsbF0hnSuRSd_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  double * pointer;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateDoubleMatrix(0,0, mxREAL);
  pointer = mxGetPr(elem_1);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_2 = mxCreateDoubleMatrix(0,0, mxREAL);
  pointer = mxGetPr(elem_2);
  mxSetCell(mxBIArgs,1,elem_2);
  elem_3 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_3);
  return mxBIArgs;
}

mxArray *cgxe_dJduijg4QjsbF0hnSuRSd_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("incompatibleVar");
  mxArray* incompatibleSymbol = mxCreateString("Outputs: u0");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
