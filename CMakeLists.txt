cmake_minimum_required(VERSION 3.17)

project("raytracer-c" C)

add_subdirectory(vendor)
add_subdirectory(lib)
add_subdirectory(exec)

include(CTest)
add_subdirectory(tests)