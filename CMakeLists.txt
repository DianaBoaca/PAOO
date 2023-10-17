cmake_minimum_required(VERSION 3.10)

project(Tutorial VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


configure_file(Dreptunghi.h.in Dreptunghi.h)

add_executable(Lab4 main.cxx Dreptunghi.cxx)

target_include_directories(Lab4 PUBLIC ${PROJECT_BINARY_DIR})
