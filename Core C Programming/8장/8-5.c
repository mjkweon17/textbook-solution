#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arith_seq(int arr[], int size, int cd);

int main(void) {

	int arr[10] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int cd;

	printf("ù ��° ��? ");
	scanf("%d", &arr[0]);

	printf("����? ");
	scanf("%d", &cd);

	arith_seq(arr, size, cd);

	printf("��������: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

void arith_seq(int arr[], int size, int cd) {
	for (int i = 1; i < size; i++) {
		arr[i] = arr[i - 1] + cd;
	}
}