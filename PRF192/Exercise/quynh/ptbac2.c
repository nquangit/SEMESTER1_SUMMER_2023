#include <stdio.h>
#include <math.h>

int main() {
    int a; 
				int b;
				int c;
				double x1, x2;
				double denta;
				printf("Enter your a: ");
				scanf("%d", &a);
				printf("Enter your b: ");
				scanf("%d", &b);
				printf("Enter your c: ");
				scanf("%d", &c);
				if(a == 0) {
					if(b == 0 && c == 0) {
						printf("Phuong trinh vo so nghiem!");
					} else {
						x1 = -(double)c / (double)b;
						printf("Phuong trinh co nghiem kep x1 = x2 = %.2lf", x1);	
					}
				} else {
					if(b !=0 && c !=0) {
						denta = b * b - 4 * a * c;
						if(denta > 0) {
						x1 = (-(double)b + sqrt(denta)) / 2 * (double)a;
						x2 = (-(double)b - sqrt(denta)) / 2 * (double)a;
						printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2lf va x2 = %.2lf", x1, x2);
						}
						if(denta == 0) {
							x1 = x2 = -(double)b / (double)a;
							printf("Phuong trinh co nghiem kep x1 = %.2lf, x2 = %.2lf", x1, x2);	
						}
						if(denta < 0) {
							printf("Phuong trinh vo nghiem!");
						}
					}
				}
    return 0;
}

