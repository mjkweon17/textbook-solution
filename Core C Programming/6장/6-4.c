#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int discount_price(int, int);

int main(void) {

	int discount_rate;
	int price;

	printf("������(%%)? ");
	scanf("%d", &discount_rate);

	while (1) {
		printf("��ǰ�� ����? ");
		scanf("%d", &price);
		if (price == 0)
			return 0;
		printf("���ΰ�: %d\n", discount_price(price, discount_rate));
	}

	return 0;
}

int discount_price(int price, int discount_rate) {
	return price - (price * discount_rate / 100);
}