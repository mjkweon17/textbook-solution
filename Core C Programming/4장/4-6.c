#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int x1, y1;
	int x2, y2;
	double slope;

	printf("�� ���� ��ǥ (x1, y1)? ");
	scanf("%d %d", &x1, &y1);
	printf("�� ���� ��ǥ (x2, y2)? ");
	scanf("%d %d", &x2, &y2);

	slope = (double)(y2 - y1) / (x2 - x1);
	printf("������ ����: %f", slope);

	return 0;
}