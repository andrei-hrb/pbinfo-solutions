int Egal(int n) {
    int uCif = -1;

    while (n) {
        int cif = n % 10;

        if (cif % 2 == 1) {
            if (uCif == -1) {
                uCif = cif;
            } else {
                if (uCif != cif) {
                    return 0;
                }
            }
        }

        n /= 10;
    }

    return 1;
}