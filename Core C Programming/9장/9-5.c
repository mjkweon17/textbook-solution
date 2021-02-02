#include <stdio.h>
#include <string.h>

int strcmp_ic(char* lhs, char* rhs);

int main(void) {

	char str1[200];
	char str2[200];

	printf("첫 번째 문자열? ");
	gets_s(str1, sizeof(str1));
	printf("두 번째 문자열? ");
	gets_s(str2, sizeof(str2));

	if (strcmp_ic(str1, str2) == 0) {
		printf("%s와 %s가 같습니다.", str1, str2);
	}
	else {
		printf("%s와 %s가 다릅니다.", str1, str2);
	}

	return 0;
}

int strcmp_ic(char* lhs, char* rhs) {

	for (int i = 0; i < strlen(lhs); i++) {
		if (isupper(lhs[i])) {
			lhs[i] = tolower(lhs[i]);
		}
	}

	for (int i = 0; i < strlen(rhs); i++) {
		if (isupper(rhs[i])) {
			rhs[i] = tolower(rhs[i]);
		}
	}

	//return strcmp(lhs, rhs);
	//이 밑에 있는 코드 지우거 40번째 줄 하나만 적어도 되긴 함

	for (int i = 0; i <= strlen(lhs); i++) {
		if (lhs[i] - rhs[i] > 0) {
			return 1;
		}
		else if (lhs[i] - rhs[i] < 0) {
			return -1;
		}
	}
	
	return 0;
}