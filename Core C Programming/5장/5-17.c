#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int time;
	int totalPrice;
	 
	printf("주차 시간(분)? ");
	scanf("%d", &time);

	if (time <= 30) {
		totalPrice = 2000;
	}
	else {
		if (time % 10 == 0) {
			totalPrice = 2000 + (time - 30) / 10 * 1000;
		}
		else {
			totalPrice = 2000 + ((time - 30) / 10 + 1) * 1000;
		}
	}

	if (totalPrice > 25000)
		totalPrice = 25000;

	printf("주차 요금: %d", totalPrice);

	return 0;
}