#include <fstream>
using namespace std;

ifstream fin("div3.in");
ofstream fout("div3.out");

int n, v[1001];

int main()
{
    fin >> n;
    for (int i = 0; i < n; ++i)
        fin >> v[i];

    for (int i = 0; i < n; ++i)
    {
        int original = v[i], sum = 0;
        while (v[i])
        {
            sum += v[i] % 10;
            v[i] /= 10;
        }

        if (sum % 3 == 0)
            fout << original << ' ';
    }

    fin.close();
    fout.close();
}
