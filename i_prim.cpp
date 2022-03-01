long long i_prim(long long n) {
    long long m1, m2;
    for (long long i = n; i >= 2; --i) {
        bool ok = true;

        if (i % 2 == 0 || i % 3 == 0)
            ok = false;

        long long l = 5;

        while (l * l <= i) {
            if (i % l == 0 || i % (l + 2) == 0)
                ok = false;
            l += 4;
        }

        if (ok == true || i == 2) {
            m1 = i;
            break;
        }
    }
    const long long limit = 9223372036854775807;
    for (long long i = n; i <= limit; ++i) {
        bool ok = true;

        if (i % 2 == 0 || i % 3 == 0)
            ok = false;

        long long l = 5;

        while (l * l <= i) {
            if (i % l == 0 || i % (l + 2) == 0)
                ok = false;
            l += 4;
        }

        if (ok == true) {
            m2 = i;
            break;
        }
    }

    return m2 - m1;
}