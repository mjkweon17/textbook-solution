#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main(void) {

	int basicPay; //�⺻ �⿬��
	int audience; //���� ��
	int breakEvenAudience; //���� �б��� ���� ��
	int guarantee; //���� ����Ƽ
	int totalPay; //�⿬��

	printf("�⺻ �⿬��? ");
	scanf("%d", &basicPay);
	printf("���� �б��� ���� ��? ");
	scanf("%d", &breakEvenAudience);
	printf("���� 1�δ� ���� ����Ƽ? ");
	scanf("%d", &guarantee);

	for (int i = 1; i <= 15; i++) {
		audience = 1'000'000 * i;
		if (audience <= breakEvenAudience)
			totalPay = basicPay;
		else {
			totalPay = basicPay + (audience - breakEvenAudience) * guarantee;
		}

		printf("���� %8d�� �� �� ���� �⿬��: %9d\n", audience, totalPay);
	}

	return 0;
}