#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double mass;
	double volume;
	double density;

	printf("����(g)? ");
	scanf("%lf", &mass);
	printf("����(��������Ƽ����)? ");
	scanf("%lf", &volume);

	density = mass / volume;
	printf("�е�: %f", density);

	return 0;
}