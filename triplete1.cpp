void triplete(int n) {
    // y(x + z) == n
    for (int i = 1; i <= n; i++) {
        int x, y, z;
        y = i;
        for (int j = 0; j < y; j++) {
            x = j;
            z = (n / y) - x;
            if (z > y && y > x && y * (x + z) == n) cout << '(' << x << ',' << y << ',' << z << ')' << '\n';
        }
    }
}