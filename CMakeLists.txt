cmake_minimum_required(VERSION 3.8)                 # specifies the minimum version of CMake required
project(clion)                                      # names the project (must match the add_executable instruction below)

include_directories(cute_lib)                       # includes the CUTE library. without this you will not be able to include CUTE headers

file(GLOB_RECURSE SOURCE_FILES "src/*.cpp")         # sets the SOURCE_FILES variable to contain all .cpp files inside the src/ directory
add_executable(clion ${SOURCE_FILES})               # creates the executable from the project name and the SOURCE_FILES variable