#ifndef __customcode_uzHhFfFO3lSNI0u26KogU_h__
#define __customcode_uzHhFfFO3lSNI0u26KogU_h__

/* Include files */
#include "mex.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "tmwtypes.h"


/* Helper definitions for DLL support */
#if defined _WIN32 
  #define DLL_EXPORT_CC __declspec(dllexport)
#else
  #if __GNUC__ >= 4
    #define DLL_EXPORT_CC __attribute__ ((visibility ("default")))
  #else
    #define DLL_EXPORT_CC
  #endif
#endif
/* Custom Code from Simulation Target dialog */
#include  "detect_contour_simulink_Wrapper_sim.hpp"
#include  "CVDeepCopyHelper.hpp"

/* Function Declarations */
#ifdef __cplusplus
extern "C" {
#endif
#define customcode_uzHhFfFO3lSNI0u26KogU_initializer()

#define customcode_uzHhFfFO3lSNI0u26KogU_terminator()
#ifdef __cplusplus
}
#endif

#endif

