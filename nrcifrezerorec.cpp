int nr_cif_zero(int n) {
    if(n < 10 && n != 0)
        return 0;
    
    if (n == 0)
        return 1;

    if (n % 10 == 0)
        return 1 + nr_cif_zero(n/10);
    else
        return nr_cif_zero(n/10);
}
