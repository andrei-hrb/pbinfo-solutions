bool isItPrime(int n)
{
    if (n == 1)
        return false;
    else
    {
        if (n <= 3)
            return true;
        else
            if (n % 2 == 0 or n % 3 == 0)
                return false;
    }

    int l = 5;
    while (l * l <= n)
    {
        if (n % l == 0)
            return false;
        l += 2;
    }

    return true;
}

int prime[10001], normale[10001];
void modificare(int *v, int n)
{
    int ip = 0, in = 0;
    for (int i = 0; i < n; ++i)
        if (isItPrime(v[i]))
        {
            prime[ip] = v[i];
            ++ip;
        }
        else
        {
            normale[in] = v[i];
            ++in;
        }

    int i = 0;
    for (int j = 0; j < ip; ++j, ++i)
        v[i] = prime[j];
    for (int j = 0; j < in; ++j, ++i)
        v[i] = normale[j];
}