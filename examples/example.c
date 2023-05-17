#include "../fe/main.h"

int main()
{
    init();

    Window *window = newWindow("hi", 800, 600, "resizable");
    Renderer *renderer = createRenderer(window);

    Rect fill_rect = newRect(250, 150, 200, 200);
    Rect not_fill_rect = newRect(500, 300, 200, 100);

    Image *image = newImage(renderer, TEST_PNG, 160, 160, 160, 160);

    while (windowShouldClose()) {
        setBackgroundColor(renderer, BLUE);

        drawImage(renderer, 450, 450, 150, 150, TEST_PNG);

        drawOwnImage(*image);

        drawOwnRect(renderer, &fill_rect, RED);
        drawOwnRectOutline(renderer, &not_fill_rect, GREEN);

        drawRect(renderer, 10, 10, 100, 100, YELLOW);

        refresh(renderer);
    }

    Quit(window);
    return 0;
}