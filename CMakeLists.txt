# Generated CMake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(sdkVersion 2.1.0)
set(toolchainVersion 13_3_Rel1)
set(picotoolVersion 2.1.0)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()
# ====================================================================================
set(PICO_BOARD pico_w CACHE STRING "Board type")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(semaforo C CXX ASM)

# Initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# Add project source files
add_executable(semaforo 
    principal/main.c 
    bibliotecas/semaforo.c 
    bibliotecas/leds.c 
    testes/testeLeds.c
)

# Include directories for header files
target_include_directories(semaforo PRIVATE 
    ${CMAKE_CURRENT_LIST_DIR} 
    ${CMAKE_CURRENT_LIST_DIR}/bibliotecas
    ${CMAKE_CURRENT_LIST_DIR}/tstes
)

# Set program name and version
pico_set_program_name(semaforo "semaforo")
pico_set_program_version(semaforo "0.1")

# Enable UART and USB output
pico_enable_stdio_uart(semaforo 1)
pico_enable_stdio_usb(semaforo 1)

# Link with required Pico SDK libraries
target_link_libraries(semaforo pico_stdlib hardware_timer)

# Generate additional output files
pico_add_extra_outputs(semaforo)
