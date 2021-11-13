set(STACK_DIR ${CMAKE_CURRENT_SOURCE_DIR}/stack)
set(STACK_INCLUDE_DIR ${STACK_DIR}/include)
message("STACK_DIR = ${STACK_DIR}")
message("STACK_INCLUDE_DIR = ${STACK_INCLUDE_DIR}")

add_subdirectory(stack)
add_subdirectory(tests)

include_directories(${STACK_INCLUDE_DIR})
add_executable(main main.cpp)
target_link_libraries(main stack)
