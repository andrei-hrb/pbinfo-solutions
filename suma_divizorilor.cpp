unsigned long long sum_div(int a) {
    int i = 1;
    unsigned long long s = 0;

    while (i * i < a) {
        if (a % i == 0) {
            s += i + (a / i);
        }
        ++i;
    }

    if (i * i == a) {
        s += i;
    }

    return s;
}