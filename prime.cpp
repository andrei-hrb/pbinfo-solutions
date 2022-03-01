#include <fstream>
using namespace std;

ifstream fin("prime.in");
ofstream fout("prime.out");

bool isItPrime(int a)
{
    if (a == 1)
        return false;
    else
    {
        if (a <= 3)
            return true;
        else
            if (a % 2 == 0 or a % 3 == 0)
                return false;
    }

    int l = 5;

    while (l * l <= a)
    {
        if (a % l == 0)
            return false;
        l += 2;
    }

    return true;
}

int n, temp;

int main()
{
    fin >> n;
    for (int i = 0; i < n; ++i)
    {
        fin >> temp;
        if (isItPrime(temp))
            fout << temp << ' ';
    }

    fin.close();
    fout.close();
    return 0;
}
