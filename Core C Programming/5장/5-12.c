#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int principal; //원금
	double annualInterest; //연이율
	double interest; //이자
	double finalValue; //원리합계

	printf("원금? ");
	scanf("%d", &principal);
	printf("연이율(%%)? ");
	scanf("%lf", &annualInterest);
	
	finalValue = principal;

	for (int i = 1; i <= 10; i++) {
		interest = finalValue / 100 * annualInterest;
		finalValue += interest;
		printf("%2d년째 이자: %.2f, 원리합계: %.2f\n", i, interest, finalValue);
	}

	return 0;
}