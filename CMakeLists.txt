cmake_minimum_required(VERSION 3.23)
project(pls_Language)

set(CMAKE_CXX_STANDARD 14)

add_executable(plsc main.cpp utils/parser/Parser.cpp)
