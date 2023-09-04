#include <stdio.h>
#include <stdlib.h>

// check fibo 
// 1 1 2 3 5 8 13 21 ..
int main(int argc, char *argv[]) {
	int i1 = 1, i2 = 1, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	while (i2 <= n) {
		i2 += i1;
		i1 = i2 - i1;
	}
	if (i1 == n || i2 == n) {
		printf("%d is in Fibonacci sequence", n);
	} else {
		printf("%d is not in Fibonacci sequence", n);
	}
	return 0;
}
