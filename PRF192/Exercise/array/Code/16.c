#include <stdio.h>
#define MAX_SIZE 100

void getInput(int * n, int arr[]) {
	printf("Enter length of array: ");
	scanf("%d", n);
    for (int *i = arr; i < arr + *n; i++) {
        scanf("%d", i);
    }
}

void printArray(int n, int arr[]) {
	printf("Updated array\n");
	for (int * i = arr; i < arr + n; i++) {
		printf("%d ", *i);
	}
}

void swap(int * x, int * y) {
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

void sortArray(int n, int arr[]) {
	// selection sort 
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				swap(&arr[i], &arr[j]);
			}
		}
	}
}

int main() {
	int arr[MAX_SIZE], n;
	getInput(&n, arr);
	sortArray(n, arr);
	printArray(n, arr);
	return 0;
}
