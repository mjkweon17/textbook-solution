#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double mass;
	double volume;
	double density;

	printf("질량(g)? ");
	scanf("%lf", &mass);
	printf("부피(세제곱센티미터)? ");
	scanf("%lf", &volume);

	density = mass / volume;
	printf("밀도: %f", density);

	return 0;
}