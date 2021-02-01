#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calculator(double num1, char oper, double num2);

int main(void) {

	double num1, num2;
	char oper;

	while (1) {
		printf("수식 (0 0 0 입력 시 종료)? ");
		scanf("%lf %c %lf", &num1, &oper, &num2);
		if (num1 == 0 && oper == '0' && num2 == 0)
			break;
		printf("%f\n", calculator(num1, oper, num2));
	}

	return 0;
}

double calculator(double num1, char oper, double num2) {
	switch (oper) {
	case '+':
		return num1 + num2;
		break;
	case '-':
		return num1 - num2;
		break;
	case '*':
		return num1 * num2;
		break;
	case '/':
		return num1 / num2;
		break;
	}
}