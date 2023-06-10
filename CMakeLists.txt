cmake_minimum_required(VERSION 3.16.3)

include_directories(dependencies/SDL2/include)



file(GLOB SOURCES "src/*.cpp")

project(cppgame)

add_executable(STATIC ${SOURCES})
