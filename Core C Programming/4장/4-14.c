#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int basePrice; //�⺻ ���
	int amount; //�� ���� ��뷮
	int price; //���� ���

	printf("�⺻ ���? ");
	scanf("%d", &basePrice);
	printf("�� ��뷮(kWh)? ");
	scanf("%d", &amount);

	price = basePrice + amount * 190;

	printf("���� ���: %d��", price);

	return 0;
}