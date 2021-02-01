#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_array(int arr[], int size, int num);

int main(void) {

	int arr[10] = { 0 };	
	int num;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &num);
	fill_array(arr, sizeof(arr) / sizeof(arr[0]), num);

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

void fill_array(int arr[], int size, int num) {
	for (int i = 0; i < size; i++) {
		arr[i] = num;
	}
}