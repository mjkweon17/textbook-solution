#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double area;
	char ch;
	double convertedArea;

	printf("����? ");
	scanf("%lf %ch", &area, &ch);

	switch (ch) {
	case 'p':
		convertedArea = area * 3.305785;
		printf("%.2f �� == %.2f ��������", area, convertedArea);
		break;
	case 'm':
		convertedArea = area * 0.3025;
		printf("%.2f �������� == %.2f ��", area, convertedArea);
		break;
	}

	return 0;
}