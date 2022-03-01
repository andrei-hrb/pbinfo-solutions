//#include <iostream>
#include <stack>
#include <fstream>

using namespace std;

ifstream fin("intervale4.in");
ofstream fout("intervale4.out");

struct it {
    int x;
    int y;
};

it s[100002];
int h;

int main() {
    int n;
    fin >> n;

    for (int i = 0; i < n; ++i) {
        int x, y;
        fin >> x >> y;
        ++h;
        s[h].x = x;
        s[h].y = y;

        while (h >= 2 and (s[h].x <= s[h - 1].y and s[h - 1].x <= s[h].y)) {
            it temp = {min(s[h].x, s[h - 1].x), max(s[h].y, s[h - 1].y)};
            s[--h] = temp;
        }
    }

    fout << h;

    return 0;
}