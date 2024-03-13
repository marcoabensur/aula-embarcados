# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.0)

# Set the project name
project(hello)

# Set the C compiler flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0")

# Add the main executable
add_executable(main main.c)

# Install rules (optional)
install(TARGETS main DESTINATION bin)