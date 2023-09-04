#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, i1 = 0, i2 = 1, count = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	while (count != n) {
		printf("%d ", i1);
		i2 = i1 + i2;
		i1 = i2 - i1;
		count++;
	}
	return 0;
}
