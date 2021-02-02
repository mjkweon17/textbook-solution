#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

	char str[200];

	printf("¹®ÀÚ¿­? ");
	gets_s(str, sizeof(str));

	for (int i = 0; str[i] != NULL; i++) {
		if (isspace(str[i])) {
			for (int j = i; str[j] != NULL; j++) {
				str[j] = str[j + 1];
			}
		}
	}

	printf("%s", str);

	return 0;
}