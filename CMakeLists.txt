cmake_minimum_required(VERSION 3.12)

# Pull in SDK (must be before project)
include(pico_sdk_import.cmake)

project(pico_lampeggio C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the SDK
pico_sdk_init()

add_executable(pico_lampeggio
    main.cpp)

target_link_libraries(pico_lampeggio pico_stdlib)

pico_add_extra_outputs(pico_lampeggio)