CMAKE_MINIMUM_REQUIRED(VERSION 2.9)
PROJECT(module)

INCLUDE_DIRECTORIES(
                    ${CMAKE_CURRENT_SOURCE_DIR}/inc
                    ${CMAKE_CURRENT_SOURCE_DIR}/inc_pub
                    )
SET(srcs
        ${CMAKE_CURRENT_SOURCE_DIR}/src/a.c
        ${CMAKE_CURRENT_SOURCE_DIR}/src/b.c
    )

ADD_LIBRARY(${PROJECT_NAME} ${srcs})