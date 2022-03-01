int cifmaxpar(int n) {
    if (!n)
        return -1;
    if ((n % 10) % 2 == 0)
        return max(n % 10, cifmaxpar(n / 10));
    else
        return cifmaxpar(n / 10);
}