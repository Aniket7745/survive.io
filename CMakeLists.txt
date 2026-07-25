cmake_minimum_required(VERSION 3.20)

project(
    Survivor
    VERSION 1.0.0
    DESCRIPTION "A Vampire Survivors-inspired game built with Raylib"
    LANGUAGES CXX
)

# C++ Standard

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Export compile_commands.json (for clangd)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Find Packages

find_package(raylib REQUIRED)

# Source Files

set(SOURCES
    src/main.cpp
    src/Game.cpp
    src/Player.cpp
)

# Executable

add_executable(${PROJECT_NAME} ${SOURCES})

# Include Directories

target_include_directories(${PROJECT_NAME}
    PRIVATE
        include
)

# Link Libraries

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        raylib
)

# Compiler Warnings

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  target_compile_options(${PROJECT_NAME}
        PRIVATE
            -Wall
            -Wextra
            -Wpedantic
    )
endif()
