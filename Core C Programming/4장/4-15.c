#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double tradingBaseRate; //�Ÿű�����
	double preferentialExchangeRate; //ȯ�������
	const double remittanceFeeRate = 1.75; //ȯ����������
	double exchangeRate; //ȯ��

	double dollarToPurchase; //������ �޷�
	double wonToPay; //������ ��

	printf("��/�޷� �Ÿű�����? ");
	scanf("%lf", &tradingBaseRate);
	printf("ȯ�������(0~100%)? ");
	scanf("%lf", &preferentialExchangeRate);

	exchangeRate = tradingBaseRate + 
		tradingBaseRate * (remittanceFeeRate * 0.01) * (1 - 0.01 * preferentialExchangeRate);

	printf("�޷� �� �� ȯ���� %f�Դϴ�.\n", exchangeRate);
	printf("������ �޷�(USD)? ");
	scanf(" %lf", &dollarToPurchase);
	
	wonToPay = dollarToPurchase * exchangeRate;

	printf("USD %.2f �� �� ==> KRW %.2f", dollarToPurchase, wonToPay);

	return 0;
}