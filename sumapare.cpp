#include <iostream>

using namespace std;

long long n,S;

int main()
{

    cin >> n;

    for (long long i=2; i<=n*2; i=i+2)
    {
        S+=i;
    }

    cout << "Suma este " << S;

    return 0;
}
