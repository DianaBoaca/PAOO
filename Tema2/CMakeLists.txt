cmake_minimum_required(VERSION 3.10)

project(Tema2 VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Auto)
add_subdirectory(Car)
add_subdirectory(Bus)

add_executable(Tema2 main.cpp)

target_link_libraries(Tema2 PUBLIC vehicle bus car electric)

target_include_directories(Tema2 PUBLIC "${PROJECT_SOURCE_DIR}"
                                        "${PROJECT_SOURCE_DIR}/Auto" 
                                        "${PROJECT_SOURCE_DIR}/Car/"
                                        "${PROJECT_SOURCE_DIR}/Bus"
                            )    
