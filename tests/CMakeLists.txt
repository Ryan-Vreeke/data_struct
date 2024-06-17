cmake_minimum_required(VERSION 3.10)
project(DSTests)

# Use C++14 standard
set(CMAKE_CXX_STANDARD 20)

# Add your source files
set(SOURCE_FILES ../QuadTree/boundry.cpp ../QuadTree/quad_tree.cpp)

# Add your include directories
include_directories(../QuadTree)

# Add Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add a test executable
add_executable(DSTest test.cpp ${SOURCE_FILES})

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# Link Google Test libraries to the test executable
target_link_libraries(DSTest ${GTEST_LIBRARIES} pthread)

# Enable testing
enable_testing()

# Add test cases
add_test(NAME DSTests COMMAND DSTest)
