#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double USD = 0;
	double KRW = 0;
	double rate = 0;

	printf("KRW? ");
	scanf("%lf", &KRW);
	printf("원/달러 환율? ");
	scanf("%lf", &rate);

	USD = KRW / rate;
	printf("KRW %.2f = USD %.2f", KRW, USD);

	return 0;
}