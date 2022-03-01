int factorial(int a) {
    int x;
    if (a <= 1) return 1;
    x = a * factorial(a - 1);
    return x;
}
