#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector <char> v;
string txt, temp;

int main() {
    getline(cin, txt);

    int Upper = 0, k = 0;
    for (size_t i = 0; i < txt.size(); ++i) {
        if ((txt[i] >= 'a' and txt[i] <= 'z') or (txt[i] >= 'A' and txt[i] <= 'Z')) {
            temp.reserve(1);
            temp.push_back(txt[i]);
            ++k;

            if (txt[i] >= 'A' and txt[i] <= 'Z')
                ++Upper;
        }
    }

    if (Upper >= k / 2)
        transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
    else
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);

    sort (temp.begin(), temp.end());

    v.reserve(1);
    v.emplace_back(temp[0]);
    for (size_t i = 1; i < temp.size(); ++i)
        if (temp[i] != temp[i - 1]) {
            v.reserve(1);
            v.emplace_back(temp[i]);
        }


    cout << '{';
    for (size_t i = 0; i < v.size() - 1; ++i)
        cout << v[i] << ',';
    cout << v[v.size() - 1] << '}';

    return 0;
}