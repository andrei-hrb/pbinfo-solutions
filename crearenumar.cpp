void F(int n, int *a, int &k) {
    bool ok = 0;
    int nr = 0;
    
    for (int i = 0; i < n; ++i) {
        if (!(a[i] % 2)) {
            nr = nr * 10 + a[i];
            ok = 1;
        }
    }
    
    k = ok ? nr : -1;
}