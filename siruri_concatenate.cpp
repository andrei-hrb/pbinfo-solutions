#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int n, nr;
string txt;

ifstream fin("siruri_concatenate.in");
ofstream fout("siruri_concatenate.out");

int main() {
	fin >> n;
	fin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int steps = 0; steps < n; ++steps) {
		getline(fin, txt);
		const int DMAX = txt.size();

		if (DMAX & 1)
			continue;

		string temp1 = txt.substr(0, DMAX / 2);
		string temp2 = txt.substr(DMAX / 2, DMAX);

		if (temp1 == temp2)
			++nr;
	}

	fout << nr;

	return 0;
}