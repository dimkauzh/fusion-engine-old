#include "include.h"

#define std_win_w 800
#define std_win_h 600


Window* newWindow(const char title[40], int width, int height, const char flags[40]) {
    int WindowFlags;

    if (strcmp(flags, "fullscreen") == 0) {
        WindowFlags = SDL_WINDOW_FULLSCREEN;
    } else if (strcmp(flags, "borderless") == 0) {
        WindowFlags = SDL_WINDOW_BORDERLESS;
    } else if (strcmp(flags, "resizable") == 0) {
        WindowFlags = SDL_WINDOW_RESIZABLE;
    } else {
        WindowFlags = SDL_WINDOW_SHOWN;
    }
    Window* Window = SDL_CreateWindow("test", 0, 0, width, height, WindowFlags);
    return Window;
}

void setViewport(Renderer *renderer, Rect *rect) {
    SDL_RenderSetViewport(renderer, rect);
}