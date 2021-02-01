#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int discount_price(int, int);

int main(void) {

	int discount_rate;
	int price;

	printf("할인율(%%)? ");
	scanf("%d", &discount_rate);

	while (1) {
		printf("제품의 가격? ");
		scanf("%d", &price);
		if (price == 0)
			return 0;
		printf("할인가: %d\n", discount_price(price, discount_rate));
	}

	return 0;
}

int discount_price(int price, int discount_rate) {
	return price - (price * discount_rate / 100);
}