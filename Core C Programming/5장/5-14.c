#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	const int limit = 100;
	int time;
	int distance;
	double speed;

	printf("���� �ܼ� �ҿ� �ð� (��)? ");
	scanf("%d", &time);
	printf("���� �ܼ� ���� �Ÿ� (km)? ");
	scanf("%d", &distance);

	speed = (double) 60 / time * distance;

	printf("��� �ӷ��� %.1f �Դϴ�.", speed);
	if (speed >= limit)
		printf("���� �ܼ� �����Դϴ�.");
	else
		printf("�������� �ʾҽ��ϴ�.");

	return 0;
}