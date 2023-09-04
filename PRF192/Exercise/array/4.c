#include <stdio.h>
#define MAX_SIZE 100

void getInput(int * n, int arr[]) {
	printf("Enter length of array: ");
	scanf("%d", n);
    for (int *i = arr; i < arr + *n; i++) {
        scanf("%d", i);
    }
}

int sumEvenOfArray(int n, int arr[]) {
	int sum = 0;
	for (int * i = arr; i < arr + n; i++) {
		if (!(*i & 1)) {
			sum += *i;
		}
	}
	return sum;
}

int main() {
	int arr[MAX_SIZE], n;
	getInput(&n, arr);
	printf("%d", sumEvenOfArray(n, arr));
	return 0;
}
