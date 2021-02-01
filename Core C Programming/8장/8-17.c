#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add_to_multiset(int arr[], int* size, int* filled);

int main(void) {

	int arr[10] = { 0 };
	int size = sizeof(arr) / sizeof(int);
	int filled = 0;

	while (add_to_multiset(arr, &size, &filled));

	return 0;
}

int add_to_multiset(int arr[], int* size, int* filled) {

	if (*size == *filled)
		return 0;	//배열이 꽉 참

	int num;

	printf("배열에 추가할 원소? ");
	scanf("%d", &num);

	arr[*filled] = num;
	(*filled)++;

	for (int i = 0; i < *filled; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 1;
}