#include <stdio.h>
#include <stdlib.h>

int * getInput(int * size) {
	FILE * inputFile;
	inputFile = fopen("input.txt", "r");
	fscanf(inputFile, "%d", size);
	int * arr = (int *) malloc(*size * sizeof(int));
	for (int * i = arr; i < arr + *size; i++) {
		fscanf(inputFile, "%d", i);
	}
	return arr;
}

void printArray(int * arr, int * size) {
	for (int * i = arr; i < arr + *size; i++) {
		printf("%d ", *i);
	}
	printf("\n");
}

int main() {
	int * n = (int *) malloc(sizeof(int));
	int * arr;
	arr = getInput(n);
	printArray(arr, n);
	int a = 1;
	printf("\n%d   %d\n", ++a + ++a, a);
	      int g=1;
      printf("%d %d %d", g, ++g, g++);
}
