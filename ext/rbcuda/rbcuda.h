#ifndef RUBY_CUDA_H
  #define RUBY_CUDA_H
#endif


typedef struct DEV_PTR
{
  double* carray;
}dev_ptr;

typedef struct DEV_PTR_INT
{
  int* carray;
}dev_ptr_int;

typedef struct CONTEXT_PTR
{
  CUcontext ctx;
}ctx_ptr;

typedef struct MODULE_PTR
{
  CUmodule module;
}mod_ptr;

typedef struct FUNCTION_PTR
{
  CUfunction function;
}function_ptr;

typedef struct DEVICE_PTR
{
  CUdevice device;
}device_ptr;

typedef struct TEXTURE_PTR
{
  CUtexref texture;
}texture_ptr;

typedef struct SURFACE_PTR
{
  CUsurfref surface;
}surface_ptr;

typedef struct LINK_STATE_PTR
{
  CUlinkState link_state;
}link_state_ptr;

typedef struct CUARRAY_PTR
{
  CUarray array;
}cuarray_ptr;

typedef struct CUSTREAM_PTR
{
  CUstream stream;
}custream_ptr;

typedef struct CUDASTREAM_PTR
{
  cudaStream_t stream;
}cudastream_ptr;


typedef struct  RB_CU_EVENT
{
  CUevent event;
}cu_event;

typedef struct CUDA_IPC_EVENT_HANDLER
{
  cudaIpcEventHandle_t handle;
}cuda_ipc_event_handler;

typedef struct  RB_CU_IPC_EVENT_HANDLER
{
  CUipcEventHandle handle;
}ipc_event_handler;

typedef struct  CUDA_IPC_MEM_HANDLER
{
  cudaIpcMemHandle_t handle;
}cuda_ipc_mem_handler;

typedef struct  RB_CU_IPC_MEM_HANDLER
{
  CUipcMemHandle handle;
}ipc_mem_handler;

typedef struct RB_CUBLAS_HANDLE
{
  cublasHandle_t handle;
}rb_cublas_handle;

typedef struct RB_CUBLASXT_HANDLE
{
  cublasXtHandle_t handle;
}rb_cublasxt_handle;

typedef struct RB_CUSOLVER_HANDLE
{
  cusolverDnHandle_t handle;
}rb_cusolver_handle;

typedef struct RB_CURAND_GENERATOR{
  curandGenerator_t generator;
}rb_curand_generator;

typedef struct RB_CURAND_DISCRETE_DISTRIBUTION{
  curandDiscreteDistribution_t distribution;
}rb_curand_discrete_distribution;

// struct __device_builtin__ cudaFuncAttributes
// {
//   size_t sharedSizeBytes;
//   size_t constSizeBytes;
//   size_t localSizeBytes;
//   int maxThreadsPerBlock;
//   int numRegs;
//   int ptxVersion;
//   int binaryVersion;
//   int cacheModeCA;
// }

#ifndef HAVE_RB_ARRAY_CONST_PTR
static inline const VALUE *
rb_array_const_ptr(VALUE a)
{
  return FIX_CONST_VALUE_PTR((RBASIC(a)->flags & RARRAY_EMBED_FLAG) ?
    RARRAY(a)->as.ary : RARRAY(a)->as.heap.ptr);
}
#endif

#ifndef RARRAY_CONST_PTR
# define RARRAY_CONST_PTR(a) rb_array_const_ptr(a)
#endif

#ifndef RARRAY_AREF
# define RARRAY_AREF(a, i) (RARRAY_CONST_PTR(a)[i])
#endif

/*
 * Functions
 */

#ifdef __cplusplus
typedef VALUE (*METHOD)(...);
//}; // end of namespace nm

// Interfaces

#endif


#ifdef __cplusplus
extern "C" {
#endif

  void Init_rbcuda();

#ifdef __cplusplus
}
#endif
