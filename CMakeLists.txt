cmake_minimum_required(VERSION 3.30)
set(PROJECT_NAME_STR Sort)


file(GLOB PATH_STR ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp 
				${CMAKE_CURRENT_SOURCE_DIR}/src/*.hpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)			
add_executable(${PROJECT_NAME_STR} ${PATH_STR})
