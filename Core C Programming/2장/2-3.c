#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int year;
	int month;
	int day;

	printf("��? ");
	scanf("%d", &year);
	printf("��? ");
	scanf("%d", &month);
	printf("��? ");
	scanf("%d", &day);
	printf("�Է��� ��¥�� %d�� %d�� %d���Դϴ�.", year, month, day);

	return 0;
}