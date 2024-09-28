include_directories(
    "../sdl_core_module"
    "../sdl_video_module"
    "../sdl_audio_module"
    )

add_executable(sdl_module_test
    main.cc
    core_module_test.cc
    video_module_tes.cc
    audio_module_test.cc
)

find_package(GTest REQUIRED)

target_link_libraries(sdl_module_test PUBLIC
    GTest::GTest
    GTest::Main
    core_module  
    video_module  
    audio_module 
)

enable_testing()
add_test(NAME sdl_module_test COMMAND sdl_module_test)