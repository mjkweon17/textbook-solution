#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int hourlyWage;
	int dailyWorkingHour;
	int monthlyWorkingDay;
	double tax;
	int estimatedSalary;

	printf("시간당 급여? ");
	scanf("%d", &hourlyWage);
	printf("일일 근무 시간? ");
	scanf("%d", &dailyWorkingHour);
	printf("한달 근무 일수? ");
	scanf("%d", &monthlyWorkingDay);
	printf("세금 적용 여부 0:미적용 1:4대보험공제(8.41%) 2:소득세공제(3.3%)? ");
	scanf("%lf", &tax);

	if (tax == 1)
		tax = 8.41;
	else if (tax == 2)
		tax = 3.3;
	else
		0;

	estimatedSalary = hourlyWage * dailyWorkingHour * monthlyWorkingDay -
		(hourlyWage * dailyWorkingHour * monthlyWorkingDay / 100 * tax);

	printf("예상 월급여: %d", estimatedSalary);

	return 0;
}