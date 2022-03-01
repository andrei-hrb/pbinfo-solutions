int minDivPrim(int n) {
    int d = 3, result = (n % 2 == 0 ? 2 : 1);

    while (n % 2 == 0) {
        n /= 2;
    }

    while(n > 1) {
        bool ok = false;
        while(n % d == 0) {
            n /= d;
            ok = true;
        }
        if (ok) result *= d;
        d+=2;
    }

    return result;
}