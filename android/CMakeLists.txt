cmake_minimum_required(VERSION 3.4.1)
project(Ulid)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 14)

add_library(react-native-ulid            SHARED
            ../cpp/react-native-ulid.cpp
            ../cpp/ulid-generator.h
            ../cpp/ulid-generator.cpp
            cpp-adapter.cpp
)

# Specifies a path to native header files.
include_directories(
            ../cpp
)
