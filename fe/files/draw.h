#include "include.h"


int GREEN[4] = {0, 255, 0, 255};
int RED[4] = {255, 0, 0, 255};
int BLUE[4] = {0, 0, 255, 255};
int YELLOW[4] = {255, 255, 0, 255};
int CYAN[4] = {0, 255, 255, 255};
int MAGENTA[4] = {100, 0, 100, 100};
int WHITE[4] = {255, 255, 255, 255};
int BLACK[4] = {0, 0, 0, 255};

void setDrawColor(Renderer *renderer, int color[]) {
    SDL_SetRenderDrawColor(renderer, color[0], color[1], color[2], color[3]);
}

void setBackgroundColor(Renderer *renderer, int color[]) {
    setDrawColor(renderer, color);
    SDL_RenderClear(renderer);
}

void drawRect(Renderer *renderer, Rect *rect, int color[]) {
    setDrawColor(renderer, color);
    SDL_RenderFillRect(renderer, rect);
}
void drawRectOutline(Renderer *renderer, Rect *rect, int color[]) {
    setDrawColor(renderer, color);
    SDL_RenderDrawRect(renderer, rect);
}


