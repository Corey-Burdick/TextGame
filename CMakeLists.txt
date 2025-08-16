project(TextGame)
cmake_minimum_required(VERSION 4.0)

find_package(Curses REQUIRED)

set(SOURCE_LIST main.cpp src/creatureslib.cpp)

add_executable(TextGame ${SOURCE_LIST})

target_include_directories(TextGame PRIVATE ${CURSES_INCLUDE_DIR})
target_link_libraries(TextGame PRIVATE ${CURSES_LIBRARIES})
