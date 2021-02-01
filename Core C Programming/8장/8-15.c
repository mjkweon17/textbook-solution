#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void sort_array(int arr[], int size);

int main(void) {

	srand((unsigned int)time(NULL));

	int arr[10] = { 0 };
	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}

	printf("정렬 전: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	sort_array(arr, size);

	printf("정렬 후: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

void sort_array(int arr[], int size) {

	for (int i = 0; i < size - 1; i++) {
		int index = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[index] > arr[j]) {
				index = j;
			}
		}
		if (index != i) {
			int temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
		}
	}
}