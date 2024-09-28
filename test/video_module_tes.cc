#include "video_module.h"

#include "gtest/gtest.h"

TEST(video_module,sdl_window_tes){
    video_module module;
    module.sdl_window();
}

TEST(video_module, render_and_draw_test){
    video_module module;
    module.render_and_draw();
}

TEST(video_module, sdl_image_test){
    video_module module;
    module.sdl_image();
}
