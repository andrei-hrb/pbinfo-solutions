#include <iostream>
#include <string>

using namespace std;

int main() {
	int nr;
	cin >> nr;
	cin.get();

	string str;
	getline(cin, str);

	int size = int(str.size()) - nr;
	for (int i = 0; i <= size; ++i) {
		string temp = str;

		temp.erase(i, nr);

		cout << temp << '\n';
	}

	return 0;
}
