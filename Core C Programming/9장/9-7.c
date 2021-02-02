#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_phone_str(char* num);

int main(void) {

	char phone[100];

	while (1) {
		printf("전화번호(.입력 시 종료)? ");
		gets_s(phone, sizeof(phone));

		if (strcmp(phone, ".") == 0) {
			return 0;
		}

		if (check_phone_str(phone)) {
			printf("%s는 유효한 전화번호입니다.\n", phone);
		}
		else {
			printf("잘못 입력했습니다. 01012345678 형식으로 입력하세요.\n");
		}
	}

	return 0;
}

int check_phone_str(char* num) {

	//전화번호가 11개의 문자로 이루어져 있는지 확인
	if (strlen(num) != 11) {
		return 0;
	}

	//전화번호가 전부 숫자로 이루어져 있는지 확인
	for (int i = 0; i < 11; i++) {
		if (isdigit(num[i]) == 0)
			return 0;
	}

	//전화번호의 첫 숫자가 010인지 확인
	if (num[0] != '0' || num[1] != '1' || num[2] != '0') {
		return 0;
	}

	return 1;
}