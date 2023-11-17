add_library(electric STATIC ElectricCar.cpp)

target_link_libraries(electric PUBLIC car)

target_include_directories(electric PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}"
                                           "${PROJECT_SOURCE_DIR}/Car"
                                           "${PROJECT_SOURCE_DIR}/Auto" 
                            )
