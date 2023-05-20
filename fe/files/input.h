#include "include.h"
#include "input_keys.h"

int isKeyPressed(SDL_Keycode key) {
    SDL_PumpEvents(); // Update the keyboard state

    const Uint8* state = SDL_GetKeyboardState(NULL);

    if (state[SDL_GetScancodeFromKey(key)]) {
        return 0; // Key is pressed
    }

    return 1; // Key is not pressed
}