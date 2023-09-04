#include <stdio.h>
#define MAX_SIZE 100

void getInput(int * n, int arr[]) {
	printf("Enter length of array: ");
	scanf("%d", n);
    for (int *i = arr; i < arr + *n; i++) {
        scanf("%d", i);
    }
}

void printEven(int n, int arr[]) {
	for (int * i = arr; i < arr + n; i++) {
		if (!(*i & 1)) {
			printf("%d ", *i);
		}
	}
}

int main() {
	int arr[MAX_SIZE], n;
	getInput(&n, arr);
	printEven(n, arr);
	return 0;
}
