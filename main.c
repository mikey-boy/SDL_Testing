#include <SDL2/SDL.h>
#include "draw.h"
#include "init.h"
#include "input.h"
#include "structs.h"

int main(int argc, char *argv[]) {
    App app;
    memset(&app, 0, sizeof(App));

    // Initialize SDL window and renderer
    initSDL(app);

    // Load Image and draw it to the screen
    drawScene(app);

    // Delay before closing
    SDL_Delay(2000);

    //close(app);
}
