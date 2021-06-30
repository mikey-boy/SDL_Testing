#include <SDL2/SDL.h>
#include "draw.h"
#include "init.h"
#include "input.h"
#include "structs.h"

App app;
SDL_Surface * KeyPressSurfaces[KEY_PRESS_SURFACE_TOTAL];
int CurrentSurface = KEY_PRESS_SURFACE_DEFAULT;

int main(int argc, char *argv[]) {
    memset(&app, 0, sizeof(App));

    // Initialize SDL window and renderer
    initSDL(app);

    // Load Image Resources
    loadResources(KeyPressSurfaces);

    while (1) {
        doInput(app, CurrentSurface);
        drawScene(app, KeyPressSurfaces[CurrentSurface]);
        SDL_Delay(16);
    }

    //close(app);
}
