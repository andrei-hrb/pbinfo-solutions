int sumcif(long n) {
    if (n<10) 
        return n;
    else 
        return n % 10 + sumcif(n / 10);

}