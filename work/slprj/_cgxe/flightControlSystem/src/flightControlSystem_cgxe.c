/* Include files */

#include "flightControlSystem_cgxe.h"
#include "m_6vpsKfybcOLihhVDGpg0DF.h"

unsigned int cgxe_flightControlSystem_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 3438062365 &&
      ssGetChecksum1(S) == 3991511897 &&
      ssGetChecksum2(S) == 1424403550 &&
      ssGetChecksum3(S) == 4248616961) {
    method_dispatcher_6vpsKfybcOLihhVDGpg0DF(S, method, data);
    return 1;
  }

  return 0;
}
