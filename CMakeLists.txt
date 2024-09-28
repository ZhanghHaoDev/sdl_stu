cmake_minimum_required(VERSION 3.20)
project(sdl_stu)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(sdl_core_module)
add_subdirectory(sdl_video_module)
add_subdirectory(sdl_audio_module)
add_subdirectory(test)