#include "../fe/main.h"

int main()
{
    init();

    Window *window = newWindow("hi", 800, 600, "resizable");

    //Renderer *renderer = NULL;
    Renderer *renderer = createRenderer(window);

    SDL_Texture *texture = IMG_LoadTexture(renderer, TEST_PNG);

    Rect fill_rect = newRect(250, 150, 200, 200);
    Rect not_fill_rect = newRect(500, 300, 200, 100);

    while (windowShouldClose(window)) {
        setBackgroundColor(renderer, BLUE);

        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, NULL);

        drawRect(renderer, &fill_rect, RED);
        drawRectOutline(renderer, &not_fill_rect, GREEN);

        refresh(renderer);
    }

    Quit(window);
    return 0;
}