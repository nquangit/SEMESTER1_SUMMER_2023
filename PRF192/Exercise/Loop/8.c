#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (int i = 1; i <= n/2; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	if (sum == n) {
		printf("%d la so hoan chinh", n);
	} else {
		printf("%d khong la so hoan chinh", n);
	}
	return 0;
}
