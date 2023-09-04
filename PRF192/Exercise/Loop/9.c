#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, sum;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for (int i = 2; i <= n; i++) {
		sum = 0;
		for (int j = 1; j <= i/2; j++) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum == i) {
			printf("%d ", i);
		}
	}
	return 0;
}
