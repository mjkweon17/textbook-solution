#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2;
	char oper;
	int result;

	printf("비트 연신식? ");
	scanf("%i %c %i", &num1, &oper, &num2);

	switch (oper) {
	case '&':
		result = num1 & num2;
		break;
	case '|':
		result = num1 | num2;
		break;
	case '^':
		result = num1 ^ num2;
		break;
	}

	printf("%X %c %X = %X", num1, oper, num2, result);

	return 0;
}