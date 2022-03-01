int DivImpar(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    if (a % 2 == 0) {
        for (int i = 2; i <= a / 2; i++) {
            if ((a % i == 0) && ((a / i) % 2 == 1)) {
                a /= i;
                break;
            }
        }

        if (a % 2 == 0) {
            a = 1;
        }
    }

    return a;
}