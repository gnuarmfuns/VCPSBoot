include_guard(GLOBAL)
message("middleware_azure_iot_adapters component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/c-utility/adapters/agenttime_msdk.c
    ${CMAKE_CURRENT_LIST_DIR}/c-utility/adapters/platform_msdk.c
    ${CMAKE_CURRENT_LIST_DIR}/c-utility/adapters/socketio_berkeley_msdk.c
    ${CMAKE_CURRENT_LIST_DIR}/c-utility/adapters/uniqueid_stub.c
    ${CMAKE_CURRENT_LIST_DIR}/c-utility/adapters/httpapi_compact.c
    ${CMAKE_CURRENT_LIST_DIR}/c-utility/pal/lwip/sntp_lwip.c
    ${CMAKE_CURRENT_LIST_DIR}/c-utility/pal/tlsio_options.c
)


target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/c-utility/pal/generic
    ${CMAKE_CURRENT_LIST_DIR}/c-utility/pal/inc
    ${CMAKE_CURRENT_LIST_DIR}/c-utility/pal/lwip
)


include(middleware_azure_iot_MK64F12)

include(middleware_lwip_MK64F12)

include(middleware_lwip_apps_sntp_MK64F12)

