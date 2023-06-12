#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "RenderWindow.hpp"
#include "Entity.hpp"


int main(int argc , char* args[]){
if (SDL_Init(SDL_INIT_VIDEO) > 0){
    std::cout << "SDL INIT FAILED. ERROR: " << SDL_GetError() << std::endl;
}
if(!(IMG_Init(IMG_INIT_PNG))){
    std::cout << "IMG INIT FAILED. ERROR: " << SDL_GetError() << std::endl;
}

RenderWindow window("game v1",720,720);
SDL_Texture* grassTexture = window.loadTexture("res\\gfx\\ground_grass_1.png");



bool gameRunning = true;
SDL_Event event;
while (gameRunning)
{
    while (SDL_PollEvent(&event)){
        if (event.type ==  SDL_QUIT)
        gameRunning = false;
    }
    window.clear();
    window.render(grassTexture);
    window.display();  

}


window.ClearUp();
SDL_Quit();
    return 0;
}