#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int playTime;
	int hour, min, sec;

	printf("����ð�(��)? ");
	scanf("%d", &playTime);

	hour = playTime / 3600;
	min = (playTime - hour * 3600) / 60;
	sec = playTime % 60;

	printf("����ð��� %d�ð� %d�� %d���Դϴ�.", hour, min, sec);

	return 0;
}