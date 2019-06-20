#pragma once
#include <string>

using namespace std;

class Word {
private:
	string word;
	int size_w;
public:
	Word();
	void set_word(char str[]);
	void change_word(int n);
	void set_size_w();
	string get_word();
	int get_size_w();
};