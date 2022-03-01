#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream fin("prosir.in");
ofstream fout("prosir.out");

string txt;
int main() {
	getline(fin, txt);
	const int DMAX = txt.size() - 2;

	for (int i = 0; i < DMAX; ++i) {
		if (txt[i + 1] == ' ' && txt[i] != ' ' && txt[i - 1] != '0')
			fout << 5;
		else
			fout << txt[i];
	}

	fout << "5.";
}