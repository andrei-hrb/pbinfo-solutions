#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int m;
string txt;

int main() {
	getline(cin, txt);

	int a = count(txt.begin(), txt.end(), 'a') + count(txt.begin(), txt.end(), 'A');
	int e = count(txt.begin(), txt.end(), 'e') + count(txt.begin(), txt.end(), 'E');
	int i = count(txt.begin(), txt.end(), 'i') + count(txt.begin(), txt.end(), 'I');
	int o = count(txt.begin(), txt.end(), 'o') + count(txt.begin(), txt.end(), 'O');
	int u = count(txt.begin(), txt.end(), 'u') + count(txt.begin(), txt.end(), 'U');

	m = max({a, e, i, o , u});

	if (m == a)
		cout << "A";
	else {
		if (m == e)
			cout << "E";
		else {
			if (m == i)
				cout << "I";
			else {
				if (m == o)
					cout << "O";
				else
					cout << "U";
			}
		}
	}
}