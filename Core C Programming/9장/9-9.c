#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	char filename[100];
	char extension[100];

	printf("파일명? ");
	scanf("%s", &filename);
	printf("확장자? ");
	scanf("%s", &extension);

	strcat(filename, ".");
	strcat(filename, extension);

	printf("전체 파일명: %s", filename);

	return 0;
}