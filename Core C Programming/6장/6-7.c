#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int num);

int main(void) {

	int num;
	int count = 0;

	printf("1~N ������ �Ҽ��� ���մϴ�. N��? ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (is_prime(i)) {
			printf("%d ", i);
			count++;
		}
	}

	printf("�Ҽ��� ��� %d���Դϴ�.", count);

	return 0;
}

int is_prime(int num) {

	if (num == 1)
		return 0;
	if (num == 2)
		return 1;

	for (int i = 2; i < num; i++) {
		if (num % i == 0)
			return 0;
	}

	return 1;
}