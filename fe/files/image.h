#include "include.h"

typedef struct SDL_Texture {
    int x;
    int y;
    int h;
    int w;
    SDL_Renderer *renderer;
    SDL_Texture *image;
} Image;

Image *newImage(SDL_Renderer *renderer, char path[], int x, int y, int h, int w) {
    Image *image;
    image->image = IMG_LoadTexture(renderer, path);
    image->x = x;
    image->y = y;
    image->h = h;
    image->w = w;

    image->renderer = renderer;

    return image;
}

void drawImage(SDL_Renderer *renderer, int x, int y, int h, int w, char path[]) {
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.h = h;
    rect.w = w;

    SDL_Texture *texture = IMG_LoadTexture(renderer, path);

    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, &rect);
}

void drawOwnImage(Image image) {
    SDL_Rect rect;
    rect.x = image.x;
    rect.y = image.y;
    rect.h = image.h;
    rect.w = image.w;

    SDL_RenderClear(image.renderer);
    SDL_RenderCopy(image.renderer, image.image, NULL, &rect);
}
