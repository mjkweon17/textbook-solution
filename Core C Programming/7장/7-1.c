#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 10

int main(void) {

	int arr[ARR_SIZE] = { 0 };
	int commonDifference;

	printf("ù ��° ��? ");
	scanf("%d", &arr[0]);
	printf("����? ");
	scanf("%d", &commonDifference);

	for (int i = 0; i < ARR_SIZE - 1; i++) {
		arr[i + 1] += arr[i] + commonDifference;
	}

	printf("��������: ");
	for (int i = 0; i < ARR_SIZE; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}