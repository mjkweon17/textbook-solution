#include <stdio.h>

int main(void) {

	int arr[10] = { 44, 32, 65, 23, 45, 76, 77, 89, 23, 45 };
	int* ptr = arr;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("배열: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(ptr + i));
	}
	printf("\n");
	
	ptr = &arr[9]; //포인터가 배열의 마지막 원소를 가리킴

	printf("역순: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(ptr - i));
	}

	return 0;
}