cmake_minimum_required(VERSION 3.10)
project(GameEngine_Myself)

set(CMAKE_CXX_STANDARD 11)

include_directories("${PROJECT_SOURCE_DIR}/Framework/Common")
include_directories("${PROJECT_SOURCE_DIR}/Framework/Interface")

add_subdirectory(Framework)
add_subdirectory(Empty)

add_executable(GameEngine_Myself
        Framework/Common/main.cpp
        Framework/Interface/Interface.hpp
        Framework/Interface/IRuntimeModule.hpp
        Framework/Interface/IApplication.hpp
        Framework/Common/BaseApplication.hpp
        Framework/Common/BaseApplication.cpp
        Empty/EmptyApplication.cpp)