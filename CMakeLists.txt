cmake_minimum_required(VERSION 3.17)

project(raytracer C)

set(SOURCES
        src/main.c)

add_executable(raytracer ${SOURCES})