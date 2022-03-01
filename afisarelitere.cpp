#include <iostream>
#include <string>

using namespace std;

string txt;
bool v[150];

int main() {
	getline(cin, txt);
	const int DMAX = txt.size();

	for (int i = 0; i < DMAX; ++i)
		if (txt[i] >= 'a' and txt[i] <= 'z' and v[(int)txt[i]] == 0) {
			cout << txt[i] << ' ';
			v[(int)txt[i]] = 1;
		}

	return 0;
}