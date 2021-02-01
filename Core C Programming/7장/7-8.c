#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void) {

	int price[SIZE];
	int discounted_price[SIZE];
	int discount_rate;

	printf("상품가 %d개를 입력하세요:\n", SIZE);
	for (int i = 0; i < SIZE; i++) {
		scanf("%d", &price[i]);
	}
	printf("할인율(%%)? ");
	scanf("%d", &discount_rate);

	for (int i = 0; i < SIZE; i++) {
		discounted_price[i] = price[i] - price[i] / (double)100 * discount_rate;
	}

	for (int i = 0; i < SIZE; i++) {
		printf("가격: %5d --> 할일가: %5d\n", price[i], discounted_price[i]);
	}

	return 0;
}