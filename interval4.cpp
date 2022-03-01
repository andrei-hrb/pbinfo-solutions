int interval(int n) {
    while (true) {
        int i;
        bool prime = true;

        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }

        n++;

        if (prime) {
            return n;
        }
    }
}