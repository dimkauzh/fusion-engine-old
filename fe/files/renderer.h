#include "include.h"

Renderer* createRenderer(Window *window) {
    Renderer *renderer = NULL;
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    return renderer;
}