#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char c = NULL;
	while (c != 10) {
		printf("%c", c);
		c = getchar();
		fflush(stdin);
	}
	return 0;
}
