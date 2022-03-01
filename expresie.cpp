#include <iostream>

using namespace std;

int n,i=1,j;
long long s=1, S;
int main()
{
    cin>>n;

    while (i<=n)
    {
       j=1;
       s=1;
       while (j<=i)
       {
           s*=j;
           j++;
       }
       S+=s;
       i++;
    }

    cout<<"Rezultatul este "<<S;

    return 0;
}
