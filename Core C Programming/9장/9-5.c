#include <stdio.h>
#include <string.h>

int strcmp_ic(char* lhs, char* rhs);

int main(void) {

	char str1[200];
	char str2[200];

	printf("ù ��° ���ڿ�? ");
	gets_s(str1, sizeof(str1));
	printf("�� ��° ���ڿ�? ");
	gets_s(str2, sizeof(str2));

	if (strcmp_ic(str1, str2) == 0) {
		printf("%s�� %s�� �����ϴ�.", str1, str2);
	}
	else {
		printf("%s�� %s�� �ٸ��ϴ�.", str1, str2);
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
	//�� �ؿ� �ִ� �ڵ� ����� 40��° �� �ϳ��� ��� �Ǳ� ��

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