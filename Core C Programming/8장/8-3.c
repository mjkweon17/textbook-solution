#include <stdio.h>

int main(void) {

	int arr[10] = { 44, 32, 65, 23, 45, 76, 77, 89, 23, 45 };
	int* ptr = arr;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("�迭: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(ptr + i));
	}
	printf("\n");
	
	ptr = &arr[9]; //�����Ͱ� �迭�� ������ ���Ҹ� ����Ŵ

	printf("����: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(ptr - i));
	}

	return 0;
}