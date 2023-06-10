cmake_minimum_required(VERSION 3.16.3)

include_directories("dependencies/SDL2/include")

file(GLOB SDL2LIBS "dependencies/SDL2/*.dll.a")

file(GLOB SOURCES "src/*.cpp")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
project(cppgame)

link_directories("${PROJECT_SOURCE_DIR}/dependencies/SDL2/lib" )

add_executable(main ${SOURCES})

