#include <iostream>
#include <cstring>

using namespace std;
const int DMAX = 256;
char txt1[DMAX], txt2[DMAX];

int main() {
	cin.getline(txt1, DMAX);
	cin.getline(txt2, DMAX);

	const int DDMAX = strlen(txt1);

	for (int i = 0; i < DDMAX; ++i)
		if (strchr(txt2, txt1[i]))
			cout << txt1[i];

	return 0;
}