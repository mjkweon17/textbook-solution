#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double area = 0; //����(��������)
	double pyeong = 0; //��

	printf("����Ʈ�� ����(��������)? ");
	scanf("%lf", &area);

	pyeong = area * 0.3025;
	printf("%.2f �������� = %.2f ��", area, pyeong);

	return 0;
}