#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int hamburger, fries, cola;
	int set;

	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��\n");
	printf("�ܹ��� ����? ");
	scanf("%d", &hamburger);
	printf("����Ƣ�� ����? ");
	scanf("%d", &fries);
	printf("�ݶ� ����? ");
	scanf("%d", &cola);

	if (hamburger > 0 && fries > 0 && cola > 0) {
		if (hamburger <= fries && hamburger <= cola) {
			set = hamburger;
			hamburger -= set;
			fries -= set;
			cola -= set;
		}
		else if (fries <= hamburger && fries <= cola) {
			set = fries;
			hamburger -= set;
			fries -= set;
			cola -= set;
		}
		else {
			set = cola;
			hamburger -= set;
			fries -= set;
			cola -= set;
		}
	}

	printf("��ǰ��   �ܰ�  ����  �ݾ�\n");
	printf("��Ʈ     6500   %2d   %5d\n", set, set * 6500);
	printf("�ܹ���   4000   %2d   %5d\n", hamburger, hamburger * 4000);
	printf("����Ƣ�� 2000   %2d   %5d\n", fries, fries * 2000);
	printf("�ݶ�     1500   %2d   %5d\n", cola, cola * 1500);
	printf("---------------------------\n");
	printf("�հ�                  %5d", set * 6500 + hamburger * 4000 + fries * 2000 + cola * 1500);

	return 0;
}