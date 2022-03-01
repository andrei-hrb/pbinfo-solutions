#include <bits/stdc++.h>

using namespace std;

short n, v[202][202], z;
long long s;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> z;

  for (short i = 1; i <= n; ++i)
    for (short j = 1; j <= n; ++j) {
      cin >> v[i][j];
      if (z == 1) {
        if (i < j && j < n - i + 1)
        s += v[i][j];
      }
      else {
        if (z == 2) {
          if (i < j && j > n - i + 1)
            s += v[i][j];
        }
        else {
          if (z == 3) {
            if (i > j && j > n - i + 1)
              s += v[i][j];
          }
          else {
            if (i > j && j < n - i +1)
              s += v[i][j];
          }
        }
      }
    }

  cout << s;

  return 0;
}
