#include "../fe/main.h"

#define win_h 800
#define win_w 600

int main()
{
  init();

  Window *Window = newWindow("hi", win_h, win_w);

  while (windowShouldClose(Window)) {

    getNewViewport(0, 0, win_h, win_w);
    setBackgroundColor(CYAN);
    glClear(GL_COLOR_BUFFER_BIT);

  }
  SDL_DestroyWindow(Window);
  SDL_Quit();
  return 0;
}