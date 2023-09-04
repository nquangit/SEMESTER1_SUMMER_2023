#include <stdio.h>
#include <stdlib.h>

// UCLN
int main(int argc, char *argv[]) {
	int m, n;
	printf("Enter a number: ");
	scanf("%d", &m);
	printf("Enter a number: ");
	scanf("%d", &n);
	int du;
	do {
		du = m % n;
		m = n;
		n = du;
	} while (du != 0);
	printf("%d", m);
	return 0;
}
