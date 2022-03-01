#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <limits>

using namespace std;

ifstream fin("cuvmax.in");
ofstream fout("cuvmax.out");

int n, m;
string temp, txt;

int main() {
	fin >> n;
	fin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int i = 0; i < n; ++i) {
		getline(fin, temp);
		stringstream sin(temp);

		int nr = 0;
		string ttemp;
		while (sin >> ttemp)
			++nr;

		if (nr > m) {
			m = nr;
			txt = temp;
		}
	}

	fout << txt;
}