#include "iostream"
#include "cmath"

using namespace std;

long n;
long a, b, num;

long counter(long n)
{
    if (n == 0) return 0;

    return 1 + counter(n / 10);
}

int main()
{
    cin >> n;

    num = counter(n);

    a = n % (int)pow(10, num / 2);
    b = n / (int)pow(10, (num % 2) ? num / 2 + 1 : num / 2);

    cout << abs(a - b);

    return 0;
}
