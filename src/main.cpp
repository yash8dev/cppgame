#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

int main(int argc , char* args[]){
if (SDL_Init(SDL_INIT_VIDEO) > 0){
    std::cout << "SDL INIT FAILED. ERROR: " << SDL_GetError() << std::endl;
}
    return 0;
}