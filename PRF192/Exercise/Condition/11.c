#include <stdio.h>
#include <stdlib.h>

int main() {
	int luongDien;
	int tienPhi = 0;
	printf("Nhap luong dien(kWh): ");
	scanf("%d", &luongDien);
	if (luongDien > 400) {
		tienPhi = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (100 * 2834) + ((luongDien - 400) * 2927);
	} else if (luongDien > 300) {
		tienPhi = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + ((luongDien - 300) * 2834);
	} else if (luongDien > 200) {
		tienPhi = (50 * 1678) + (50 * 1734) + (100 * 2014) + ((luongDien - 200) * 2536);
	} else if (luongDien > 100) {
		tienPhi = (50 * 1678) + (50 * 1734) + ((luongDien - 100) * 2014);
	} else if (luongDien > 50) {
		tienPhi = (50 * 1678) + ((luongDien - 50) * 1734);
	} else if (luongDien >=0) {
		tienPhi = luongDien * 1678;
	}
	printf("Tong tien phi: %d", tienPhi);
	return 0;
}
