#include <iostream>
using namespace std;
int main()
{
    int n;

    cin>>n;

    if (n==(n/3-1)+(n/3)+(n/3+1)) cout<<n/3-1<<" "<<n/3<<" "<<n/3+1;
    else cout <<"NU EXISTA";

    return 0;
}