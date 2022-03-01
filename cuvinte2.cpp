#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string txt;
vector<string>v;

int main() {
	getline(cin, txt);

	stringstream sin(txt);

	string temp;
	while (sin >> temp) {
		temp.erase(remove(temp.begin(), temp.end(), '.'), temp.end());
		temp.erase(remove(temp.begin(), temp.end(), ','), temp.end());

		string copy = temp;

		reverse(copy.begin(), copy.end());

		if (copy == temp) {
			v.reserve(1);
			v.push_back(temp);
		}
	}

	if (v.size() == 0) {
		cout << "IMPOSIBIL";
		return 0;
	}
	
	sort(v.begin(), v.end());

	cout << v[0];

	return 0;
}