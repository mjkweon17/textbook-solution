#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap_year(int year);
int get_days_of_month(int year, int month);

int main(void) {

	int year;

	printf("연도? ");
	scanf("%d", &year);

	printf("[ %d년 ]\n", year);

	for (int i = 1; i <= 12; i++) {
		printf("%2d월: %d일  ", i, get_days_of_month(year, i));
		if (i == 6)
			printf("\n");
	}

	return 0;
}

int is_leap_year(int year) {
	if (year % 4 == 0) {
		if (year % 100 == 0 && year % 400 != 0)
			return 0;
		else
			return 1;
	}
	else
		return 0;
}

int get_days_of_month(int year, int month) {
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31;
		break;
	case 4: case 6: case 9: case 11:
		return 30;
		break;
	case 2:
		if (is_leap_year(year))
			return 29;
		else
			return 28;
	}
}