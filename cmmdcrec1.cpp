int cmmdc(int a, int b, int &x) {
    if(b == 0)
        return x = a;
    else
        return x = cmmdc(b, a % b, x);
}