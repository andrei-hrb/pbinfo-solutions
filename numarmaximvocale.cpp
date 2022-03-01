#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

ifstream fin("vocmax.in");
ofstream fout("vocmax.out");

int n, m, pos;
string txt[101];

bool vowel(char ch) {
	return (ch == 'a' or ch == 'o' or ch == 'u' or ch == 'i' or ch == 'e');
}

int main() {
	fin >> n;
	fin.ignore(numeric_limits<streamsize>::max(),'\n');

	for (int i = 0; i < n; ++i) {
		getline(fin, txt[i]);

		int nr = 0;
		const int DMAX = txt[i].size();
		for (int j = 0; j < DMAX; ++j)
			if (vowel(txt[i][j]))
				++nr;

		if (nr > m) {
			m = nr;
			pos = i;
		}
	}

	fout << txt[pos];

	return 0;
}