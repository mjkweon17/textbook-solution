#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int random(int start, int end);

int main(void) {

	int sum = 0;
	int start = 0;
	int end = 99;
	int num = 10; //����
	int temp; //�������� ������ �� ����

	srand((unsigned int)time(NULL));

	printf("%d~%d ������ ������ ������ %d�� �����ؼ� �հ踦 ���մϴ�.", start, end, num);
	for (int i = 0; i < num; i++) {
		temp = random(start, end);
		printf("%d  ", temp);
		sum += temp;
	}
	printf("\n�հ�: %d", sum);

	return 0;
}

int random(int start, int end) {
	return rand() % 100;
}