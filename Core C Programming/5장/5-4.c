#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int year;

	printf("����? ");
	scanf("%d", &year);

	if (year % 4 == 0) {
		if (year % 100 == 0 && year % 400 != 0)
			printf("%d���� ������ �ƴմϴ�.", year);
		else
			printf("%d���� �����Դϴ�.", year);
	}
	else {
		printf("%d���� ������ �ƴմϴ�.", year);
	}

	return 0;
}