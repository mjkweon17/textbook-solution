#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 10

int main(void) {

	double arr[ARR_SIZE] = { 0 };
	int commonRatio;

	printf("ù ��° ��? ");
	scanf("%lf", &arr[0]);
	printf("����? ");
	scanf("%d", &commonRatio);

	for (int i = 0; i < ARR_SIZE - 1; i++) {
		arr[i + 1] += arr[i] * commonRatio;
	}

	printf("��������: ");
	for (int i = 0; i < ARR_SIZE; i++) {
		printf("%.1f ", arr[i]);
	}

	return 0;
}