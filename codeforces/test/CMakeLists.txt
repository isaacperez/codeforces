# Project name
set(PROJECT_NAME codeforces)
set(TEST_PROJECT_NAME ${PROJECT_NAME}_test)

# Sources
file(GLOB sources *.cpp)

# Headers
file(GLOB headers *.h)
include_directories(../../commons/googletest/include)

# Generate executable
add_executable(${TEST_PROJECT_NAME} ${headers} ${sources})

# Link GoogleTest and base project
target_link_libraries(${TEST_PROJECT_NAME}  PUBLIC ${PROJECT_NAME} gtest)

# C++ standard
set_target_properties(${TEST_PROJECT_NAME} PROPERTIES
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED TRUE
)