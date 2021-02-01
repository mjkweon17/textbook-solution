#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_2d_array(int(*ptr)[4], int row, int num);

int main(void) {

	int arr[5][4] = { 0 };
	int(*p)[4] = arr;
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(int);
	int num;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &num);

	fill_2d_array(p, row, num);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void fill_2d_array(int(*ptr)[4], int row, int num) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < 4; j++) {
			ptr[i][j] = num;
		}
	}
}