unsigned long long sumfactcif(int n) {
	unsigned long long s = 0;

	if (n == 0) 
		return 1;
	while (n != 0) {
		unsigned long long temp = 1;
		for (int i = 1; i <= n % 10; ++i) {
			temp *= i;
		}
		s += temp;
		n /= 10;
	}
	return s;
}