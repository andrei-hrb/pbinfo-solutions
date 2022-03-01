void interval(int n, int &a, int &b) {
    int fact = 1;

    for (int i = 2; i <= n; i++) {
        fact *= i;
    }

    a = fact / n + 1;
    b = fact * (n + 1) - 1;
}