#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int distance;
	int velocity;
	int time;

	printf("이동 거리? ");
	scanf("%d", &distance);
	printf("예상 속력? ");
	scanf("%d", &velocity);

	time = (double)distance / velocity * 60;

	printf("도착까지 예상 소요 시간은 %d분입니다.", time);

	return 0;
}