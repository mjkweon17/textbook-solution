#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_time_str(char* time);

int main(void) {

	char time[100];

	while (1) {
		printf("시간(.입력 시 종료)?");
		gets_s(time, sizeof(time));
		if (strcmp(time, ".") == 0) {
			break;
		}
		if (check_time_str(time)) {
			printf("%s는 유효한 시간입니다.\n", time);
		}
		else {
			printf("잘못 입력했습니다. hhmmss형식으로 입력하세요.\n");
		}
	}

	return 0;
}

int check_time_str(char* time) {

	//입력받은 문자열이 6문자로 이루어져 있는지 확인
	if (strlen(time) != 6) {
		return 0;
	}

	//입력받은 문자열이 모두 숫자로 이루어져 있는지 확인
	for (int i = 0; i < 6; i++) {
		if (isdigit(time[i]) == 0) {
			return 0;
		}
	}

	//시간 부분이 맞는지 확인
	if (time[0] > '2') {
		return 0;
	}
	if (time[0] == '2') {
		if (time[1] > '3') {
			return 0;
		}
	}

	//분, 초 부분이 맞는지 확인
	if (time[2] > '5' || time[4] > '5') {
		return 0;
	}

	return 1;
}