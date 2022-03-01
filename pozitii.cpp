#include <iostream>
#include <cstring>
using namespace std;

int nr;
const int DMAX = 256;

char txt[DMAX];
char v[] = "aeiou";
char c[] = "bcdfghjklmnpqrstvwxyz";

int main() {
	cin.get(txt, DMAX);

	for (int i = 0; i < strlen(txt) - 1; ++i)
		if (strchr(c, txt[i - 1]) and strchr (v, txt[i]) and strchr(c, txt[i + 1]))
			++nr;

	cout << nr;

	return 0;
}