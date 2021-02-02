#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encryptor(const char* plain, char* cipher, int key);

int main(void) {

	char plain_text[100];
	char cipher_text[100];
	int encryption_key;

	while (1) {

		printf("문자열? (. 입력 시 종료) ");

		gets_s(plain_text, sizeof(plain_text));
		if (strcmp(plain_text, ".") == 0) {
			return 0;
		}
		
		printf("암호 키(정수)? ");
		scanf("%d", &encryption_key);

		encryptor(plain_text, cipher_text, encryption_key);
		printf("암호화된 문자열: %s\n", cipher_text);

		getchar();
	}

	return 0;
}

void encryptor(const char* plain, char* cipher, int key) {
	
	strcpy(cipher, plain);

	key %= 26;

	for (int i = 0; i < strlen(cipher); i++) {

		//문자가 알파벳이 아니면 다음 문자로 이동
		if (isalpha(cipher[i]) == 0) {
			continue;
		}
		if (isalpha(cipher[i]) == 1) {
			if (cipher[i] + key > 'Z') {
				cipher[i] -= 26 - key;
			}
			else {
				cipher[i] += key;
			}
		}
		else {
			if (cipher[i] + key > 'z') {
				cipher[i] -= 26 - key;
			}
			else {
				cipher[i] += key;
			}
		}
	}
}