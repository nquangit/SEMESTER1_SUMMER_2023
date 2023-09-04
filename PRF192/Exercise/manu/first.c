#include <stdio.h>
#include <stdlib.h>

void menu() {
	printf("=========Menu========\n");
	printf("1. In ra cac so le nho hon hoac bang n.\n");
	printf("2. Bang ma ASCII.\n");
	printf("0. Exit.\n");
}

void printOddNumber() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i+=2) {
		printf("%d ", i);
	}
	printf("\n");
}

void printASCII() {
	char c1, c2;
	printf("Enter 2 character: ");
	fflush(stdin);
	scanf("%c", &c1);
	fflush(stdin);
	scanf("%c", &c2);
	for (char i = c1; i <= c2; i++) {
		printf("%c ", i);
	}
	printf("\n");
}

int main() {
	int choice;
	do {
		menu();
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1: {
				printOddNumber();
				break;
			}
			case 2: {
				printASCII();
				break;
			}
		}
		printf("\n");
	} while (choice > 0 && choice < 3);
	return 0;
}
