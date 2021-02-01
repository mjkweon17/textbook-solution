#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int electric_charge(int amount);

int main(void) {

	int amount;

	while (1) {
		printf("월 사용량 (kWh)? ");
		scanf("%d", &amount);
		if (amount == -1)
			break;
		printf("전기 요금: %d원\n", electric_charge(amount));
	}

	return 0;
}

int electric_charge(int amount) {
	int fee = 0;
	if (amount <= 200) {
		fee += 910;
		fee += amount * 93.3;
	}
	else if (amount <= 400) {
		fee += 1600;
		fee += 200 * 93.3 + (amount - 200) * 187.9;
	}
	else {
		fee += 7300;
		fee += 200 * 93.3 + 200 * 187.9 + (amount - 400) * 280.6;
	}
	return fee;
}