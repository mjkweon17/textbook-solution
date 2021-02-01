#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int year;
	int month;
	int day;

	printf("연? ");
	scanf("%d", &year);
	printf("원? ");
	scanf("%d", &month);
	printf("일? ");
	scanf("%d", &day);
	printf("입력한 날짜는 %d년 %d월 %d일입니다.", year, month, day);

	return 0;
}