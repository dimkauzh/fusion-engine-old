#include "../fe/main.h"

#define win_h 800
#define win_w 600

int main()
{
    init();

    Window *window = newWindow("hi", win_h, win_w);

    //Renderer *renderer = NULL;
    Renderer *renderer = createRenderer(window);

    while (windowShouldClose(window)) {

        newViewport(0, 0, win_h, win_w);
        setBackgroundColor(renderer, CYAN);

        refresh(renderer);
    }

    Quit(window);
    return 0;
}