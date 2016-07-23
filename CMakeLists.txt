cmake_minimum_required(VERSION 3.5.2)
project(tdd_cpp)

# include a dir w/ another CMakeLists.txt
#add_subdirectory(test)

include_directories(include)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cc src/Student.cc)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cc" "test/*.cc")

add_executable(test_dollar ${SOURCES})
