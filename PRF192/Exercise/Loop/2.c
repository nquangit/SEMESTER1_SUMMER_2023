#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, sum = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i & 1) {
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}
