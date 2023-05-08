#include "../fe/main.h"

#define win_h 800
#define win_w 600

int main()
{
    init();

    Window *window = newWindow("hi", win_h, win_w, "resizable");

    //Renderer *renderer = NULL;
    Renderer *renderer = createRenderer(window);


    SDL_RenderClear(renderer);

    Rect fill_rect;

    fill_rect.x = 250;
    fill_rect.y = 150;
    fill_rect.w = 200;
    fill_rect.h = 200;

    Rect not_fill_rect;

    not_fill_rect.x = 500;
    not_fill_rect.y = 300;
    not_fill_rect.w = 200;
    not_fill_rect.h = 100;

    while (windowShouldClose(window)) {
        setBackgroundColor(renderer, BLUE);

        drawRect(renderer, &fill_rect, RED);
        drawRectOutline(renderer, &not_fill_rect, GREEN);

        refresh(renderer);
    }

    Quit(window);
    return 0;
}