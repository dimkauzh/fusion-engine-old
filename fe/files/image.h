#include "include.h"

void drawImage(Renderer *renderer, char path[]) {
    SDL_Texture *texture = IMG_LoadTexture(renderer, path);
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);;
}