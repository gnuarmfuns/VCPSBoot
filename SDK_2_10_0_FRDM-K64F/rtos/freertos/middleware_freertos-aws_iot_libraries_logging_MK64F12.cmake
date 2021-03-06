include_guard(GLOBAL)
message("middleware_freertos-aws_iot_libraries_logging component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/libraries/logging/iot_logging.c
    ${CMAKE_CURRENT_LIST_DIR}/libraries/logging/iot_logging_task_dynamic_buffers.c
)


target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/libraries/logging/include
)


include(middleware_freertos-kernel_MK64F12)

include(middleware_freertos-aws_iot_libraries_c_sdk_standard_common_MK64F12)

include(middleware_freertos-aws_iot_libraries_abstractions_platform_MK64F12)

