cmake_minimum_required(VERSION 4.0)
project(TextGame VERSION 0.0.01)

set(SOURCE_FILES src/main.cpp)

find_package(Curses REQUIRED)

add_executable(TextGame ${SOURCE_FILES})

target_include_directories(TextGame PRIVATE ${CURSES_INCLUDE_DIRS})
target_link_libraries(TextGame PRIVATE ${CURSES_LIBRARIES})
