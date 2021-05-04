#pragma once
#include "Game.h"


class GameObject {

public:
	GameObject(const char* texturesheet, SDL_Renderer* ren, int x, int y);
	~GameObject();

	void Update();
	void Render();


private:

	int xpos;
	int ypos;

	SDL_Texture* objTexture;	//textura del objeto
	SDL_Rect srcRect, destRect;	//tamaño del objeto
	SDL_Renderer* renderer;


};
