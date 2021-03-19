cmake_minimum_required(VERSION 3.17)

project("raytracer-c" C)

add_library(lib
        STATIC
        lib/core/tuples.c
        )

target_include_directories(lib PUBLIC
        lib
        )

add_executable(raytracer
        src/main.c
        )

target_link_libraries(raytracer
        lib
        )