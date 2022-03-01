void perm(int &n) {
    int v[15], cif = -1;
    while (n) {
        v[++cif] = n % 10;
        n /= 10;
    }

    for (int i = cif - 1; i >= 0; --i)
        n = n * 10 + v[i];

    n = n * 10 + v[cif];
}