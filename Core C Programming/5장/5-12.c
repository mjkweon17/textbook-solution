#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int principal; //����
	double annualInterest; //������
	double interest; //����
	double finalValue; //�����հ�

	printf("����? ");
	scanf("%d", &principal);
	printf("������(%%)? ");
	scanf("%lf", &annualInterest);
	
	finalValue = principal;

	for (int i = 1; i <= 10; i++) {
		interest = finalValue / 100 * annualInterest;
		finalValue += interest;
		printf("%2d��° ����: %.2f, �����հ�: %.2f\n", i, interest, finalValue);
	}

	return 0;
}