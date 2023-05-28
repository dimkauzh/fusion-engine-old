#include "main.h"

void init();
int windowShouldClose();
void Quit(SDL_Window *window);
void refresh(SDL_Renderer *renderer);

void setDrawColor(SDL_Renderer *renderer, int color[]);
void drawImage(SDL_Renderer *renderer, int x, int y, int h, int w, char path[]);
void drawOwnImage(Image image);
void setBackgroundColor(SDL_Renderer *renderer, int color[]);
void drawOwnRect(SDL_Renderer *renderer, SDL_Rect *rect, int color[]);
void drawOwnRectOutline(SDL_Renderer *renderer, SDL_Rect *rect, int color[]);
void drawRect(SDL_Renderer *renderer, int x, int y, int h, int w, int color[]);
void drawRectOutline(SDL_Renderer *renderer, int x, int y, int h, int w, int color[]);
SDL_Rect newRect(int x, int y, int h, int w);
int checkEvents(SDL_Event *event);
int isKeyPressed(SDL_Keycode key);
SDL_Renderer* createRenderer(SDL_Window *window);
SDL_Window* newWindow(const char title[40], int width, int height, const char flags[40]);
void setViewport(SDL_Renderer *renderer, SDL_Rect *rect);
Image *newImage(SDL_Renderer *renderer, char path[], int x, int y, int h, int w);

