// Created by Dima Marhitych
#include "files/include.h"
#include "files/window.h"
#include "files/event.h"
#include "files/draw.h"
#include "files/renderer.h"


void init() {
    SDL_Init(SDL_INIT_EVERYTHING);
}

int windowShouldClose(Window *window) {
    int running = 1;

    Event event;
    while (checkEvents(&event)) {

        if (event.type == SDL_QUIT) {
            running = 0;
        }
    }

    return running;
}

void Quit(Window *window) {
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void refresh(SDL_Renderer *renderer) {
    SDL_RenderPresent(renderer);
}
