#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

ifstream fin("ecuatii.in");
ofstream fout("ecuatii.out");

double delta, x1, x2, a, b, c;
string str;

int main() {
    getline(fin, str);

    size_t i;
    bool sgned = 0, zero = 0;

    // a

    for (i = 0; i < str.size() and str[i] != 'x'; ++i)
        if (str[i] >= '0' and str[i] <= '9') {
            if (str[i] == '0')
                zero = 1;
            a = a * 10 + ((int) str[i] - 48);
        }

    if (!a and !zero)
        a = 1;

    if (str[0] == '-') {
        a = a * -1;
        sgned = 0;
    }

    // b
    zero = 0;

    i += 3;
    if (str[i] == '-')
        sgned = 1;

    for (i; i < str.size() and str[i] != 'x'; ++i)
        if (str[i] >= '0' and str[i] <= '9') {
            if (str[i] == '0')
                zero = 1;
            b = b * 10 + ((int) str[i] - 48);
        }

    if (!b and !zero)
        b = 1;

    if (sgned) {
        b = b * -1;
        sgned = 0;
    }

    // c

    ++i;
    if (str[i] == '-')
            sgned = 1;

    for (i; i < str.size(); ++i)
        if (str[i] >= '0' and str[i] <= '9')
            c = c * 10 + ((int) str[i] - 48);

    if (sgned and c)
        c = c * -1;

    // delta

    delta = b * b - 4 * a * c;

    // final

    if (delta < 0) {
        fout << -1;
        return 0;
    }
    else {
        if (delta == 0) {
            fout << setprecision(2) << fixed <<((b * -1) / (2 * a));
            return 0;
        }
    }

    const double SQRTDELTA = sqrt(delta);

    x1 = ((b * -1) + SQRTDELTA) / (2 * a);
    x2 = ((b * -1) - SQRTDELTA) / (2 * a);

    fout << setprecision(2) << fixed;

    if (x1 < x2)
        fout << x1 << ' ' << x2;
    else
        fout << x2 << ' ' << x1;

    return 0;
}