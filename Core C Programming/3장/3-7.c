#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double num = 0;

	printf("�Ǽ�? ");
	scanf("%lf", &num);

	printf("����: %e\n", num * num);
	printf("������: %e", num * num * num);

	return 0;
}