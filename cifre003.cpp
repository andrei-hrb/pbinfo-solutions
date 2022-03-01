#include <iostream>

using namespace std;

int main()
{

ios::sync_with_stdio(0);

int n, nr = 0;

cin >> n;

int cn = n;
while(cn > 0)
{
    nr++;
    cn = cn / 10;
}

int cnt = 0;

for(int i = 0; i < nr; i++)
{
    cn = n;

    int poz = 0, nnou = 0, p = 1;

    while(cn > 0)
    {
        if(poz != i) {nnou = nnou +  (cn % 10 )* p; p = p * 10;}
        cn = cn / 10;
        poz++;
    }

    if(nnou % 3 == 0)
      cnt++;
}

cout << cnt;

return 0;
}
