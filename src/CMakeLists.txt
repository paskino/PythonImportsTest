cmake_minimum_required(VERSION 3.0)

project(pyadd LANGUAGES CXX)

add_library(add SHARED add.cxx)
target_include_directories(add PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)
