short UCP(int a){
    if (a == 0)
        return 0;
    
    while (a != 0) {
        if ((a % 10) % 2 == 0)
            return a % 10;
        a /= 10;
    }

    return -1;
}