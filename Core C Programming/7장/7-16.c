#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_array(int arr[], int size, int key);

int main(void) {

	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int key;
	int index;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("ã�� ��? ");
	scanf("%d", &key);

	index = find_array(arr, sizeof(arr) / sizeof(arr[0]), key);

	if (index == -1) {
		printf("%d�� �迭�� ���� ���Դϴ�.", key);
	}
	else {
		printf("%d�� %d��° �����Դϴ�.", key, index);
	}

	return 0;
}

int find_array(int arr[], int size, int key) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key)
			return i;
	}
	return -1;
}