#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int width;
	int height;

	printf("������ ����? ");
	scanf("%d", &width);
	prtinf("������ ����? ");
	scanf("%d", &height);
	printf("���簢���� ����: %d\n", width * height);
	printf("���簢���� �ѷ�: %d", 2 * (width + height));

	return 0;
}