#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <fstream>

using namespace std;

ifstream fin("sumpow2.in");
ofstream fout("sumpow2.out");

map <char, int> letters = {
	make_pair('a', 1),
	make_pair('b', 2),
	make_pair('c', 4),
	make_pair('d', 8),
	make_pair('e', 16),
	make_pair('f', 32),
	make_pair('g', 64),
	make_pair('h', 128),
	make_pair('i', 256),
	make_pair('j', 512),
	make_pair('k', 1024),
	make_pair('l', 2048),
	make_pair('m', 4096),
	make_pair('n', 8192),
	make_pair('o', 16384),
	make_pair('p', 32768),
};

unsigned long long converter_in (string str) {
	unsigned long long number = 0;
	
	for(auto &i : str) {
		number += letters[i];
	}

	return number;
}

string converter_out (unsigned long long number) {
	string str = "";

	vector<short int> v;

	while (number > 0) {
		v.reserve(1);
		v.emplace_back(number % 2);
		
		number /= 2;
	}
	
	unsigned int size = v.size();
	for (int i = 0; i < size; ++i) {
		if (v[i] == 1) {
			int temp = pow(2, i);
			char ch;
			for (auto &j : letters) {
				if (temp == j.second) {
					ch = j.first;
				}
			}

			str.reserve(1);
			str.push_back(ch);
		}
	}

	return str;
}

int main() {
	string a_str, b_str;
	fin >> a_str >> b_str;

	unsigned long long a_int = converter_in(a_str);
	unsigned long long b_int = converter_in(b_str);

	unsigned long long sum = a_int + b_int;

	fout << converter_out(sum);

	return 0;
}
