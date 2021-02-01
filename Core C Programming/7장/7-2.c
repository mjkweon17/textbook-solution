#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 10

int main(void) {

	double arr[ARR_SIZE] = { 0 };
	int commonRatio;

	printf("첫 번째 항? ");
	scanf("%lf", &arr[0]);
	printf("공비? ");
	scanf("%d", &commonRatio);

	for (int i = 0; i < ARR_SIZE - 1; i++) {
		arr[i + 1] += arr[i] * commonRatio;
	}

	printf("등차수열: ");
	for (int i = 0; i < ARR_SIZE; i++) {
		printf("%.1f ", arr[i]);
	}

	return 0;
}