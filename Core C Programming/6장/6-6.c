#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu(void);

int main(void) {

	while (1) {
		printf("[1. ���� ����  2. ���� ����  3. �μ�  0. ����] ����? ");
		switch (choose_menu()) {
		case 0: return 0;
			break;
		case 1:
			printf("���� ���⸦ �����մϴ�.\n");
			break;
		case 2:
			printf("���� ������ �����մϴ�.\n");
			break;
		case 3:
			printf("�μ⸦ �����մϴ�.\n");
			break;
		default:
			break;
		}
	}
	return 0;
}

int choose_menu(void) {
	int choice;
	scanf("%d", &choice);
	return choice;
}