#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double flightHour;
	int day, hour, min;

	printf("비행 소요시간(시간)? ");
	scanf("%lf", &flightHour);

	day = flightHour / 24;
	hour = flightHour - 24 * day;
	min = (flightHour - (int)flightHour) * 60;

	printf("비행 소요시간은 %d일 %d시간 %d분입니다.", day, hour, min);

	return 0;
}