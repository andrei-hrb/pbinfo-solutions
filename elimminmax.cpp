#include <iostream>
#include <limits.h>
using namespace std;
int main ()
{

  int n, m, a[100][100], rez[100][100], nr_lin = 0, nr_col =
    0, nr_max_col, i, j, max = 0, min =
    INT_MAX, linie_min, linie_max, col_min, col_max, linie, col;
  cin >> n >> m;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
	{
	  cin >> a[i][j];
	}
    }
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
	{
	  if (a[i][j] > max)
	    {
	      max = a[i][j];
	      linie_max = i;
	      col_max = j;
	    }
	  if (a[i][j] < min)
	    {
	      min = a[i][j];
	      linie_min = i;
	      col_min = j;
	    }
	}
    }

  for (i = 0; i < n; i++)
    {
      nr_col = 0;
      if (i != linie_max && i != linie_min)
	{

	  for (j = 0; j < m; j++)
	    {
	      if (j != col_max && j != col_min)
		{
		  rez[nr_lin][nr_col] = a[i][j];
		  nr_col++;
		}
	    }
	  nr_lin++;
	  nr_max_col = nr_col;
	}
    }

  for (i = 0; i < nr_lin; i++)
    {
      for (j = 0; j < nr_max_col; j++)
	{
	  cout << rez[i][j] << " ";
	}
      cout << endl;
    }

  return 0;
}
