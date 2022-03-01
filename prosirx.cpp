#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

ifstream fin("prosirx.in");
ofstream fout("prosirx.out");

string txt;
vector <string> v;

bool vowel(char ch) {
	return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
}

int main() {
	getline(fin, txt);

	int nr = 0;
	const int DMAX = txt.size();
	for (int i = 0; i < DMAX; ++i)
		if (!vowel(txt[i]) and txt[i] != ' ')
			++nr;

	fout << nr << '\n';

	fout << 'X';
	for (int i = 1; i < DMAX; ++i) {
		if (txt[i - 1] == ' ' and txt[i] != ' ')
			fout << 'X';
		else
			fout << txt[i];
	}

	fout << '\n';

	stringstream sin(txt);

	string temp;
	while (sin >> temp) {
		v.reserve(1);
		v.push_back(temp);
	}

	sort(v.begin(), v.end());
	const int DDMAX = v.size();

	for (int i = 0; i < DDMAX; ++i)
		fout << v[i] << ' ';

	return 0;
}