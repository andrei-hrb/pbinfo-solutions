#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct a {
	int n;
	char ch;
};

bool acompare(a nr1, a nr2) {
	return nr1.n > nr2.n;
}

string txt;
char u[150];
a v[150];

int main() {
	getline(cin, txt);
	const int DMAX = txt.size();

	for (int i = 97; i < 123; ++i) {
		v[i].ch = (char)i;
	}

	for (int i = 0; i < DMAX; ++i)
		if (txt[i] >= 'a' and txt[i] <= 'z')
			++v[(int)txt[i]].n;

	sort(v, v + 150, acompare);

	u[0] = v[0].ch;
	int m = v[0].n, nr = 1;
	for (int i = 1; i < 150; ++i) {
		if (v[i].n == m) {
			u[i] = v[i].ch;
			++nr;
		}
		else
			break;
	}

	sort(u, u + nr);

	cout << u[0];

	return 0;
}