#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <limits>

using namespace std;

ifstream fin("cadouri.in");
ofstream fout("cadouri.out");

int steps;
string string1;

char v[] = "!#$%&'()*+,-./:;<=>?@[]^_'`{|}~";
char n[] = "0123456789";

struct custom{
    int value;
    string object;
    int compare;

    custom (const int xval, const string xobj, const int xcomp) : value(xval), object(xobj), compare(xcomp) {}
};

vector <custom> vector1;

bool custom1Comp(custom a, custom b) {
    return a.value > b.value;
}

bool custom2Comp(custom a, custom b) {
    return a.object < b.object;
}

int liniarSearch(string str) {
    for (size_t i = 0; i < vector1.size(); ++i)
        if (str == vector1[i].object)
            return i;
    return -1;
}

bool isItWord(string str) {
    for (size_t i = 0; i < str.size(); ++i)
        if (str[i] >= 'a' and str[i] <= 'z')
            return 1;
    return 0;
}

int main() {
    fin >> steps;
    fin.ignore(numeric_limits<streamsize>::max(),'\n');

    for (int step = 0; step < steps; ++step) {
        getline(fin, string1);
        size_t i = 0;
        while (!strchr(n, string1[i]))
            ++i;

        string1.erase(string1.begin(), string1.begin() + i);

        string1.erase(remove_if(string1.begin(), string1.end(), [](char c) { return strchr(v, c);}), string1.end());

        stringstream sin(string1);

        int integer;
        string string2;
        while (sin >> integer and sin >> string2) {
            int result = liniarSearch(string2);

            if (result == -1) {
                vector1.reserve(1);
                vector1.emplace_back(custom(integer, string2, 0));
            } else
                vector1[result].value += integer;
        }

    }

    sort(vector1.begin(), vector1.end(), custom1Comp);
    vector1.emplace_back(custom(0, "zzzzzzzzzzzzzzzzzzzzz", -1));
    //21*"z" ptrc cel mai lung obiect poate avea 20 de ch si chiar daca e "z"*20 nu va putea fi sortat

    bool ok = 0;
    int k = 1;
    for (size_t i = 0; i < vector1.size() - 1; ++i)
        if (vector1[i].value == vector1[i + 1].value) {
            vector1[i].compare = k;
            vector1[i + 1].compare = k;
            ok = 1;
        } else
            if (ok) {
                ok = 0;
                ++k;
            }

    size_t pos1 = 0, pos2 = 0;
    for (size_t i = 0; i < vector1.size() - 1; ++i) {
        while (vector1[i].compare == vector1[i + 1].compare and vector1[i].compare != 0) {
            if (!pos1) {
                pos1 = i;
                pos2 = i + 1;
            }
            ++pos2;
            ++i;
        }

        if (pos1 != pos2) {
            sort(vector1.begin() + pos1, vector1.begin() + pos2, custom2Comp);

            pos1 = 0;
            pos2 = 0;
        }
    }

    fout << vector1.size() - 1 << '\n';
    for (size_t i = 0; i < vector1.size() - 1; ++i)
        fout << vector1[i].object << ' ' << vector1[i].value << '\n';

    return 0;
}