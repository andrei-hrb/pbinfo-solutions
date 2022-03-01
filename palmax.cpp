#include <iostream>

using namespace std;

int n=1,m,p,ok,d;

int main()
{

ios::sync_with_stdio(false);

    while (n!=0)
    {
        p=0;
        cin>>n;
        if (n==0) break;
        m=n;
        while (m>0)
        {
            p=p*10+m%10;
            m/=10;
        }
        if (p==n && p>d) {d=p; ok=0;}
        if (p==d) ok++;
    }

    if (d!=0) cout << d <<" "<<ok;
    else cout << "NU EXISTA";

return 0;
}
