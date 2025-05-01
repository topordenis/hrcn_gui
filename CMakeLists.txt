cmake_minimum_required(VERSION 3.9)

project(gui)

message("HRCN GUI")


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

set(HRCN_GUI_ROOT ${PROJECT_SOURCE_DIR})
message(HRCN_GUI_ROOT ${HRCN_GUI_ROOT})
set(source_dir "${CMAKE_CURRENT_LIST_DIR}")


add_compile_options(-fno-rtti)


# Where the 'app' and 'blend2d' are.
set(APP_DIR "${CMAKE_CURRENT_LIST_DIR}" CACHE PATH "Application directory")


add_subdirectory(libs/yoga)


include_directories(  ${APP_DIR}/src ${APP_DIR}/libs/yoga/yoga)

file(GLOB_RECURSE  SOURCES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/**/*.cpp)



add_library(gui STATIC  ${SOURCES})
target_link_libraries(gui yogacore )

