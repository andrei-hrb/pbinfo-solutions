#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

int n;
string txt;

int main() {
	fin >> n;
	fin.ignore(numeric_limits<streamsize>::max(),'\n');

	for (int i = 0; i < n; ++i) {
		getline(fin, txt);
		txt.erase(remove_if(txt.begin(), txt.end(), [](char c){return !isalpha(c);}), txt.end());

		string temp;
		temp = txt;
		reverse(temp.begin(), temp.end());

		if (txt == temp)
			fout << "1\n";
		else
			fout << "0\n";
	}

	return 0;
}