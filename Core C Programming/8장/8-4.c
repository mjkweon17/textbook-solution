#include <stdio.h>

int main(void) {

	double arr[10] = { 0.1, 2.0, 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2 };
	double* ptr = arr;

	double sum = 0;
	double avg = 0;
	double size = sizeof(arr) / sizeof(arr[0]);

	printf("¹è¿­: ");
	for (int i = 0; i < size; i++) {
		printf("%.2f ", *(ptr + i));
	}
	printf("\n");

	for (int i = 0; i < size; i++) {
		sum += *(ptr + i);
	}

	avg = sum / 10;

	printf("Æò±Õ: %f", avg);

	return 0;
}