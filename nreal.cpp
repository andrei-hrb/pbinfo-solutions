double nreal(int a, int b) {
	double copie = b;
	int nr = 0;

	while (b != 0) {
		++nr;
		b /= 10;
	}

	for (int i = 0; i < nr; ++i)
		copie /= 10;

	double c = (double) a + copie;
	return c;
}