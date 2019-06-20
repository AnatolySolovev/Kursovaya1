#include "game.h"
#include <iostream>
#include <string>
#include <sstream>
#include <SFML/Graphics.hpp>

using namespace std;

Game::Game() {
	next = false;
}

void Game::start() {
	int count = 0;
	int i = 1;
	points = 0;
	while (i!=6)
	{
		pictures.change_sprite(i);
		pictures.change_word(count);
		count = count + pictures.get_size_w();
		window(pictures.get_sprite(), pictures.get_word(), i);
		if (next == true) {
			i++;
			set_next(false);
		}
	} 
	the_end();
}

bool Game::get_next() {
	return next;
}

void Game::set_next(bool x) {
	next = x;
}

void Game::window(Sprite sprite, std::string str, int i) {
	sf::Vector2i position;

	sf::Image image_screen_saver;
	image_screen_saver.loadFromFile("image/screen_saver.png");

	sf::Texture texture_screen_saver;
	texture_screen_saver.loadFromImage(image_screen_saver);

	Sprite sprite_screen_saver;
	sprite_screen_saver.setTexture(texture_screen_saver);
	sprite_screen_saver.setPosition(0,250);
	sprite_screen_saver.setTextureRect(IntRect(0,0,1400,450));

	sf::Image image_hint;
	image_hint.loadFromFile("image/podskazka.png");

	sf::Texture texture_hint;
	texture_hint.loadFromImage(image_hint);

	Sprite sprite_hint;
	sprite_hint.setTexture(texture_hint);
	sprite_hint.setPosition(900, 130);
	sprite_hint.setTextureRect(IntRect(1008, 0, 492, 78));

	Font font;//шрифт 	
	font.loadFromFile("CyrilicOld.ttf");//передаем нашему шрифту файл шрифта

	Text text("¬ведите слово",font,40);
	text.setPosition(550,150);

	Text text2;
	text2.setFont(font);
	text2.setCharacterSize(30);
	text2.setPosition(550, 200);

	Text text_points;
	ostringstream stream_points;
	text_points.setFont(font);
	text_points.setCharacterSize(30);
	text_points.setPosition(50, 200);
	stream_points << points;

	sf::RenderWindow window(sf::VideoMode(1400, 700), "Kursovaya");
	while (window.isOpen())
	{
		position = sf::Mouse::getPosition();
		bool temp = false;
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
				exit(0);
			}
			if (temp == false) {
				if (Keyboard::isKeyPressed(Keyboard::LBracket)) {
					text2.setString(text2.getString() + 'х');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::Q)) {
					text2.setString(text2.getString() + 'й');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::W)) {
					text2.setString(text2.getString() + 'ц');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::E)) {
					text2.setString(text2.getString() + 'у');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::R)) {
					text2.setString(text2.getString() + 'к');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::T)) {
					text2.setString(text2.getString() + 'е');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::Y)) {
					text2.setString(text2.getString() + 'н');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::U)) {
					text2.setString(text2.getString() + 'г');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::I)) {
					text2.setString(text2.getString() + 'ш');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::O)) {
					text2.setString(text2.getString() + 'щ');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::P)) {
					text2.setString(text2.getString() + 'з');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::RBracket)) {
					text2.setString(text2.getString() + 'ъ');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::A)) {
					text2.setString(text2.getString() + 'ф');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::S)) {
					text2.setString(text2.getString() + 'ы');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::D)) {
					text2.setString(text2.getString() + 'в');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::F)) {
					text2.setString(text2.getString() + 'а');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::G)) {
					text2.setString(text2.getString() + 'п');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::H)) {
					text2.setString(text2.getString() + 'р');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::J)) {
					text2.setString(text2.getString() + 'о');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::K)) {
					text2.setString(text2.getString() + 'л');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::L)) {
					text2.setString(text2.getString() + 'д');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::Semicolon)) {
					text2.setString(text2.getString() + 'ж');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::Quote)) {
					text2.setString(text2.getString() + 'э');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::Z)) {
					text2.setString(text2.getString() + '€');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::X)) {
					text2.setString(text2.getString() + 'ч');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::C)) {
					text2.setString(text2.getString() + 'с');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::V)) {
					text2.setString(text2.getString() + 'м');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::B)) {
					text2.setString(text2.getString() + 'и');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::N)) {
					text2.setString(text2.getString() + 'т');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::M)) {
					text2.setString(text2.getString() + 'ь');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::Comma)) {
					text2.setString(text2.getString() + 'б');
					temp = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::Period)) {
					text2.setString(text2.getString() + 'ю');
					temp = true;
				}
				/*if (Keyboard::isKeyPressed(Keyboard::Backspace)) {
					text2.setString(text2.getString());
					temp = true;
				}*/
				if (Keyboard::isKeyPressed(Keyboard::Enter)) {
					temp = true;
					check(str, text2.getString());
					if (get_next() == true) {
						points += 10;
						text2.setString("ѕравильно!");
					}
					else {
						text2.setString("");
						points -= 1;
					}
				}
				if (((position.x > 1233 && position.y > 350) && (position.x < 1909 && position.y < 435)) && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
					hint(i);
					points -= 3;
				}

				
				text_points.setString(" оличество очков: " + stream_points.str());
				window.clear();
				window.draw(sprite);
				window.draw(text);
				window.draw(text2);
				window.draw(text_points);
				window.draw(sprite_screen_saver);
				window.draw(sprite_hint);
				window.display();
				if (next == true) {
					text2.setString("");
					window.close();
				}
			}
		}
	}
}

void Game::check(std::string str, std::string str2) {
	if (str == str2)
		set_next(true);
}

void Game::hint(int i) {
	sf::Image image_hint;
	image_hint.loadFromFile("image/podskazka.png");

	sf::Texture texture_hint;
	texture_hint.loadFromImage(image_hint);

	Sprite sprite_hint;
	sprite_hint.setTexture(texture_hint);
	sprite_hint.setPosition(0, 0);
	sprite_hint.setTextureRect(IntRect(0, 280*(i-1), 492, 280));

	sf::RenderWindow window(sf::VideoMode(492, 280), "Kursovaya");
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(sprite_hint);
		window.display();
	}
}

void Game::the_end() {
	sf::Image image_the_end;
	image_the_end.loadFromFile("image/the_end.png");

	sf::Texture texture_the_end;
	texture_the_end.loadFromImage(image_the_end);

	Sprite sprite_the_end;
	sprite_the_end.setTexture(texture_the_end);
	sprite_the_end.setPosition(70, 70);
	sprite_the_end.setTextureRect(IntRect(0, 0, 280, 200));

	ostringstream stream_points;
	stream_points << points;

	Font font;
	font.loadFromFile("CyrilicOld.ttf");

	Text text_the_end;
	text_the_end.setFont(font);
	text_the_end.setCharacterSize(20);
	text_the_end.setStyle(Text::Bold);
	text_the_end.setPosition(0,0);
	text_the_end.setString("ѕќ«ƒ–ј¬Ћя≈ћ! ” ¬ас набрано " + stream_points.str() + " баллов \n" + "ћаксимально можно было набрать 50 баллов");

	sf::RenderWindow window(sf::VideoMode(500, 350), "Kursovaya");
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
				exit(0);
			}
		}
		window.clear();
		window.draw(sprite_the_end);
		window.draw(text_the_end);
		window.display();
	}
}