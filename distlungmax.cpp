#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int l_max;
string str, solution;

int check_for_distinct_letters(string s) {
	sort(s.begin(), s.end());

	unsigned int size = s.size();
	for (unsigned int i = 1; i < size; ++i) {
		if (s[i] == s[i - 1]) {
			return 0;
		}
	}

	return size;
}

int main() {
	getline(cin, str);
	
	istringstream iss(str);

	string temp;
	while (iss >> temp) {
		int size = check_for_distinct_letters(temp);

		if (size > l_max) {
			l_max = size;
			solution = temp;
		}
	}

	if (l_max > 0) {
		cout << solution;
	} else {
		cout << -1;
	}

	return 0;
}
