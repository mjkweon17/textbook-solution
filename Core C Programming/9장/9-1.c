#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

	char str[200];
	printf("���ڿ�? ");
	gets_s(str, sizeof(str));

	int count = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (isspace(str[i])) {
			count++;
		}
	}

	printf("���� ������ ����: %d", count);

	return 0;
}