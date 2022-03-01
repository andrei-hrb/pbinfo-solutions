#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

string input;
vector<pair<int, string>> v;

bool customSort(pair<int, string> a, pair<int, string> b) {
    return a.second.size() > b.second.size();
}

bool customSort2(pair<int, string> a, pair<int, string> b) {
    return a.second < b.second;
}

int main(){
    getline(cin, input);

    istringstream iss(input);

    string temp;
    while (iss >> temp) {
        v.reserve(1);
        v.emplace_back(make_pair(temp.size(), temp));
    }

    sort(v.begin(), v.end(), customSort);

    v.reserve(1);
    v.emplace_back(make_pair(0, "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"));

    int sz = 0;
    for (int i = 0; i < v.size() - 1; ++i) {
        if (v[i].second.size() == v[i + 1].second.size()) {
            ++sz;
        } else {
            if (sz) {
                sort(v.begin() + i - sz, v.begin() + i + 1, customSort2);
                sz = 0;
            }
        }
    }

    v.pop_back();

    for (auto &i : v) {
        cout << i.second << '\n';
    }

    return 0;
}
