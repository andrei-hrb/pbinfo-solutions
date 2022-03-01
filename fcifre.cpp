int nr_cif(int n, int k) {
    int cnt = 0;
    while (n != 0) {

        short d = n % 10;
        if (d != 0)
            if (k % d == 0)
                ++cnt;

        n /= 10;
    }

    return cnt;
}