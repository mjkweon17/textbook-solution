#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double yard = 0;
	double m = 0;

	printf("±Ê¿Ã(yd)? ");
	scanf("%lf", &yard);

	m = yard * 0.9144;
	printf("%.0f yd = %f m", yard, m);

	return 0;
}