void sum_div(int n, int &nr)
{
    nr = 1 + n;
    for (int i = 2; i <= n / 2; ++i)
        if (n % i == 0)
            nr += i;
}