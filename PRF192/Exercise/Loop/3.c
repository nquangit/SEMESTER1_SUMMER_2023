#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, count = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i & 1) {
			printf("%d ", i);
			count++;
		}
		if (count == 15) {
			printf("\n");
			count = 0;
		}
	}
	
	return 0;
}
