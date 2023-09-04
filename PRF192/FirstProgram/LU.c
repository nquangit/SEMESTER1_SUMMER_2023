#include <stdio.h>
#include <stdlib.h>

// UCLN
int gcd(int m, int n) {
	int du;
	do {
		du = m % n;
		m = n;
		n = du;
	} while (du != 0);
	return m;
}

int lcm(int m, int n) {
	return (m * n) / gcd(m, n);
}

int main(int argc, char *argv[]) {
	int m, n;
	printf("Enter a number: ");
	scanf("%d", &m);
	printf("Enter a number: ");
	scanf("%d", &n);
	int G = gcd(m, n);
	int L = lcm(m, n);
	printf("G = %d\n", G);
	printf("L = %d\n", L);
	return 0;
}
