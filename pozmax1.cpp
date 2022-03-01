#include <iostream>

using namespace std;

double a;
int n,d,u,ii,iii;

int main()
{
    cin >>n;
    double x[n];

    for (int i=1; i<=n; i++)
    {   cin >> x[i];
        if (d<x[i]) {d=x[i]; ii=i;}
        if (d==x[i]) iii=i;
    }

    cout << ii <<" "<< iii;

    return 0;
}
