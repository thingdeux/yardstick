cmake_minimum_required(VERSION 3.8)
project(yardstick)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp WindowTracker.cpp WindowTracker.h)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

add_definitions(${GTK3_CFLAGS_OTHER})
add_executable(yardstick ${SOURCE_FILES})

target_link_libraries(yardstick ${GTK3_LIBRARIES})