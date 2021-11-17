include_guard(GLOBAL)
message("middleware_azure_iot_mbedtls component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/c-utility/adapters/tlsio_mbedtls.c
)


target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/c-utility/inc
)


include(middleware_azure_iot_MK64F12)

include(middleware_mbedtls_MK64F12)

