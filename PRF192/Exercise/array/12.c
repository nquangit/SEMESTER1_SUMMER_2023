#include <stdio.h>
#define MAX_SIZE 100

void getInput(int * n, int arr[], int * index, int * value) {
	printf("Enter length of array: ");
	scanf("%d", n);
    for (int *i = arr; i < arr + *n; i++) {
        scanf("%d", i);
    }
    printf("Enter new element to insert: ");
	scanf("%d", value);
	printf("Enter the position to insert: ");
	scanf("%d", index);
}

void insertToArray(int * n, int arr[], int * index, int * value) {
	int backUp[MAX_SIZE];
	if (*index > *n) {
		printf("Out of range");
	} else {
		// backup array from index to end -> backup array
		for (int i = *index; i < *n; i++) {
			backUp[i] = arr[i];
		}
		*n += 1; // increase array length
		arr[*index] = *value;
		for (int i = *index + 1; i < *n; i++) {
			arr[i] = backUp[i - 1];
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
	int arr[MAX_SIZE], n, index, value;
	getInput(&n, arr, &index, &value);
	insertToArray(&n, arr, &index, &value);
	printArray(n, arr);
	return 0;
}
