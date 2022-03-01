#include <cmath>
void dublare1(int &n)
{
    int m = n, cif = 0;
    while (m > 9)
    {
        m /= 10;
        ++cif;
    }

    n = m * pow(10, cif + 1) + n;
}