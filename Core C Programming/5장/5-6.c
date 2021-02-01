#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double area;
	char ch;
	double convertedArea;

	printf("≥–¿Ã? ");
	scanf("%lf %ch", &area, &ch);

	switch (ch) {
	case 'p':
		convertedArea = area * 3.305785;
		printf("%.2f ∆Ú == %.2f ¡¶∞ˆπÃ≈Õ", area, convertedArea);
		break;
	case 'm':
		convertedArea = area * 0.3025;
		printf("%.2f ¡¶∞ˆπÃ≈Õ == %.2f ∆Ú", area, convertedArea);
		break;
	}

	return 0;
}