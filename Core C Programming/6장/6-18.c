#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int divisors(int dividend, int divisor);

int main(void) {

	int num;
	int count = 0;
	
	srand((unsigned)time(NULL));

	for (int repeat = 0; repeat < 3; repeat++) {
		num = rand() % 1000;
		count = 0;
		printf("%dÀÇ ¾à¼ö: ", num);
		for (int i = 1; i <= num; i++) {
			if (divisors(num, i)) {
				count++;
				printf("%d ", i);
			}
		}
		printf("=> ÃÑ %d°³\n", count);
	}

	return 0;
}

int divisors(int dividend, int divisor) {
	if (dividend % divisor == 0)
		return 1;
	else
		return 0;
}