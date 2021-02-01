#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {

	int width;
	int height;
	double hypotenuse;

	printf("πÿ∫Ø? ");
	scanf("%d", &width);
	printf("≥Ù¿Ã? ");
	scanf("%d", &height);

	hypotenuse = sqrt(width * width + height * height);
	printf("∫¯∫Ø¿« ±Ê¿Ã: %f", hypotenuse);

	return 0;
}