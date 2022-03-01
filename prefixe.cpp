#include <iostream>
#include <cstring>

using namespace std;

char txt[50];

int main() {
	cin.get(txt, 50);

	for (int i = strlen(txt) - 1; i > -1; --i) {
		for (int j = 0; j <= i ; ++j)
			cout << txt[j];
		cout << '\n';
	}

	for (int i = 0; i < strlen(txt); ++i) {
		for (int j = i; j < strlen(txt); ++j)
			cout << txt[j];
		cout << '\n';
	}
    return  0;
}

