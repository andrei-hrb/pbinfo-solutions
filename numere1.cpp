#include <iostream>

using namespace std;

int n, c, x[2];
bool _4[1000];
short int d;

void citire()
{
    cin >> n;

    for (int i=0; i<n; i++)
        {
            cin >> c;
            if (c < 1000) _4[c]=1;
        }
}

void scriere()
{
    for (int i=999; i>99 && d<2; i--)
        {
            if (_4[i] == 0)
            {
                 x[d]=i;
                 d++;       
            }  
        }
    
    if (d == 2) cout << x[1] << ' ' << x[0];
    else cout << "NU EXISTA";

}

int main()
{
    ios::sync_with_stdio(false);

    citire();
    scriere();

    return 0;
}
