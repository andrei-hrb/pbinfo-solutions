#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int nr;
string txt;

bool vowel(char ch) {
	return ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U' or ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
}

int main() {
	getline(cin, txt);
	stringstream sin(txt);

	string temp;
	while (sin >> temp)
		if (vowel(temp[0]) and vowel(temp[temp.size() - 1]))
			++nr;

	cout << nr;

	return 0;
}