#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double force; //��ü�� �ۿ��� ���� ũ��
	double displacement; //��ü�� ���� �������� �̵��� �Ÿ�
	double work; //���� ��

	printf("��(N)? ");
	scanf("%lf", &force);
	printf("�̵��Ÿ�(m)? ");
	scanf("%lf", &displacement);

	work = force * displacement;
	printf("���� ��: %f", work);

	return 0;
}
