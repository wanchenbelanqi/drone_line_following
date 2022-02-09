# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL  = flightControlSystem
TARGET = cgxe
MODULE_SRCS 	= m_6vpsKfybcOLihhVDGpg0DF.c
MODEL_SRC	= flightControlSystem_cgxe.c
MODEL_REG = flightControlSystem_cgxe_registry.c
MAKEFILE    = flightControlSystem_cgxe.mak
MATLAB_ROOT	= D:\software\MATLAB\R2020b
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------


USER_INCLUDES   =  /I "C:\Users\LIWAN\Desktop\sy15\rendu\parrot_gettingstarted\opencv_test_project\project\work\slprj\_cgxe\flightcontrolsystem\src" /I "C:\Users\LIWAN\Desktop\sy15\rendu\parrot_gettingstarted\opencv_test_project" /I "C:\Users\LIWAN\Desktop\sy15\rendu\parrot_gettingstarted\opencv_test_project\project\controller" /I "C:\Users\LIWAN\Desktop\sy15\rendu\parrot_gettingstarted\OpenCV_test_project\project\work\slprj\_cprj"

MLSL_INCLUDES     = \
    /I "D:\software\MATLAB\R2020b\extern\include" \
    /I "D:\software\MATLAB\R2020b\simulink\include" \
    /I "D:\software\MATLAB\R2020b\rtw\c\src"
COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   =  /I "C:\Users\LIWAN\Desktop\sy15\rendu\parrot_gettingstarted\OpenCV_test_project\project\work\slprj\_cgxe\flightControlSystem\src" /I "C:\Users\LIWAN\Desktop\sy15\rendu\parrot_gettingstarted\OpenCV_test_project\project\work" /I "C:\Users\LIWAN\Desktop\sy15\rendu\parrot_gettingstarted\OpenCV_test_project\project\work\slprj\_slcc\uzHhFfFO3lSNI0u26KogU" /I "C:\programdata\MATLAB\supportpackages\R2020b\toolbox\simulink\supportpackages\simulinkopencv\converterblockset" /I "C:\Users\LIWAN\Desktop\sy15\rendu\parrot_gettingstarted\opencv_test_project\project\work" /I "D:\software\MATLAB\R2020b\toolbox\vision\builtins\src\ocvcg\opencv\include"
INCLUDE_PATH = $(MLSL_INCLUDES) $(USER_INCLUDES) $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"
CFLAGS = /c /Zp8 /GR /w /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMX_COMPAT_64 /DMATLAB_MEXCMD_RELEASE=R2018a /DMATLAB_MEX_FILE /nologo /MD   
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction /export:mexfilerequiredapiversion  
#----------------------------- Source Files -----------------------------------

USER_OBJS =

AUX_SRCS = D:\software\MATLAB\R2020b\extern\version\c_mexapi_version.c  

REQ_SRCS  = $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS) $(AUX_SRCS)
REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_OBJS) $(AUX_ABS_OBJS)
OBJLIST_FILE = flightControlSystem_cgxe.mol
TMWLIB = "D:\software\MATLAB\R2020b\extern\lib\win64\microsoft\libmx.lib" "D:\software\MATLAB\R2020b\extern\lib\win64\microsoft\libmex.lib" "D:\software\MATLAB\R2020b\extern\lib\win64\microsoft\libmat.lib" "D:\software\MATLAB\R2020b\extern\lib\win64\microsoft\libfixedpoint.lib" "D:\software\MATLAB\R2020b\extern\lib\win64\microsoft\libut.lib" "D:\software\MATLAB\R2020b\extern\lib\win64\microsoft\libmwmathutil.lib" "D:\software\MATLAB\R2020b\extern\lib\win64\microsoft\libemlrt.lib" "D:\software\MATLAB\R2020b\extern\lib\win64\microsoft\libmwcgxert.lib" "D:\software\MATLAB\R2020b\extern\lib\win64\microsoft\libmwslexec_simbridge.lib" "D:\software\MATLAB\R2020b\extern\lib\win64\microsoft\libmwslccrt.lib" "D:\software\MATLAB\R2020b\lib\win64\libmwipp.lib" "D:\software\MATLAB\R2020b\extern\lib\win64\microsoft\libcovrt.lib" "D:\software\MATLAB\R2020b\extern\lib\win64\microsoft\libmwsl_sfcn_cov_bridge.lib" 
THIRD_PARTY_LIBS = "C:\Users\LIWAN\Desktop\sy15\rendu\parrot_gettingstarted\OpenCV_test_project\project\work\slprj\_slcc\uzHhFfFO3lSNI0u26KogU\uzHhFfFO3lSNI0u26KogU_cclib.lib" 

#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MODEL)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
all : $(MEX_FILE_NAME) 


$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS)
	@echo ### Linking ...
	$(LD) $(LDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map" $(TMWLIB) $(THIRD_PARTY_LIBS) @$(OBJLIST_FILE)
     mt -outputresource:"$(MEX_FILE_NAME);2" -manifest "$(MEX_FILE_NAME).manifest"
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

