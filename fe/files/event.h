#include "include.h"

typedef union SDL_Event Event;

int checkEvents(Event *event) {
    return SDL_PollEvent(event);
}