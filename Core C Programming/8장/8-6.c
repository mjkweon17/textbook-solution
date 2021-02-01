#include <stdio.h>

void get_min_max(const int arr[], const int size, int* max, int* min);

int main(void) {

	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int max;
	int min;

	get_min_max(arr, size, &max, &min);

	printf("배열: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("최대값: %d\n", max);
	printf("최소값: %d", min);

	return 0;
}

void get_min_max(const int arr[],  const int size, int* max, int* min) {

	*max = arr[0];
	for (int i = 1; i < size; i++) {
		if (*max < arr[i])
			*max = arr[i];
	}

	printf("hi");

	*min = arr[0];
	for (int i = 1; i < size; i++) {
		if (*min > arr[i])
			*min = arr[i];
	}
}