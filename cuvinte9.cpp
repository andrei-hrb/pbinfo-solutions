#include <iostream>
#include <string>
#include <sstream>

using namespace std; 

string mmax;
char chmax;

int main() {
	string str;
	getline(cin, str);

	istringstream iss(str);

	string temp;
	while(iss >> temp) {
		if (temp[0] >= '0' and temp[0] <= '9') {
			if (temp[0] > chmax) {
				mmax = temp;
				chmax = temp[0];
			}
		}
	}

	if (mmax != "") {
		cout << mmax;
	} else {
		cout << "nu exista";
	}

	return 0;
}
