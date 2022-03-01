#include <iostream>

using namespace std;

int a,b,d,n,m;
int main()
{
    cin >> a >> b >> d;
    
    if (a%d==0) n=a/d;
    else n=a/d+1;
    
    if (b%d==0) m=b/d;
    else m=b/d+1;
    
    cout << n*m;
    
    
    return 0;
}
