add_library(lib
        STATIC
        core/tuples.c
        )

target_include_directories(lib PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
        )