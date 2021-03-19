add_executable(raytracer_test
        test.c)

target_link_libraries(raytracer_test lib unity)

add_test(raytracer raytracer_test)