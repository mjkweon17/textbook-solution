#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int x, y;

	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x == 0 || y == 0)
		printf("������ �ֽ��ϴ�.");
	else if (x == 0)
		printf("y�࿡ �ֽ��ϴ�.");
	else if (y == 0)
		printf("x�࿡ �ֽ��ϴ�.");
	else if (x > 0 && y > 0)
		printf("1��и鿡 �ֽ��ϴ�.");
	else if (x < 0 && y > 0)
		printf("2��и鿡 �ֽ��ϴ�.");
	else if (x < 0 && y < 0)
		printf("3��и鿡 �ֽ��ϴ�.");
	else if (x > 0 && y < 0)
		printf("4��и鿡 �ֽ��ϴ�.");

	return 0;
}