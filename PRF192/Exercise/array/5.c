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

void findGreaterThanX(int n, int arr[], int x) {
	for (int * i = arr; i < arr + n; i++) {
		if (*i > x) {
			printf("%d ", *i);
		}
	}
}

int main() {
	int arr[MAX_SIZE], n, x;
	getInput(&n, arr, &x);
	findGreaterThanX(n, arr, x);
	return 0;
}
