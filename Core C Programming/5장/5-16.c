#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num;
	int numOfNum;

	printf("양의 정수? ");
	scanf("%d", &num);
	printf("배수의 개수? ");
	scanf("%d", &numOfNum);

	for (int i = 1; i <= numOfNum; i++) {
		printf("%2d ", num * i);
	}

	return 0;
}