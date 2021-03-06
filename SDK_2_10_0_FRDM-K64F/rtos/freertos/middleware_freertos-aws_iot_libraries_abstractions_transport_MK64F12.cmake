include_guard(GLOBAL)
message("middleware_freertos-aws_iot_libraries_abstractions_transport component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/libraries/abstractions/transport/secure_sockets/transport_secure_sockets.c
)


target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/libraries/abstractions/transport/secure_sockets
)


include(middleware_freertos-kernel_MK64F12)

include(middleware_freertos-aws_iot_libraries_abstractions_secure_sockets_MK64F12)

include(middleware_freertos-aws_iot_libraries_logging_MK64F12)

include(middleware_freertos-aws_iot_libraries_coremqtt_MK64F12)

