void sum_cif(long long n, int &s)
{
    s = 0;
    while (n)
    {
        s += n % 10;
        n /= 10;
    }
}
