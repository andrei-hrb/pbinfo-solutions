#include <algorithm>
void afisvec(int v[], int n) {
    reverse(v, v + n);
    for (int i = 0; i < n; ++i)
        cout << v[i] << ' ';
}