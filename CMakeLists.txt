cmake_minimum_required(VERSION 3.26)
project(dotdash)

set(CMAKE_CXX_STANDARD 23)

add_executable(dotdash src/main.cpp
        include/parser.h
        src/parser.cpp
        include/parser.h
        src/dictionary.cpp
        include/dictionary.h
        src/dotdash.cpp
        include/dotdash.h)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)