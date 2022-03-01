void identice(int a, int b) {
    bool modif = false;

    for (int i = a; i <= b; i++) {
        bool ok = true;
        int w = i, cif = w % 10;
        w /= 10;

        while(w) {
            if (w % 10 != cif) {
                ok = false;
                break;
            }
            w /= 10;
        }

        if (ok) {
            cout << i << ' ';
            modif = true;
        }
    }

    if (modif == false) {
        cout << "nu exista";
    }
}