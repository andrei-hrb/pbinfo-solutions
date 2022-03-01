int nrmaxim(int a) {
    int copie = a;
    int nr = 0;

    while (copie != 0) {
        ++nr;
        copie /= 10;
    }

  	int d = 1;
    for (int i = 1; i < nr; ++i) {
    	d *= 10;
    }

    int maxi = a;

    for (int i = 1; i <= nr; ++i) {
        a = (a % 10) * d + a / 10;

        if (a > maxi) {
            maxi = a;
        }
    }

    return maxi;
}