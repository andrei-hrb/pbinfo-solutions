int interval(int v[], int n)
{
    int nr = 2;
    
    int a = v[0];
    int b = v[n - 1];
    
    if (a > b)
    {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    
    for (int i = 1; i < n - 1; ++i)
        if (v[i] >= a and v[i] <= b)
            ++nr;
    
    return nr;
}