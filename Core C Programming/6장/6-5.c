#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int num);
int is_odd(int num);

int main(void) {

	int num;
	int odd = 0;
	int even = 0;

	printf("정수를 빈칸으로 구분해서 입력하세요. (마지막에 0 입력\n");
	while (1) {
		scanf("%d", &num);
		if (num == 0)
			break;
		if (is_even(num))
			even++;
		if (is_odd(num))
			odd++;
	}

	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.", even, odd);

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