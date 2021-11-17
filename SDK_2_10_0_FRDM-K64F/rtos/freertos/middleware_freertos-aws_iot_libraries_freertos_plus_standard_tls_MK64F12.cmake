include_guard(GLOBAL)
message("middleware_freertos-aws_iot_libraries_freertos_plus_standard_tls component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/libraries/freertos_plus/standard/tls/src/iot_tls.c
)


target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/libraries/freertos_plus/standard/tls/include
)


include(middleware_freertos-aws_iot_libraries_c_sdk_standard_common_MK64F12)

include(middleware_freertos-aws_iot_libraries_3rdparty_mbedtls_utils_MK64F12)

include(middleware_freertos-aws_iot_libraries_freertos_plus_standard_crypto_MK64F12)

include(middleware_freertos-aws_iot_libraries_abstractions_pkcs11_MK64F12)

include(middleware_freertos-aws_iot_libraries_freertos_plus_standard_utils_MK64F12)

include(middleware_freertos-kernel_MK64F12)

include(middleware_mbedtls_MK64F12)

