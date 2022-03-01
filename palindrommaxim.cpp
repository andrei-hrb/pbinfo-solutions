#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

struct Custom {
    string Text;
    int Size;

    Custom(const string x, const int y)
            : Text(x), Size(y){}
};

bool CustomCompare(const Custom x, const Custom y) {
    return x.Size > y.Size;
}

string txt;
vector <Custom> v;

int main(){
    getline(cin, txt);

    stringstream sin(txt);

    string temp1, temp2;
    while (sin >> temp1) {
        temp1.erase(remove_if(temp1.begin(), temp1.end(), [](char c) { return !isalpha(c); }) ,temp1.end());
        string original = temp1;

        transform(temp1.begin(), temp1.end(), temp1.begin(), ::tolower);

        temp2 = temp1;
        reverse(temp1.begin(), temp1.end());

        if (temp1 == temp2) {
            v.reserve(1);
            v.emplace_back((Custom(original, temp1.size())));
        }
    }

    sort(v.begin(), v.end(), CustomCompare);

    vector <string> u;

    int maxi = v[0].Size;
    u.reserve(1);
    u.push_back(v[0].Text);
    for (int i = 1; i < v.size(); ++i) {
        if (v[i].Size == maxi) {
            u.reserve(1);
            u.push_back(v[i].Text);
        }
    }

    for (int i = 0; i < v.size(); ++i)
        for (int j = 0; j < u.size(); ++j)
            if (v[i].Text == u[j]) {
                cout << u[j];
                return 0;
            }
}