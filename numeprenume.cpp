#include <iostream>
#include <string>

using namespace std;

string nume, prenume;

bool vowel(char ch) {
	return ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U' or ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
}

int main() {
	cin >> nume >> prenume;
	const int DMAX = prenume.size();

	for (int i = 0; i < DMAX; ++i)
		if (!vowel(prenume[i]))
			cout << prenume[i];

	cout << ' ' << nume;

	return 0;
}