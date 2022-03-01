#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fin("lgmax.in");
ofstream fout("lgmax.out");

int n, m;
string txt, temp;

int main() {
	fin >> n;

	for (int i = 0; i < n; ++i) {
		getline(fin, temp);

		if (temp.size() > m) {
			m = temp.size();
			txt = temp;
		}
	}

	fout << txt;
}