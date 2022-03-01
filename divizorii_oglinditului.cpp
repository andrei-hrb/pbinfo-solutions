#include <iostream>

using namespace std;

int inv(int n)
{
    int s=0;
    while (n)
    {
        s=s*10+n%10;
        n/=10;
    }
    return s;
}

int n,ok,i;

int main()
{
    ios::sync_with_stdio(false);

    cin>>n;
    
    n=inv(n);

    for (i=1; i*i<n; i++)
        {if (n%i==0) ok++;
        if (n%(n/i)==0) ok++;}

    if (i*i==n) ok++;

    cout << ok;

    return 0;
}
