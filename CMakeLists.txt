cmake_minimum_required(VERSION 3.20)

project(GameBoyEmulator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(GameBoyEmulator
    src/main.cpp
    src/CartridgeInspector.cpp
    include/CartridgeInspector.h
)

target_include_directories(GameBoyEmulator PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

source_group("Source Files" FILES
    src/main.cpp
    src/CartridgeInspector.cpp
)

source_group("Header Files" FILES
    include/CartridgeInspector.h
)