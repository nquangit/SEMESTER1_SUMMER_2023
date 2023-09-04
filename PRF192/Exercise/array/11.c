#include <stdio.h>
#define MAX_SIZE 100

void getInput(int * n, int arr[], int * x) {
	printf("Enter length of array: ");
	scanf("%d", n);
    for (int *i = arr; i < arr + *n; i++) {
        scanf("%d", i);
    }
    printf("Enter new element to insert: ");
	scanf("%d", x);
}

void pushToArray(int * n, int arr[], int x) {
	if (*n > 98) {
		printf("Limited");
	} else {
		*n += 1;
		*(arr + (*n) - 1) = x;
	}
}

void printArray(int n, int arr[]) {
	printf("Updated array\n");
	for (int * i = arr; i < arr + n; i++) {
		printf("%d ", *i);
	}
}

int main() {
	int arr[MAX_SIZE], n, x;
	getInput(&n, arr, &x);
	pushToArray(&n, arr, x);
	printArray(n, arr);
	return 0;
}
