#include <iostream>
#include <sstream>

using namespace std;

int main() {
	string str;
	getline(cin, str);

	istringstream iss(str);

	string temp;
	while(iss >> temp) {
		if (temp[0] >= 'A' and temp[0] <= 'Z') {
			cout << temp[0];
		}
	}

	return 0;
}
