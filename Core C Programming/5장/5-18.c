#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int time;
	int totalPrice;

	while (1) {
		printf("���� �ð�(��)? ");
		scanf("%d", &time);

		if (time == 0)
			break;
		else if (time > 1440) {
			printf("���� �ð��� �ִ� 24�ð�(1440��)�� ���� �� �����ϴ�.\n");
			continue;
		}

		if (time <= 30) {
			totalPrice = 2000;
		}
		else {
			if (time % 10 == 0) {
				totalPrice = 2000 + (time - 30) / 10 * 1000;
			}
			else {
				totalPrice = 2000 + ((time - 30) / 10 + 1) * 1000;
			}
		}

		if (totalPrice > 25000)
			totalPrice = 25000;

		printf("���� ���: %d\n", totalPrice);
	}

	return 0;
}