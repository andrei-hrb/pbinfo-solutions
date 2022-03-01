#include <iostream>
using namespace std;

unsigned long long dinte(int n) {
    if (n == 1)
        return 1;
    else
        return n + 2 * dinte(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << dinte(n);

    return 0;
}
