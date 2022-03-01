#include <fstream>
#include <vector>
#include <iostream>

using namespace std;

int n;
vector<int> v;

bool check()
{
    const size_t n = v.size();

    for (int i = 0, j = n - 1; i <= n / 2 and j >= n / 2; ++i, --j)
        if (v[i] != v[j])
            return false;

    return true;
}

int main()
{
    ifstream fin("palindrom_ciclic.in");
    ofstream fout("palindrom_ciclic.out");
    fin >> n;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        fin >> temp;
        v.reserve(1);
        v.emplace_back(temp);
    }
    fin.close();

    if (check())
    {
        fout << "DA 0";
        fout.close();
        return 0;
    }

    for (int i = 0; i < v.size(); ++i)
    {
        v.reserve(1);
        v.emplace_back(v[0]);
        v.erase(v.begin());

        if (check())
        {
            fout << "DA "  << i + 1;
            fout.close();
            return 0;
        }
    }

    fout << "NU";
    fout.close();

    return 0;
}
