#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "RenderWindow.hpp"

RenderWindow::RenderWindow(const char* p_title , int p_w , int p_h)
:window(NULL),renderer(NULL)
{
    window = SDL_CreateWindow(p_title , SDL_WINDOWPOS_UNDEFINED , SDL_WINDOWPOS_UNDEFINED , p_h ,p_w, SDL_WINDOW_SHOWN );
    if(window == NULL){
         std::cout << "Window FAILED. ERROR: " << SDL_GetError() << std::endl;
    }
    renderer = SDL_CreateRenderer(window , -1 , SDL_RENDERER_ACCELERATED);
}

SDL_Texture* RenderWindow::loadTexture(const char* p_filepath){
    SDL_Texture* texture = NULL;
    texture = IMG_LoadTexture(renderer,p_filepath);
    if(texture == NULL)
        std::cout << "TEXTURE LOADING FAILED" << SDL_GetError() << std::endl ; 
    return texture;
}

void RenderWindow::clear(){
    SDL_RenderClear(renderer);
}

void RenderWindow::ClearUp(){
    SDL_DestroyWindow(window);
}

void RenderWindow::render(SDL_Texture* p_tex){
    SDL_Rect src;
    src.x = 0;
    src.y = 0;
    src.w = 32;
    src.h = 32;

    SDL_Rect dst;
    dst.x = 0;
    dst.y = 0;
    dst.w = 32;
    dst.h = 32;

    SDL_RenderCopy( renderer ,p_tex , &src , &dst);
}

void RenderWindow::display(){
    SDL_RenderPresent(renderer);
}
    
    