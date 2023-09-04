#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	// get input
	printf("Nhap canh a: ");
	scanf("%d", &a);
	printf("Nhap canh b: ");
	scanf("%d", &b);
	printf("Nhap canh c: ");
	scanf("%d", &c);
	// Kiem tra tam giac hop le
	if (!((a + b > c) && (a + c > b) && (b + c > a))) {
		printf("%d, %d, %d khong phai la 3 canh cua tam giac !!!", a, b, c);
		return 0;
	}
	// Kiem tra tam giac can
	if (a == b || b == c || c == a) {
		printf("%d, %d, %d la 3 canh cua tam giac can !!!", a, b, c);
	} else {
		printf("%d, %d, %d khong la 3 canh cua tam giac can !!!", a, b, c);
	}
	return 0;
}
