#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int basePrice; //기본 요금
	int amount; //월 전기 사용량
	int price; //전기 요금

	printf("기본 요금? ");
	scanf("%d", &basePrice);
	printf("월 사용량(kWh)? ");
	scanf("%d", &amount);

	price = basePrice + amount * 190;

	printf("전기 요금: %d원", price);

	return 0;
}