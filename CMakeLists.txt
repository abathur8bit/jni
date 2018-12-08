cmake_minimum_required(VERSION 3.0.2)
project(App)

set(CMAKE_CXX_STANDARD 11)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})
include_directories("/Library/Java/JavaVirtualMachines/jdk1.8.0_131.jdk/Contents/Home/include")
include_directories("/Library/Java/JavaVirtualMachines/jdk1.8.0_131.jdk/Contents/Home/include/darwin")
include_directories("/usr/lib/jvm/jdk-8-oracle-arm32-vfp-hflt/include")
include_directories("/usr/lib/jvm/jdk-8-oracle-arm32-vfp-hflt/include/linux")

add_library(App SHARED src/cpp/App.cpp src/cpp/App.h)
target_link_libraries(App ${CURSES_LIBRARIES} )
