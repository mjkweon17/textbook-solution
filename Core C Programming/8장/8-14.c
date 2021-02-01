#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_array(int arr[], int size, int limit);

int main(void) {

	srand((unsigned int)time(NULL));

	int arr[10] = { 0 };
	int size = sizeof(arr) / sizeof(int);
	int count;
	rand_array(&count, 1, 10);

	printf("count = %d\n", count);

	for (int i = 0; i < count; i++) {
		rand_array(arr, size, 100);
		for (int j = 0; j < size; j++) {
			printf("%2d  ", arr[j]);
		}
		printf("\n");
	}

	return 0;
}

void rand_array(int arr[], int size, int limit) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % limit;
	}
}