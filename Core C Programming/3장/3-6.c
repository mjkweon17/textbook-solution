#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double area = 0; //면적(제곱미터)
	double pyeong = 0; //평

	printf("아파트의 면적(제곱미터)? ");
	scanf("%lf", &area);

	pyeong = area * 0.3025;
	printf("%.2f 제곱미터 = %.2f 평", area, pyeong);

	return 0;
}