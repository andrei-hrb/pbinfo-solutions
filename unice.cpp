#include <fstream>
#include <map>
#include <iterator>

using namespace std;

ifstream cin("unice.in");
ofstream cout("unice.out");

int actual_number, limit;
map<int, int> mapp;

int main() {
    cin >> limit;

    for (int i = 0; i < limit; i++) {
        cin >> actual_number;
        auto itr = mapp.find(actual_number);
        if (itr != mapp.end()) {
            itr->second++;
        } else {
            mapp.insert(pair<int, int>(actual_number, 1));
        }
    }

    for (map<int, int>::iterator itr = mapp.begin(); itr != mapp.end(); ++itr) {
        if (itr->second == 1) {
            cout << itr->first << ' ';
        }
    }
    return 0;
}
