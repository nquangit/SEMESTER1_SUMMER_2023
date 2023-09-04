#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, sum = 0;
	do {
		printf("Enter a number(0 to exit): ");
		scanf("%d", &n);
		sum += n;
	} while (n != 0);
	printf("%d", sum);
	return 0;
}
