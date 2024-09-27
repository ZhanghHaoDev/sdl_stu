#include <iostream>

#include "core_module.h"

int main(int argc, char* args[]){
    core_model core;
    core.get_sdl_version();
    core.sdl_log();
    core.sdl_error();
    core.sdl_platform();
    core.sdl_memory();
    core.sdl_atomic();
    return 0;
}