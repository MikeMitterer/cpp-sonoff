cmake_minimum_required(VERSION 3.2)
project(Sonoff)

include(CMakeListsPrivate.txt)

#add_custom_target(
#    PLATFORMIO_BUILD ALL
#    COMMAND ${PLATFORMIO_CMD} -f -c clion run
#    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#)

add_custom_target(
    PLATFORMIO_UPLOAD ALL
    COMMAND ${PLATFORMIO_CMD} -f -c clion run --target upload
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_target(
    PLATFORMIO_CLEAN ALL
    COMMAND ${PLATFORMIO_CMD} -f -c clion run --target clean
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

#add_custom_target(
#    PLATFORMIO_TEST ALL
#    COMMAND ${PLATFORMIO_CMD} -f -c clion test
#    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#)
#
#add_custom_target(
#    PLATFORMIO_PROGRAM ALL
#    COMMAND ${PLATFORMIO_CMD} -f -c clion run --target program
#    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#)
#
#add_custom_target(
#    PLATFORMIO_UPLOADFS ALL
#    COMMAND ${PLATFORMIO_CMD} -f -c clion run --target uploadfs
#    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#)
#

add_custom_target(
    PLATFORMIO_UPDATE_ALL ALL
    COMMAND ${PLATFORMIO_CMD} -f -c clion update
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

#add_custom_target(
#    PLATFORMIO_REBUILD_PROJECT_INDEX ALL
#    COMMAND ${PLATFORMIO_CMD} -f -c clion init --ide clion
#    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#)

include_directories(include)
include_directories(src)

#file(GLOB_RECURSE SRCS src/*.cpp)
file(GLOB_RECURSE HEADER_FILES src/*.h)

set(SOURCE_FILES
#        src/config.h
        src/main.cpp
#        src/eventHandler.cpp
        )

add_executable(${PROJECT_NAME}
        ${HEADER_FILES} ${SOURCE_FILES}
        )
