 #include <iostream>
 #include <cstdio>
 using namespace std;

 void in(int &n) {
    bool neg = 0;
    register int c;
    n = 0;

    c = getchar();
    if (c == '-'){
        neg = 1;
        c = getchar();
    }

    for (; (c > 47 && c < 58); c = getchar()) {
        n = n * 10 + c - 48;
    }

    if (neg)
        n *= -1;
 }

 int n;

 int main() {
    ios::sync_with_stdio(false);

    in(n);

    int m = n / 5;
    if (n % 5 == 0) {
        cout << m << "\nDA\n";
    } else {
        ++m;
        cout << m << "\nNU\n";
    }

    bool micsunele = 1;
    int o = 1;
    for (int i = 1, j = 0; i <= m; ++i, ++j) {
        if (j == o) {
            if (micsunele)
                micsunele = 0;
            else
                micsunele = 1;

            j = 0;
            ++o;
        }
    }

    if (micsunele)
        cout << "micsunele";
    else
        cout << "panselute";

    return 0;
 }