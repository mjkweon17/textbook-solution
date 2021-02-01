#include <stdio.h>
#include <math.h>

int round_pos(int num, int digit);

int main(void) {

	int num = 1357;
	int digit;

	for (int i = 1; i <= 3; i++) {
		digit = i;
		printf("%d번째 자리에서 반올림한 결과: %d\n", digit, round_pos(num, digit));
	}

	return 0;
}

int round_pos(int num, int digit) {
	int quotient = num / pow(10, digit);
	int remainder = num % (int)pow(10, digit);
	if (remainder / pow(10, digit - 1) >= 5)
		quotient++;
	return quotient * pow(10, digit);
}