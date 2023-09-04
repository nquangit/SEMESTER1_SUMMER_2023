#include <stdio.h>
#define MAX_SIZE 100

void getInput(int * n, int arr[], int * x) {
	printf("Enter length of array: ");
	scanf("%d", n);
	printf("Enter x: ");
	scanf("%d", x);
    for (int *i = arr; i < arr + *n; i++) {
        scanf("%d", i);
    }
}

int findMinArray(int n, int arr[]) {
	int min = *arr;
	for (int * i = arr + 1; i < arr + n; i++) {
		if (*i < min) {
			min = *i;
		}
	}
	return min;
}

int main() {
	int arr[MAX_SIZE], n, x;
	getInput(&n, arr, &x);
	printf("Min: %d", findMinArray(n, arr));
	return 0;
}
