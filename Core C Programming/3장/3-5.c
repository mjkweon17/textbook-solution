#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double inch;
	double cm;

	printf("±Ê¿Ã(inch)? ");
	scanf("%lf", &inch);

	cm = inch * 2.54;
	printf("%f inch = %f cm", inch, cm);

	return 0;
}