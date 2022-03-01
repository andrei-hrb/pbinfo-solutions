#include <iostream>
#include <string>
using namespace std;

string txt;

int main() {
	getline(cin, txt);

	for (int i = 0; txt[i]; ++i)
		if (txt[i] == ' ')
			cout << ' ';
	    else {
			if (txt[i - 1] == ' ' or txt[i + 1] == ' ' or i == 0 or i == txt.size() - 1)
				cout << (char)(txt[i] - 32);
			else
				cout << txt[i];
		}

	return  0;
}