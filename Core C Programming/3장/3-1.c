#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int side;

	printf("�� ���� ����? ");
	scanf("%d", &side);
	printf("���簢���� ����: %d\n", side * side);
	printf("���簢���� �ѷ�: %d", side * 4);

	return 0;
}