int count(double *a, int n)
{
    int nr = 0;
    double s = 0;
    for (int i = 0; i < n; ++i)
        s += a[i];
    s = s / n;
    for (int i = 0; i < n; ++i)
        if (a[i] >= s)
            ++nr;
    return nr;
}