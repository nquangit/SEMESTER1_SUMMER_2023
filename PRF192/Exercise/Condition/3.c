#include <stdio.h>
#include <stdlib.h>

int main() {
	int maxValue, n;
	printf("Enter number: ");
	scanf("%d", &n);
	maxValue = n;
	printf("Enter number: ");
	scanf("%d", &n);
	maxValue = (n > maxValue) ? n : maxValue;
	printf("Enter number: ");
	scanf("%d", &n);
	maxValue = (n > maxValue) ? n : maxValue;
	printf("Enter number: ");
	scanf("%d", &n);
	maxValue = (n > maxValue) ? n : maxValue;
	printf("Max = %d\n", maxValue);
	return 0;
}
