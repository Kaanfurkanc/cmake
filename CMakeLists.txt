cmake_minimum_required(VERSION 3.30)

project(
        Agent1
        VERSION "1.0" 
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(ENABLE_WARNINGS "Enable compiler warnings" ON)

if(ENABLE_WARNINGS)
    if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
        add_compile_options(-Wall -Wextra -Wpedantic -Werror)
    elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
        add_compile_options(/W4 /WX)
    endif()
endif()

set(PROJECT_SOURCES
        main.cpp
)

find_package(Boost REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})

add_library(first STATIC ./library1/first.cpp ./library1/first.h)
target_include_directories(first PUBLIC ./library1)

add_subdirectory(SubProject)

add_executable(Agent1  ${PROJECT_SOURCES} )

target_link_libraries(Agent1 first ${Boost_LIBRARIES})