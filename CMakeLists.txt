cmake_minimum_required(VERSION 3.25)
project(kt_chess)

set(CMAKE_CXX_STANDARD 20)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

add_executable(kt_chess main.cpp kt_main_window.h)

target_link_libraries(kt_chess PRIVATE Qt6::Widgets)

set( CMAKE_AUTOMOC ON )
