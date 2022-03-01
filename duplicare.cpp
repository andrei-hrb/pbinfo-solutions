void duplicare(int &n) {
    int aux[10], k = 0;
    
    while (n != 0) {
        if ((n % 10) % 2 == 0) {
            aux[k++] = (n % 10) / 2;
        }
        aux[k++] = n % 10;
        n /= 10;
    }
    
    for (int i = k - 1; i >= 0; i--) {
        n = n * 10 + aux[i];
    }
}