#include <stdlib.h>
#include <string>
#include <SDL2/SDL.h>

// C includes
#include "vector.c"

const int WIDTH = 600;
const int HEIGHT = 600;

SDL_Window* window = NULL;
SDL_Surface* screenSurface = NULL;
SDL_Surface* currentSurface = NULL;

enum Keys {
	KEY_DEFAULT,
	KEY_UP,
	KEY_DOWN,
	KEY_LEFT,
	KEY_RIGHT,
	KEY_TOTAL
};

SDL_Surface* keysSurfaces[KEY_TOTAL];

bool init() {
	bool success = true;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
        success = false;
    }
	else {
		window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
		if (window == NULL) {
			printf("cant create window, SDL_Error: %s\n", SDL_GetError());
			success = false;
		}
		else {
			screenSurface = SDL_GetWindowSurface(window);
		}
	}

	return success;
}

SDL_Surface* load_surface(std::string path) {
	SDL_Surface* loaded_surface = SDL_LoadBMP(path.c_str());
   	if (loaded_surface == NULL) {
        printf("cant load image %s SDL_Error: %s\n", path, SDL_GetError());
    }

	return loaded_surface;
}
bool load_media() {
	keysSurfaces[KEY_DEFAULT] = load_surface("media/def.bmp");
	keysSurfaces[KEY_UP] = load_surface("media/up.bmp");
	keysSurfaces[KEY_DOWN] = load_surface("media/down.bmp");
	keysSurfaces[KEY_LEFT] = load_surface("media/left.bmp");
	keysSurfaces[KEY_RIGHT] = load_surface("media/right.bmp");

	return true;
}
void close() {
	SDL_FreeSurface(currentSurface);
	currentSurface = NULL;

	SDL_DestroyWindow(window);
	window = NULL;

	SDL_Quit();
}

void start() {
	if (!init()) {
		printf("ERROR ON INIT!\n");
		exit(0);
	}
	
	load_media();
	currentSurface = load_surface("media/def.bmp");
}

void update() {
	SDL_BlitSurface(currentSurface, NULL, screenSurface, NULL);
	SDL_UpdateWindowSurface(window);
}

void main_loop() {
	SDL_Event event;
	bool quit = false;

	while(!quit) {
		while(SDL_PollEvent(&event) != 0) {
			if (event.type == SDL_QUIT) {
				quit = true;
			}
			else if (event.type == SDL_KEYDOWN) {
				switch (event.key.keysym.sym) {
					case SDLK_UP:
						currentSurface = keysSurfaces[KEY_UP];
						break;
					
					case SDLK_DOWN:
						currentSurface = keysSurfaces[KEY_DOWN];
						break;
					
					case SDLK_LEFT:
						currentSurface = keysSurfaces[KEY_LEFT];
						break;
					
					case SDLK_RIGHT:
						currentSurface = keysSurfaces[KEY_RIGHT];
						break;
					
					default:
						currentSurface = keysSurfaces[KEY_DEFAULT];
						break;
				}
			}
		update();
		}
	}
}

int main(int agrc, char** args) {
	start();

	main_loop();

	close();

	return 0;
}
