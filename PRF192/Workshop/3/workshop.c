#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

void menu() {
	printf("1  -  Enter the elements in the array.\n");
	printf("2  -  Print out all the elements in the array.\n");
	printf("3  -  Print out even values in array.\n");
	printf("4  -  Print out values in a range.\n");	
	printf("5  -  Search maximum value of the array.\n");
	printf("6  -  Add a new element.\n");
	printf("7  -  Search for x value in array.\n");
	printf("8  -  Search for x value in array, print out the positions with x.\n");
	printf("9  -  Remove the first existence of a value.\n");
	printf("10 -  Remove all existence of a value.\n");
	printf("11 -  Print out the array in ascending order.\n");
	printf("12 -  Print out the array in descending order.\n");
	printf("0  -  Quit.\n");
}

void getInput(int arr[], int * size) {
	printf("Enter length of array: ");
	scanf("%d", size);
	for (int *i = arr; i < arr + *size; i++) {
		printf("Enter element at index %d: ", i - arr);
		scanf("%d", i);
	}
}

void printArray(int arr[], int size) {
	for (int *i = arr; i < arr + size; i++) {
		printf("%d ", *i);
	}
	printf("\n");
}

void printEven(int arr[], int size) {
	for (int *i = arr; i < arr + size; i++) {
		if (!(*i & 1)) {
			printf("%d ", *i);
		}
	}
	printf("\n");
}

void printInRange(int arr[], int size, int lowerLimit, int upperLimit) {
	for (int *i = arr; i < arr + size; i++) {
		if (*i >= lowerLimit && *i <= upperLimit) {
			printf("%d ", *i);
		}
	}
	printf("\n");
}

void maxInArray(int arr[], int size) {
	if (size == 0) {
		printf("No element in array.\n");
		return;
	}
	int max = *arr;
	for (int *i = arr + 1; i < arr + size; i++) {
		if (*i > max) {
			max = *i;
		}
	}
	printf("Max value in array is %d\n", max);
}

void pushElement(int arr[], int * size, int newElement) {
	*(arr + (*size)++) = newElement;
}

void isInArray(int arr[], int size, int x) {
	int check = 0;
	for (int *i = arr; i < arr + size; i++) {
		if (*i == x) {
			check = 1; 
			break;
		}
	}
	if (check) {
		printf("%d is exist in array.\n", x);
	} else {
		printf("%d is not exist in array.\n", x);
	}
}

void searchInArray(int arr[], int size, int x) {
	for (int *i = arr; i < arr + size; i++) {
		if (*i == x) {
			printf("Found %d at %d\n", x, i - arr);
		}
	}
}

void removeElementAt(int arr[], int * size, int index) {
	for (int *i = arr + index; i < arr + *size; i++) {
		*i = *(i + 1);
	}
	(*size)--;
}

void removeFirstExistence(int arr[], int * size, int x) {
	int saveIndex;
	for (int *i = arr; i < arr + *size; i++) {
		if (*i == x) {
			saveIndex = i - arr;
			removeElementAt(arr, size, saveIndex);
			break;
		}
	}
	printf("Deleted first %d at %d\n", x, saveIndex);
}

void removeAllExistence(int arr[], int * size, int x) {
	for (int *i = arr + *size - 1; i >= arr ; i--) {
		if (*i == x) {
			removeElementAt(arr, size, i - arr);
			printf("Deleted %d at %d\n", x, i - arr);
		}
	}
}

void swap(int * x, int * y) {
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

void copyArray(int oldArr[], int newArr[], int size) {
	for (int i = 0; i < size; i++) {
		newArr[i] = oldArr[i];
	}
}

void printAscOrder(int arr[], int size) {
	int newArray[MAX_SIZE];
	copyArray(arr, newArray, size);
	// selection sort 
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (newArray[i] > newArray[j]) {
				swap(&newArray[i], &newArray[j]);
			}
		}
	}
	printf("Ascending order array.\n");
	printArray(newArray, size);
}

void printDesOrder(int arr[], int size) {
	int newArray[MAX_SIZE];
	copyArray(arr, newArray, size);
	// selection sort 
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (newArray[i] < newArray[j]) {
				swap(&newArray[i], &newArray[j]);
			}
		}
	}
	printf("Descending order array.\n");
	printArray(newArray, size);
}

int main() {
	int arr[MAX_SIZE], size = 0;
	int choice;
	do {
		menu();
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1: {
				getInput(arr, &size);
				break;
			}
			case 2: {
				printArray(arr, size);
				break;
			}
			case 3: {
				printEven(arr, size);
				break;
			}
			case 4: {
				int upperLimit, lowerLimit;
				printf("Enter the range:\n");
				printf("Enter lower limit: ");
				scanf("%d", &lowerLimit);
				printf("Enter upper limit: ");
				scanf("%d", &upperLimit);
				printInRange(arr, size, lowerLimit, upperLimit);
				break;
			}
			case 5: {
				maxInArray(arr, size);
				break;
			}
			case 6: {
				int newElement;
				printf("Enter new element: ");
				scanf("%d", &newElement);
				pushElement(arr, &size, newElement);
				break;
			}
			case 7: {
				int x;
				printf("Enter element to search: ");
				scanf("%d", &x);
				isInArray(arr, size, x);
				break;
			}
			case 8: {
				int x;
				printf("Enter element to search: ");
				scanf("%d", &x);
				searchInArray(arr, size, x);
				break;
			}
			case 9: {
				int x;
				printf("Enter element to remove: ");
				scanf("%d", &x);
				removeFirstExistence(arr, &size, x);
				break;
			}
			case 10: {
				int x;
				printf("Enter element to remove: ");
				scanf("%d", &x);
				removeAllExistence(arr, &size, x);
				break;
			}
			case 11: {
				printAscOrder(arr, size);
				break;
			}
			case 12: {
				printDesOrder(arr, size);
				break;
			}
			case 0: {
				printf("Bye !!!\n");
				break;
			}
		}
		printf("\n================================\n");
	} while (choice >= 1 && choice <= 12);
	return 0;
}
