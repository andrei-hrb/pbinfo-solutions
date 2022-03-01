#include <iostream>

using namespace std;

int i,n,a[1001],MAX;


int main()
{

   cin >> n;

   for(i=1;i<=n;i++)
    cin >> a[i];

   MAX=a[1];

   for(i=1;i<=n;i++)
    if(a[i]>MAX) MAX=a[i];

   cout << MAX;

}
