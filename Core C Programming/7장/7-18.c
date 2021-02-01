#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int set[10];
	int element;
	int count = 0;
	int continueWhile = 0;

	while (1) {
		continueWhile = 0;

		printf("배열에 추가할 원소? ");
		scanf("%d", &element);
		for (int i = 0; i <= count; i++) {
			if (set[i] == element) {
				printf("해당 원소가 이미 [%d]에 존재합니다.\n", i);
				continueWhile = 1;
				break;
			}
		}
		if (continueWhile)
			continue;

		set[count] = element;
		count++;
		for (int i = 0; i < count; i++) {
			printf("%d ", set[i]);
		}
		printf("\n");
		if (count == sizeof(set) / sizeof(set[0]))
			break;
	}

	return 0;
}