#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#include "files/include.h"
#include "files/window.h"
#include "files/event.h"
#include "files/color.h"


void init() {
    SDL_Init(SDL_INIT_VIDEO);
}

int windowShouldClose(Window *window) {
    int running = 1;

    Event event;
    while (checkEvents(&event)) {

        if (event.type == SDL_QUIT) {
            running = 0;
        }
    }

    SDL_GL_SwapWindow(window);

    return running;
}

void Quit(Window *window) {
    SDL_DestroyWindow(window);
    SDL_Quit();
}
