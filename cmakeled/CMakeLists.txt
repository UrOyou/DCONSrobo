cmake_minimum_required(VERSION 3.22)

#
# This file is generated only once,
# and is not re-generated if converter is called multiple times.
#
# User is free to modify the file as much as necessary
#

# Setup compiler settings
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

# Define the build type
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug")
endif()

# Set the project name
set(CMAKE_PROJECT_NAME cmakeled)

# Enable compile command to ease indexing with e.g. clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# Core project settings
project(${CMAKE_PROJECT_NAME})
message("Build type: " ${CMAKE_BUILD_TYPE})

# Enable CMake support for ASM and C languages
enable_language(C ASM)

# ========== 递归收集文件===============
# 递归收集所有 .c 文件（包括子目录）
file(GLOB_RECURSE SOURCES
        "application/*.c"
#        "bsp/*.c"
        "tasks/*.c"
)
# 排除特定文件（可选）作用：排除 _template.c 结尾的文件和包含 test 的文件
#list(FILTER SOURCES EXCLUDE REGEX ".*_template\\.c$")
#list(FILTER SOURCES EXCLUDE REGEX ".*test.*")

file(GLOB HEADERS
        "bsp/*.h"
)
#======================================

# Create an executable object type
add_executable(${CMAKE_PROJECT_NAME}
        user_code/device/stepmotor.h
#        user_code/application/led_task.cpp
#        user_code/application/led_task.h
        user_code/device/led_breath.cpp
        user_code/device/led_breath.h
        user_code/application/led_task.cpp
#        user_code/component/include/struct_typedef.h
        user_code/component/include/compiler_compat.h
        user_code/application/task_main.cpp
        user_code/application/task_main.h
        ${SOURCES}
)

include_directories(
        dir1
        dir2          # CMake 会自动在这些目录找头文件
)

# Add STM32CubeMX generated sources
add_subdirectory(cmake/stm32cubemx)

# Link directories setup
target_link_directories(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user defined library search paths
)

# Add sources to executable
target_sources(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user sources here
)

# Add include paths
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user defined include paths
    # 我草 注意命名规则 搞了老子大半天时间
        ${PROJECT_SOURCE_DIR}/user_code/component/include
        ${PROJECT_SOURCE_DIR}/user_code/bsp
        ${HEADERS}
)

# Add project symbols (macros)
target_compile_definitions(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user defined symbols
)

# Remove wrong libob.a library dependency when using cpp files
list(REMOVE_ITEM CMAKE_C_IMPLICIT_LINK_LIBRARIES ob)

# Add linked libraries
target_link_libraries(${CMAKE_PROJECT_NAME}
    stm32cubemx

    # Add user defined libraries
)