cmake_minimum_required(VERSION 3.16)
project(jacc LANGUAGES CXX)

add_executable(jacc 
    src/main.cpp
    src/cli/argument_parser.cpp
    src/cli/command.cpp
)

target_include_directories(jacc PRIVATE ${CMAKE_SOURCE_DIR}/include)
