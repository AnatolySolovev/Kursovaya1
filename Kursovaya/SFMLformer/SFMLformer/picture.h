#pragma once
#include <SFML/Graphics.hpp>
#include "word.h"
#include <string>

using namespace sf;

class Picture {
private:
	int x,y;
	Word word;
	Image image; //создаем объект Image (изображение)
	Texture texture;//создаем объект Texture (текстура)
	Sprite sprite;//создаем объект Sprite(спрайт)
public:
	Picture();
	std::string get_word();
	void change_sprite(int n);
	Sprite get_sprite();
	void change_word(int x);
	int get_size_w();
};