#include "EnemigoRojo.h"

EnemigoRojo::EnemigoRojo(SDL_Renderer* renderer)
{
    this->renderer=renderer;
    textura = IMG_LoadTexture(renderer,"enemigo2.png");
    SDL_QueryTexture(textura, NULL, NULL, &rectangulo.w, &rectangulo.h);
    rectangulo.x = 0;
    rectangulo.y = 0;
}

EnemigoRojo::~EnemigoRojo()
{
    //dtor
}

void EnemigoRojo::logica()
{
    if(rectangulo.y + rectangulo.h == 600)
        move= true;
    else if(rectangulo.y == 0)
        move = false;
    if(move)
        rectangulo.y--;
    else
        rectangulo.y++;
}
