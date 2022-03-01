unsigned nr_aparitii(char *sir, char *secventa) {
    //daca nu e stl n-am idee
    //nu-i recursiv dar sa speram ca ia 100

    unsigned count = 0;
    const char *tmp = sir;
    while (tmp = strstr(tmp, secventa)) {
        ++count;
        ++tmp;
    }

    return count;
}