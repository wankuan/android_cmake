#****************************This is Project Info****************************
project(MAIN)
CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

#ADD_DEFINITIONS("-Wall")
#ADD_DEFINITIONS("-fPIC")
#ADD_DEFINITIONS("-Wl,-lm")
#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")
SET(CMAKE_CXX_FLAGS "-std=gnu++11 -Wall -fPIC -Wl,-Bsymbolic -lm -D__STDINT_LIMITS -D__STDINT_MACROS -D__ANDROID__ -DANDROID")

#****************************This is Include File/Directories****************************
INCLUDE_DIRECTORIES(../inc)

#****************************This is Source File/Directories****************************

SET(DIR_SRCS ../src/main.c)
#aux_source_directory(../src DIR_SRCS)
#****************************This is Library Directories****************************
#LINK_DIRECTORIES(../src)
#LINK_DIRECTORIES(../../libextern/Android/lib)

#****************************This is 3Party Library****************************
#LINK_LIBRARIES(pthread)

#****************************This is Output Directory****************************

#SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
#SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
#SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

#****************************This is Output Library****************************
#ADD_LIBRARY(main SHARED ${DIR_SRCS} )
#TARGET_LINK_LIBRARIES(main)

add_executable(main ${DIR_SRCS})