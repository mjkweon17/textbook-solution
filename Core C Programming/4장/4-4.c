#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double massSoultion; //����� ����
	double massSalute; //������ ����
	double concentration; //��

	printf("���(g)? ");
	scanf("%lf", &massSoultion);
	printf("����(g)? ");
	scanf("%lf", &massSalute);

	concentration = massSalute / (massSoultion + massSalute) * 100;
	printf("��: %.2f %%", concentration);

	return 0;
}