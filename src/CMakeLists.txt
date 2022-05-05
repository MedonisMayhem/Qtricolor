cmake_minimum_required(VERSION 3.21)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
add_executable(Qtricolor main.cpp MY_INCLUDE_DIR/colorfulCircle.h colorfulCircle.cpp)
target_include_directories(Qtricolor PUBLIC ${CMAKE_SOURCE_DIR}/include)
