void sumcif(int n, int &p, int &i) {
    p = 0; i = 0;
    while (n != 0) {
        int cif = n % 10;
        if (cif % 2 == 0)
            p += cif;
        else
            i += cif;
        n /= 10;
    }
}