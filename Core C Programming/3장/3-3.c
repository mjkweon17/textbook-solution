#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double mass = 0;
	double height = 0;
	double energy = 0;

	printf("����(kg)? ");
	scanf("%lf", &mass);
	printf("����(m)? ");
	scanf("%lf", &height);

	energy = 9.8 * mass * height;
	printf("��ġ ������: %f", energy);

	return 0;
}