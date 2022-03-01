#include <iostream>

using namespace std;

int n;
short int s;

int invers(int x,int y)
{

    while (x != 0)
    {
        y = y * 10 + x % 10;
        x/=10;
    }

    return y;
}

int suma(int a, int d)
{

    while (a != 0)
    {
        d++;
        if (d % 2 == 1) s+=a%10;
        a/=10;
    }

    return s;
}

void citire()
{
    cin >> n;
}

void scriere()
{
    cout << suma(invers(n,0),0);
}

int main()
{
    ios::sync_with_stdio(false);

    citire();
    scriere();
}
