#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {

	int price;
	int unit; //���� ����
	int cutOffPrice; //���� �� �ݾ�

	printf("�ݾ�? ");
	scanf("%d", &price);
	printf("������� (10�� ������)? ");
	scanf("%d", &unit);
	
	cutOffPrice = price - price % (int)pow(10, unit);

	printf("�ݾ�(%d �̸� ����): %d", (int)pow(10, unit), cutOffPrice);

	return 0;
}