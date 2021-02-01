#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num;
	
	printf("16진수? ");
	scanf(" %x", &num);
	printf("16진수 %x는 10진수로 %d입니다.", num, num);

	return 0;
}