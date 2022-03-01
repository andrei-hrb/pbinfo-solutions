int pos1 = 0, pos2 = 0;
int suma(int v[], int n, int i, int j) {
    if (++pos1 < i) return v[pos1] + suma(v, n, i, j);
    else {
        if (!pos2) pos2 = j;
        if (++pos2  <= n) return v[pos2] + suma(v, n, i, j);
        else return 0;
    }
}