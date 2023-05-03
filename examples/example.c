#include "../fe/main.h"


#define win_h 800
#define win_w 600



int main()
{
  SDL_Init(SDL_INIT_VIDEO);
  //int WindowFlags = SDL_WINDOW_OPENGL;

  //printf("Window flags: %d\n", WindowFlags);

  Window* Window = newWindow("hi", win_h, win_w);
  //assert(Window());
  //SDL_GLContext Context = SDL_GL_CreateContext(Window);
  
  int Running = 1;
  int FullScreen = 0;

  while (Running) {
    Event Event;
    while (SDL_PollEvent(&Event)) {
      if (Event.type == SDL_QUIT) {
        Running = 0;
      }
    }

    glViewport(0, 0, win_w, win_h);
    glClearColor(1.f, 0.f, 1.f, 0.f);
    glClear(GL_COLOR_BUFFER_BIT);

    SDL_GL_SwapWindow(Window);
  }
  return 0;
}