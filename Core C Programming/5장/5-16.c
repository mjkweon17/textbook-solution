#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num;
	int numOfNum;

	printf("���� ����? ");
	scanf("%d", &num);
	printf("����� ����? ");
	scanf("%d", &numOfNum);

	for (int i = 1; i <= numOfNum; i++) {
		printf("%2d ", num * i);
	}

	return 0;
}