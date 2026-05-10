cmake_minimum_required(VERSION 3.10)
project(gmock)

find_package(GTest REQUIRED)

add_executable(gmock registration_service.cpp registration_service_test.cpp)
target_link_libraries(gmock PRIVATE GTest::gmock_main)
