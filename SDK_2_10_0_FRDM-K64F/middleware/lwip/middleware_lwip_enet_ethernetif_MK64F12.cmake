include_guard(GLOBAL)
message("middleware_lwip_enet_ethernetif component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/port/enet_ethernetif.c
)

if(CONFIG_USE_driver_enet_MK64F12)
target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/port/enet_ethernetif_kinetis.c
)
else()
    message(WARNING "please config platform.drivers.enet_MK64F12 or driver.lpc_enet_MK64F12 or driver.enet_qos_MK64F12 first.")
endif()


target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/port
)


#OR Logic component
if(CONFIG_USE_driver_enet_MK64F12)
     include(driver_enet_MK64F12)
endif()
if(NOT (CONFIG_USE_driver_enet_MK64F12))
    message(WARNING "Since driver_enet_MK64F12 is not included at first or config in config.cmake file, use driver_enet_MK64F12 by default.")
    include(driver_enet_MK64F12)
endif()

include(middleware_lwip_MK64F12)

include(driver_phy-common_MK64F12)

