#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	
	const double pi = 3.141592;
	double radius;
	double volume;

	printf("�������� ����? ");
	scanf("%lf", &radius);

	volume = (double)4 / 3 * pi * pow(radius, 3);
	printf("���� ����: %f", volume);

	return 0;
}