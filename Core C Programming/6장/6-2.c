#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_area_of_square(double side);

int main(void) {

	double side;

	printf("�� ���� ����? ");
	scanf("%lf", &side);
	printf("���簢���� �ѷ�: %f", get_area_of_square(side));

	return 0;
}

double get_area_of_square(double side) {
	return side * side;
}