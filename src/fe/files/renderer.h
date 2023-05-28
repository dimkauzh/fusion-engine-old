#include "include.h"

typedef struct SDL_Renderer Renderer;

SDL_Renderer* createRenderer(SDL_Window *window) {
    return SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
}