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

	bool v = 0;
	for (int i = 0; i < DMAX; ++i) {
		if (vowel(txt[i])) {
			v = 1;
			break;
		}
	}

	if (v)
		for (int i = 0; i < DMAX; ++i) {
			cout << txt[i];
			if (vowel(txt[i]))
				cout << '*';
		}
	else
		cout << "FARA VOCALE";

	return 0;
}