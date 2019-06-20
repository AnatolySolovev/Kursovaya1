#include <iostream>
#include "picture.h"

Picture::Picture() {
	x = 1400;
	y = 110;
	image.loadFromFile("image/privet.png");//загружаем в него файл
	texture.loadFromImage(image);//передаем в него объект Image (изображения)
	sprite.setTexture(texture);//передаём в него объект Texture (текстуры)
	sprite.setPosition(0, 0);//задаем начальные координаты появления спрайта
	image.createMaskFromColor(Color(Color::White));
	sprite.setTextureRect(IntRect(0, 0, x, y));
}

void Picture::change_sprite(int n) {
	sprite.setTextureRect(IntRect(0, y*(n-1), x, y));
}

Sprite Picture::get_sprite() {
	return sprite;
}

void Picture::change_word(int x) {
	word.change_word(x);
}

int Picture::get_size_w() {
	return word.get_size_w();
}

std::string Picture::get_word() {
	return word.get_word();
}