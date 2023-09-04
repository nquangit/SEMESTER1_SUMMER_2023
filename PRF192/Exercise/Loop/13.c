#include <stdio.h>
#include <stdlib.h>

// gt
int main(int argc, char *argv[]) {
	int n, gt = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		gt *= i;
	}
	printf("%d", gt);
	return 0;
}
