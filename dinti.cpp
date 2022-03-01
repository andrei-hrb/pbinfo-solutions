#include <iostream>
using namespace std;

void dinte(int n)
{
    if (n == 1)
        cout << "1 ";
    else
        dinte(n - 1), cout << n << ' ', dinte(n - 1);
}

int main()
{
    int n;
    cin >> n;
    dinte(n);

    return 0;
}
