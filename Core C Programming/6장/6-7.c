#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int num);

int main(void) {

	int num;
	int count = 0;

	printf("1~N 사이의 소수를 구합니다. N은? ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (is_prime(i)) {
			printf("%d ", i);
			count++;
		}
	}

	printf("소수는 모두 %d개입니다.", count);

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