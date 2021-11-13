add_subdirectory(googletest)

include_directories(${STACK_INCLUDE_DIR})
add_executable(tests tests.cpp)
target_link_libraries(tests stack gtest gtest_main)
