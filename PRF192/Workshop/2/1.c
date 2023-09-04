#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double num1, num2;
	double result;
	char op;
	printf("Enter the expression: ");
	scanf("%lf%c%lf", &num1, &op, &num2);
	switch (op) {
		case '+':
			result = num1 + num2;
			printf("%f", result);
			break;
		case '-':
			result = num1 - num2;
			printf("%f", result);
			break;
		case '*':
			result = num1 * num2;
			printf("%f", result);
			break;
		case '/':
			if (num2 == 0) {
				printf("Divided by zero!!!");
			} else {
				result = num1 / num2;
				printf("%f", result);
			}
			break;
		default:
			printf("Operator is not supported");
			break;
	}
	return 0;
}
