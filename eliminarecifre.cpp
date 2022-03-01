void P(int &n, int c)
{
    int nr = 0, p = 1;
    while (n)
    {
        if (n % 10 != c)
        {
            nr = nr + (n % 10) * p;
            p *= 10;
        }
        
        n /= 10;
    }

    n = nr;
}