#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char name[20];
	char major[20];
	char ID[20];

	printf("이름? ");
	scanf(" %s", name);
	printf("학과? ");
	scanf(" %s", major);
	printf("학번? ");
	scanf(" %s", ID);

	printf("=====================\n");
	printf("이름: %s\n", name);
	printf("학과: %s\n", major);
	printf("학번: %s\n", ID);
	printf("=====================\n");

	return 0;
}