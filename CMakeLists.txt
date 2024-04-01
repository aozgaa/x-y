cmake_minimum_required(VERSION 3.27)

set(CMAKE_CXX_CLANG_TIDY
    clang-tidy -checks=-*,cppcoreguidelines-*)

project(xy)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(LambertW
    GIT_REPOSITORY https://github.com/DarkoVeberic/LambertW.git
    PATCH_COMMAND git apply ${CMAKE_CURRENT_SOURCE_DIR}/patches/lambertW-win.patch
    UPDATE_DISCONNECTED 1
)

FetchContent_Populate(LambertW)

add_executable(xy src/xy.cpp "${lambertw_SOURCE_DIR}/LambertW.cc")
target_include_directories(xy PRIVATE "${lambertw_SOURCE_DIR}")