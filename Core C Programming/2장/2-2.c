#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char name[20];
	double grade;

	printf("�̸�? ");
	scanf("%s", name);
	printf("����? ");
	scanf("%lf", &grade);

	printf("%s�� ������ %f�Դϴ�.", name, grade);

	return 0;
}