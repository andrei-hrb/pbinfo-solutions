#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

ifstream fin("valori.in");
ofstream fout("valori.out");

struct custom {
    string str;
    int S12;
    int pos;

    custom (const string xstr, const int xS12, const int xpos) : str(xstr), S12(xS12), pos(xpos){}
};

bool customDiffSort (custom a, custom b) {
    return a.S12 > b.S12;
}

bool customPosSort (custom a, custom b) {
    return a.pos > b.pos;
}

int liniearSearch (vector <string> vec, string k) {
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == k)
            return i;
    }
}

int n;
vector <int> v;
vector <custom> u;
vector <string> original;
vector <string> sol;
string txt;

int main() {
    getline(fin, txt);

    stringstream sin(txt);

    int temp;
    while (sin >> temp) {
        v.reserve(1);
        v.emplace_back(temp);
    }

    fin >> n;
    fin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int step = 0; step < n; ++step) {
        getline(fin, txt);

        int s1 = 0, s2 = 0;
        for (size_t i = 0; i < txt.size(); ++i) {
            if (txt[i] >= 'A' and txt[i] <= 'Z')
                s2 += v[txt[i] - 65];

            if (txt[i] >= 'a' and txt[i] <= 'z')
                s1 += v[txt[i] - 97];
        }

        original.reserve(1);
        original.emplace_back(txt);

        u.reserve(1);
        u.emplace_back(custom(txt, s1 - s2, 0));
    }

    sort(u.begin(), u.end(), customDiffSort);

    u[0].pos = liniearSearch(original, u[0].str);

    size_t i;
    for (i = 1; i < u.size(); ++i)
        if (u[0].S12 == u[i].S12)
            u[i].pos = liniearSearch(original, u[i].str);
        else
            break;

    sort(u.begin(), u.end(), customPosSort);

    for (size_t j = 0; j < i; ++j) {
        sol.reserve(1);
        sol.emplace_back(u[j].str);
    }

    reverse(sol.begin(), sol.end());

    for (size_t j = 0; j < sol.size(); ++j)
        fout << sol[j] << '\n';

    fin.close();
    fout.close();

    return 0;
}
