cmake_minimum_required(VERSION 3.16.3)
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

project(cppgame)

link_directories("dependencies/SDL2/lib")
link_directories("dependencies/SDL2/bin")

file(GLOB SOURCES "src/*.cpp")
include_directories("dependencies/SDL2/include")

add_executable(main ${SOURCES})

target_link_libraries(main mingw32 SDL2main SDL2 SDL2_image)