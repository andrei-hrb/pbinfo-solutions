long long concat(long long a, long long b) {
    long long copie = b;
    short nr = 0;

    while (copie != 0) {
        ++nr;
        copie /= 10;
    }

    copie = 10;
    for (int i = 0; i < nr - 1; ++i)
        copie *= 10;

    return a * copie + b;
}