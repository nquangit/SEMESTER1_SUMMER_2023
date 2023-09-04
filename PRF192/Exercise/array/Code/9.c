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

int isInArray(int n, int arr[], int x) {
	for (int * i = arr; i < arr + n; i++) {
		if (x == *i) {
			return 1; // true
		}
	}
	return 0;
}

int main() {
	int arr[MAX_SIZE], n, x;
	getInput(&n, arr, &x);
	if (isInArray(n, arr, x)) {
		printf("%d is in array", x);
	} else {
		printf("%d is not in array", x);
	}
	return 0;
}
