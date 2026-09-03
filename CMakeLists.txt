cmake_minimum_required(VERSION 4.3)
project(imagine)

set(CMAKE_CXX_STANDARD 20)

add_executable(imagine
        main.cpp
        src/Image.cpp
        includes/Image.hpp
        includes/stb_image.h
)

target_include_directories(imagine PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/includes
)