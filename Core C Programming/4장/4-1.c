#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double mass = 0;
	double velocity = 0;
	double energy = 0;

	printf("����(kg)? ");
	scanf("%lf", &mass);
	printf("�ӷ�(m/s)? ");
	scanf("%lf", &velocity);

	energy = mass * velocity * velocity / 2;
	printf("�������: %.2f J", energy);

	return 0;
}