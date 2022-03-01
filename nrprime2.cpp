int NrPrime(int n) {
    int howMany = 0;

    while(n != 0) {
        int c = n % 10;

        if (c == 2 || c == 3 || c == 5 || c == 7) {
            howMany++;
        }

        n /= 10;
    }

    return howMany;
}