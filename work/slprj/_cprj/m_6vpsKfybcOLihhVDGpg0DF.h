#ifndef __6vpsKfybcOLihhVDGpg0DF_h__
#define __6vpsKfybcOLihhVDGpg0DF_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef typedef_InstanceStruct_6vpsKfybcOLihhVDGpg0DF
#define typedef_InstanceStruct_6vpsKfybcOLihhVDGpg0DF

typedef struct {
  SimStruct *S;
  void *emlrtRootTLSGlobal;
  cv_Mat *u0;
  vector_vector_cv_Point *b_y0;
} InstanceStruct_6vpsKfybcOLihhVDGpg0DF;

#endif                                 /*typedef_InstanceStruct_6vpsKfybcOLihhVDGpg0DF*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_6vpsKfybcOLihhVDGpg0DF(SimStruct *S, int_T method,
  void* data);

#endif
