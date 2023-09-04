#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// prime ?
int main(int argc, char *argv[]) {
	int n;
	int check = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for (int k = 2; k <= n; k++) {
		check = 1;
		if (k < 2) {
			check = 0;
		}
		for (int i = 2; check !=0, i <= (int)sqrt(k); i++) {
			if (k % i == 0) {
				check = 0;
			}
		}
		if (check) {
			printf("%d ", k);
		}
	}
	return 0;
}
