#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void) {

	int seat[SIZE] = { 0 };
	int book;			//������ �¼���
	int remain = SIZE;	//���� �¼���
	int booked = 0;			//���� ���ŵ� �¼� ��

	while (1) {
		printf("���� �¼�: [ ");
		for (int i = 0; i < SIZE; i++) {
			if (seat[i] == 0)
				printf("0 ");
			else
				printf("X ");
		}
		printf("]\n");

		book = 0;
		printf("������ �¼���? ");
		scanf("%d", &book);
		if (remain < book) {
			printf("���� ���� �¼����� %d�̹Ƿ�, %d �¼��� ������ �� �����ϴ�.\n", remain, book);
			continue;
		}

		remain -= book;
		for (int i = 0; i < book; i++) {
			seat[booked] = 1;
			booked++;
			printf("%d ", booked);
		}
		printf("�� �¼��� �����߽��ϴ�.\n");

		if(remain == 0)
			break;
	}

	return 0;
}