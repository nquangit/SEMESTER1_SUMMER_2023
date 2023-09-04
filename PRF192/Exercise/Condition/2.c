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
  	scanf("%d", &c);
  	printf("Nhap d: ");
  	scanf("%d", &d);
  	
  	// Xu ly
  	if (a > b && a > c && a > d) {
  		printf("Max = %d", a)	;
	}
	if (b > a && b > c && b > d) {
  		printf("Max = %d", b)	;
	}
	if (c > b && c > a && c > d) {
  		printf("Max = %d", c)	;
	}
	if (d > b && d > c && d > a) {
  		printf("Max = %d", d)	;
	}
    return 0;
}

