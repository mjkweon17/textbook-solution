#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int arr[] = { 23,45,62,12,99,83,23,50,72,37 };
	int smallest = arr[0];
	int biggest = arr[0];

	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (smallest > arr[i])
			smallest = arr[i];
	}

	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (biggest < arr[i])
			biggest = arr[i];
	}

	printf("�迭: ");
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n�ִ밪: %d\n", biggest);
	printf("�ּҰ�: %d", smallest);

	return 0;
}