#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int amount; //월 사용량
	int basicCharge; //기본 요금
	int elecCharge; //전력량 요금
	int totalCharge;

	printf("월 사용량 (kWh)? ");
	scanf("%d", &amount);

	if (amount <= 200) {
		basicCharge = 910;
		elecCharge = 93.3 * amount;
	}
	else if (amount <= 400) {
		basicCharge = 1600;
		elecCharge = 93.3 * 200 + 187.9 * (amount - 200);
	}
	else {
		basicCharge = 7300;
		elecCharge = 93.3 * 200 + 187.9 * 200 + 280.6 * (amount - 200);
	}

	totalCharge = basicCharge + elecCharge;

	printf("전기 요금 합계: %5d\n", totalCharge);
	printf("  -기본 요금:   %5d\n", basicCharge);
	printf("  -전력양 요금: %5d\n", elecCharge);

	return 0;
}