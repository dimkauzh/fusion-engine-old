#include "include.h"


int GREEN[4] = {0, 255, 0, 255};
int RED[4] = {255, 0, 0, 255};
int BLUE[4] = {0, 0, 255, 255};
int YELLOW[4] = {255, 255, 0, 255};
int CYAN[4] = {0, 255, 255, 255};
int MAGENTA[4] = {100, 0, 100, 100};
int WHITE[4] = {255, 255, 255, 255};
int BLACK[4] = {0, 0, 0, 255};

typedef struct SDL_Rect Rect;

void setDrawColor(SDL_Renderer *renderer, int color[]) {
    SDL_SetRenderDrawColor(renderer, color[0], color[1], color[2], color[3]);
}

void setBackgroundColor(SDL_Renderer *renderer, int color[]) {
    setDrawColor(renderer, color);
    SDL_RenderClear(renderer);
}

void drawOwnRect(SDL_Renderer *renderer, SDL_Rect *rect, int color[]) {
    setDrawColor(renderer, color);
    SDL_RenderFillRect(renderer, rect);
}
void drawOwnRectOutline(SDL_Renderer *renderer, SDL_Rect *rect, int color[]) {
    setDrawColor(renderer, color);
    SDL_RenderDrawRect(renderer, rect);
}

void drawRect(SDL_Renderer *renderer, int x, int y, int h, int w, int color[]) {
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.h = h;
    rect.w = w;

    setDrawColor(renderer, color);
    SDL_RenderFillRect(renderer, &rect);
}
void drawRectOutline(SDL_Renderer *renderer, int x, int y, int h, int w, int color[]) {
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.h = h;
    rect.w = w;

    setDrawColor(renderer, color);
    SDL_RenderDrawRect(renderer, &rect);
}

SDL_Rect newRect(int x, int y, int h, int w) {
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.h = h;
    rect.w = w;

    return rect;
}


