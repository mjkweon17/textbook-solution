#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	const int limit = 100;
	int time;
	int distance;
	double speed;

	printf("구간 단속 소요 시간 (분)? ");
	scanf("%d", &time);
	printf("구간 단속 주행 거리 (km)? ");
	scanf("%d", &distance);

	speed = (double) 60 / time * distance;

	printf("평균 속력은 %.1f 입니다.", speed);
	if (speed >= limit)
		printf("구간 단속 과속입니다.");
	else
		printf("과속하지 않았습니다.");

	return 0;
}