#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int nr_vow(string s) {
    int vowels = 0;

    for (auto &i : s) {
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'
         || i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') {
            ++vowels;
        }
    }

    return vowels;
}

struct custom {
    string str;
    int nr_vow;
    int length;

    custom (string &s, int n, int l) : str(s), nr_vow(n), length(l) {}
};

bool vow_sort(custom a, custom b) {
    if (a.nr_vow != b.nr_vow) {
        return a.nr_vow > b.nr_vow;
    } else if (a.length != b.length){
        return a.length > b.length;
    } else {
        return a.str < b.str;
    }
}

vector<custom> v;

int main() {
    string str;
    getline(cin, str);

    istringstream iss(str);

    string temp;
    while (iss >> temp) {
        v.reserve(1);
        v.emplace_back(custom(temp, nr_vow(temp), temp.length()));
    }

    sort(v.begin(), v.end(), vow_sort);

    for (auto &i : v) {
        cout << i.str << '\n';
    }
}
