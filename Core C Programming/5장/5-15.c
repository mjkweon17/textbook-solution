#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int hourlyWage;
	int dailyWorkingHour;
	int monthlyWorkingDay;
	double tax;
	int estimatedSalary;

	printf("�ð��� �޿�? ");
	scanf("%d", &hourlyWage);
	printf("���� �ٹ� �ð�? ");
	scanf("%d", &dailyWorkingHour);
	printf("�Ѵ� �ٹ� �ϼ�? ");
	scanf("%d", &monthlyWorkingDay);
	printf("���� ���� ���� 0:������ 1:4�뺸�����(8.41%) 2:�ҵ漼����(3.3%)? ");
	scanf("%lf", &tax);

	if (tax == 1)
		tax = 8.41;
	else if (tax == 2)
		tax = 3.3;
	else
		0;

	estimatedSalary = hourlyWage * dailyWorkingHour * monthlyWorkingDay -
		(hourlyWage * dailyWorkingHour * monthlyWorkingDay / 100 * tax);

	printf("���� ���޿�: %d", estimatedSalary);

	return 0;
}