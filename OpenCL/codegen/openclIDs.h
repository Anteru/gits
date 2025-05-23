// ===================== begin_copyright_notice ============================
//
// Copyright (C) 2023-2025 Intel Corporation
//
// SPDX-License-Identifier: MIT
//
// ===================== end_copyright_notice ==============================

// clang-format off
ID_CL_GET_PLATFORM_IDS = ID_FUNCTION_BEGIN,
ID_CL_GET_PLATFORM_INFO,
ID_CL_GET_DEVICE_IDS,
ID_CL_GET_DEVICE_INFO,
ID_CL_CREATE_SUB_DEVICES_EXT,
ID_CL_RETAIN_DEVICE_EXT,
ID_CL_RELEASE_DEVICE_EXT,
ID_CL_CREATE_CONTEXT,
ID_CL_CREATE_CONTEXT_FROM_TYPE,
ID_CL_RETAIN_CONTEXT,
ID_CL_RELEASE_CONTEXT,
ID_CL_GET_CONTEXT_INFO,
ID_CL_CREATE_COMMAND_QUEUE,
ID_CL_RETAIN_COMMAND_QUEUE,
ID_CL_RELEASE_COMMAND_QUEUE,
ID_CL_GET_COMMAND_QUEUE_INFO,
ID_CL_SET_COMMAND_QUEUE_PROPERTY,
ID_CL_CREATE_BUFFER,
ID_CL_CREATE_IMAGE2D,
ID_CL_CREATE_IMAGE3D,
ID_CL_RETAIN_MEM_OBJECT,
ID_CL_RELEASE_MEM_OBJECT,
ID_CL_GET_SUPPORTED_IMAGE_FORMATS,
ID_CL_GET_MEM_OBJECT_INFO,
ID_CL_GET_IMAGE_INFO,
ID_CL_CREATE_SAMPLER,
ID_CL_RETAIN_SAMPLER,
ID_CL_RELEASE_SAMPLER,
ID_CL_GET_SAMPLER_INFO,
ID_CL_CREATE_PROGRAM_WITH_SOURCE,
ID_CL_CREATE_PROGRAM_WITH_BINARY,
ID_CL_RETAIN_PROGRAM,
ID_CL_RELEASE_PROGRAM,
ID_CL_BUILD_PROGRAM,
ID_CL_UNLOAD_COMPILER,
ID_CL_GET_PROGRAM_INFO,
ID_CL_GET_PROGRAM_BUILD_INFO,
ID_CL_CREATE_KERNEL,
ID_CL_CREATE_KERNELS_IN_PROGRAM,
ID_CL_RETAIN_KERNEL,
ID_CL_RELEASE_KERNEL,
ID_CL_SET_KERNEL_ARG,
ID_CL_GET_KERNEL_INFO,
ID_CL_GET_KERNEL_WORK_GROUP_INFO,
ID_CL_WAIT_FOR_EVENTS,
ID_CL_GET_EVENT_INFO,
ID_CL_RETAIN_EVENT,
ID_CL_RELEASE_EVENT,
ID_CL_GET_EVENT_PROFILING_INFO,
ID_CL_FLUSH,
ID_CL_FINISH,
ID_CL_ENQUEUE_READ_BUFFER,
ID_CL_ENQUEUE_WRITE_BUFFER,
ID_CL_ENQUEUE_COPY_BUFFER,
ID_CL_ENQUEUE_READ_IMAGE,
ID_CL_ENQUEUE_WRITE_IMAGE,
ID_CL_ENQUEUE_COPY_IMAGE,
ID_CL_ENQUEUE_COPY_IMAGE_TO_BUFFER,
ID_CL_ENQUEUE_COPY_BUFFER_TO_IMAGE,
ID_CL_ENQUEUE_MAP_BUFFER,
ID_CL_ENQUEUE_MAP_IMAGE,
ID_CL_ENQUEUE_UNMAP_MEM_OBJECT,
ID_CL_ENQUEUE_NDRANGE_KERNEL,
ID_CL_ENQUEUE_TASK,
ID_CL_ENQUEUE_MARKER,
ID_CL_ENQUEUE_WAIT_FOR_EVENTS,
ID_CL_ENQUEUE_BARRIER,
ID_CL_GET_EXTENSION_FUNCTION_ADDRESS,
ID_CL_CREATE_FROM_GLBUFFER,
ID_CL_CREATE_FROM_GLTEXTURE2D,
ID_CL_CREATE_FROM_GLTEXTURE3D,
ID_CL_CREATE_FROM_GLRENDERBUFFER,
ID_CL_GET_GLOBJECT_INFO,
ID_CL_GET_GLTEXTURE_INFO,
ID_CL_ENQUEUE_ACQUIRE_GLOBJECTS,
ID_CL_ENQUEUE_RELEASE_GLOBJECTS,
ID_CL_GET_GLCONTEXT_INFO_KHR,
ID_CL_SET_EVENT_CALLBACK,
ID_CL_CREATE_SUB_BUFFER,
ID_CL_SET_MEM_OBJECT_DESTRUCTOR_CALLBACK,
ID_CL_CREATE_USER_EVENT,
ID_CL_SET_USER_EVENT_STATUS,
ID_CL_ENQUEUE_READ_BUFFER_RECT,
ID_CL_ENQUEUE_WRITE_BUFFER_RECT,
ID_CL_ENQUEUE_COPY_BUFFER_RECT,
ID_CL_GET_DEVICE_IDS_FROM_D3D10_KHR,
ID_CL_CREATE_FROM_D3D10_BUFFER_KHR,
ID_CL_CREATE_FROM_D3D10_TEXTURE2D_KHR,
ID_CL_CREATE_FROM_D3D10_TEXTURE3D_KHR,
ID_CL_ENQUEUE_ACQUIRE_D3D10_OBJECTS_KHR,
ID_CL_ENQUEUE_RELEASE_D3D10_OBJECTS_KHR,
ID_CL_GET_DEVICE_IDS_FROM_DX9_INTEL,
ID_CL_CREATE_FROM_DX9_MEDIA_SURFACE_INTEL,
ID_CL_ENQUEUE_ACQUIRE_DX9_OBJECTS_INTEL,
ID_CL_ENQUEUE_RELEASE_DX9_OBJECTS_INTEL,
ID_CL_GET_DEVICE_IDS_FROM_D3D11_KHR,
ID_CL_CREATE_FROM_D3D11_BUFFER_KHR,
ID_CL_CREATE_FROM_D3D11_TEXTURE2D_KHR,
ID_CL_CREATE_FROM_D3D11_TEXTURE3D_KHR,
ID_CL_ENQUEUE_ACQUIRE_D3D11_OBJECTS_KHR,
ID_CL_ENQUEUE_RELEASE_D3D11_OBJECTS_KHR,
ID_CL_COMPILE_PROGRAM,
ID_CL_CREATE_EVENT_FROM_GLSYNC_KHR,
ID_CL_CREATE_FROM_GLTEXTURE,
ID_CL_CREATE_IMAGE,
ID_CL_CREATE_PROGRAM_WITH_BUILT_IN_KERNELS,
ID_CL_ENQUEUE_BARRIER_WITH_WAIT_LIST,
ID_CL_ENQUEUE_FILL_BUFFER,
ID_CL_ENQUEUE_FILL_IMAGE,
ID_CL_ENQUEUE_MARKER_WITH_WAIT_LIST,
ID_CL_ENQUEUE_MIGRATE_MEM_OBJECTS,
ID_CL_ENQUEUE_NATIVE_KERNEL,
ID_CL_GET_DEVICE_IMAGE_INFO_QCOM,
ID_CL_GET_EXTENSION_FUNCTION_ADDRESS_FOR_PLATFORM,
ID_CL_GET_KERNEL_ARG_INFO,
ID_CL_GET_KERNEL_SUB_GROUP_INFO_KHR,
ID_CL_ICD_GET_PLATFORM_IDS_KHR,
ID_CL_LINK_PROGRAM,
ID_CL_LOG_MESSAGES_TO_STDERR_APPLE,
ID_CL_LOG_MESSAGES_TO_STDOUT_APPLE,
ID_CL_LOG_MESSAGES_TO_SYSTEM_LOG_APPLE,
ID_CL_SET_MEM_OBJECT_DESTRUCTOR_APPLE,
ID_CL_TERMINATE_CONTEXT_KHR,
ID_CL_UNLOAD_PLATFORM_COMPILER,
ID_CL_GET_KERNEL_SUB_GROUP_INFO,
ID_CL_CREATE_SUB_DEVICES,
ID_CL_RELEASE_DEVICE,
ID_CL_RETAIN_DEVICE,

ID_CL_CREATE_COMMAND_QUEUE_WITH_PROPERTIES,
ID_CL_CREATE_PIPE,
ID_CL_CREATE_SAMPLER_WITH_PROPERTIES,
ID_CL_ENQUEUE_SVMFREE,
ID_CL_ENQUEUE_SVMMAP,
ID_CL_ENQUEUE_SVMMEM_FILL,
ID_CL_ENQUEUE_SVMMEMCPY,
ID_CL_ENQUEUE_SVMUNMAP,
ID_CL_GET_PIPE_INFO,
ID_CL_SVMALLOC,
ID_CL_SVMFREE,
ID_CL_SET_KERNEL_ARG_SVMPOINTER,
ID_CL_SET_KERNEL_EXEC_INFO,

ID_CL_CREATE_FROM_DX9_MEDIA_SURFACE_KHR,
ID_CL_ENQUEUE_ACQUIRE_DX9_MEDIA_SURFACES_KHR,
ID_CL_ENQUEUE_RELEASE_DX9_MEDIA_SURFACES_KHR,
ID_CL_GET_DEVICE_IDS_FROM_DX9_MEDIA_ADAPTER_KHR,

ID_CL_CREATE_PROGRAM_WITH_IL,
ID_CL_CREATE_BUFFER_WITH_PROPERTIES_INTEL,
ID_CL_CREATE_COMMAND_QUEUE_WITH_PROPERTIES_INTEL,

ID_CL_SET_KERNEL_ARG_V1,
ID_CL_HOST_MEM_ALLOC_INTEL,
ID_CL_DEVICE_MEM_ALLOC_INTEL,
ID_CL_SHARED_MEM_ALLOC_INTEL,
ID_CL_MEM_FREE_INTEL,
ID_CL_GET_MEM_ALLOC_INFO_INTEL,
ID_CL_SET_KERNEL_ARG_MEM_POINTER_INTEL,
ID_CL_ENQUEUE_MEMSET_INTEL,
ID_CL_ENQUEUE_MEMCPY_INTEL,
ID_CL_ENQUEUE_MEM_ADVISE_INTEL,
ID_CL_ENQUEUE_MIGRATE_MEM_INTEL,
ID_CL_SET_KERNEL_EXEC_INFO_V1,
ID_CL_ENQUEUE_NDCOUNT_KERNEL_INTEL,
ID_CL_GET_DEVICE_AND_HOST_TIMER,
ID_CL_ENQUEUE_MEM_FILL_INTEL,
ID_CL_MEM_BLOCKING_FREE_INTEL,
ID_CL_GET_KERNEL_MAX_CONCURRENT_WORK_GROUP_COUNT_INTEL,
ID_CL_GET_KERNEL_SUGGESTED_LOCAL_WORK_SIZE_INTEL,
ID_CL_CREATE_IMAGE_WITH_PROPERTIES_INTEL,
ID_CL_ADD_COMMENT_INTEL,
ID_CL_ENQUEUE_VERIFY_MEMORY_INTEL,
ID_CL_GET_DEVICE_GLOBAL_VARIABLE_POINTER_INTEL,
ID_CL_GET_DEVICE_FUNCTION_POINTER_INTEL,
ID_CL_ENQUEUE_RESOURCES_BARRIER_INTEL,
ID_CL_ENQUEUE_SVMMIGRATE_MEM,
ID_CL_ENQUEUE_SVMMEMCPY_V1,
ID_CL_ENQUEUE_SVMMEM_FILL_V1,
ID_CL_GITS_INDIRECT_ALLOCATION_OFFSETS,
ID_CL_SET_PROGRAM_SPECIALIZATION_CONSTANT,
ID_CL_CREATE_PROGRAM_WITH_BINARY_V1,
ID_CL_CLONE_KERNEL,
ID_CL_GET_HOST_TIMER,
ID_CL_CREATE_PROGRAM_WITH_IL_KHR,
ID_CL_CREATE_FROM_D3D11_BUFFER_NV,
ID_CL_CREATE_FROM_D3D11_TEXTURE2DNV,
ID_CL_CREATE_FROM_D3D11_TEXTURE3DNV,
ID_CL_ENQUEUE_ACQUIRE_D3D11_OBJECTS_NV,
ID_CL_ENQUEUE_RELEASE_D3D11_OBJECTS_NV,
ID_CL_GET_DEVICE_IDS_FROM_D3D11_NV,
ID_CL_CREATE_FROM_D3D11_TEXTURE2D_NV,
ID_CL_CREATE_FROM_D3D11_TEXTURE3D_NV,
ID_CL_SET_CONTEXT_DESTRUCTOR_CALLBACK,
ID_CL_CREATE_FROM_VA_APIMEDIA_SURFACE_INTEL,
ID_CL_ENQUEUE_ACQUIRE_VA_APIMEDIA_SURFACES_INTEL,
ID_CL_ENQUEUE_RELEASE_VA_APIMEDIA_SURFACES_INTEL,
ID_CL_GET_DEVICE_IDS_FROM_VA_APIMEDIA_ADAPTER_INTEL,
