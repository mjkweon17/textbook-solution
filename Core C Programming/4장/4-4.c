#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double massSoultion; //용매의 질량
	double massSalute; //용질의 질량
	double concentration; //농도

	printf("용매(g)? ");
	scanf("%lf", &massSoultion);
	printf("용질(g)? ");
	scanf("%lf", &massSalute);

	concentration = massSalute / (massSoultion + massSalute) * 100;
	printf("농도: %.2f %%", concentration);

	return 0;
}