#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

int n, k;
bool u[21];
vector <string> v;

int main() {
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int i = 0; i < n; ++i) {
		string temp;
		cin >> temp;

		v.reserve(1);
		v.push_back(temp);
	}

	cin >> k;

	for (int i = 0; i < n; ++i)
		if (v[i].size() == k) {
			cout << v[i] << ' ';
			u[i] = 1;
		}

	for (int i = 0; i < n; ++i)
		if (u[i] == 0)
			cout << v[i] << ' ';

	return 0;
}