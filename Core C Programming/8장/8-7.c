#include <stdio.h>

void reverse_array(double arr[], const int size);

int main(void) {

	double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	
	printf("배열: ");
	for (int i = 0; i < size; i++) {
		printf("%.1f ", arr[i]);
	}
	printf("\n");

	reverse_array(arr, size);
	
	printf("역순: ");
	for (int i = 0; i < size; i++) {
		printf("%.1f ", arr[i]);
	}

	return 0;
}

void reverse_array(double arr[], const int size) {
	double temp;
	for (int i = 0; i < size / 2; i++) {
		temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}