#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int arr[10];
	int element;
	int count = 0;

	while (1) {
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &element);
		arr[count] = element;
		count++;
		for (int i = 0; i < count; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		if (count == sizeof(arr) / sizeof(arr[0]))
			break;
	}

	return 0;
}