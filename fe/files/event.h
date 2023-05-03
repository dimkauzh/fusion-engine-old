#include "SDL2/SDL_events.h"
#include "include.h"

typedef union SDL_Event Event;

int checkEvents(Event *event) {
    return SDL_PollEvent(event);
}