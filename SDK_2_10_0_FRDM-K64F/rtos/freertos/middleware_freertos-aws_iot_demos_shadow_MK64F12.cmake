include_guard(GLOBAL)
message("middleware_freertos-aws_iot_demos_shadow component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/demos/device_shadow_for_aws/shadow_demo_main.c
)


include(middleware_freertos-aws_iot_demos_MK64F12)

include(middleware_freertos-aws_iot_libraries_device_shadow_for_aws_MK64F12)

include(middleware_freertos-aws_iot_libraries_corejason_MK64F12)

include(middleware_freertos-aws_iot_mqtt_demo_helpers_MK64F12)

