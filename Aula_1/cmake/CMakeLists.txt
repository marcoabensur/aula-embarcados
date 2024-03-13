# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.0)

# Set the project name
project(hello)

# Set the C compiler flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0")

# Add the main executable
add_executable(main.bin main.c)

# Install rules
install(TARGETS main.bin DESTINATION bin)
