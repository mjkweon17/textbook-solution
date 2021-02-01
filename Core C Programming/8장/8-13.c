#include <stdio.h>

void swap_array(int arr[], int arr2[], int size);

int main(void) {

	int a[10] = { 1,3,5,7,9,11,13,15,17, 19 };
	int b[10] = { 0,2,4,6,8,10,12,14,16,18 };
	int size = sizeof(a) / sizeof(int);

	printf("a: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("b: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");

	swap_array(a, b, size);
	printf("<< swap_array È£Ãâ ÈÄ >>\n");

	printf("a: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("b: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");

	return 0;
}

void swap_array(int arr[], int arr2[], int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		temp = arr[i];
		arr[i] = arr2[i];
		arr2[i] = temp;
	}
}