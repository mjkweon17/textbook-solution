#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double USD = 0;
	double KRW = 0;
	double rate = 0;

	printf("USD? ");
	scanf("%lf", &USD);
	printf("��/�޷� ȯ��? ");
	scanf("%lf", &rate);

	KRW = USD * rate;
	printf("USD %.2f = KRW %.2f", USD, KRW);

	return 0;
}