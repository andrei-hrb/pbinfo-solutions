#include <iostream>
#include <cmath>

using namespace std;

int n,s,x[1000],d;

int main()
{
    cin >>n;

    for (int i=1; i<=n; i++)
        cin >> x[i];


    for (int i=1; i<=n-1; i++)
    {   if (abs(x[i]-x[i+1])>d) {d=abs(x[i]-x[i+1]); s=0;}
        if (abs(x[i]-x[i+1])==d) s++;  }

     cout << d << " " << s;

    return 0;
}
