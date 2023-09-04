#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ax^2 + bx + c = 0
int main() {
	int a, b, c, result;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	printf("Giai phuong trinh %dx^2 + %dx + %d = 0\n", a, b, c);
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				printf("Phuong trinh co vo so nghiem !");
			} else {
				printf("Phuong trinh vo nghiem !");
			}
		} else {
			printf("Phuong trinh co 1 nghiem %.3f", (float)-c / b);
		}
	} else {
		int delta = b * b - 4 * a * c;
		if (delta < 0) {
			printf("Phuong trinh vo nghiem !");
		} else if (delta == 0) {
			printf("Phuong trinh co nghiem kep x1 = x2 = %.3f", (-b - sqrt(delta)) / (2 * a));
		} else {
			printf("Phuong trinh co nghiem\nx1 = %.3f\nx2 = %.3f\n", (-b - sqrt(delta)) / (2 * a), (-b + sqrt(delta)) / (2 * a) );
		}
	}
	return 0;
}
