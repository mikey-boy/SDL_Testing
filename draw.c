#include <iostream>
#include "draw.h"

void drawScene(App &app, SDL_Surface *KeyPressedSurface) {
    SDL_Surface* gScreenSurface = NULL;

    gScreenSurface = SDL_GetWindowSurface(app.window);
    if (!gScreenSurface) {
        printf("Unable to get screen surface! SDL error: %s\n", SDL_GetError());
        exit(1);
    }

    SDL_BlitSurface(KeyPressedSurface, NULL, gScreenSurface, NULL);
    SDL_UpdateWindowSurface(app.window);
}

SDL_Surface * loadSurface(const char * path) {
    SDL_Surface * surface = SDL_LoadBMP(path);
    if (surface == NULL) {
        std::cout << "Unable to load image: " << path << "Error: " << SDL_GetError() << std::endl;
    }
    return surface;
}

void loadResources(SDL_Surface ** KeyPressSurfaces) {
    KeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT] = loadSurface("asset/ex1.bmp");
    KeyPressSurfaces[KEY_PRESS_SURFACE_UP] = loadSurface("asset/ex2.bmp");
    KeyPressSurfaces[KEY_PRESS_SURFACE_DOWN] = loadSurface("asset/ex2.bmp");
    KeyPressSurfaces[KEY_PRESS_SURFACE_LEFT] = loadSurface("asset/ex3.bmp");
    KeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT] = loadSurface("asset/ex3.bmp");
}

void close(App &app) {
    printf("Closing app\n");
}
