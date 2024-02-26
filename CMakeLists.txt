cmake_minimum_required(VERSION 3.0.0)
project(nymath VERSION 0.1.0 LANGUAGES C CXX DESCRIPTION "Example C++ library with DevOps")

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(mymath SHARED src/mymath.cpp)

set_target_properties(mymath PROPERTIES 
    VERSION ${PROJECT_VERSION}
    PUBLIC_HEADER include/mymath.h)
set_target_properties(mymath PROPERTIES PUBLIC_HEADER include/mymath.h)
target_include_directories(mymath PRIVATE .)

# Add the shared math library
# add_library(math SHARED)
# target_include_directories(math PRIVATE "${PROJECT_SOURCE_DIR}")
# add_subdirectory("lib")

# Add the example executable
add_executable(demo)
target_sources(demo PRIVATE example/demo.cpp)
target_link_libraries(demo PRIVATE mymath)

# Install Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# Enable cpplint
set(CMAKE_CXX_CPPLINT cpplint)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Add test executables
add_executable(
  mymath_tests
  test/mymath_tests.cpp
)
target_link_libraries(
  mymath_tests
  GTest::gtest_main
  mymath
)

# Include and discover tests
include(GoogleTest)
gtest_discover_tests(mymath_tests)
