#include <cmath>
int cautare (int n, double v[], double x) {
    if (n == 0)
        return -1;
    if (abs(v[n - 1] - x) < 1e-4)
        return n - 1;
    return cautare(n - 1, v, x);
}