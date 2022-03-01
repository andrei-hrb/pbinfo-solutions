#include<iostream>
using namespace std;
unsigned long long int n,m=0,p=1,ok=0;
unsigned c,cifra;
int main()
{
    cin>>n>>c;
    while(n)
    {
        cifra=n%10;
        if(cifra!=c)
        {
            m+=p*cifra;
            p*=10;
            ok=1;
        }
        n/=10;
    }
    if(ok)
        cout<<m;
    else
        cout<<-1;
    return 0;
}