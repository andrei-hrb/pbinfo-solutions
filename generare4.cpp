#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> v;
void generare(int n)
{
    if (n == 1)
    {
        v.reserve(2);
        v.emplace(v.begin(), 1);
        v.emplace_back(2);
    }
    else
    {
        int a = pow(2, n);
        int b = pow(2, n - 1) + 1;
        int siz = (a - b + 1) / 2;
        v.reserve(siz);

        int i;
        for (i = 0; i < siz; ++i, ++b)
            v.emplace(v.begin() + i, b);

        for (i = 0; i < siz; ++i, ++b)
            v.emplace_back(b);

        generare(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    generare(n);
    for (auto &i : v)
        cout << i << ' ';

    return 0;
}
