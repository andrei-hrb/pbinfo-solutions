int multiplu(int v[], int n, int k) {
    if (n == 0)
        return 0;
    int temp = v[n - 1];
    if (temp % k == 0 and temp % 10 == k)
        return 1 + multiplu(v, n - 1, k);
    return multiplu(v, n -1, k);
}