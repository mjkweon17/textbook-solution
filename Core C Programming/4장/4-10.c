#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double flightHour;
	int day, hour, min;

	printf("���� �ҿ�ð�(�ð�)? ");
	scanf("%lf", &flightHour);

	day = flightHour / 24;
	hour = flightHour - 24 * day;
	min = (flightHour - (int)flightHour) * 60;

	printf("���� �ҿ�ð��� %d�� %d�ð� %d���Դϴ�.", day, hour, min);

	return 0;
}