int numarare(int v[], int n) {
    if (n == 0)
        return 0;

    if (v[n - 1] == v[n - 2]) 
        return 1 + numarare(v, n - 1);
    else 
        return numarare(v, n - 1);
}