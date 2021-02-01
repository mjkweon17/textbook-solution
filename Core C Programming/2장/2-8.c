#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double num1;
	double num2;

	printf("½Ç¼ö 2°³? ");
	scanf(" %lf %lf", &num1, &num2);
	printf("%f + %f = %f\n", num1, num2, num1 + num2);
	printf("%f - %f = %f", num1, num2, num1 - num2);

	return 0;
}