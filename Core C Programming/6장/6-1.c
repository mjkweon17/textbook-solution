#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int, int);

int main(void) {

	int width, height;

	printf("����? ");
	scanf("%d", &width);
	printf("����? ");
	scanf("%d", &height);

	printf("���簢���� �ѷ�: %d", get_perimeter(width, height));

	return 0;
}

int get_perimeter(int width, int height) {
	return width * height;
}