include_guard(GLOBAL)
message("middleware_azure_iot_iothub_client_amqp component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/iothub_client/src/iothubtransportamqp.c
    ${CMAKE_CURRENT_LIST_DIR}/iothub_client/src/iothubtransportamqp_methods.c
    ${CMAKE_CURRENT_LIST_DIR}/iothub_client/src/iothubtransport_amqp_cbs_auth.c
    ${CMAKE_CURRENT_LIST_DIR}/iothub_client/src/iothubtransport_amqp_common.c
    ${CMAKE_CURRENT_LIST_DIR}/iothub_client/src/iothubtransport_amqp_connection.c
    ${CMAKE_CURRENT_LIST_DIR}/iothub_client/src/iothubtransport_amqp_device.c
    ${CMAKE_CURRENT_LIST_DIR}/iothub_client/src/iothubtransport_amqp_messenger.c
    ${CMAKE_CURRENT_LIST_DIR}/iothub_client/src/iothubtransport_amqp_telemetry_messenger.c
    ${CMAKE_CURRENT_LIST_DIR}/iothub_client/src/iothubtransport_amqp_twin_messenger.c
    ${CMAKE_CURRENT_LIST_DIR}/iothub_client/src/uamqp_messaging.c
)


target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/iothub_client/inc
    ${CMAKE_CURRENT_LIST_DIR}/iothub_client/inc/internal
)


include(middleware_azure_iot_MK64F12)

include(middleware_azure_iot_amqp_MK64F12)

include(middleware_azure_iot_adapters_MK64F12)

include(middleware_azure_iot_adapters_freertos_MK64F12)

include(middleware_azure_iot_iothub_client_MK64F12)

include(middleware_azure_iot_certs_MK64F12)

include(middleware_azure_iot_parson_MK64F12)

include(middleware_azure_iot_umock_c_MK64F12)

include(middleware_azure_iot_azure_macro_utils_MK64F12)

include(middleware_azure_iot_mbedtls_MK64F12)

