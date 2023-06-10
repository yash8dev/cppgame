#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "RenderWindow.hpp"

int main(int argc , char* args[]){
if (SDL_Init(SDL_INIT_VIDEO) > 0){
    std::cout << "SDL INIT FAILED. ERROR: " << SDL_GetError() << std::endl;
}
if(!(IMG_Init(IMG_INIT_PNG))){
    std::cout << "IMG INIT FAILED. ERROR: " << SDL_GetError() << std::endl;
}

RenderWindow window("game v1",1280,720);

bool gameRunning = true;
SDL_Event event;
while (gameRunning)
{
    while (SDL_PollEvent(&event)){
        if (event.type ==  SDL_QUIT)
        gameRunning = false;
    }

}


window.ClearUp();
SDL_Quit();
    return 0;
}