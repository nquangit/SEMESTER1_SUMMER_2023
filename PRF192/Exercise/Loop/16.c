#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// prime ?
int main(int argc, char *argv[]) {
	int n;
	int check;
	printf("Enter a number: ");
	scanf("%d", &n);
	int count = 0, k = 2;
	while (count != n) {
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
			count++;
		}
		k++;
	}
	return 0;
}
