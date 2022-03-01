#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <fstream>

using namespace std;

ifstream fin("dir.in");
ofstream fout("dir.out");

vector<string> files;

void get_file_path(stack<string> s, string str) {
	vector<string> v;
	v.reserve(1);
	v.emplace_back(str);

	while (! s.empty()) {
		v.reserve(1);
		v.emplace_back(s.top());

		s.pop();	
	}

	reverse(v.begin(), v.end());

	string temp = "";
	for (auto &i : v) {
		temp.append(i);
		temp.push_back('\\');
	}
	temp.pop_back();

	files.reserve(1);
	files.emplace_back(temp);
}

stack<string> s;

int main() {
	string str;
	fin >> str;
	fin.close();

	unsigned int size = str.size();
	for (unsigned int i = 0; i < size; ++i) {
		string temp;
		while (str[i] != '(' and str[i] != ',' and str[i] != ')') {
			temp.push_back(str[i++]);
		}
		
		if (temp[0] >= 'a' and temp[0] <= 'z') {
			get_file_path(s, temp);
		}

		switch (str[i]) {
			case '(':
				s.push(temp);
				break;
			
			case ')':
				s.pop();
				break;
		
			default:
				break;
		}
		
	}

	sort(files.begin(), files.end());

	fout << files.size() << '\n';
	for (auto &i : files) {
		fout << i << '\n';
	}

	fout.close();

	return 0;
}
