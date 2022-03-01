long long nr_prim(long long n) {
    int m;
    const long long limit = 9223372036854775807;
    for (long long i = n + 1; i < limit; ++i) {
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
            m = i;
            break;
        }
    }

    return m;
}