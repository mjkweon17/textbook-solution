#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double mass = 0;
	double velocity = 0;
	double energy = 0;

	printf("질량(kg)? ");
	scanf("%lf", &mass);
	printf("속력(m/s)? ");
	scanf("%lf", &velocity);

	energy = mass * velocity * velocity / 2;
	printf("운동에너지: %.2f J", energy);

	return 0;
}