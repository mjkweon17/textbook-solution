#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {

	int width;
	int height;
	double hypotenuse;

	printf("�غ�? ");
	scanf("%d", &width);
	printf("����? ");
	scanf("%d", &height);

	hypotenuse = sqrt(width * width + height * height);
	printf("������ ����: %f", hypotenuse);

	return 0;
}