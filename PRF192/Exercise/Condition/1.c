#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	printf("Nhap a: "); 
	scanf("%d", &a);
	printf("Nhap b: "); 
	scanf("%d", &b);
	if (a == b) {
		printf("%d = %d", a, a);
	} else if (a > b) {
		printf("%d > %d", a, b);
	} else {
		printf("%d < %d", a, b);
	}
	return 0;
}
