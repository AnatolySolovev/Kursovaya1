#pragma once
#include "picture.h"
#include <string>

class Game {
private:
	Picture pictures;
	bool next;
	int points;
public:
	Game();
	void start();
	bool get_next();
	void window(Sprite sprite, std::string str, int i);
	void check(std::string str, std::string str2);
	void set_next(bool x);
	void hint(int i);
	void the_end();
};