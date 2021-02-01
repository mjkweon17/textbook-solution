#include <stdio.h>

void add_matrix(const int(*x)[3], const int(*y)[3], int(*sum)[3], int row);

int main(void) {

	int x[3][3] = {
		{10, 20, 30},
		{40, 50, 60},
		{70, 80, 90}
	};
	int y[3][3] = {
		{9, 8, 7},
		{6, 5, 4},
		{3, 2, 1}
	};
	int sum[3][3] = { 0 };
	int(*p1)[3] = x;
	int(*p2)[3] = y;
	int(*p3)[3] = sum;
	int row = sizeof(x) / sizeof(x[0]);
	int col = sizeof(x[0]) / sizeof(int);

	printf("x 행렬: \n");
	for (int i = 0; i < row; i++) {
		printf("  ");
		for (int j = 0; j < col; j++) {
			printf("%2d  ", x[i][j]);
		}
		printf("\n");
	}

	printf("y 행렬: \n");
	for (int i = 0; i < row; i++) {
		printf("  ");
		for (int j = 0; j < col; j++) {
			printf("%2d  ", y[i][j]);
		}
		printf("\n");
	}

	add_matrix(p1, p2, p3, row);

	printf("x + y 행렬: \n");
	for (int i = 0; i < row; i++) {
		printf("  ");
		for (int j = 0; j < col; j++) {
			printf("%2d  ", sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void add_matrix(const int(*x)[3], const int(*y)[3], int(*sum)[3], int row) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < 3; j++) {
			sum[i][j] = x[i][j] + y[i][j];
		}
	}
}