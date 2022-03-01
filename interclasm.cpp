#include <fstream>

using namespace std;

ifstream fin("interclasm.in");
ofstream fout("interclasm.out");

int x, n, m, mmax = -1;
int frecv[1000000];

int main()
{
  int x;
  fin >> x;

  int n, actual_n = 0;
  fin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    fin >> a[actual_n];
    if (a[actual_n] % x == 0)
    {
      mmax = a[actual_n] > mmax ? a[actual_n] : mmax;
      actual_n++;
    }
  }
  a[actual_n] = -1;

  int m, actual_m = 0;
  fin >> m;
  int b[m];
  for (int i = 0; i < m; i++)
  {
    fin >> b[actual_m];
    if (b[actual_m] % x == 0)
    {
      mmax = b[actual_m] > mmax ? b[actual_m] : mmax;
      actual_m++;
    }
  }
  b[actual_m] = -1;

  int *elm_a = &a[0];
  int *elm_b = &b[0];

  while (*elm_a != -1)
  {
    frecv[*elm_a++]++;
  }

  while (*elm_b != -1)
  {
    frecv[*elm_b++]++;
  }

  for (int i = 0; i <= mmax; i++)
  {
    if (frecv[i] == 1)
    {
      fout << i << ' ';
    }
  }
}