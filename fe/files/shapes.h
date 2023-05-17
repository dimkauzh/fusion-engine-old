#include "include.h"

typedef struct SDL_Rect Rect;

SDL_Rect newRect(int x, int y, int w, int h) {
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;

    return rect;
}