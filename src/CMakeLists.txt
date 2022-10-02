cmake_minimum_required(VERSION 3.10)
# set project name, version, description, and language specification 
project(
   "HelloWorld"
   VERSION 1.0
   DESCRIPTION "Hello World in CMake"
   LANGUAGES CXX
)
# tells CMake to build an executable
add_executable(${PROJECT_NAME})
# tells CMake which location to look for the sources of the executable
target_sources(${PROJECT_NAME} 
   PRIVATE main.cpp
)