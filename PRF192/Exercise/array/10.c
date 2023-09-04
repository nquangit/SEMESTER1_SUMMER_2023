#include <stdio.h>
#define MAX_SIZE 100

void getInput(int * n, int arr[]) {
	printf("Enter length of array: ");
	scanf("%d", n);
    for (int *i = arr; i < arr + *n; i++) {
        scanf("%d", i);
    }
}

int isPrime(int n) {
	if (n < 2) {
		return 0; // false
	}
	if (n == 2) {
		return 1; // true
	}
	if (!(n & 1)) {
		return 0; // false
	}
	for (int i = 3; i * i <= n; i++) {
		if (n % i == 0) {
			return 0; // false
		}
	}
	return 1; // true
}

void findPrime(int n, int arr[]) {
	for (int * i = arr; i < arr + n; i++) {
		if (isPrime(*i)) {
			printf("%d ", *i);
		}
	}
}

int main() {
	int arr[MAX_SIZE], n;
	getInput(&n, arr);
	findPrime(n, arr);
	return 0;
}
