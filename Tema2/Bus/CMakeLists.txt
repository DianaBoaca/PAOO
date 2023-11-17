add_library(bus STATIC Bus.cpp)

target_link_libraries(bus PUBLIC vehicle)

target_include_directories(car PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}"
                                      "${PROJECT_SOURCE_DIR}/Auto"
                            )  
