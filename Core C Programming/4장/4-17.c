#include <stdio.h>

int main(void) {

	int num = 1;

	num <<= 7;
	printf("7�� ��Ʈ�� 1�� ��: %08x %d\n", num, num);
	num <<= 8;
	printf("15�� ��Ʈ�� 1�� ��: %08x %d\n", num, num);
	num <<= 8;
	printf("23�� ��Ʈ�� 1�� ��: %08x %d\n", num, num);
	num <<= 8;
	printf("31�� ��Ʈ�� 1�� ��: %08x %d", num, num);

	return 0;
}