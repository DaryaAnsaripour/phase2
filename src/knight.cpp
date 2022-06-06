#include "../headers/knight.h"
Knight:: Knight(Colour _colour){colour=_colour;name=KNIGHT;}
void Knight:: load_texture()
{
    this->texture.loadFromFile(get_piece_path(this));
    this->sprite.setTexture(texture);
    float piece_scale_x = 100.f / this->sprite.getTexture()->getSize().x;
    float piece_scale_y = 100.f / this->sprite.getTexture()->getSize().y;
    this->sprite.setScale(piece_scale_x, piece_scale_y);
}