#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {

	int price;
	int unit; //절사 단위
	int cutOffPrice; //절사 후 금액

	printf("금액? ");
	scanf("%d", &price);
	printf("절사단위 (10의 지수승)? ");
	scanf("%d", &unit);
	
	cutOffPrice = price - price % (int)pow(10, unit);

	printf("금액(%d 미만 절사): %d", (int)pow(10, unit), cutOffPrice);

	return 0;
}