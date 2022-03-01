int sumcif(int n, int &x) {
    if (n < 10)
        return x = n;
    else
        return x = n % 10 + sumcif(n / 10, x);
}