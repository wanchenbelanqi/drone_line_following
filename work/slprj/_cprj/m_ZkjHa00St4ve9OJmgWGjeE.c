/* Include files */

#include "modelInterface.h"
#include "m_ZkjHa00St4ve9OJmgWGjeE.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE
  *moduleInstance);
static void init_simulink_io_address(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *moduleInstance)
{
  init_simulink_io_address(moduleInstance);
  cgxertSetSimStateCompliance(moduleInstance->S, 2);
}

static void cgxe_mdl_initialize(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_outputs(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE
  *moduleInstance)
{
  slwrap_detect_contour_simulink_uzHhFfFO3lSNI0u26KogU(*moduleInstance->u0,
    *moduleInstance->b_y0);
}

static void cgxe_mdl_update(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void init_simulink_io_address(InstanceStruct_ZkjHa00St4ve9OJmgWGjeE
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (cv_Mat *)cgxertGetInputPortSignal(moduleInstance->S, 0);
  moduleInstance->b_y0 = (vector_vector_cv_Point *)cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_ZkjHa00St4ve9OJmgWGjeE(SimStruct *S, int_T tid)
{
  InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *moduleInstance =
    (InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_ZkjHa00St4ve9OJmgWGjeE(SimStruct *S)
{
  InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *moduleInstance =
    (InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_ZkjHa00St4ve9OJmgWGjeE(SimStruct *S, int_T tid)
{
  InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *moduleInstance =
    (InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_ZkjHa00St4ve9OJmgWGjeE(SimStruct *S)
{
  InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *moduleInstance =
    (InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_ZkjHa00St4ve9OJmgWGjeE(SimStruct *S)
{
  InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *moduleInstance =
    (InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_ZkjHa00St4ve9OJmgWGjeE(SimStruct *S)
{
  InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *moduleInstance =
    (InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_ZkjHa00St4ve9OJmgWGjeE(SimStruct *S)
{
  InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *moduleInstance =
    (InstanceStruct_ZkjHa00St4ve9OJmgWGjeE *)calloc(1, sizeof
    (InstanceStruct_ZkjHa00St4ve9OJmgWGjeE));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_ZkjHa00St4ve9OJmgWGjeE);
  ssSetmdlInitializeConditions(S, mdlInitialize_ZkjHa00St4ve9OJmgWGjeE);
  ssSetmdlUpdate(S, mdlUpdate_ZkjHa00St4ve9OJmgWGjeE);
  ssSetmdlTerminate(S, mdlTerminate_ZkjHa00St4ve9OJmgWGjeE);
  ssSetmdlEnable(S, mdlEnable_ZkjHa00St4ve9OJmgWGjeE);
  ssSetmdlDisable(S, mdlDisable_ZkjHa00St4ve9OJmgWGjeE);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_ZkjHa00St4ve9OJmgWGjeE(SimStruct *S)
{
}

void method_dispatcher_ZkjHa00St4ve9OJmgWGjeE(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_ZkjHa00St4ve9OJmgWGjeE(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_ZkjHa00St4ve9OJmgWGjeE(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: ZkjHa00St4ve9OJmgWGjeE.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_ZkjHa00St4ve9OJmgWGjeE_BuildInfoUpdate(void)
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

mxArray *cgxe_ZkjHa00St4ve9OJmgWGjeE_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("incompatibleVar");
  mxArray* incompatibleSymbol = mxCreateString("Outputs: u0");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
