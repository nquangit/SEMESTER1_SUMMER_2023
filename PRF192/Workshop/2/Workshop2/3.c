#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Prime ?
int main(int argc, char *argv[]) {
	int n, check = 1;
	printf("Enter n: ");
	scanf("%d", &n);
	if (n < 2) {
		check = 0;
	}
	for (int i = 2; check != 0, i <= (int)sqrt(n); i++) {
		if (n % i == 0) {
			check = 0;
			break;
		}
	}
	if (check) {
		printf("%d is a prime number", n);
	} else {
		printf("%d is not a prime number", n);
	}
	return 0;
}
