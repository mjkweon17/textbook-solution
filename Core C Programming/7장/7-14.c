#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void) {

	int arr[SIZE] = { 0 };
	int temp;
	int index;

	srand((unsigned int)time(NULL));

	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 100;
	}

	printf("���� ��: ");
	for (int i = 0; i < SIZE; i++) {
		printf("%2d ", arr[i]);
	}
	printf("\n");

	for(int i = 0; i < SIZE; i++) {
		index = rand() % (SIZE - i) + i;
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}

	printf("���� ��: ");
	for (int i = 0; i < SIZE; i++) {
		printf("%2d ", arr[i]);
	}

	return 0;
}