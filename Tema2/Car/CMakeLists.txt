add_library(car STATIC Car.cpp)

add_subdirectory(ElectricCar)

target_link_libraries(car PUBLIC vehicle)

target_include_directories(car PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}"
                                      "${PROJECT_SOURCE_DIR}/Auto"
                            )                       