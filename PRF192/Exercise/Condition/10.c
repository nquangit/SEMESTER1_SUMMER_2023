#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	// Banner
	int choice;
	printf("MOI BAN CHON HINH CAN TINH  DIEN TICH\n");
	printf("1. Hinh vuong.\n");
	printf("2. Hinh chu nhat.\n");
	printf("3. Hinh tron.\n");
	printf("4. Hinh tam giac.\n");
	printf("5. Hinh thang.\n");
	printf("Chon hinh: ");
	scanf("%d", &choice);
	// Handle
	if (choice == 1) {
		int a;
		printf("Nhap canh a: ");
		scanf("%d", &a);
		printf("Dien tinh hinh vuong la: %d", a * a);
	} else if (choice == 2) {
		int a, b;
		printf("Nhap chieu dai: ");
		scanf("%d", &a);
		printf("Nhap chieu rong: ");
		scanf("%d", &b);
		printf("Dien tinh hinh chu nhat la: %d", a * b);
	} else if (choice == 3) {
		float r;
		printf("Nhap ban kinh: ");
		scanf("%f", &r);
		printf("Dien tinh hinh tron ban kinh r = %.3f la: %.3f", r, M_PI * r * r);
	} else if (choice == 4) {
		int a, b, c;
		printf("Nhap 3 canh cua tam giac: ");
		scanf("%d %d %d", &a, &b, &c);
		// Tinh dien tich theo dinh li heron
		float p = (float)(a + b + c) / 2;
		printf("Dien tinh tam giac la: %.3f", sqrt(p * (p - a) * (p - b) * (p - c)));
	} else if (choice == 5) {
		int a, b, h;
		printf("Nhap day lon: ");
		scanf("%d", &a);
		printf("Nhap day be: ");
		scanf("%d", &b);
		printf("Nhap chieu cao: ");
		scanf("%d", &h);
		printf("Dien tich hinh thang la: %.3f", (float)(a + b) * h / 2);
	} else {
		printf("Chua ho tro");
	}
	return 0;
}
