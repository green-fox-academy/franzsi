#include <iostream>
#include <SDL.h>
#include <SDL2_gfxPrimitives.h>


//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 640;

//Draws geometry on the canvas
void draw();

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = nullptr;

//The window renderer
SDL_Renderer* gRenderer = nullptr;


void draw()
{
int x = SCREEN_WIDTH;
int y = SCREEN_HEIGHT;
int a = SCREEN_WIDTH/16;

  //*  for (int j = x; j > 0; j -= a){

        trigonRGBA(gRenderer, x, y, x+40, y+40, x+1, y+1, 0x00, 0xFF, 0xFF, 0xFF);

//Drawing the lines we want. (-1, 0), (0, 1), (1, 0)
    SDL_RenderDrawLine(gRenderer, 0, 480, 320, 0);
    SDL_RenderDrawLine(gRenderer, 640, 480, 320, 0);
    SDL_RenderDrawLine(gRenderer, 0, 480, 640, 480);
    //Setting the actual draw color.
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0xFF, 0);

   // int x = 10;
    // int y = 10;

   /* for(int i = 0; i < SCREEN_WIDTH/2; i++){
        SDL_SetRenderDrawColor(gRenderer, 0x00, 0xFF, 0x00, 0x00);
        SDL_RenderDrawLine(gRenderer, 0, y, x, SCREEN_HEIGHT);

        SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0xFF, 0x00);
        SDL_RenderDrawLine(gRenderer, x, 0, SCREEN_WIDTH, y);

        x += 10;
        y += 10;

}*/
    }*/
}
bool init()
{
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow( "Horizontal lines", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( gWindow == nullptr )
    {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    if( gRenderer == nullptr )
    {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

    return true;
}

void close()
{
    //Destroy window
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );
    gWindow = nullptr;
    gRenderer = nullptr;

    SDL_Quit();
}

int main( int argc, char* args[] )
{
    //Start up SDL and create window
    if( !init() )
    {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while( !quit ) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(gRenderer);

        draw();

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}