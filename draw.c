#include "draw.h"

void drawScene(App &app) {
    SDL_Surface* gScreenSurface = NULL;
    SDL_Surface* gHelloWorld = NULL;

    gScreenSurface = SDL_GetWindowSurface(app.window);
    if (!gScreenSurface) {
        printf("Unable to get screen surface! SDL error: %s\n", SDL_GetError());
        exit(1);
    }

    gHelloWorld = SDL_LoadBMP("example.bmp");
    if (!gHelloWorld) {
        printf("Unable to load PNG image! SDL error: %s\n", SDL_GetError());
        exit(1);
    }

    SDL_BlitSurface(gHelloWorld, NULL, gScreenSurface, NULL);
    SDL_UpdateWindowSurface(app.window);
}

void close(App &app) {
    printf("Closing app\n");
}
