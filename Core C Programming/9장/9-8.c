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

		printf("���ڿ�? (. �Է� �� ����) ");

		gets_s(plain_text, sizeof(plain_text));
		if (strcmp(plain_text, ".") == 0) {
			return 0;
		}
		
		printf("��ȣ Ű(����)? ");
		scanf("%d", &encryption_key);

		encryptor(plain_text, cipher_text, encryption_key);
		printf("��ȣȭ�� ���ڿ�: %s\n", cipher_text);

		getchar();
	}

	return 0;
}

void encryptor(const char* plain, char* cipher, int key) {
	
	strcpy(cipher, plain);

	key %= 26;

	for (int i = 0; i < strlen(cipher); i++) {

		//���ڰ� ���ĺ��� �ƴϸ� ���� ���ڷ� �̵�
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