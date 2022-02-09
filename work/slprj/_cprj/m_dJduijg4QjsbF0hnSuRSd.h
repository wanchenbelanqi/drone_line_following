#ifndef __dJduijg4QjsbF0hnSuRSd_h__
#define __dJduijg4QjsbF0hnSuRSd_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef typedef_InstanceStruct_dJduijg4QjsbF0hnSuRSd
#define typedef_InstanceStruct_dJduijg4QjsbF0hnSuRSd

typedef struct {
  SimStruct *S;
  void *emlrtRootTLSGlobal;
  cv_Mat *u0;
  vector_vector_cv_Point *b_y0;
} InstanceStruct_dJduijg4QjsbF0hnSuRSd;

#endif                                 /*typedef_InstanceStruct_dJduijg4QjsbF0hnSuRSd*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_dJduijg4QjsbF0hnSuRSd(SimStruct *S, int_T method,
  void* data);

#endif
