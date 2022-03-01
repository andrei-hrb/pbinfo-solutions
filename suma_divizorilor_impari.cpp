#include <iostream>

using namespace std;

int n,d,s;

int main()
{
    ios::sync_with_stdio(false);
    
    cin>>n;
    
    for(d=1; d*d<n; d++)
    {
        if(n%d==0)
         {
             if(d%2==1) s=s+d;
             if((n/d)%2==1) s=s+n/d;
         }
    }
    
    if((d*d==n)&&(d%2==1)) s=s+d;
    
    cout<<s;
    
    return 0;
}