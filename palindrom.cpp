#include <bits/stdc++.h>
using namespace std;

ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

string input = " ", copie = " ";

short n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    fin >> n;

    for (int i = 1; i <= n + 1; ++i) {
        if (i != 1) {
            getline(fin, input);
            copie = input;

            reverse(copie.begin(), copie.end());

            if (copie == input)
                fout << 1;
            else
                fout << 0;

            fout << '\n';
        }
        else {
            getline(fin, input);
        }
    }

    return 0;
}
