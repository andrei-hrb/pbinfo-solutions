#include <iostream>

using namespace std;

int s[1001][2], n, counter;

int main() {
	ios::sync_with_stdio(false);

	cin >> n;

	int temp;
	for (int i = 0; i < n; ++i) {
		cin >> temp;

		while (temp > s[counter][0]  && counter)
			--counter;

		++counter;
		s[counter][0] = temp;
		s[counter][1] = i + 1;
	}

	cout << counter << '\n';
	for (int i = 1; i <= counter; ++i)
		cout << s[i][1] << ' ';
}