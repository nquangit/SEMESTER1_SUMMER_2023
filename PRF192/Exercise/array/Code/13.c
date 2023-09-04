#include <stdio.h>
#define MAX_SIZE 100

void getInput(int * n, int arr[], int * index) {
	printf("Enter length of array: ");
	scanf("%d", n);
    for (int *i = arr; i < arr + *n; i++) {
        scanf("%d", i);
    }
	printf("Enter the position to delete: ");
	scanf("%d", index);
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

void printArray(int n, int arr[]) {
	printf("Updated array\n");
	for (int * i = arr; i < arr + n; i++) {
		printf("%d ", *i);
	}
}

int main() {
	int arr[MAX_SIZE], n, index;
	getInput(&n, arr, &index);
	deleteElementAt(&n, arr, index);
	printArray(n, arr);
	return 0;
}
