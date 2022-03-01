int cifreImpare(int n) {
    bool modifEven = false;
    bool modifOdd = false;
    int result = 0, pw = 1;

    while (n) {
        int cif = n % 10;

        if (cif % 2 == 0) {
            result += pw * cif;
            pw *= 10;
            modifEven = true;
        } else {
            modifOdd = true;
        }

        n /= 10;
    }

    return (modifEven && modifOdd ? result : -1);
}