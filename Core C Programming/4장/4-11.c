#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int price;
	int discountRate; //할인률
	int reducedPrice; //할인가
	int discountedMoney; //에누리 금액

	printf("제품의 가격? ");
	scanf("%d", &price);
	printf("할인율(%%)? ");
	scanf("%d", &discountRate);

	discountedMoney = price / 100 * discountRate;
	reducedPrice = price - discountedMoney;

	printf("할인가: %d원 (%d원 할인)", reducedPrice, discountedMoney);

	return 0;
}