#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float const rate = (float)1/3;
	int luongDien, tienPhi;
	int oldPrice = 0, newPrice = 0;
	int VAT, result;
	printf("Nhap luong dien(kWh): ");
	scanf("%d", &luongDien);
	if (luongDien > 400) {
		// tienPhi = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (100 * 2834) + ((luongDien - 400) * 2927);
		oldPrice = (round(50 * rate) * 1678)
				 + (round(50 * rate) * 1734)
				 + (round(100 * rate) * 2014)
				 + (round(100 * rate) * 2536)
				 + (round(100 * rate) * 2834)
				 + (round((luongDien - 400) * rate) * 2927);
		newPrice = ((50 - round(50 * rate)) * 1728)
				+ ((50 - round(50 * rate)) * 1786)
				+ ((100 - round(100 * rate)) * 2074)
				+ ((100 - round(100 * rate)) * 2612)
				+ ((100 - round(100 * rate)) * 2919)
				+ (((luongDien - 400) - round((luongDien - 400) * rate)) * 3015);
		tienPhi = oldPrice + newPrice;
	} else if (luongDien > 300) {
		// tienPhi = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + ((luongDien - 300) * 2834);
		oldPrice = (round(50 * rate) * 1678)
				 + (round(50 * rate) * 1734)
				 + (round(100 * rate) * 2014)
				 + (round(100 * rate) * 2536)
				 + (round((luongDien - 300) * rate) * 2834);
		newPrice = ((50 - round(50 * rate)) * 1728)
				+ ((50 - round(50 * rate)) * 1786)
				+ ((100 - round(100 * rate)) * 2074)
				+ ((100 - round(100 * rate)) * 2612)
				+ ((100 - round((luongDien - 300) * rate)) * 2919);
		tienPhi = oldPrice + newPrice;
	} else if (luongDien > 200) {
		// tienPhi = (50 * 1678) + (50 * 1734) + (100 * 2014) + ((luongDien - 200) * 2536);
		oldPrice = (round(50 * rate) * 1678)
				 + (round(50 * rate) * 1734)
				 + (round(100 * rate) * 2014)
				 + (round((luongDien - 200) * rate) * 2536);
		newPrice = ((50 - round(50 * rate)) * 1728)
				+ ((50 - round(50 * rate)) * 1786)
				+ ((100 - round(100 * rate)) * 2074)
				+ ((100 - round((luongDien - 200) * rate)) * 2612);
		tienPhi = oldPrice + newPrice;
	} else if (luongDien > 100) {
		// tienPhi = (50 * 1678) + (50 * 1734) + ((luongDien - 100) * 2014);
		oldPrice = (round(50 * rate) * 1678)
				 + (round(50 * rate) * 1734)
				 + (round((luongDien - 100) * rate) * 2014);
		newPrice = ((50 - round(50 * rate)) * 1728)
				+ ((50 - round(50 * rate)) * 1786)
				+ ((100 - round((luongDien - 100) * rate)) * 2074);
		tienPhi = oldPrice + newPrice;
	} else if (luongDien > 50) {
		// tienPhi = (50 * 1678) + ((luongDien - 50) * 1734);
		oldPrice = (round(50 * rate) * 1678)
				 + (round((luongDien - 50) * rate) * 1734);
		newPrice = ((50 - round(50 * rate)) * 1728)
				+ ((50 - round((luongDien - 50) * rate)) * 1786);
		tienPhi = oldPrice + newPrice;
	} else if (luongDien >=0) {
		// tienPhi = luongDien * 1678;
		oldPrice = (round(luongDien * rate) * 1678);
		newPrice = ((50 - round(luongDien * rate)) * 1728);
		tienPhi = oldPrice + newPrice;
	}
	VAT = tienPhi * 10 / 100;
	result = tienPhi + VAT;
	printf("Tong tien dien chua thue: %d\n", tienPhi);
	printf("Thue GTGT (VAT): %d\n", VAT);
	printf("Tong tien thanh toan: %d", result);
	return 0;
}
