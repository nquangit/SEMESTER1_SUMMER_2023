#include <stdio.h>
#include <stdlib.h>

// Chuong trinh in ra so lon hon trong 4 so
int main() {
  	int a, b, c, d;
  	printf("Nhap a: ");
  	scanf("%d", &a);
  	printf("Nhap b: ");
  	scanf("%d", &b);
  	printf("Nhap c: ");
  	scanf("%d", &d);
  	printf("Nhap d: ");
  	scanf("%d", &d);
  	
  	// Method 1
  	int maxValue = a;
  	if (maxValue < b) {
  		maxValue = b;
	}
	if (maxValue < c) {
		maxValue = c;
	}
	if (maxValue < d) {
		maxValue = d;
	}

	// Shoter
	//	int maxValue = a;
	//	maxValue = (b > maxValue) ? b : maxValue;
	//	maxValue = (c > maxValue) ? c : maxValue;
	//	maxValue = (d > maxValue) ? d : maxValue;
	printf("Max = %d\n", maxValue);
    return 0;
}

