bool prim(int a){
    if (a <= 1)
        return false;
        else {
            if (a <= 3)
                return true;
            else
                if (a % 2 == 0 || a % 3 == 0)
                    return false;
        }

    int l = 5;

    while (l * l <= a) {
        if (a % l == 0 || a % (l + 2) == 0)
            return false;
        l += 4;
    }

    return true;
}
