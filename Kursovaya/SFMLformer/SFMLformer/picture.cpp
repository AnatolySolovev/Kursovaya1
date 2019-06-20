#include <iostream>
#include "picture.h"

Picture::Picture() {
	x = 1400;
	y = 110;
	image.loadFromFile("image/privet.png");//��������� � ���� ����
	texture.loadFromImage(image);//�������� � ���� ������ Image (�����������)
	sprite.setTexture(texture);//������� � ���� ������ Texture (��������)
	sprite.setPosition(0, 0);//������ ��������� ���������� ��������� �������
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