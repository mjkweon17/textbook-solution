#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double mass = 0;
	double height = 0;
	double energy = 0;

	printf("질량(kg)? ");
	scanf("%lf", &mass);
	printf("높이(m)? ");
	scanf("%lf", &height);

	energy = 9.8 * mass * height;
	printf("위치 에너지: %f", energy);

	return 0;
}