#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int left, top;
	int right, bottom;
	int x, y;

	printf("���� ������ �»���� (left, top)? ");
	scanf("%d %d", &left, &top);
	printf("���� ������ ���ϴ��� (right, bottom)? ");
	scanf("%d %d", &right, &bottom);
	printf("���� ��ǥ (x,y)? ");
	scanf("%d %d", &x, &y);

	if ((x > left) && (x < right) && (y < top) && (y > bottom)) {
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}
	else {
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}

	return 0;
}