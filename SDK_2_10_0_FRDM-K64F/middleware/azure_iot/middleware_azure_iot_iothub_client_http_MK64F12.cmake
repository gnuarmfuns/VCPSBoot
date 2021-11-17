include_guard(GLOBAL)
message("middleware_azure_iot_iothub_client_http component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/iothub_client/src/iothubtransporthttp.c
)


target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/iothub_client/inc
)


include(middleware_azure_iot_MK64F12)

include(middleware_azure_iot_adapters_MK64F12)

include(middleware_azure_iot_adapters_freertos_MK64F12)

include(middleware_azure_iot_iothub_client_MK64F12)

include(middleware_azure_iot_certs_MK64F12)

include(middleware_azure_iot_parson_MK64F12)

include(middleware_azure_iot_umock_c_MK64F12)

include(middleware_azure_iot_azure_macro_utils_MK64F12)

include(middleware_azure_iot_mbedtls_MK64F12)

