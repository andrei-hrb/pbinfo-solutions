#include <iostream>
#include <cstdio>

using namespace std;

float v[201],a,b,m;
int n,ok;

int main()

{
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
      scanf("%f",&m);
      v[i]=m;
  }

  a=v[1];
  b=v[n];

  if(a>b) {v[0]=a; a=b; b=v[0];}
  for(int i=1;i<=n;i++)
  if(v[i]<a||b<v[i]) ok++;

  printf("%d",ok);
  return 0;
}
