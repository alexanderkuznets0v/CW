cmake_minimum_required(VERSION 2.8)

add_library(b SHARED dpp.c)
set_property(TARGET b APPEND PROPERTY
COMPILE_DEFFINITIONS B_BUILD)

add_executable(hello cpp.c)
target_link_libraries(hello b)
