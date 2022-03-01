#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("parimpar1.in");
ofstream fout("parimpar1.out");

int frecv1[6], frecv2[6];

int main() {
    int n; fin >> n;

    for (int i = 0; i < n; i++) {
        int t; fin >> t;
        frecv1[t]++;
    }

    for (int i = 0; i < n; i++) {
        int t; fin >> t;
        frecv2[t]++;
    }

    long long p = 0;

    for (int i = 1; i <= 5; i++) {
        for (int j = (i % 2 ? 2 : 1); j <= 5; j += 2) {
            p += i * frecv1[i] * j * frecv2[j];
        }
    }

    fout << p;

    return 0;
}
