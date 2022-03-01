#include <iostream>
#include <string>

using namespace std;

string txt;

bool vowel(char ch) {
	return (ch == 'a' or ch == 'o' or ch == 'u' or ch == 'i' or ch == 'e');
}
int main() {
	getline(cin, txt);
	const int DMAX = txt.size();

	for (int i = 0; i < DMAX; ++i)
		if (!vowel(txt[i]))
			cout << txt[i];

	return 0;
}