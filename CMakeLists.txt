project(my_clas LANGUAGES CXX)
cmake_minimum_required(VERSION 3.0)

add_library(my_class my_class.cpp)

add_executable(main_app main_app.cpp)
target_link_libraries(main_app my_class)

# NOTE: that main_app2 does not need a library
add_executable(main_app2 main_app2.cpp)
