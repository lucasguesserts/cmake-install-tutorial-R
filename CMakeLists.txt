cmake_minimum_required(VERSION 3.26)

project(
    R
    VERSION 0.0.0
    LANGUAGES CXX
)

# Prevent building in the source directory
if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
  message(FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there.\n")
endif()

# build options

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug")
endif()

# dependecies
if(R_USE_CPM)
    include(cmake/get_cpm.cmake)
    CPMAddPackage(
    NAME P
    VERSION 0.3.0
    GITHUB_REPOSITORY lucasguesserts/cmake-install-tutorial-P
    )
else()
    set(FIND_LIBRARY_USE_LIB64_PATHS TRUE)
    find_package(P
        0.3.0
        REQUIRED
        CONFIG
        PATHS "$ENV{HOME}/foo/"
    )
endif()

# setup executable

add_executable(${PROJECT_NAME} src/main.cpp)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
target_link_libraries(${PROJECT_NAME} PRIVATE P::P)
