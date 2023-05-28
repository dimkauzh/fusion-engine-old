#include "include.h"

typedef union SDL_Event Event;

int checkEvents(SDL_Event *event) {
    return SDL_PollEvent(event);
}
