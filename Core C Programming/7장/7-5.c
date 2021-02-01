#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int arr[10];
	int find;
	int index = -1;

	printf("배열: ");
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		scanf("%d", &arr[i]);
	}
	printf("찾을 값? ");
	scanf("%d", &find);

	for (int i = sizeof(arr) / sizeof(arr[0]) - 1; i >= 0; i--) {
		if (arr[i] == find) {
			index = i;
			break;
		}
	}

	if (index == -1)
		printf("%d는 배열에 없는 수입니다.", find);
	else
		printf("%d는 %d번째 원소입니다.", find, index);

	return 0;
}