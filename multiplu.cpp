int multiplu(int v[], int n, int k)
{
    int nr = 0;
    
    for (int i = 0; i < n; ++i)
        if (v[i] % k == 0 and v[i] % 10 == k)
            ++nr;
    
    return nr;
}