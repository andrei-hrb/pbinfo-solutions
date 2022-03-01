#include <iostream>
#include <string>
#include <stack>
#include <fstream>

using namespace std;

ifstream fin("paranteze1.in");
ofstream fout("paranteze1.out");

int n;
string txt;

int main() {
	fin >> n;
	getline(fin, txt);


	for (int j = 0; j < n; ++j) {
		getline(fin, txt);
		stack <bool> s;

		bool ok = 1;
		for (int i = 0; i < txt.size(); ++i)
			if (txt[i] == '(')
				s.push(true);
			else
				if (!s.empty())
					s.pop();
				else {
					fout << "0\n";
					ok = 0;
					break;
				}

		if (ok == 1) {
			if (s.empty())
				fout << "1\n";
			else
				fout << "0\n";
		}
	}

}