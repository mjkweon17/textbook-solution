#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double temp; //�µ�
	char ch;
	double convertedTemp; //��ȯ�� �µ�

	printf("�µ�? ");
	scanf("%lf %c", &temp, &ch);

	switch (ch) {
	case 'C':
		convertedTemp = temp * 9 / 5 + 32;
		printf("%.2f C ==> %.2f F", temp, convertedTemp);
		break;
	case 'F':
		convertedTemp = (temp - 32) * 5 / 9;
		printf("%.2f F ==> %.2f C", temp, convertedTemp);
		break;
	}

	return 0;
}