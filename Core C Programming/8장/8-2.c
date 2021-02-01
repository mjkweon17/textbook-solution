#include <stdio.h>

int main(void) {

	double arr[10] = { 0.1, 2.0, 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2 };
	double* p = arr;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%.2f ", *p);
		p++;
	}

	return 0;
}