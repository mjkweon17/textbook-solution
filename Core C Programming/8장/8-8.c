#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_array(int* ptr, int size, int num);

int main(void) {

	int arr[20] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int num;

	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d", &num);

	fill_array(arr, size, num);

	printf("�迭: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

void fill_array(int* ptr, int size, int num) {
	for (int i = 0; i < size; i++) {
		*(ptr + i) = num;
	}
}