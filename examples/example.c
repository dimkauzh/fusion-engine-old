#include "../fe/main.h"

#define win_h 800
#define win_w 600

int main()
{
  init();

  Window* Window = newWindow("hi", win_h, win_w);

  while (windowShouldClose()) {

    getNewViewport(0, 0, win_h, win_w);
    glClearColor(1.f, 0.f, 1.f, 0.f);
    glClear(GL_COLOR_BUFFER_BIT);

    SDL_GL_SwapWindow(Window);
  }
  SDL_DestroyWindow(Window);
  SDL_Quit();
  return 0;
}