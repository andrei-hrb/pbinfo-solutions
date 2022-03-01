#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string txt;

bool vowel(char ch) {
	return (ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U' or ch == 'a' or ch == 'o' or ch == 'u' or ch == 'i' or ch == 'e');
}

int main() {
	getline(cin, txt);

	int nr = 0;
	for (int i = 0; i < txt.size(); ++i)
		if (vowel(txt[i]))
			++nr;

	cout << nr;

	return 0;
}