#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int distance;
	int velocity;
	int time;

	printf("�̵� �Ÿ�? ");
	scanf("%d", &distance);
	printf("���� �ӷ�? ");
	scanf("%d", &velocity);

	time = (double)distance / velocity * 60;

	printf("�������� ���� �ҿ� �ð��� %d���Դϴ�.", time);

	return 0;
}