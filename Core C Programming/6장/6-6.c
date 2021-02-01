#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu(void);

int main(void) {

	while (1) {
		printf("[1. 파일 열기  2. 파일 저장  3. 인쇄  0. 종료] 선택? ");
		switch (choose_menu()) {
		case 0: return 0;
			break;
		case 1:
			printf("파일 열기를 수행합니다.\n");
			break;
		case 2:
			printf("파일 저장을 수행합니다.\n");
			break;
		case 3:
			printf("인쇄를 수행합니다.\n");
			break;
		default:
			break;
		}
	}
	return 0;
}

int choose_menu(void) {
	int choice;
	scanf("%d", &choice);
	return choice;
}