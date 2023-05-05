#include "include.h"

int GREEN[4] = {0, 255, 0, 255};
int RED[4] = {255, 0, 0, 255};
int BLUE[4] = {0, 0, 255, 255};
int YELLOW[4] = {255, 255, 0, 255};
int CYAN[4] = {0, 255, 255, 255};
int MAGENTA[4] = {100, 0, 100, 100};
int WHITE[4] = {255, 255, 255, 255};
int BLACK[4] = {0, 0, 0, 255};

void setBackgroundColor(Renderer *renderer, int color[]) {
    if (color == GREEN) {
        SDL_SetRenderDrawColor(renderer, GREEN[0], GREEN[1], GREEN[2], GREEN[3]);
    }
    else if (color == RED) {
        SDL_SetRenderDrawColor(renderer, RED[0], RED[1], RED[2], RED[3]);
    }
    else if (color == BLUE) {
        SDL_SetRenderDrawColor(renderer, BLUE[0], BLUE[1], BLUE[2], BLUE[3]);
    }
    else if (color == YELLOW) {
        SDL_SetRenderDrawColor(renderer, YELLOW[0], YELLOW[1], YELLOW[2], YELLOW[3]);
    }
    else if (color == CYAN) {
        SDL_SetRenderDrawColor(renderer, CYAN[0], CYAN[1], CYAN[2], CYAN[3]);
    }
    else if (color == MAGENTA) {
        SDL_SetRenderDrawColor(renderer, MAGENTA[0], MAGENTA[1], MAGENTA[2], MAGENTA[3]);
    }
    else if (color == WHITE) {
        SDL_SetRenderDrawColor(renderer, WHITE[0], WHITE[1], WHITE[2], WHITE[3]);
    }
    else if (color == BLACK) {
        SDL_SetRenderDrawColor(renderer, BLACK[0], BLACK[1], BLACK[2], BLACK[3]);
    }
    else {
        SDL_SetRenderDrawColor(renderer, color[0], color[1], color[2], color[3]);
    }

    SDL_RenderClear(renderer);

}