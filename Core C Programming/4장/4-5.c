#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

int main(void) {

	double radius;
	double height;
	double volume;

	printf("반지름의 길이? ");
	scanf("%lf", &radius);
	printf("높이? ");
	scanf("%lf", &height);

	volume = PI * radius * radius * height;
	printf("원기둥의 부피: %f", volume);

	return 0;
}