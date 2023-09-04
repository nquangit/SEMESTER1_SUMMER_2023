#include <stdio.h>
#define MAX_SIZE 100

int sumOfArray(int n, int arr[]) {
	int sum = 0;
	for (int * i = arr; i < arr + n; i++) {
		sum += *i;
	}
	return sum;
}

int main() {
	int arr[MAX_SIZE], n;
	printf("Enter length of array: ");
	scanf("%d", &n);
	// Enter value for array
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	// print sum of array
	printf("%d", sumOfArray(n, arr));
	return 0;
}
