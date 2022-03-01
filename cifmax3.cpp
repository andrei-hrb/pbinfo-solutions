#include <iostream>
using namespace std;
int main()
{
    int n,maxi;
    cin>>n;
    if((n%10)>=((n/10)%10)) maxi=(n%10);
    else maxi=(n/10)%10;
    if (maxi<=(n/100)) maxi=(n/100);
    cout<<maxi;
    return 0;
}
