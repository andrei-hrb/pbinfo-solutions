long long oglindit(int a) {
    long long boyardee = 0;

    while (a != 0) {
        boyardee = boyardee * 10 + a % 10;

        a /= 10;
    }

    return boyardee;
}