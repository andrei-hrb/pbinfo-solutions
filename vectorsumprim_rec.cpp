bool isItPrime(int n) {
    if (n < 1) return false;
    else {
        if (n <= 3) return true;
        else
            if (!(n % 2) or !(n % 3))
                return false;
    }

    int d = 5;
    while (d * d <= n) {
        if (!(n % d) or !(n % (d + 2)))
            return false;
        d += 4;
    }

    return true;
}

bool ok = false;
void P(int arr[], int n, int &s) {
    if (!ok) {
        ok = true;
        s = 0;
    }

    if (n > 0) {
        if (isItPrime(arr[n - 1]))
            s += arr[n - 1];
        P(arr, n - 1, s);
    }
}