cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

project(ultrasonic C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(PICO_EXAMPLES_PATH ${PROJECT_SOURCE_DIR})

pico_sdk_init()

add_executable(ultrasonic
	ultrasonic.c
	)

target_link_libraries(ultrasonic pico_stdlib)

pico_add_extra_outputs(ultrasonic)

add_library(pico_ultrasonic ultrasonic.h ultrasonic.c)

target_link_libraries(pico_ultrasonic pico_stdlib hardware_gpio hardware_timer)

target_include_directories(pico_ultrasonic PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")


add_library(pico_ultrasonic_object ultrasonic.h ultrasonic.c ultrasonicObject.cpp ultrasonicObject.h)

target_link_libraries(pico_ultrasonic_object pico_stdlib hardware_gpio hardware_timer)

target_include_directories(pico_ultrasonic_object PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
