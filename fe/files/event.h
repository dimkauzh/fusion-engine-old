#include "include.h"

int checkEvents(Event *event) {
    return SDL_PollEvent(event);
}