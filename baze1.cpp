#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

ifstream fin("baze1.in");
ofstream fout("baze1.out");

int toDeci(string str, int base) {
    int power = 1, num = 0;

    reverse(str.begin(), str.end());

    for (size_t i = 0; i < str.size(); ++i) {
        num += (str[i] - '0') * power;
        power *= base;
    }

    return num;
}

int b1, b2, s;
string x, y;

int main() {
    fin >> b1 >> b2 >> x >> y;

    fout << toDeci(x, b1) + toDeci(y, b2);

    return 0;
}