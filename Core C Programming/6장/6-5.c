#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int num);
int is_odd(int num);

int main(void) {

	int num;
	int odd = 0;
	int even = 0;

	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���. (�������� 0 �Է�\n");
	while (1) {
		scanf("%d", &num);
		if (num == 0)
			break;
		if (is_even(num))
			even++;
		if (is_odd(num))
			odd++;
	}

	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.", even, odd);

	return 0;
}

int is_even(int num) {
	if (num % 2 == 0)
		return 1;
	else
		return 0;
}

int is_odd(int num) {
	if (num % 2)
		return 1;
	else
		return 0;
}