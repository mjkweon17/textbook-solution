#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void) {

	int price[SIZE];
	int discounted_price[SIZE];
	int discount_rate;

	printf("��ǰ�� %d���� �Է��ϼ���:\n", SIZE);
	for (int i = 0; i < SIZE; i++) {
		scanf("%d", &price[i]);
	}
	printf("������(%%)? ");
	scanf("%d", &discount_rate);

	for (int i = 0; i < SIZE; i++) {
		discounted_price[i] = price[i] - price[i] / (double)100 * discount_rate;
	}

	for (int i = 0; i < SIZE; i++) {
		printf("����: %5d --> ���ϰ�: %5d\n", price[i], discounted_price[i]);
	}

	return 0;
}