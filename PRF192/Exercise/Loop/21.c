#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = i - 1; j > 0; j--) {
			printf("  ");
		}
		for (int k = n - i + 1; k > 0; k--) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
