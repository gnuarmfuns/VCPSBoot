include_guard(GLOBAL)
message("middleware_se_hostlib_commonSe050CloudDemos component is included.")


target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/sss/inc
    ${CMAKE_CURRENT_LIST_DIR}/sss/ex/inc
    ${CMAKE_CURRENT_LIST_DIR}/sss/port/ksdk
    ${CMAKE_CURRENT_LIST_DIR}/hostlib/hostLib/se05x_03_xx_xx
    ${CMAKE_CURRENT_LIST_DIR}/sss/plugin/mbedtls
    ${CMAKE_CURRENT_LIST_DIR}/hostlib/hostLib/tstUtil
    ${CMAKE_CURRENT_LIST_DIR}/hostlib/hostLib/libCommon/infra
    ${CMAKE_CURRENT_LIST_DIR}/hostlib/hostLib/libCommon/log
    ${CMAKE_CURRENT_LIST_DIR}/hostlib/hostLib/mbedtls/inc
    ${CMAKE_CURRENT_LIST_DIR}/demos/ksdk/common/https_client
    ${CMAKE_CURRENT_LIST_DIR}/demos/ksdk/common/freertos/boards/frdmk64f
)

include(middleware_se_hostlib_commonSe050_MK64F12)

include(middleware_se_hostlib_commonCloudDemos_MK64F12)

include(middleware_se_hostlib_mbedtls_sss_MK64F12)

