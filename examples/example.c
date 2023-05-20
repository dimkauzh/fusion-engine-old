#include "../fe/main.h"

int main()
{
    init();

    Window *window = newWindow("hi", 800, 600, "resizable");
    Renderer *renderer = createRenderer(window);

    Rect fill_rect = newRect(160,150,200,200);
    Rect not_fill_rect = newRect(150, 300, 200, 100);

    Event event;

    Image *image = newImage(renderer, TEST_PNG, 160, 160, 160, 160);

    while (windowShouldClose()) {
        setBackgroundColor(renderer, BLUE);

        if (isKeyPressed(KEY_a) == 0) {
            printf("Button A is pressed!\n");
        } else {
            printf("Button A is not pressed.\n");
        }

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