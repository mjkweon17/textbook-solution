#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	char filename[100];
	char extension[100];

	printf("���ϸ�? ");
	scanf("%s", &filename);
	printf("Ȯ����? ");
	scanf("%s", &extension);

	strcat(filename, ".");
	strcat(filename, extension);

	printf("��ü ���ϸ�: %s", filename);

	return 0;
}