#include <iostream>

using namespace std;

int a,b,q,r,x[11],y[11],ok;

int main()
{
    ios::sync_with_stdio(false);

    cin>>a>>b;;

    if (a<10 && b<10 && a==b) {cout << "DA" <<'\n'<< "1";}

    while (a>0)
    {
        q++;
        x[q]=a%10;
        a/=10;
    }

    while (b>0)
    {
        r++;
        y[r]=b%10;
        b/=10;
    }

    if (r!=q) {cout << "NU"; return 0;}
    else
    {
        for (int i=1; i<=q; i++)
        {
            if (x[i]==y[i]) ok++;
        }
    }
    cout <<"DA"<<'\n'<<ok;

    return 0;
}
