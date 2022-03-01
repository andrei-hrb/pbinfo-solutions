int mp(int n) {
    if (n >= 12)
        return n - 1;
    return mp(mp(n + 2));
}