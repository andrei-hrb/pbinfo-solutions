#include <bits/stdc++.h>

using namespace std;

short n;
int v[22][22];
long long s1, s2;

long long cmmdc(long long a, long long b) {
  long long c;

  while (b) {
    c = a % b;
    a = b;
    b = c;
  }
  return a;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;

  for (short i = 1; i <= n; ++i)
    for (short j = 1; j <= n; ++j) {
      cin >> v[i][j];
      if (i > j) s1 += v[i][j];
      if (i < j) s2 += v[i][j];
    }
  cout << cmmdc(s1, s2);

  return 0;
}

