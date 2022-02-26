# Project name
set(PROJECT_NAME codeforces)

# Sources
file(GLOB sources src/*.cpp)

# Headers
file(GLOB headers include/*.h)
include_directories(include)

# Generate library
add_library(${PROJECT_NAME} STATIC ${headers} ${sources})

# C++ standard
set_target_properties(${PROJECT_NAME} PROPERTIES
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED TRUE
)

# Test folder
add_subdirectory(test)