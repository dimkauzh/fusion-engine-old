#include "include.h"

typedef struct SDL_Window Window;

Window* newWindow(char title[], int width, int height) {
  SDL_Init(SDL_INIT_VIDEO);
  int WindowFlags = SDL_WINDOW_OPENGL;
  Window* Window = SDL_CreateWindow("test", 0, 0, width, height, WindowFlags);
  SDL_GLContext Context = SDL_GL_CreateContext(Window);
  return Window;
}