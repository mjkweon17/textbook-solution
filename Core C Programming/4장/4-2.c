#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double degreeF;
	double degreeC;

	printf("È­¾¾¿Âµµ? ");
	scanf("%lf", &degreeF);

	degreeC = (degreeF - 32) * 5 / 9.0;
	printf("%.2f F = %.2f C", degreeF, degreeC);

	return 0;
}