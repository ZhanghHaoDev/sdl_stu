include_directories("../sdl_core_module")

add_executable(sdl_module_test
    core_module_test.cc
)

target_link_libraries(sdl_module_test PUBLIC
    core_module
)