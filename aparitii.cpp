#include <iostream>
using namespace std;
int n, uc, rez;
int main()
{
    cin>>n;
    uc = n%10;
    rez=1; 
    n=n/10;
    while(n)
    {
        if(n%10==uc) 
           rez++;
        n=n/10;
    }
    cout<<rez;
    return 0;
}
