#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char name[20];
	char major[20];
	char ID[20];

	printf("�̸�? ");
	scanf(" %s", name);
	printf("�а�? ");
	scanf(" %s", major);
	printf("�й�? ");
	scanf(" %s", ID);

	printf("=====================\n");
	printf("�̸�: %s\n", name);
	printf("�а�: %s\n", major);
	printf("�й�: %s\n", ID);
	printf("=====================\n");

	return 0;
}