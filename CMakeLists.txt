cmake_minimum_required(VERSION 3.2)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})

project(my_test VERSION ${PROJECT_VESRION})


add_executable(mytest main.cpp)


set_target_properties(mytest PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)


if (MSVC)
    target_compile_options(mytest PRIVATE
        /W4
    )
else ()
    target_compile_options(mytest PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
endif()
