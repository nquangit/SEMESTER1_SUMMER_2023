#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
