#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int price;

	printf("거스름돈? ");
	scanf("%d", &price);

	int num50000 = price / 50000;
	int num10000 = (price - 50000 * num50000) / 10000;
	int num5000 = (price - 50000 * num50000 - 10000 * num10000) / 5000;
	int num1000 = (price - 50000 * num50000 - 10000 * num10000 - 
		num5000 * 5000) / 1000;
	int num100 = (price - 50000 * num50000 - 10000 * num10000 - 
		num5000 * 5000 - num1000 * 1000) / 100;
	int num10 = (price - 50000 * num50000 - 10000 * num10000 - 
		num5000 * 5000 - num1000 * 1000 - num100 * 100) / 10;

	printf("거스름돈 (10원 미만 절사): %d\n", price);
	printf("%5d원 %2d장\n", 50000, num50000);
	printf("%5d원 %2d장\n", 10000, num10000);
	printf("%5d원 %2d장\n", 5000, num5000);
	printf("%5d원 %2d장\n", 1000, num1000);
	printf("%5d원 %2d개\n", 100, num100);
	printf("%5d원 %2d개", 10, num10);

	return 0;
}