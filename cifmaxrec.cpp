int cifmax(int n) {
    if (n < 10)
        return n;
    return max(n % 10, cifmax(n / 10));
}