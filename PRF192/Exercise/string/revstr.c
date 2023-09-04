#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int isPalindrome(char a[]) {
	int len = strlen(a);
	for (int i = 0; i < (len / 2); i++) {
		if (a[i] != a[len - 1 - i]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	char s[MAX];
	gets(s);
	int count = 0;
	if (isPalindrome(s)) {
		printf("Doi xung");
	} else {
		printf("Khong doi xung");
	}
//	puts(s);
	return 0;
}
