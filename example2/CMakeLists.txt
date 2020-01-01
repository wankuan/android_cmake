CMAKE_MINIMUM_REQUIRED(VERSION 2.9)
PROJECT(demo)
SET(BUILD_NAME ${PROJECT_NAME})

IF (${CMAKE_HOST_SYSTEM_NAME} MATCHES "Windows")
    ADD_DEFINITIONS(-DWindows)
ELSE (${CMAKE_HOST_SYSTEM_NAME} MATCHES "Linux")
    ADD_DEFINITIONS(-DLinux)
ENDIF ()

IF (${CMAKE_BUILD_TYPE} MATCHES "DEBUG")
    message( STATUS "==============================debug==============================" )
    ADD_DEFINITIONS(-DDEBUG)
ELSE(${CMAKE_BUILD_TYPE} MATCHES "RELEASE")
    message( STATUS "==============================release==============================" )
ENDIF ()


#SET(CMAKE_CXX_FLAGS "-std=gnu++11 -Wall -fPIC -Wl,-Bsymbolic -lm -D__STDINT_LIMITS -D__STDINT_MACROS -D__ANDROID__ -DANDROID")
SET(CMAKE_CXX_FLAGS "-std=gnu++11 -Wall -fPIC -Wl")
#SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-DANDROID_ARM_NEON=TRUE -DANDROID_ARM_MODE=arm -DANDROID_CPP_FEATURES=rtti")
INCLUDE_DIRECTORIES(
                    ${CMAKE_CURRENT_SOURCE_DIR}/app/inc
                    ${CMAKE_CURRENT_SOURCE_DIR}/app/inc_pub
                    ${CMAKE_CURRENT_SOURCE_DIR}/module/inc
                    ${CMAKE_CURRENT_SOURCE_DIR}/module/inc_pub
                    )
SET(srcs ${CMAKE_CURRENT_SOURCE_DIR}/entry.c)


ADD_SUBDIRECTORY(app)
ADD_SUBDIRECTORY(module)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

ADD_EXECUTABLE(${BUILD_NAME} ${srcs})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} app module)

