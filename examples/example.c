#include "../fe/main.h"

int main()
{
    init();

    Window *window = newWindow("hi", 800, 600, "resizable");

    //Renderer *renderer = NULL;
    Renderer *renderer = createRenderer(window);

    Rect fill_rect = newRect(250, 150, 200, 200);
    Rect not_fill_rect = newRect(500, 300, 200, 100);

    while (windowShouldClose(window)) {
        setBackgroundColor(renderer, BLUE);

        drawRect(renderer, &fill_rect, RED);
        drawRectOutline(renderer, &not_fill_rect, GREEN);

        refresh(renderer);
    }

    Quit(window);
    return 0;
}