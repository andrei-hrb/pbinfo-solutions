#include <iostream>
using namespace std;

int main()
{
    long long fact[] = {
                        1,
                        1,
                        2,
                        6,
                        24,
                        120,
                        720,
                        5040,
                        40320,
                        362880,
                        3628800,
                        39916800,
                        479001600ll,
                        6227020800ll,
                        87178291200ll,
                        1307674368000ll };
    int n;
    cin >> n;
    cout << fact[n];
    return 0;
}