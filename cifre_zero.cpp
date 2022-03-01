short nr_cif_zero(int a) {
    short d = 0;

    if (a == 0)
        return 1;
    
    while (a != 0) {
        if (a % 10 == 0)
            ++d;
        a /= 10;
    }

    return d;
}