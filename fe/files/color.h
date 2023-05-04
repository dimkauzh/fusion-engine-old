#include "include.h"

float GREEN[4] = {0.f, 1.f, 0.f, 1.f};
float RED[4] = {1.f, 0.f, 0.f, 1.f};
float BLUE[4] = {0.f, 0.f, 1.f, 1.f};
float YELLOW[4] = {1.f, 1.f, 0.f, 1.f};
float CYAN[4] = {0.f, 1.f, 1.f, 1.f};
float MAGENTA[4] = {1.f, 0.f, 1.f, 1.f};
float WHITE[4] = {1.f, 1.f, 1.f, 1.f};
float BLACK[4] = {0.f, 0.f, 0.f, 1.f};

void setBackgroundColor(float color[]) {
    if (color == GREEN) {
        glClearColor(0.f, 1.f, 0.f, 1.f);
    } else if (color == RED) {
        glClearColor(1.f, 0.f, 0.f, 1.f);
    } else if (color == BLUE) {
        glClearColor(0.f, 0.f, 1.f, 1.f);
    } else if (color == YELLOW) {
        glClearColor(1.f, 1.f, 0.f, 1.f);
    } else if (color == CYAN) {
        glClearColor(0.f, 1.f, 1.f, 1.f);
    } else if (color == MAGENTA) {
        glClearColor(1.f, 0.f, 1.f, 1.f);
    } else if (color == WHITE) {
        glClearColor(1.f, 1.f, 1.f, 1.f);
    } else if (color == BLACK) {
        glClearColor(0.f, 0.f, 0.f, 1.f);
    } else {
        glClearColor(color[0], color[1], color[2], color[3]);
    }
    glClear(GL_COLOR_BUFFER_BIT);
}