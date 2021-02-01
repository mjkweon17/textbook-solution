#include <stdio.h>

int is_leap_year(int year);

int main(void) {

	int start_year = 2000;
	int end_year = 2100;

	printf("%d~%d »çÀÌÀÇ À±³â\n", start_year, end_year);

	for (int i = start_year; i <= end_year; i++) {
		if (is_leap_year(i)) {
			printf("%d ", i);
		}
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