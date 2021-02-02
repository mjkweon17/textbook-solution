#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

	char str[200];

	printf("문자열? ");
	gets_s(str, sizeof(str));

	for (int i = 0; str[i] != NULL; i++) {
		if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}
		else if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
	}

	printf("변환 후: ");
	puts(str);

	return 0;
}