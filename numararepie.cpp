#include <bits/stdc++.h>
using namespace std;
int n, j, v[200], d, i, r, im, nr;
int main()
{
    cin >> n;
    for(i = 0; i < n; i ++)
        cin >> v[i];
    for(i = 0; i < n - 1; i ++)
       if(v[i])
         for(j = i + 1; j < n; j++)
            if(v[j])
          {
            d = v[i];
            im = v[j];
            r = d % im;
            while(r)
            {
                d = im;
                im = r;
                r = d % im;
            }
            if(im == 1) nr ++;
         }
    cout << nr;
    return 0;
}