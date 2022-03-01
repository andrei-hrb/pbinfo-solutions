#include <iostream>
#include <string>

using namespace std;

bool vowel(char ch) {
	return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
}

string txt;

int main() {
	getline(cin, txt);
	const int DMAX = txt.size();

	for (int i = 0; i < DMAX; ++i) {
		if (vowel(txt[i]))
			cout << txt[i];
		cout << txt[i];
	}

	return 0;
}