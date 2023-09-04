#include <stdio.h>
#include <stdlib.h>

// bang cuu chuong n
int main(int argc, char *argv[]) {
	int n, sum;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (int i = 1; i <= 10; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}
	return 0;
}
