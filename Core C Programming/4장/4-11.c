#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int price;
	int discountRate; //���η�
	int reducedPrice; //���ΰ�
	int discountedMoney; //������ �ݾ�

	printf("��ǰ�� ����? ");
	scanf("%d", &price);
	printf("������(%%)? ");
	scanf("%d", &discountRate);

	discountedMoney = price / 100 * discountRate;
	reducedPrice = price - discountedMoney;

	printf("���ΰ�: %d�� (%d�� ����)", reducedPrice, discountedMoney);

	return 0;
}