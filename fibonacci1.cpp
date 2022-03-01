#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int n, f, x1 = 0, x2 = 1;

	cin >> n;

	f = x1 + x2;
	cout << "1 ";

	while (f <= n) {
		cout << f << ' ';
		x1 = x2;
		x2 = f;
		f = x1 + x2;
	}

	return 0;
}

