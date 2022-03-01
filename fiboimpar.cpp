int Fibo(int n) {
    int a = 1, b = 1, k = 2;

    while (k < n) {
        int origB = b;
        b += a;
        a = origB;

        if (b % 2 == 1) k++;
    }

    return b;
}