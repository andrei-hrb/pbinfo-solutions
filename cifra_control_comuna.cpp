unsigned long long sum_cifra_control(short a, unsigned long long b) {
    unsigned long long cnt = 0;

    for(int i = a; i <= b; ++i) {
        int d = i;

        d = d % 9;

        if (d == 0)
            d = 9;

        if(d == a)
            ++cnt;
    }
    return cnt;
}
