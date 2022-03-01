void Impare(int &n) {
    int aux[15], k = 0;
    while (n) {
        if ((n % 10) % 2) aux[k++] = n % 10 - 1;
        else aux[k++] = n % 10;
        n /= 10;
    }
    
    for (int i = k - 1; i >= 0; i--) n = n * 10 + aux[i];
}