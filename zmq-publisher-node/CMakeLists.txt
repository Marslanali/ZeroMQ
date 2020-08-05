cmake_minimum_required(VERSION 3.15)
project(zmq-publisher-node)
set(CMAKE_CXX_STANDARD 11)

message(STATUS "CMake version   : " ${CMAKE_SYSTEM_VERSION})
message(STATUS "Compiler        : " ${CMAKE_CXX_COMPILER})
message(STATUS "Operating System: " ${CMAKE_SYSTEM})


############################################################
# Find zmq package
############################################################

##find_package(ZeroMQ 4.3.3 REQUIRED)

MESSAGE(STATUS "ZeroMQ_FOUND: " ${ZeroMQ_FOUND})
MESSAGE(STATUS "ZeroMQ_LIBRARIES: " ${ZeroMQ_LIBRARIES})
MESSAGE(STATUS "ZeroMQ_INCLUDE_DIR: " ${ZeroMQ_INCLUDE_DIR})
MESSAGE(STATUS "ZeroMQ_VERSION: " ${ZeroMQ_VERSION})

############################################################
# Find zmq libraries
############################################################

find_library(ZeroMQ_LIBRARIES /usr/local/lib)

############################################################
# Target Include Directories
############################################################

include_directories(include ${ZeroMQ_INCLUDE_DIRS}
		    /usr/local/include)


############################################################
# Create a executable for zmq-publisher
############################################################

add_executable(zmq-publisher
		${PROJECT_SOURCE_DIR}/src/hwpublisher.cpp
		)

############################################################
# Target Link Libaries
############################################################

target_link_libraries(zmq-publisher  ${ZeroMQ_LIBRARIES} /usr/local/lib)


## Armadillo Libraries
##find_package(Armadillo 4.4 REQUIRED)
##include_directories(include ${ARMADILLO_INCLUDE_DIRS})

##find_library(ARMADILLO_LIBRARIES armadillo)
##target_link_libraries(zmq_publisher  ${ARMADILLO_LIBRARIES})


