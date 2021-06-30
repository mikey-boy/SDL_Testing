#include <string>
#include <SDL2/SDL.h>
#include "structs.h"

enum KeyPressSurfaces {
    KEY_PRESS_SURFACE_DEFAULT,
    KEY_PRESS_SURFACE_UP,
    KEY_PRESS_SURFACE_DOWN,
    KEY_PRESS_SURFACE_LEFT,
    KEY_PRESS_SURFACE_RIGHT,
    KEY_PRESS_SURFACE_TOTAL
};

void drawScene(App &app, SDL_Surface * KeyPressedSurface);
void loadResources(SDL_Surface ** KeyPressSurfaces);
