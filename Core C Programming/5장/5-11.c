#include <stdio.h>

int main(void) {

	int num = 1;

	for (int i = 0; i < 32; i++) {
		printf("%2d�� ��Ʈ�� 1�� ��: %08x %-d\n", i, num, num);
		num <<= 1;
	}

	return 0;
}