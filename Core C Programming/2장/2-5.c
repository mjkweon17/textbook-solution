#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double weight;

	printf("몸무게? ");
	scanf("%lf", &weight);
	printf("입력한 몸무게는 %.2f입니다.", weight);

	return 0;
}