#include <iostream>
#include <stack>
#include <fstream>
#include <string>

using namespace std;

ifstream fin("paranteze3.in");
ofstream fout("paranteze3.out");

int n;
string txt;

int main() {
	fin >> n;
	getline(fin, txt);

	for (int steps = 0; steps < n; ++steps) {
		getline(fin, txt);

		stack <bool> s;
		//1 - paranteza rotunda
		//0 - paranteza patrata
		bool ok = 1;

		for (int i = 0; i < txt.size(); ++i)
			if(txt[i] == '(')
				s.push(1);
			else {
				if (txt[i] == ')' && !s.empty()) {
					if (s.top())
						s.pop();
				} else {
					if (txt[i] == '[')
						s.push(0);
					else {
						if (txt[i] == ']' && !s.empty()) {
							if (!s.top())
								s.pop();
						} else {
							ok = 0;
							break;
						}
					}
				}
			}
			
		if(!s.empty())
			ok = 0;

		fout << ok << '\n';
	}


	return 0;
}