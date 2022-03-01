#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int matrix[n + 1][n + 1];
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == 1 or j == 1 or i == n or j == n)
      {
        matrix[i][j] = i + j;
      }
      else
      {
        matrix[i][j] = matrix[i - 1][j - 1] + matrix[i - 1][j] + matrix[i - 1][j + 1];
      }
    }
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << matrix[i][j] << ' ';
    }
    cout << '\n';
  }

  return 0;
}