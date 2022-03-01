#include <cstring>
#include <fstream>
#include <iostream>
std::ifstream f("align.in");
std::ofstream g("align.out");
void del_sp(char a[]) {
  char b[201];
  size_t i = 0;
  while (a[i] == ' ')
    ++i;
  strcpy(b, a + i);
  strcpy(a, b);
}
int main() {
  char a[101][201], v;
  int n;
  f >> n;
  f >> v;
  f.get();
  int maxi = 0;
  for (int i = 0; i < n; i++) {
    f.getline(a[i], 201);
    del_sp(a[i]);
    if (int(strlen(a[i])) > maxi)
      maxi = int(strlen(a[i]));
  }
  for (int i = 0; i < n; i++) {
    if (strlen(a[i]) == maxi || v == 'S')
      g << a[i] << std::endl;
    else {
      for (int k = 0; k < maxi - strlen(a[i]); k++)
        g << " ";
      g << a[i] << std::endl;
    }
  }
  f.close();
  g.close();
  return 0;
}