#include <string>
#include <algorithm>
string txt;
void F(int n, int v[], int &k) {
    if (n) {
        if (v[n - 1] % 2 == 0) txt.push_back(char(v[n - 1] + 48));
        F(n - 1, v,  k);
    } else {
        if (!txt.size())
            k = -1;
        else {
            reverse(txt.begin(), txt.end());

            k = 0;
            for (auto &i : txt)
                k = k * 10 + i - 48;
        }
    }
}