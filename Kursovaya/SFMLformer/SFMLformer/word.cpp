#include "word.h"
#include <iostream>
#include <fstream>

using namespace std;

Word::Word() {
	char str[20];
	ifstream txt;
	txt.open("words.txt", ios::in);
	txt.getline(str, 20, ' ');
	txt.close();
	word = str;
	size_w = size(word);
}

void Word::set_word(char str[]) {
	word = str;
}

void Word::change_word(int n) {
	char str[20];
	ifstream txt;
	txt.open("words.txt", ios::in);
	txt.seekg(n,ios_base::beg);
	txt.getline(str, 20, ' ');
	txt.close();
	set_word(str);
	set_size_w();
}

void Word::set_size_w() {
	size_w = size(word);
}

int Word::get_size_w() {
	return size_w + 1;
}

string Word::get_word() {
	return word;
}
