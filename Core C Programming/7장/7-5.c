#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int arr[10];
	int find;
	int index = -1;

	printf("�迭: ");
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		scanf("%d", &arr[i]);
	}
	printf("ã�� ��? ");
	scanf("%d", &find);

	for (int i = sizeof(arr) / sizeof(arr[0]) - 1; i >= 0; i--) {
		if (arr[i] == find) {
			index = i;
			break;
		}
	}

	if (index == -1)
		printf("%d�� �迭�� ���� ���Դϴ�.", find);
	else
		printf("%d�� %d��° �����Դϴ�.", find, index);

	return 0;
}