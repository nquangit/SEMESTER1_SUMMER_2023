#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i & 1) {
			printf("%d ", i);
		}
	}
	return 0;
}
