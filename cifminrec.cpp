int cifmin(int n) {
    if (n < 10)
        return n;
    return min(n % 10, cifmin(n / 10));
}