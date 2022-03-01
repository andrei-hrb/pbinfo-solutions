#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

ifstream cin("bucketsort.in");
ofstream cout("bucketsort.out");

vector<int> v;

int main() {
    int n;
    cin >> n;

    int temp;
    for (int i = 0; i < n; ++i)  {
        cin >> temp;
        v.reserve(1);
        v.emplace_back(temp);
    }

    int d;
    cin >> d;

    d ? sort(v.begin(), v.end(), greater<int>()) : sort(v.begin(), v.end());

    for (auto &i : v) {
        cout << i << ' ';
    }

    return 0;
}