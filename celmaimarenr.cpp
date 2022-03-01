long long cmmnr(int a) {
    short v[15], nr = 0;

    while(a != 0) {
        v[nr] = a % 10;

        a /= 10;

        ++nr;
    }

    bool ok;
    do {
        ok = 0;

        int aux;
        for (int i = 0; i < nr - 1; ++i) {
            if (v[i] > v[i + 1]) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;

                ok = 1;
            }
        }
    } while (ok == 1);


    long long s = 0;
    for (int i = nr - 1; i >= 0; --i) {
        s = s * 10 + v[i];
    }

    return s;
}