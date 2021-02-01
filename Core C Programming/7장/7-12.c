#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void) {

	int seat[SIZE] = { 0 };
	int book;			//예매할 좌석수
	int remain = SIZE;	//남은 좌석수
	int booked = 0;			//현재 예매된 좌석 수

	while (1) {
		printf("현재 좌석: [ ");
		for (int i = 0; i < SIZE; i++) {
			if (seat[i] == 0)
				printf("0 ");
			else
				printf("X ");
		}
		printf("]\n");

		book = 0;
		printf("예매할 좌석수? ");
		scanf("%d", &book);
		if (remain < book) {
			printf("현재 남은 좌석수는 %d이므로, %d 좌석을 예매할 수 없습니다.\n", remain, book);
			continue;
		}

		remain -= book;
		for (int i = 0; i < book; i++) {
			seat[booked] = 1;
			booked++;
			printf("%d ", booked);
		}
		printf("번 좌석을 예매했습니다.\n");

		if(remain == 0)
			break;
	}

	return 0;
}