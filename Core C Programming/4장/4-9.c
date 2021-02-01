#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int playTime;
	int hour, min, sec;

	printf("재생시간(초)? ");
	scanf("%d", &playTime);

	hour = playTime / 3600;
	min = (playTime - hour * 3600) / 60;
	sec = playTime % 60;

	printf("재생시간은 %d시간 %d분 %d초입니다.", hour, min, sec);

	return 0;
}