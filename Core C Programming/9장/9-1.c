#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

	char str[200];
	printf("문자열? ");
	gets_s(str, sizeof(str));

	int count = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (isspace(str[i])) {
			count++;
		}
	}

	printf("공백 문자의 개수: %d", count);

	return 0;
}