cmake_minimum_required(VERSION 3.17)

project("raytracer-c" C)

set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -DUNITY_INCLUDE_DOUBLE -DUNITY_DOUBLE_PRECISION=1e-12")
set(CMAKE_C_STANDARD 11)

add_subdirectory(vendor)
add_subdirectory(lib)
add_subdirectory(exec)

include(CTest)
add_subdirectory(tests)