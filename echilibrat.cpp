int echilibrat(int n) {
    int sumOdd = 0, sumEven = 0;
    bool was = true;

    while (n > 0) {
        if (was) {
            sumEven += n % 10;
        } else {
            sumOdd += n % 10;
        }
        
        was = !was;

        n /= 10;
    }

    return (sumEven % 2 == 0 && sumOdd % 2 == 1);
}