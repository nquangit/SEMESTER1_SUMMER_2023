#include <stdio.h>

int main() {
	for (int i = 5; i < 30; i++) {
		printf("i = %d, ", i);
     	printf("Execute statement; ");
     	printf("i = i + 1 = %d + 1 = %d ", i, i + 1);
     	i = i + 1;
     	printf("i++ = %d++ = %d", i, i + 1);
     	printf("\n");
	}

}
