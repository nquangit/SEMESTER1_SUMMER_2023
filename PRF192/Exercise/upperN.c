#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void getInput(int *arr, int *size) {
	scanf("%d", size);
	for (int *i = arr; i < arr + *size; i++) {
		scanf("%d", i);
	}
}

void swap(int *x, int *y) {
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

void sortPart(int *arr, int begin, int end) {
	for (int i = begin; i < end; i++) {
		for (int j = i + 1; j < end; j++) {
			if (arr[i] > arr[j]) {
				swap(&arr[i], &arr[j]);
			}
		}
	}
}

void printArray(int *arr, int size) {
	for (int *i = arr; i < arr + size; i++) {
		printf("%d ", *i);
	}
	printf("\n");
}

int splitEvenOdd(int * arr, int size) {
	int seperator = -1;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (!(arr[i]&1) && (arr[j]&1)) {
				seperator = i;
				swap(&arr[i], &arr[j]);
			} 
		}
	}
	return seperator;
}


int main() {
	int * n = (int *) malloc(sizeof(int));
	int * arr = (int *) malloc(*n * sizeof(int));
	getInput(arr, n);
	int seperator = splitEvenOdd(arr, *n) + 1;
	sortPart(arr, 0, seperator);
	sortPart(arr, seperator, *n); // sort even part
	printArray(arr, *n);
	return 0;
}
