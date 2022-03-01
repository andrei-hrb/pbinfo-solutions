int cifminpar(int n) {
    if (n < 10) {
        if (!(n & 1))
            return n;
        else return -1;
    } else {
        int x = cifminpar(n / 10);
        if (n % 2)
            return x;
        else {
            if (x < n % 10 and x != -1)
                return x;
            else
                return n % 10;
        }
    }
}