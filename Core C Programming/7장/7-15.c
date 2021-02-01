#include <stdio.h>

void zero_array(int arr[], int size);

int main(void) {

	int arr[5];

	zero_array(arr, sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

void zero_array(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
}