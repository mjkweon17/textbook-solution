#include <stdio.h>
#include <string.h>

void reverse_string(char* str);

int main(void) {

	char str[200];

	printf("���ڿ�? ");
	gets_s(str, sizeof(str));

	reverse_string(str);

	printf("�������� �� ���ڿ�: ");
	puts(str);

	return 0;
}

void reverse_string(char* str) {

	int len = strlen(str);
	char temp;

	for (int i = 0; i < len / 2; i++) {
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}