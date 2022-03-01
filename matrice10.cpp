#include <iostream>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int matrix[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> matrix[i][j];
    }
  }

  int *pointer_first = &matrix[0][0];
  int *pointer_last = &matrix[0][m - 1];

  for (int i = 1; i < n; i++)
  {
    if (matrix[i][0] < *pointer_first)
    {
      pointer_first = &matrix[i][0];
    }

    if (matrix[i][m - 1] < *pointer_last)
    {
      pointer_last = &matrix[i][m - 1];
    }
  }

  swap(*pointer_first, *pointer_last);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << matrix[i][j] << ' ';
    }

    cout << '\n';
  }

  return 0;
}