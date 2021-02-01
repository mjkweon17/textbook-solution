#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double tradingBaseRate; //매매기준율
	double preferentialExchangeRate; //환율우대율
	const double remittanceFeeRate = 1.75; //환전수수료율
	double exchangeRate; //환율

	double dollarToPurchase; //구입할 달러
	double wonToPay; //내야할 원

	printf("원/달러 매매기준율? ");
	scanf("%lf", &tradingBaseRate);
	printf("환율우대율(0~100%)? ");
	scanf("%lf", &preferentialExchangeRate);

	exchangeRate = tradingBaseRate + 
		tradingBaseRate * (remittanceFeeRate * 0.01) * (1 - 0.01 * preferentialExchangeRate);

	printf("달러 살 때 환율은 %f입니다.\n", exchangeRate);
	printf("구입할 달러(USD)? ");
	scanf(" %lf", &dollarToPurchase);
	
	wonToPay = dollarToPurchase * exchangeRate;

	printf("USD %.2f 살 때 ==> KRW %.2f", dollarToPurchase, wonToPay);

	return 0;
}