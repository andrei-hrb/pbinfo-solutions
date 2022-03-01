#include <fstream>

using namespace std;

ifstream fin("ciffrecv.in");
ofstream fout("ciffrecv.out");

int v[9],d;
short int a;

void vectori()
{
while (fin >> a)
        if (a == 1 || a == 2 || a == 3 || a == 5 || a == 7)
            v[a]++;

a=0;

for (int i=1; i<10; i++)
    {
        if (i == 1 || i == 2 || i == 3 || i == 5 || i == 7)
            if (i > a && v[i]!=0)
                {
                    d=v[i];
                    a=i;
                }
    }

fout << a << ' ' << d;
}

int main()
{
    vectori();

    return 0;
}
