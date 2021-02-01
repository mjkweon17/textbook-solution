#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	
	const double pi = 3.141592;
	double radius;
	double volume;

	printf("반지름의 길이? ");
	scanf("%lf", &radius);

	volume = (double)4 / 3 * pi * pow(radius, 3);
	printf("구의 부피: %f", volume);

	return 0;
}