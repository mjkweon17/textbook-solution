#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ASCENDING 0
#define DESCENDING 1

void sort_array_with_order(int arr[], int size, int order);

int main(void) {

	srand((unsigned int)time(NULL));

	int arr[10] = { 0 };
	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}

	printf("���� ��: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("�������� ���� ��: ");
	sort_array_with_order(arr, size, 0);
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("�������� ���� ��: ");
	sort_array_with_order(arr, size, 1);
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

void sort_array_with_order(int arr[], int size, int order) {

	if (order != 1) {	//�������� ����
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
	else {		//�������� ����
		for (int i = 0; i < size - 1; i++) {
			int index = i;
			for (int j = i + 1; j < size; j++) {
				if (arr[index] < arr[j]) {
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
}