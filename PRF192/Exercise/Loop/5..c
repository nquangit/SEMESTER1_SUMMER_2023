#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char c1, c2;
	printf("Enter a character: ");
	scanf("%c", &c1);
	fflush(stdin);
	printf("Enter a character: ");
	scanf("%c", &c2);
	if (c1 > c2) {
		printf("Enter c1 < c2");
		return 0;
	}
	for (char i = c1; i <= c2; i++) {
		printf("%c  %d  %x \n", i, i, i);
	}
	return 0;
}
