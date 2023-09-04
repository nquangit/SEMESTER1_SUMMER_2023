#include <stdio.h>
#include <stdlib.h>

// cac bang cuu chuong 
int main(int argc, char *argv[]) {
	int n, sum;
	for (int i = 2; i <= 10; i++) {
		printf("Bang cuu chuong %d\n", i);
		for (int j = 1; j <= 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
