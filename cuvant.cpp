#include <iostream>
#include <string>

using namespace std;

bool vowel(char ch) {
	return ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u';
}

string txt;

int main() {
	getline(cin, txt);
	const int DMAX = txt.size();

	bool ok = 0;
	for (int i = 0 ; i < DMAX; ++i)
		if (vowel(txt[i])) {
			cout << "NU";
			return 0;
		} else {
			if (txt[i] != 'i')
				ok = 1;
		}

	if (!ok)
		cout << "NU";
	else
		cout << "DA";

	return 0;
}