#include <stdio.h>

int main(void) {

	int num = 1;

	num <<= 7;
	printf("7번 비트만 1인 값: %08x %d\n", num, num);
	num <<= 8;
	printf("15번 비트만 1인 값: %08x %d\n", num, num);
	num <<= 8;
	printf("23번 비트만 1인 값: %08x %d\n", num, num);
	num <<= 8;
	printf("31번 비트만 1인 값: %08x %d", num, num);

	return 0;
}