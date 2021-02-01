#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int arr[] = { 23,45,62,12,99,83,23,50,72,37 };
	int smallest = arr[0];
	int smallestIndex = 0;
	int biggest = arr[0];
	int biggestIndex = 0;

	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (smallest > arr[i]) {
			smallest = arr[i];
			smallestIndex = i;
		}
	}

	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (biggest < arr[i]) {
			biggest = arr[i];
			biggestIndex = i;
		}
	}

	printf("배열: ");
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n최대값: 인덱스=%d, 값=%d\n", biggestIndex, biggest);
	printf("최소값: 인덱스=%d, 값=%d", smallestIndex, smallest);

	return 0;
}