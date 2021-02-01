#include <stdio.h>

int main(void) {

	int phoneBill[12] =
		{ 36000, 42000, 38000, 20000, 25000, 12000, 66000, 42000, 28000, 60000, 95000, 82000 };

	for (int i = 0; i < 12; i++) {
		printf("%2d¿ù %5d: ", i + 1, phoneBill[i]);
		for (int j = 0; j < phoneBill[i] / 2000; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}