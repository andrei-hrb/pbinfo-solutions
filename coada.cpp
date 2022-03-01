#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

int n;
string txt;
queue <int> q;

int main() {
	cin >> n;
	getline(cin, txt);

	for (int i = 0; i < n; ++i) {
		getline(cin, txt);

		if (txt[0] == 'p') {
			if (txt[1] == 'u') {
				stringstream sin(txt);

				string temp;
				sin >> temp;

				int nr;
				sin >> nr;

				q.push(nr);
			} else
				if (!q.empty())
					q.pop();
		} else
			if (!q.empty())
				cout << q.front() << '\n';
	}

	return 0;
}