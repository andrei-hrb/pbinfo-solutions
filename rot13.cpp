#include <iostream>
#include <map>
#include <string>

using namespace std;

map<char, char> ROT13 = {
	make_pair('a','n'),
	make_pair('b','o'),
	make_pair('c','p'),
	make_pair('d','q'),
	make_pair('e','r'),
	make_pair('f','s'),
	make_pair('g','t'),
	make_pair('h','u'),
	make_pair('i','v'),
	make_pair('j','w'),
	make_pair('k','x'),
	make_pair('l','y'),
	make_pair('m','z'),
	make_pair('n','a'),
	make_pair('o','b'),
	make_pair('p','c'),
	make_pair('q','d'),
	make_pair('r','e'),
	make_pair('s','f'),
	make_pair('t','g'),
	make_pair('u','h'),
	make_pair('v','i'),
	make_pair('w','j'),
	make_pair('x','k'),
	make_pair('y','l'),
	make_pair('z','m'),
	make_pair('A','N'),
	make_pair('B','O'),
	make_pair('C','P'),
	make_pair('D','Q'),
	make_pair('E','R'),
	make_pair('F','S'),
	make_pair('G','T'),
	make_pair('H','U'),
	make_pair('I','V'),
	make_pair('J','W'),
	make_pair('K','X'),
	make_pair('L','Y'),
	make_pair('M','Z'),
	make_pair('N','A'),
	make_pair('O','B'),
	make_pair('P','C'),
	make_pair('Q','D'),
	make_pair('R','E'),
	make_pair('S','F'),
	make_pair('T','G'),
	make_pair('U','H'),
	make_pair('V','I'),
	make_pair('W','J'),
	make_pair('X','K'),
	make_pair('Y','L'),
	make_pair('Z','M'),
	make_pair(' ',' '),
};

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	char temp;
	while (cin.get(temp)) {
		cout << ROT13[temp];
	}

	return 0;
}