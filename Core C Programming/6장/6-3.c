#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2);

int main(void) {

	int x1, y1;
	int x2, y2;

	printf("������ ������ ��ǥ? ");
	scanf("%d %d", &x1, &y1);
	printf("������ �� ��ǥ? ");
	scanf("%d %d", &x2, &y2);

	printf("(%d, %d)~(%d, %d) ������ ����: %f", x1, y1, x2, y2, distance(x1, y1, x2, y2));

	return 0;
}

double distance(int x1, int y1, int x2, int y2) {
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}