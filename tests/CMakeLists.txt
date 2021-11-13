add_subdirectory(googletest)

add_executable(tests tests.cpp)

target_link_libraries(tests stack gtest gtest_main)
