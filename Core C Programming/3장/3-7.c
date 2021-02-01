#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double num = 0;

	printf("½Ç¼ö? ");
	scanf("%lf", &num);

	printf("Á¦°ö: %e\n", num * num);
	printf("¼¼Á¦°ö: %e", num * num * num);

	return 0;
}