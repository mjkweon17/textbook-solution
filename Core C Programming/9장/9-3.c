#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

	char str[200];

	printf("���ڿ�? ");
	gets_s(str, sizeof(str));

	for (int i = 0; str[i] != NULL; i++) {
		if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}
		else if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
	}

	printf("��ȯ ��: ");
	puts(str);

	return 0;
}