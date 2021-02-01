#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add_to_set(int arr[], int* size, int* filled);

int main(void) {

	int arr[10] = { 0 };
	int size = sizeof(arr) / sizeof(int);
	int filled = 0;

	while (size != filled) {
		add_to_set(arr, &size, &filled);
	}

	return 0;
}

int add_to_set(int arr[], int* size, int* filled) {

	if (*size == *filled)
		return 0;	//�迭�� �� ��

	int num;

	printf("�迭�� �߰��� ����? ");
	scanf("%d", &num);
	for (int i = 0; i < *filled; i++) {
		if (arr[i] == num) {
			printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", i);
			return 0;
		}
	}

	arr[*filled] = num;
	(*filled)++;

	for (int i = 0; i < *filled; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 1;
}