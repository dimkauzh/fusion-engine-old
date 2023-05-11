#include "include.h"

void drawImage(Renderer *renderer, int x, int y, int h, int w, char path[]) {
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.h = h;
    rect.w = w;

    SDL_Texture *texture = IMG_LoadTexture(renderer, path);

    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, &rect);
}