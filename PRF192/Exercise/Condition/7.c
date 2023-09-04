#include <stdio.h>
#include <stdlib.h>

// ax + b = 0
int main() {
	int a, b, result;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Giai phuong trinh %dx + %d = 0\n", a, b);
	if (a == 0) {
		if (b == 0) {
			printf("Phuong trinh co vo so nghiem !");
		} else {
			printf("Phuong trinh vo nghiem !");
		}
	} else {
		printf("Phuong trinh co nghiem %f", (float)-b / a);
	}
}
