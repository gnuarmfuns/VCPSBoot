include_guard(GLOBAL)
message("middleware_freertos-aws_iot_demos_greengrass_discovery component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/demos/greengrass_connectivity/aws_greengrass_discovery_demo.c
)


include(middleware_freertos-aws_iot_demos_MK64F12)

include(middleware_freertos-aws_iot_libraries_abstractions_platform_MK64F12)

include(middleware_freertos-aws_iot_libraries_freertos_plus_aws_greengrass_MK64F12)

include(middleware_freertos-aws_iot_mqtt_MK64F12)

include(middleware_freertos-kernel_MK64F12)

