#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int price;

	printf("�Ž�����? ");
	scanf("%d", &price);

	int num50000 = price / 50000;
	int num10000 = (price - 50000 * num50000) / 10000;
	int num5000 = (price - 50000 * num50000 - 10000 * num10000) / 5000;
	int num1000 = (price - 50000 * num50000 - 10000 * num10000 - 
		num5000 * 5000) / 1000;
	int num100 = (price - 50000 * num50000 - 10000 * num10000 - 
		num5000 * 5000 - num1000 * 1000) / 100;
	int num10 = (price - 50000 * num50000 - 10000 * num10000 - 
		num5000 * 5000 - num1000 * 1000 - num100 * 100) / 10;

	printf("�Ž����� (10�� �̸� ����): %d\n", price);
	printf("%5d�� %2d��\n", 50000, num50000);
	printf("%5d�� %2d��\n", 10000, num10000);
	printf("%5d�� %2d��\n", 5000, num5000);
	printf("%5d�� %2d��\n", 1000, num1000);
	printf("%5d�� %2d��\n", 100, num100);
	printf("%5d�� %2d��", 10, num10);

	return 0;
}