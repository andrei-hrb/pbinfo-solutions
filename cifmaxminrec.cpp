void cifmaxmin(int n, int &maxi, int &mini) {
    if (n < 10) maxi = n, mini = n;
    else {
        cifmaxmin(n / 10, maxi, mini);
        if (n % 10 > maxi)
            maxi = n % 10;
        if (n % 10 < mini)
            mini = n % 10;
    }
}