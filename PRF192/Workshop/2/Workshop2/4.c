#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Perfect square ?
int main(int argc, char *argv[]) {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int int_sqrt_n = sqrt(n);
	if (pow(int_sqrt_n, 2) == n) {
		printf("%d is a square number", n);
	} else {
		printf("%d is not a square number", n);
	}
	return 0;
}
