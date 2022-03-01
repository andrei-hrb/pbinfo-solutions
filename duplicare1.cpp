void duplicare(int n, int &d) {
    d = 0;
    bool modif = false;
    int pw = 1;

    while (n) {
        int cif = n % 10;

        if (cif % 2 == 0) {
            d += pw * cif;
            pw *= 10;
            modif = true;
        }
        d += pw * cif;
        pw *= 10;

        n /= 10;
    }

    if (modif == false) {
        d =-1;
    }
}