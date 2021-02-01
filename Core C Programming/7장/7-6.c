#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double arr[10];
	double temp;

	printf("배열: ");
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		scanf("%lf", &arr[i]);
	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) / 2; i++) {
		temp = arr[i];
		arr[i] = arr[sizeof(arr) / sizeof(arr[0]) - 1 - i];
		arr[sizeof(arr) / sizeof(arr[0]) - 1 - i] = temp;
	}

	printf("역순: ");
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%.1f ", arr[i]);
	}

	return 0;
}