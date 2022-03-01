void inserare(int &n) {
    int uCif = n % 10, p = n % 10, pw = 10;
    n /= 10;

    while (n) {
        int cif = n % 10;
        int dif = cif - uCif;
        dif = dif > 0 ? dif : -dif;

        p += pw * dif, pw *= 10;
        p += pw * cif, pw *= 10;

        uCif = cif;
        n /= 10;
    }

    n = p;
}