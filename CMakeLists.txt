cmake_minimum_required(VERSION 3.10)

project(test VERSION 0.0.1)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB TEST_SRC
		${SOURCE_DIR}/*.cpp)

set(TARGET test)

add_executable(${TARGET} ${TEST_SRC})

set_target_properties(
	${TARGET} PROPERTIES
	CXX_STANDARD 17	#Собирать в соответствии со стандартом c17
	C_STANDARD	11
	)
