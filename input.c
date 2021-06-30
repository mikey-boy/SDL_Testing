#include "input.h"
#include "draw.h"

void doInput(App &app, int &CurrentSurface) {
    SDL_Event event;

    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            exit(0);
            break;
        } else if (event.type == SDL_KEYDOWN) {
            switch (event.key.keysym.sym) {
                case SDLK_UP:
                    CurrentSurface = KEY_PRESS_SURFACE_UP;
                    break;
                case SDLK_DOWN:
                    CurrentSurface = KEY_PRESS_SURFACE_DOWN;
                    break;
                case SDLK_LEFT:
                    CurrentSurface = KEY_PRESS_SURFACE_LEFT;
                    break;
                case SDLK_RIGHT:
                    CurrentSurface = KEY_PRESS_SURFACE_RIGHT;
                    break;
                default:
                    CurrentSurface = KEY_PRESS_SURFACE_DEFAULT;
                    break;
            }
        }
    }
}
