project(rose-bitmap CXX)
cmake_minimum_required(VERSION 3.3)
add_definitions("-std=c++11")

# Everything below is for tests

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(rose_bitmap_test test/bitmap_test.cpp)

target_link_libraries(rose_bitmap_test ${CONAN_LIBS})
include_directories(include)

enable_testing()
include(GoogleTest)
gtest_add_tests(TARGET rose_bitmap_test)
