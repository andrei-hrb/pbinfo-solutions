#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void outVector(vector<string>v) {
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << '\n';
}

bool vowel(char ch) {
	return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u'
		or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U';
}

string txt;
vector <string> v;
int three, maximumSize;

int main() {
	getline(cin, txt);

	stringstream sin(txt);

	string temp;
	while (sin >> temp) {
		if (temp.size() == 3)
			++three;

		if (vowel(temp[0]) && vowel(temp[temp.size() - 1])) {
			v.reserve(1);
			v.push_back(temp);
		}

		if (temp.size() > maximumSize) {
			maximumSize = temp.size();
		}
	}

	cout << three << '\n'; outVector(v); cout << maximumSize;

	return 0;
}