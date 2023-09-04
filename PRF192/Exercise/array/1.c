#include <stdio.h>
#define MAX_SIZE 100

int main() {
	int arr[MAX_SIZE], n;
	printf("Enter length of array: ");
	scanf("%d", &n);
	// Enter value for array
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	// Print array
	for (int * i = arr; i < arr + n; i++) {
		printf("%d ", *i);
	}
	return 0;
}
