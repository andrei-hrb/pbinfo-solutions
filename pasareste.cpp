#include <iostream>
#include <string>

using namespace std;

string txt;

int main() {
	getline(cin, txt);
	const int DMAX = txt.size();
    
	for (int i = 0; i < DMAX; ++i) {
		if (txt[i] == 'a' ||
		    txt[i] == 'e' ||
		    txt[i] == 'i' ||
		    txt[i] == 'o' ||
		    txt[i] == 'u') {
			cout << txt[i] << 'p';
		}
		cout << txt[i];
	}

	return 0;
}