int elimcif(int n, int c) {
    if (n == 0) {
        return 0;
    }

    if (n % 10 == c) return elimcif(n / 10, c);

    return elimcif(n / 10, c) * 10 + n % 10;
}
