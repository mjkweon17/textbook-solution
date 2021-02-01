#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double lb = 0;
	double kg = 0;

	printf("¹«°Ô(lb)? ");
	scanf("%lf", &lb);

	kg = 0.45359237 * lb;
	printf("%.2f lb = %f kg", lb, kg);

	return 0;
}
