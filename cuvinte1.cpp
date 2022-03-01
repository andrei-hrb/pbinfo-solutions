#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

string txt;

int main() {
	getline(cin, txt);

	stringstream sin(txt);

	string temp;
	while(sin >> temp) {
		int nr = count(temp.begin(), temp.end(), 'a') +
				 count(temp.begin(), temp.end(), 'e') +
				 count(temp.begin(), temp.end(), 'i') +
				 count(temp.begin(), temp.end(), 'o') +
				 count(temp.begin(), temp.end(), 'u');

		if (nr == temp.size())
			cout << temp << '\n';
		}
		
	return 0;	
}