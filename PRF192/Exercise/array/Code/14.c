#include <stdio.h>
#define MAX_SIZE 100

void getInput(int * n, int arr[], int * value) {
	printf("Enter length of array: ");
	scanf("%d", n);
    for (int *i = arr; i < arr + *n; i++) {
        scanf("%d", i);
    }
	printf("Enter the value to delete: ");
	scanf("%d", value);
}

void deleteElementAt(int * n, int arr[], int index) {
	if (index >= *n) {
		printf("Out of range.");
	} else {
		*n -= 1;
		for (int * i = arr + index; i < arr + *n; i++) {
			*i = *(i + 1);
		}
	}
}

void deleteElement(int * n, int arr[], int value) {
	for (int * i = arr; i < arr + *n; i++) {
		if (*i == value) {
			deleteElementAt(n, arr, i - arr);
		}
	}
}

void printArray(int n, int arr[]) {
	printf("Updated array\n");
	for (int * i = arr; i < arr + n; i++) {
		printf("%d ", *i);
	}
}

int main() {
	int arr[MAX_SIZE], n, value;
	getInput(&n, arr, &value);
	deleteElement(&n, arr, value);
	printArray(n, arr);
	return 0;
}
