#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	for (int i = 0; i <= 127; i++) {
		printf("%c  %d  %x \n", i, i, i);
	}
	return 0;
}
