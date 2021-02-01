#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int amount; //�� ��뷮
	int basicCharge; //�⺻ ���
	int elecCharge; //���·� ���
	int totalCharge;

	printf("�� ��뷮 (kWh)? ");
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

	printf("���� ��� �հ�: %5d\n", totalCharge);
	printf("  -�⺻ ���:   %5d\n", basicCharge);
	printf("  -���¾� ���: %5d\n", elecCharge);

	return 0;
}