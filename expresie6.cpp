#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string expresion;
bool x, y, z;
int sumX, sumY, sumZ;
int sign = 1, coef;
struct custom {int s; char c; custom(const int xs, const char xc) : s(xs), c(xc) {}};
bool customSort (custom a, custom b) {return a.s > b.s;}
vector <custom> maxi;

int main() {
    getline(cin, expresion);
    const size_t size = expresion.size();
    for (size_t i = 0; i < size; ++i) {
        if (expresion[i] == '-') sign = -1;

        while (isdigit(expresion[i])) coef = coef * 10 + (expresion[i] - 48), ++i;

        if (expresion[i] == 'x') {
            if (coef) sumX += coef * sign;
            else      sumX += sign;
            coef = 0;
            sign = 1;
            x = 1;
        }
        if (expresion[i] == 'y') {
            if (coef) sumY += coef * sign;
            else      sumY += sign;
            coef = 0;
            sign = 1;
            y = 1;
        }
        if (expresion[i] == 'z') {
            if (coef) sumZ += coef * sign;
            else      sumZ += sign;
            coef = 0;
            sign = 1;
            z = 1;
        }
    }

    if (x) maxi.reserve(1), maxi.emplace_back(custom(sumX, 'x'));
    if (y) maxi.reserve(1), maxi.emplace_back(custom(sumY, 'y'));
    if (z) maxi.reserve(1), maxi.emplace_back(custom(sumZ, 'z'));

    sort(maxi.begin(), maxi.end(), customSort);

    cout << maxi[0].s << maxi[0].c;

    return 0;
}