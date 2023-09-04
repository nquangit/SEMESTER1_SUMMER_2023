#include <stdio.h>
#include <stdlib.h>

void getInput(int *arr, int *n) {
	scanf("%d", n);
	for (int *i = arr; i < arr + *n; i++) {
		scanf("%d", i);
	}
}

int main() {
	int n;
	int arr[100];
	getInput(arr, &n);
}
