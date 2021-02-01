#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main(void) {

	int basicPay; //기본 출연료
	int audience; //관객 수
	int breakEvenAudience; //손익 분기점 관객 수
	int guarantee; //러닝 개런티
	int totalPay; //출연료

	printf("기본 출연료? ");
	scanf("%d", &basicPay);
	printf("손익 분기점 관객 수? ");
	scanf("%d", &breakEvenAudience);
	printf("관객 1인당 러닝 개런티? ");
	scanf("%d", &guarantee);

	for (int i = 1; i <= 15; i++) {
		audience = 1'000'000 * i;
		if (audience <= breakEvenAudience)
			totalPay = basicPay;
		else {
			totalPay = basicPay + (audience - breakEvenAudience) * guarantee;
		}

		printf("관객 %8d명 일 때 예상 출연료: %9d\n", audience, totalPay);
	}

	return 0;
}