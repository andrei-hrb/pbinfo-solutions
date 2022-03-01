int sumcif(int a) {
    int f = 0;

    while (a != 0) {
        f += a % 10;
        a /= 10;
    }

    return f;
}
