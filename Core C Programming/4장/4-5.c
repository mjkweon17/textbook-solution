#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

int main(void) {

	double radius;
	double height;
	double volume;

	printf("�������� ����? ");
	scanf("%lf", &radius);
	printf("����? ");
	scanf("%lf", &height);

	volume = PI * radius * radius * height;
	printf("������� ����: %f", volume);

	return 0;
}