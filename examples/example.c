#include "../fe/main.h"
#include "SDL2/SDL_events.h"


#define win_h 800
#define win_w 600

int main()
{
  SDL_Init(SDL_INIT_VIDEO);

  Window* Window = newWindow("hi", win_h, win_w);

  int Running = 1;

  while (Running) {
    Event event;
    while (checkEvents(&event)) {
      
      if (event.type == SDL_QUIT) {
        Running = 0;
      }
    }

    glViewport(0, 0, win_w, win_h);
    glClearColor(1.f, 0.f, 1.f, 0.f);
    glClear(GL_COLOR_BUFFER_BIT);

    SDL_GL_SwapWindow(Window);
  }
  SDL_DestroyWindow(Window);
  SDL_Quit();
  return 0;
}