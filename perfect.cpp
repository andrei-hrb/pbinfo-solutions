
void perfect(int a, int b) {
    bool found = false;

    for (int number = b; number >= a; number--) {
        int sum = 0, div;
        for(div = 1; div * div < number; div++) {
            if (number % div == 0) {
                sum += div + number / div;
            }
        }

        if (div * div == number) {
            sum += div;
        }

        sum -= number;

        if (sum == number) {
            cout << number << ' ';
            found = true;
        }
    }

    if (found == false) {
        cout << "nu exista";
    }
}