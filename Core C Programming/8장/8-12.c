#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_all_in_array(int arr[], int size, int finding_num, int index[]);

int main(void) {

	int arr[10] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };
	int size = sizeof(arr) / sizeof(int);
	int index[10];
	int finding_num;	//ã�� ��
	int number_found;	//ã�� ����

	printf("ã�� ��? ");
	scanf("%d", &finding_num);

	number_found = find_all_in_array(arr, size, finding_num, index);

	printf("ã�� �׸��� ��� %d���Դϴ�.\n", number_found);

	printf("ã�� �׸��� �ε���: ");
	for (int i = 0; i < number_found; i++) {
		printf("%d ", index[i]);
	}

	return 0;
}

int find_all_in_array(int arr[], int size, int num, int index[]) {
	int number_found = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == num) {
			index[number_found] = i;
			number_found++;
		}
	}
	return number_found;
}