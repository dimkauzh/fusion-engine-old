#include "include.h"

#define std_win_w 800
#define std_win_h 600


Window* newWindow(char title[], int width, int height) {
  int WindowFlags = SDL_WINDOW_OPENGL;
  Window* Window = SDL_CreateWindow("test", 0, 0, width, height, WindowFlags);
  SDL_GLContext Context = SDL_GL_CreateContext(Window);
  return Window;
}

void newViewport(int x, int y, int width, int height) {
    glViewport(x, y, width, height);
}