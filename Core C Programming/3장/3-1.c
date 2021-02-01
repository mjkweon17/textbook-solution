#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int side;

	printf("한 변의 길이? ");
	scanf("%d", &side);
	printf("정사각형의 넓이: %d\n", side * side);
	printf("정사각형의 둘레: %d", side * 4);

	return 0;
}